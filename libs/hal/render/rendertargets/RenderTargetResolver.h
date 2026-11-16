// libs/hal/render/rendertargets/RenderTargetResolver.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::fixedfunction {
    // 0x100c51b00, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::__97, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __97* param_1) {
        uint* puVar1;

        *(undefined8*)this = 0;
        puVar1 = param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(uint**)(this + 24) = puVar1;
        *(uint**)(this + 32) = param_1->field_16;
        *(code**)(this + 144) = function<render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
            (render::RenderContextDesc_const&)->PostInit()::$_97&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
            (render::RenderContextDesc_const&)->PostInit()::$_97&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
            (render::RenderContextDesc_const&)->PostInit()::$_97&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c51b50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c51b60, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc
   const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc
   const&)::$_97&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c51b80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c51b90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc
   const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc
   const&)::$_97&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::RenderContextDesc_const&)->PostInit()::$_97::operator()(param_1, param_2);
    }

    // 0x100c51bd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc_const&)::$_97&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c51be0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&): jumps straight to the base-object constructor

    // 0x100c51d40, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::__98,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __98* param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        lVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(long*)(this + 24) = lVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                             render::LockType)::$_98,
                     void>(unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_98&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                             render::LockType)::$_98,
                     void>(unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_98&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                             render::LockType)::$_98,
                     void>(unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_98&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c51d90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c51da0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned
   int, render::Texture const*, int, render::LockType)::$_98,
   void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*,
   int, render::LockType)::$_98&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c51dc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c51dd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned
   int, render::Texture const*, int, render::LockType)::$_98,
   void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*,
   int, render::LockType)::$_98&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_98::operator()(param_1,
                                                                                                        param_2);
    }

    // 0x100c51e40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c51e50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&): jumps straight to the base-object constructor

    // 0x100c51fb0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::__99,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __99* param_1) {
        long lVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        lVar1 = param_1->field_8;
        uVar2 = *(undefined8*)&param_1->field_16;
        uVar3 = *(undefined8*)&param_1->field_24;
        *(RenderContext**)(this + 16) = param_1->field_0;
        *(long*)(this + 24) = lVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                             render::LockType)::$_99,
                     void>(unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_99&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                             render::LockType)::$_99,
                     void>(unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_99&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                             render::LockType)::$_99,
                     void>(unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_99&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52000, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c52010, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned
   int, render::Texture const*, int, render::LockType)::$_99,
   void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*,
   int, render::LockType)::$_99&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 24);
        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        *(undefined8*)((long)param_2 + 24) = uVar3;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c52030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c52040, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned
   int, render::Texture const*, int, render::LockType)::$_99,
   void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*,
   int, render::LockType)::$_99&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned int->BindImageTexture(render::Texture_const*, int, render::LockType)::$_99::operator()(param_1,
                                                                                                        param_2);
    }

    // 0x100c520b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99, void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture_const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c520c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&): jumps straight to the base-object constructor

    // 0x100c52220, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::__100, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __100* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52260, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c52270, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100,
   void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c52280, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c52290, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100,
   void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::SetTexturesFromStateCache()::$_100::operator()(param_1, param_2);
    }

    // 0x100c522c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c522d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&): jumps straight to the base-object constructor

    // 0x100c52430, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::__101, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __101* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52470, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c52480, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101,
   void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c52490, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c524a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101,
   void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderContext::SetTexturesFromStateCache()::$_101::operator()(param_1, param_2);
    }

    // 0x100c524d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c524e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&): jumps straight to the base-object constructor

    // 0x100c52640, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::__102, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __102* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        uVar4 = *(undefined8*)(param_1 + 32);
        uVar5 = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52690, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c526a0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float>
   const*, unsigned long)::$_102,
   void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned
   long)::$_102&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c526c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c526d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float>
   const*, unsigned long)::$_102,
   void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned
   long)::$_102&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102::operator()(param_1, param_2);
    }

    // 0x100c527b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c527c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&): jumps straight to the base-object constructor

    // 0x100c52920, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::__103, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __103* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        uVar4 = *(undefined8*)(param_1 + 32);
        uVar5 = *(undefined8*)(param_1 + 40);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(undefined8*)(this + 48) = uVar4;
        *(undefined8*)(this + 56) = uVar5;
        *(code**)(this + 144) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52970, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c52980, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float>
   const*, unsigned long)::$_103,
   void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned
   long)::$_103&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 40);
        *(undefined8*)((long)param_2 + 32) = *(undefined8*)((long)param_1 + 32);
        *(undefined8*)((long)param_2 + 40) = uVar5;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100c529a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c529b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float>
   const*, unsigned long)::$_103,
   void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned
   long)::$_103&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103::operator()(param_1, param_2);
    }

    // 0x100c52a90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c58f60, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::__107, void>(__107* param_1) {
        *(code**)(param_1 + 9) = function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)param_1 = function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)&param_1[9].field_8 = function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c58f90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {}

    // 0x100c58fa0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c58fb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107,
   void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107::operator()((__107*)param_2, param_2);
    }

    // 0x100c58fe0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c5de30, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::__114, void>(__114* param_1) {
        *(code**)(param_1 + 9) = function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)param_1 = function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)&param_1[9].field_8 = function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c5de60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {}

    // 0x100c5de70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c5de80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114,
   void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderDevice::TriggerDeviceLoss()::$_114::operator()((__114*)param_2, param_2);
    }

    // 0x100c5deb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    template <
        typename...> // 33 instantiations, e.g. <std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()> > > , <std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo, SafeBucketAllocatorSTL<st, <std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()> > >
    class SafeBucketAllocatorSTL {
    public:
        void
        allocate(unsigned long,
                 std::__packaged_task_func<
                     std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                           shared_ptr<eastl::priority_queue<
                               oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                               eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                               eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void
        allocate(unsigned long,
                 std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                               oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                           SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(
            std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                          oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
            unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                              oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
                                graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::
                                                                     UniquePoolDeleter>>::Flush()::{ lambda() #1 }>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(
            unsigned long,
            std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*);
        void allocate(
            unsigned long,
            std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                      game::MapSquareEnvIrradianceInfo()>*);
        void deallocate(
            std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                      game::MapSquareEnvIrradianceInfo()>*,
            unsigned long);
        void allocate(
            unsigned long,
            std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                     SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*);
        void deallocate(
            std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                     SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*,
            unsigned long);
        void deallocate(
            std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*,
            unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<game::DoEntityPicking(
                              eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                              unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<game::DoEntityPicking(
                           eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                           game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<game::DoEntityPicking(
                              eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                              unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<game::DoEntityPicking(
                           eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                           game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<game::SeqType::GetAnimation(
                              game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                              unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<game::SeqType::GetAnimation(
                                game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        deallocate(std::__packaged_task_func<
                       ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(
                           console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{ lambda() #1 }>(
                           char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                          graphics::RT7Core*)::$_4::operator()()
                                            const ::{ lambda() #1 }&&)::{ lambda() #1 },
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        deallocate(std::__packaged_task_func<
                       ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(
                           console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{ lambda() #1 }>(
                           char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                          graphics::RT7Core*)::$_5::operator()()
                                            const ::{ lambda() #1 }&&)::{ lambda() #1 },
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        deallocate(std::__packaged_task_func<std::__bind<game::RegisterCommonCommandsDebug(
                                                 console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()()
                                                             const ::{ lambda() #1 }>,
                                             SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void allocate(
            unsigned long,
            std::__packaged_task_func<
                std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                    eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                    std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                    eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{ lambda() #1 }>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(
            std::__packaged_task_func<
                std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                    eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                    std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                    eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{ lambda() #1 }>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
            unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                              eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                              std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                              eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                              ThreadPool&, float)::{ lambda() #1 }>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                                std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                                ThreadPool&, float)::{ lambda() #1 }>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void
        allocate(unsigned long,
                 std::__packaged_task_func<
                     std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                         graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                         graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                           graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                           graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void
        allocate(unsigned long,
                 std::__packaged_task_func<
                     std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                         graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                         graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                           graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                           graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                              graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                              graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                              std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                              graphics::SceneViewData const&)::$_19>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                                graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                                graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                graphics::SceneViewData const&)::$_19>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void
        allocate(unsigned long,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::FilterAsync(
                         graphics::DrawableGroupType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::FilterAsync(
                           graphics::DrawableGroupType, graphics::RenderPassType,
                           std::function<bool(graphics::Drawable*,
                                              std::unique_ptr<graphics::DrawableElement,
                                                              graphics::DrawableElementDeleter> const&)> const&)::$_21>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void
        allocate(unsigned long,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::FilterMultiAsync(
                         graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::FilterMultiAsync(
                           graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                           std::function<bool(graphics::Drawable*,
                                              std::unique_ptr<graphics::DrawableElement,
                                                              graphics::DrawableElementDeleter> const&)> const&)::$_23>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(
                                                    unsigned char const*, render::Format)::$_5>,
                                                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(
                                                      unsigned char const*, render::Format)::$_5>,
                                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                              graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                              graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                                graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void deallocate(std::__packaged_task_func<
                            ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }>(
                                char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{ lambda() #1 },
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                                    shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                                      shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                              ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
                              math::Matrix44T<float> const&)::$_8>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                                ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
                                math::Matrix44T<float> const&)::$_8>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                              Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                              math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                                Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                                math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void deallocate(std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>,
                                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(
                                                      char const*, GraphicsApp::MainShutdown()::$_0&&)::{ lambda() #1 },
                                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                                SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>*);
        void deallocate(std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                                  SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>*,
                        unsigned long);
        void allocate(unsigned long, std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>*);
        void deallocate(std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>*,
                        unsigned long);
        void deallocate(std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
                                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void deallocate(std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
                                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void deallocate(
            std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
                                          char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{ lambda() #1 },
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
            unsigned long);
        void allocate(unsigned long, std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>*);
        void deallocate(std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>*,
                        unsigned long);
        void
        allocate(unsigned long,
                 std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                           SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void
        deallocate(std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                             SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                   unsigned long);
        void deallocate(
            std::__packaged_task_func<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
                    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{ lambda() #1 },
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
            unsigned long);
        void deallocate(std::__packaged_task_func<
                            ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                        (fixedfunction::Methods)0> const&)::$_110>(
                                char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                                 fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                         (fixedfunction::Methods)0> const&)::$_110&&)::{
                                lambda() #1
                            },
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
        void allocate(unsigned long,
                      std::__packaged_task_func<
                          std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                              char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                   (fixedfunction::Methods)0> const&)::$_111>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*);
        void deallocate(std::__packaged_task_func<
                            std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                                char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                     (fixedfunction::Methods)0> const&)::$_111>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>*,
                        unsigned long);
    };

    // 0x1002e7ae0, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x1002e7ee0, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 48);
    }

    // 0x100482b20, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo ()>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > > >::allocate(unsigned long, std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo ()>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >*)
    /* SafeBucketAllocatorSTL<std::__shared_ptr_emplace<std::packaged_task<int ()>,
   SafeBucketAllocatorSTL<std::packaged_task<int ()> > > >::allocate(unsigned long,
   std::__shared_ptr_emplace<std::packaged_task<int ()>,
   SafeBucketAllocatorSTL<std::packaged_task<int ()> > >*) */

    void jag::SafeBucketAllocatorSTL<
        std::__shared_ptr_emplace<std::packaged_task<int()>, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>::
        allocate(ulong param_1, __shared_ptr_emplace* param_2) {
        BucketManager::Allocate((long)param_2 * 96, 4, 16);
    }

    // 0x100482e40, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >, game::MapSquareEnvIrradianceInfo ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >, game::MapSquareEnvIrradianceInfo ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >,
   game::MapSquareEnvIrradianceInfo ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >,
   game::MapSquareEnvIrradianceInfo ()>*) */

    void jag::SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                  SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                  game::MapSquareEnvIrradianceInfo()>>::allocate(ulong param_1,
                                                                                 __packaged_task_func* param_2) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x100483260, 16 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >, game::MapSquareEnvIrradianceInfo ()> >::deallocate(std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >, game::MapSquareEnvIrradianceInfo ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >,
   game::MapSquareEnvIrradianceInfo ()>
   >::deallocate(std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> >,
   game::MapSquareEnvIrradianceInfo ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                  SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                  game::MapSquareEnvIrradianceInfo()>>::deallocate(__packaged_task_func* param_1,
                                                                                   ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 56);
    }

    // 0x100483680, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > > >::allocate(unsigned long, std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >*)
    /* SafeBucketAllocatorSTL<std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >
   >::allocate(unsigned long, std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >*) */

    void jag::SafeBucketAllocatorSTL<
        std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                 SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>::
        allocate(ulong param_1, __assoc_state_alloc* param_2) {
        BucketManager::Allocate((long)param_2 * 320, 4, 16);
    }

    // 0x1004839d0, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > > >::deallocate(std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >
   >::deallocate(std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
   SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >*,
   unsigned long) */

    void jag::SafeBucketAllocatorSTL<
        std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                 SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>::
        deallocate(SafeBucketAllocatorSTL<std::__assoc_state_alloc<
                       game::MapSquareEnvIrradianceInfo,
                       SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>* this,
                   __assoc_state_alloc* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 320);
    }

    // 0x100483d90, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo ()>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > > >::deallocate(std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo ()>, SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo ()> > >*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__shared_ptr_emplace<std::packaged_task<int ()>,
   SafeBucketAllocatorSTL<std::packaged_task<int ()> > >
   >::deallocate(std::__shared_ptr_emplace<std::packaged_task<int ()>,
   SafeBucketAllocatorSTL<std::packaged_task<int ()> > >*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<
        std::__shared_ptr_emplace<std::packaged_task<int()>, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>::
        deallocate(SafeBucketAllocatorSTL<std::__shared_ptr_emplace<
                       std::packaged_task<int()>, SafeBucketAllocatorSTL<std::packaged_task<int()>>>>* this,
                   __shared_ptr_emplace* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 96);
    }

    // 0x1004887d0, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                          unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                          bool)::$_7>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(96, 4, 8);
    }

    // 0x100488b10, 32 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                          unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                          bool)::$_7>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 96);
    }

    // 0x100ade2d0, 16 bytes, inline, placed by class header (inline)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char
   const*, char const*)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*,
   char const*)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*,
   unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, 24);
    }

    // 0x100c55a90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ThreadPoolSingleton::ThreadPoolSingleton(): jumps straight to the base-object constructor

    // 0x100c55ad0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ThreadPoolSingleton::ThreadPoolSingleton()
    void ThreadPoolSingleton::ThreadPoolSingleton() {
        uint uVar1;

        new (this) AutoSingleton<ThreadPoolSingleton>();
        uVar1 = threading::GetMaxHardwareThreads();
        new (this) ThreadPool(uVar1, "TPSingleton");
    }

    // 0x100c56730, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char
   const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#1},
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char
   const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#1},
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
            char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

    // 0x100c56860, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()> > > >::allocate(unsigned long, std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()> > >*)
    /* SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void
   ()> > > >::allocate(unsigned long,
   std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()> > >*) */

    void jag::SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>>::
        allocate(ulong param_1, __assoc_sub_state_alloc* param_2) {
        BucketManager::Allocate((long)param_2 * 144, 4, 8);
    }

    // 0x100c56b50, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()> > > >::deallocate(std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()> > >*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void
   ()> > >
   >::deallocate(std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void
   ()> > >*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>>::
        deallocate(SafeBucketAllocatorSTL<
                       std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>>* this,
                   __assoc_sub_state_alloc* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 144);
    }

    // 0x100c59340, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(40, 4, 8);
    }

    // 0x100c596b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 40);
    }

    // 0x100c5a740, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char
   const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#1},
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char
   const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#1},
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
            char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

    // 0x100c5b6c0, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char
   const*,
   render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_110&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void
   ()> 
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char
   const*,
   render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_110&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void
   ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                    (fixedfunction::Methods)0> const&)::$_110>(
            char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                             fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                     (fixedfunction::Methods)0> const&)::$_110&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

    // 0x100c5c550, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char
   const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char
   const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::$_111>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(192, 4, 16);
    }

    // 0x100c5c8c0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char
   const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(char
   const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::$_111>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 192);
    }

    // 0x100c5f090, 32 bytes, inline, placed by debug map only (low confidence)
    // render::RenderTargets* placement_new<render::RenderTargets>(void*)
    RenderTargets* placement_new<render::RenderTargets>(void* param_1) {
        render::RenderTargets::RenderTargets(param_1);
        return param_1;
    }

    // 0x100c5f0b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::RenderTargets>* placement_new<ref_counter_shared<render::RenderTargets>, int, render::RenderTargets*&>(void*, int&&, render::RenderTargets*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<render::RenderTargets>, int, render::RenderTargets*&>(
        void* param_1, int* param_2, RenderTargets** param_3) {
        ref_counter_shared<render::RenderTargets>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100c5f0d0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<render::RenderTargets>(ref_counter_base*, render::RenderTargets*, render::RenderTargets::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<render::RenderTargets>(ref_counter_base* param_1, RenderTargets* param_2,
                                                                      enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x100c5f160, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::RenderTargets>::ref_counter_shared(unsigned long, render::RenderTargets*): jumps straight to the base-object constructor

    // 0x100c5f170, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::RenderTargets>::ref_counter_shared(unsigned long, render::RenderTargets*)
    void ref_counter_shared<render::RenderTargets>::ref_counter_shared(ulong param_1, RenderTargets* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(RenderTargets**)(this + 24) = param_2;
    }

    // 0x100c5f1b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::RenderTargets>::DeleteData()
    void ref_counter_shared<render::RenderTargets>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~RenderTargets();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 384;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::render {
    class RenderTargetResolver {
    public:
        byte CreateRenderingResources();
        void DestroyRenderingResources();
        void ResolveViaQuad(ImmediateRenderContext&, Texture const*, Texture const*, RenderTargets const*, unsigned int,
                            math::Rect<unsigned int> const&, math::Rect<unsigned int> const&);
        RenderTargetResolver();
        ~RenderTargetResolver();

        // data members, from how the methods use this: 29968 bytes
        char _unknown_0[8];
        int field_8; // offset 8
        char _unknown_12[68];
        ShaderProgram field_80;          // offset 80
        ShaderProgram field_1936;        // offset 1936
        ShaderProgram field_3792;        // offset 3792
        ShaderProgram field_5648;        // offset 5648
        ShaderProgram field_7504;        // offset 7504
        ShaderProgram field_9360;        // offset 9360
        ShaderProgram field_11216;       // offset 11216
        ShaderProgram field_13072;       // offset 13072
        ShaderProgram field_14928;       // offset 14928
        ShaderProgram field_16784;       // offset 16784
        ShaderProgram field_18640;       // offset 18640
        ShaderProgram field_20496;       // offset 20496
        ShaderProgram field_22352;       // offset 22352
        ShaderProgram field_24208;       // offset 24208
        ShaderProgram field_26064;       // offset 26064
        ShaderProgram field_27920;       // offset 27920
        InputAssemblerState field_29776; // offset 29776
    };

    // 0x100c515a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RenderTargetResolver::RenderTargetResolver(): jumps straight to the base-object constructor

    // 0x100c515c0, 704 bytes, base-object constructor, inline, placed by class name and debug map
    // RenderTargetResolver::RenderTargetResolver()
    void RenderTargetResolver::RenderTargetResolver() {
        new (this) VertexBuffer();
        new (field_80, "textureColourDepthCopyShader") ShaderProgram();
        new (field_1936, "textureColourDepthDownsampleCopyShader") ShaderProgram();
        new (field_3792, "textureColourCopyShader") ShaderProgram();
        new (field_5648, "textureDepthCopyShader") ShaderProgram();
        new (field_7504, "textureDepthDownsampleCopyShader") ShaderProgram();
        new (field_9360, "textureColourDepthMSCopyShader") ShaderProgram();
        new (field_11216, "textureColourDepthDownsampleMSCopyShader") ShaderProgram();
        new (field_13072, "textureColourMSCopyShader") ShaderProgram();
        new (field_14928, "textureDepthMSCopyShader") ShaderProgram();
        new (field_16784, "textureDepthDownsampleMSCopyShader") ShaderProgram();
        new (field_18640, "") ShaderProgram();
        new (field_20496, "") ShaderProgram();
        new (field_22352, "") ShaderProgram();
        new (field_24208, "") ShaderProgram();
        new (field_26064, "") ShaderProgram();
        new (field_27920, "") ShaderProgram();
        new (field_29776) InputAssemblerState();
    }

    // 0x100c51940, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RenderTargetResolver::~RenderTargetResolver(): jumps straight to the base-object destructor

    // 0x100c51950, 240 bytes, base-object destructor, inline, placed by class name and debug map
    // RenderTargetResolver::~RenderTargetResolver()
    void RenderTargetResolver::~RenderTargetResolver() {
        field_29776->~InputAssemblerState();
        field_27920->~ShaderProgram();
        field_26064->~ShaderProgram();
        field_24208->~ShaderProgram();
        field_22352->~ShaderProgram();
        field_20496->~ShaderProgram();
        field_18640->~ShaderProgram();
        field_16784->~ShaderProgram();
        field_14928->~ShaderProgram();
        field_13072->~ShaderProgram();
        field_11216->~ShaderProgram();
        field_9360->~ShaderProgram();
        field_7504->~ShaderProgram();
        field_5648->~ShaderProgram();
        field_3792->~ShaderProgram();
        field_1936->~ShaderProgram();
        field_80->~ShaderProgram();
        ~VertexBuffer();
    }

    // 0x100c53d60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(GPUMemoryAllocatorZone&&): jumps straight to the base-object constructor

    // 0x100c53e50, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(GPUMemoryAllocatorZone&&)
    void GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(GPUMemoryAllocatorZone* param_1) {
        undefined* puVar1;
        undefined8 uVar2;
        undefined4 uVar3;
        int iVar4;

        new (this) eastl::fixed_string<char, 512, true, eastl::allocator>(param_1);
        puVar1 = param_1->field_552;
        uVar2 = *(undefined8*)&param_1->field_560;
        uVar3 = *(undefined4*)&param_1->field_572;
        iVar4 = param_1->field_576;
        field_564 = param_1->field_564;
        *(undefined4*)&field_572 = uVar3;
        field_576 = iVar4;
        field_552 = puVar1;
        *(undefined8*)&field_560 = uVar2;
        new (&field_584, (fixed_map*)&param_1->field_584)
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>();
        m_inclusiveAllocations = param_1->m_inclusiveAllocations;
        new (&field_29696, (fixed_map*)&param_1->field_29696)
            eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                             eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>();
    }

    // 0x100c557f0, 272 bytes, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105::operator()(GPUMemoryAllocatorZone*) const
    /* GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105::TEMPNAMEPLACEHOLDERVALUE(GPUMemoryAllocatorZone*)
   const */

    void GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105::operator()(GPUMemoryAllocatorZone* param_1) {
        int* piVar1;
        long lVar2;
        long lVar3;
        bool bVar4;
        int iVar5;
        fixed_map* pfVar6;
        fixed_string* pfVar7;
        long* plVar8;
        undefined8 extraout_RDX;
        undefined1 auVar9[16];
        undefined8 local_71f0;
        undefined8 local_71e8;
        fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                  eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>, eastl::allocator>
            local_71e0[29104];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar2 = *(long*)this;
        UpdateInclusiveMemory(param_1);
        iVar5 = GetInclusiveAllocations(param_1);
        piVar1 = (int*)(lVar2 + 29688);
        *piVar1 = *piVar1 + iVar5;
        pfVar6 = (fixed_map*)GetInclusiveObjectMemory(param_1);
        eastl::fixed_map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory, 48ul, true,
                         eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                         eastl::allocator>::fixed_map(local_71e0, pfVar6);
        local_71f0 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                   eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                   true>::begin();
        auVar9 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        while (true) {
            local_71e8 = auVar9._0_8_;
            bVar4 = eastl::operator!=((eastl*)&local_71f0, (hashtable_iterator_base*)&local_71e8, auVar9._8_8_);
            if (!bVar4)
                break;
            pfVar7 = (fixed_string*)eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*((rbtree_iterator<
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                       eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                       eastl::pair<unsigned int const,
                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_71f0);
            lVar3 = *(long*)(pfVar7 + 552);
            plVar8 = (long*)eastl::map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                                       eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                                       eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (map<eastl::fixed_string<char, 512, true, eastl::allocator>, ZoneObjectMemory,
                     eastl::less<eastl::fixed_string<char, 512, true, eastl::allocator>>,
                     eastl::fixed_node_allocator<592ul, 48ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar2 + 29696),
                pfVar7);
            *plVar8 = *plVar8 + lVar3;
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const,
                                eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_71f0);
            auVar9._8_8_ = extraout_RDX;
            auVar9._0_8_ = local_71e8;
        }
        local_71e0->~fixed_map();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c55900, 16 bytes, inline, placed by debug map only (low confidence)
    // GPUMemoryAllocatorZone::GetSibling() const
    undefined8 GPUMemoryAllocatorZone::GetSibling() {
        return *(undefined8*)((long)&field_564 + 4);
    }

} // namespace jag::render
