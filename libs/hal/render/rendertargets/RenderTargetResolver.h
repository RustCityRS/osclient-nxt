// libs/hal/render/rendertargets/RenderTargetResolver.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::fixedfunction {
    // 0x100c51b00
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
                (render::RenderContextDesc const&)->PostInit()::$_97&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
            (render::RenderContextDesc const&)->PostInit()::$_97&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
                (render::RenderContextDesc const&)->PostInit()::$_97&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c51b50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c51b60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c51b80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c51b90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::RenderContextDesc const&)->PostInit()::$_97::operator()((__97*)this, arg1);
    }

    // 0x100c51bd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97, void>(
        render::RenderContext::PostInit(render::RenderContextDesc const&)::$_97&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c51d40
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_98&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                             render::LockType)::$_98,
                     void>(unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_98&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                             render::LockType)::$_98,
                     void>(unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_98&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                             render::LockType)::$_98,
                     void>(unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_98&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c51d90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c51da0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c51dc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c51dd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_98::operator()((__98*)this,
                                                                                                        arg1);
    }

    // 0x100c51e40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_98,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_98&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c51fb0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_99&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                             render::LockType)::$_99,
                     void>(unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_99&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                             render::LockType)::$_99,
                     void>(unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_99&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                             render::LockType)::$_99,
                     void>(unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_99&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52000
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c52010
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 24);
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        *(uint64_t*)((long)arg1 + 24) = uVar3;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c52030
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c52040
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned int->BindImageTexture(render::Texture const*, int, render::LockType)::$_99::operator()((__99*)this,
                                                                                                        arg1);
    }

    // 0x100c520b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int, render::LockType)::$_99,
        void>(render::RenderContext::BindImageTexture(unsigned int, render::Texture const*, int,
                                                      render::LockType)::$_99&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c52220
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52260
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c52270
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c52280
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c52290
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::SetTexturesFromStateCache()::$_100::operator()((__100*)this, arg1);
    }

    // 0x100c522c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_100, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_100&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c52430
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
            render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52470
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c52480
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c52490
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c524a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderContext::SetTexturesFromStateCache()::$_101::operator()((__101*)this, arg1);
    }

    // 0x100c524d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::SetTexturesFromStateCache()::$_101, void>(
        render::RenderContext::SetTexturesFromStateCache()::$_101&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c52640
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52690
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c526a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c526c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c526d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_102::operator()((__102*)this, arg1);
    }

    // 0x100c527b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_102&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c52920
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 40);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(uint64_t*)(this + 48) = uVar4;
        *(uint64_t*)(this + 56) = uVar5;
        *(void (**)(...))(this + 144) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103,
                     void>((math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c52970
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c52980
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)this;
        uint64_t uVar2 = *(uint64_t*)(this + 8);
        uint64_t uVar3 = *(uint64_t*)(this + 16);
        uint64_t uVar4 = *(uint64_t*)(this + 24);
        uint64_t uVar5 = *(uint64_t*)(this + 40);
        *(uint64_t*)((long)arg1 + 32) = *(uint64_t*)(this + 32);
        *(uint64_t*)((long)arg1 + 40) = uVar5;
        *(uint64_t*)((long)arg1 + 16) = uVar3;
        *(uint64_t*)((long)arg1 + 24) = uVar4;
        *(uint64_t*)arg1 = uVar1;
        *(uint64_t*)((long)arg1 + 8) = uVar2;
    }

    // 0x100c529a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c529b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (math::Vector4T<float> const*)->ClearRenderTargets(unsigned long)::$_103::operator()((__103*)this, arg1);
    }

    // 0x100c52a90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103, void>(
        render::RenderContext::ClearRenderTargets(math::Vector4T<float> const*, unsigned long)::$_103&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c58f60
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&& arg1) {
        *(void (**)(...))(this + 144) = function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
            render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c58f90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {}

    // 0x100c58fa0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c58fb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107::operator()(arg1, arg1);
    }

    // 0x100c58fe0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107, void>(
        render::RenderDevice::FinishRenderingAndLoseDevice()::$_107&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c5de30
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
        render::RenderDevice::TriggerDeviceLoss()::$_114&& arg1) {
        *(void (**)(...))(this + 144) = function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderDevice::TriggerDeviceLoss()::$_114, void>(
            render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c5de60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {}

    // 0x100c5de70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c5de80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderDevice::TriggerDeviceLoss()::$_114::operator()(arg1, arg1);
    }

    // 0x100c5deb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderDevice::TriggerDeviceLoss()::$_114, void>(render::RenderDevice::TriggerDeviceLoss()::$_114&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag {
    template <
        typename...> // 33 instantiations, e.g. <std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int ()>>> , <std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo, SafeBucketAllocatorSTL<st, <std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void ()>>>
    class SafeBucketAllocatorSTL {
    public:
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                              shared_ptr<eastl::priority_queue<
                                  oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                  eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                                shared_ptr<eastl::priority_queue<
                                    oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                    eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                          oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                          oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                              oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                oldscape::PacketJ<Array<unsigned char>>&, int)::$_7>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
                                graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::
                                                                     UniquePoolDeleter>>::Flush()::{ lambda() #1 }>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                shared_ptr_emplace);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                      game::MapSquareEnvIrradianceInfo()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                      game::MapSquareEnvIrradianceInfo()>* packaged_task_func,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                     SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                assoc_state_alloc);
        void deallocate(
            std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                     SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                assoc_state_alloc,
            unsigned long arg2);
        void deallocate(
            std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                shared_ptr_emplace,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<game::SeqType::GetAnimation(
                              game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                              unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<game::SeqType::GetAnimation(
                                game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void
        deallocate(std::__packaged_task_func<
                       ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(
                           console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{ lambda() #1 }>(
                           char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                          graphics::RT7Core*)::$_4::operator()()
                                            const ::{ lambda() #1 }&&)::{ lambda() #1 },
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void
        deallocate(std::__packaged_task_func<
                       ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(
                           console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{ lambda() #1 }>(
                           char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                          graphics::RT7Core*)::$_5::operator()()
                                            const ::{ lambda() #1 }&&)::{ lambda() #1 },
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<
                std::__bind<game::RegisterCommonCommandsDebug(
                    console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{ lambda() #1 }>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                              eastl::vector<graphics::ParticleSystem*>>(std::vector<std::future<void>>&, unsigned long,
                                                                        eastl::vector<graphics::ParticleSystem*>&,
                                                                        ThreadPool&, float)::{ lambda() #1 }>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                           eastl::vector<graphics::ParticleSystem*>>(std::vector<std::future<void>>&, unsigned long,
                                                                     eastl::vector<graphics::ParticleSystem*>&,
                                                                     ThreadPool&, float)::{ lambda() #1 }>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<
                std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                    eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                    std::vector<std::future<void>>&, unsigned long,
                    eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{ lambda() #1 }>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<
                std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                    eastl::vector<shared_ptr<graphics::ModularParticleSystem>>>(
                    std::vector<std::future<void>>&, unsigned long,
                    eastl::vector<shared_ptr<graphics::ModularParticleSystem>>&, ThreadPool&, float)::{ lambda() #1 }>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                         graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                         graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                           graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                           graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                         graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                         graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                           graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                           graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                              graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                              graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                              std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                              graphics::SceneViewData const&)::$_19>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                                graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                                graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                                graphics::SceneViewData const&)::$_19>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::FilterAsync(
                         graphics::DrawableGroupType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_21>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::FilterAsync(
                           graphics::DrawableGroupType, graphics::RenderPassType,
                           std::function<bool(graphics::Drawable*,
                                              std::unique_ptr<graphics::DrawableElement,
                                                              graphics::DrawableElementDeleter> const&)> const&)::$_21>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<graphics::DrawableQueue::FilterMultiAsync(
                         graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                         std::function<bool(graphics::Drawable*,
                                            std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::$_23>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void
        deallocate(std::__packaged_task_func<
                       std::__bind<graphics::DrawableQueue::FilterMultiAsync(
                           graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                           std::function<bool(graphics::Drawable*,
                                              std::unique_ptr<graphics::DrawableElement,
                                                              graphics::DrawableElementDeleter> const&)> const&)::$_23>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(
                                          unsigned char const*, render::Format)::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(
                                          unsigned char const*, render::Format)::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                              graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                              graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                                graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                                graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void deallocate(std::__packaged_task_func<
                            ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }>(
                                char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{ lambda() #1 },
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                          shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                          shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<
                std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<
                std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                              Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                              math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                                Array<eastl::string> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
                                math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(
                                          char const*, GraphicsApp::MainShutdown()::$_0&&)::{ lambda() #1 },
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                      SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<FileSystem::DeleteDirectory(Filename const&)::$_0>,
                                      SafeBucketAllocatorSTL<std::packaged_task<int()>>, int()>* packaged_task_func,
            unsigned long arg2);
        void
        allocate(unsigned long arg1,
                 std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>* assoc_state_alloc);
        void
        deallocate(std::__assoc_state_alloc<int, SafeBucketAllocatorSTL<std::packaged_task<int()>>>* assoc_state_alloc,
                   unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
                                          char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{ lambda() #1 },
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>* assoc_sub_state_alloc);
        void deallocate(
            std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>* assoc_sub_state_alloc,
            unsigned long arg2);
        void allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(
            std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void deallocate(
            std::__packaged_task_func<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
                    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{ lambda() #1 },
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2);
        void deallocate(std::__packaged_task_func<
                            ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                        (fixedfunction::Methods)0> const&)::$_110>(
                                char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                                 fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                         (fixedfunction::Methods)0> const&)::$_110&&)::{
                                lambda() #1
                            },
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
        void allocate(unsigned long arg1,
                      std::__packaged_task_func<
                          std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                              char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                   (fixedfunction::Methods)0> const&)::$_111>,
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func);
        void deallocate(std::__packaged_task_func<
                            std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                                char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                     (fixedfunction::Methods)0> const&)::$_111>,
                            SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                        unsigned long arg2);
    };

    // 0x1002e7ae0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void()>>::allocate(unsigned long arg1,
                           std::__packaged_task_func<
                               std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                                   shared_ptr<eastl::priority_queue<
                                       oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                       eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
                               SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(48, 4, 8);
    }

    // 0x1002e7ee0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<
                eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                      eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                           shared_ptr<eastl::priority_queue<
                               oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                               eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 48), arg2);
    }

    // 0x100482b20
    void SafeBucketAllocatorSTL<
        std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                  SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>::
        allocate(
            unsigned long arg1,
            std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                shared_ptr_emplace) {
        BucketManager::Allocate((long)shared_ptr_emplace * 96, 4, 16);
    }

    // 0x100482e40
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                  SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                  game::MapSquareEnvIrradianceInfo()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                      game::MapSquareEnvIrradianceInfo()>* packaged_task_func) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x100483260
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                  SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                  game::MapSquareEnvIrradianceInfo()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                                      game::MapSquareEnvIrradianceInfo()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 56), arg2);
    }

    // 0x100483680
    void SafeBucketAllocatorSTL<
        std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                 SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>::
        allocate(
            unsigned long arg1,
            std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                     SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                assoc_state_alloc) {
        BucketManager::Allocate((long)assoc_state_alloc * 320, 4, 16);
    }

    // 0x1004839d0
    void SafeBucketAllocatorSTL<
        std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                 SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>::
        deallocate(
            std::__assoc_state_alloc<game::MapSquareEnvIrradianceInfo,
                                     SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                assoc_state_alloc,
            unsigned long arg2) {
        assoc_state_alloc->DeAllocate((arg2 * 320), arg2 * 64);
    }

    // 0x100483d90
    void SafeBucketAllocatorSTL<
        std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                  SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>>::
        deallocate(
            std::__shared_ptr_emplace<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                                      SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>>*
                shared_ptr_emplace,
            unsigned long arg2) {
        shared_ptr_emplace->DeAllocate((arg2 * 96), arg2 * 32);
    }

    // 0x1004887d0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(96, 4, 8);
    }

    // 0x100488b10
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<game::DoEntityPicking(
                                          eastl::fixed_vector<shared_ptr<game::Entity>, 128ul>&, unsigned int,
                                          game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 96), arg2);
    }

    // 0x100ade2d0
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<http::HTTPRequest::Post(char const*, char const*)::$_0>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate(24, arg2);
    }

    // 0x100c55ad0
    ThreadPoolSingleton::ThreadPoolSingleton() : AutoSingleton<ThreadPoolSingleton>() {
        unsigned int arg1 = threading::GetMaxHardwareThreads();
        new (this) ThreadPool(arg1, "TPSingleton");
    }

    // 0x100c56730
    void SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
            char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(std::__packaged_task_func<
                                   ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
                                       char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{ lambda() #1 },
                                   SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                               unsigned long arg2) {
        DeAllocate(16, arg2);
    }

    // 0x100c56860
    void
    SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>>::allocate(
        unsigned long arg1,
        std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>* assoc_sub_state_alloc) {
        BucketManager::Allocate((long)assoc_sub_state_alloc * 144, 4, 8);
    }

    // 0x100c56b50
    void SafeBucketAllocatorSTL<std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>>::
        deallocate(
            std::__assoc_sub_state_alloc<SafeBucketAllocatorSTL<std::packaged_task<void()>>>* assoc_sub_state_alloc,
            unsigned long arg2) {
        assoc_sub_state_alloc->DeAllocate((arg2 * 144), arg2 * 16);
    }

    // 0x100c59340
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(40, 4, 8);
    }

    // 0x100c596b0
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 40), arg2);
    }

    // 0x100c5a740
    void SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
            char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(
                std::__packaged_task_func<
                    ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
                        char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{ lambda() #1 },
                    SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                unsigned long arg2) {
        DeAllocate(16, arg2);
    }

    // 0x100c5b6c0
    void SafeBucketAllocatorSTL < std::__packaged_task_func <
        ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                    (fixedfunction::Methods)0> const&)::$_110>(
            char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                             fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                     (fixedfunction::Methods)0> const&)::$_110&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(
                      std::__packaged_task_func<
                          ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                              fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                      (fixedfunction::Methods)0> const&)::$_110>(
                              char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                                               fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                       (fixedfunction::Methods)0> const&)::$_110&&)::{
                              lambda() #1
                          },
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                      unsigned long arg2) {
        DeAllocate(16, arg2);
    }

    // 0x100c5c550
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                                      char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                           (fixedfunction::Methods)0> const&)::$_111>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                         char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                              (fixedfunction::Methods)0> const&)::$_111>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(192, 4, 16);
    }

    // 0x100c5c8c0
    void SafeBucketAllocatorSTL<
        std::__packaged_task_func<std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                                      char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                           (fixedfunction::Methods)0> const&)::$_111>,
                                  SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                           char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                (fixedfunction::Methods)0> const&)::$_111>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 192), arg2);
    }

    // 0x100c5f090
    render::RenderTargets* placement_new<render::RenderTargets>(void* arg1) {
        new (arg1) render::RenderTargets();
        return arg1;
    }

    // 0x100c5f0b0
    ref_counter_shared<render::RenderTargets>*
    placement_new<ref_counter_shared<render::RenderTargets>, int, render::RenderTargets*&>(
        void* arg1, int&& arg2, render::RenderTargets*& arg3) {
        new (arg1) ref_counter_shared<render::RenderTargets>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100c5f0d0
    void shared_ptr_do_enable_shared_from_this<render::RenderTargets>(
        ref_counter_base* ref_counter_base, render::RenderTargets* renderTargets,
        render::RenderTargets::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)renderTargets);
            local_38 = weak_ptr(local_48);
            renderTargets->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100c5f170
    ref_counter_shared<render::RenderTargets>::ref_counter_shared(unsigned long arg1,
                                                                  render::RenderTargets* renderTargets)
        : ref_counter_base() {}

    // 0x100c5f1b0
    void ref_counter_shared<render::RenderTargets>::DeleteData() {
        ref_counter_shared<render::RenderTargets> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((RenderTargets*)((long)&(this[3]._vptr)->_dtor + lVar2))->~RenderTargets();
                    prVar1 = (ref_counter_shared<render::RenderTargets> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 384;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::render {
    class RenderTargetResolver {
    public:
        uint8_t CreateRenderingResources();
        void DestroyRenderingResources();
        void ResolveViaQuad(ImmediateRenderContext& immediateRenderContext, const Texture* texture1,
                            const Texture* texture2, const RenderTargets* renderTargets, unsigned int arg5,
                            const math::Rect<unsigned int>& rect1, const math::Rect<unsigned int>& rect2);
        RenderTargetResolver();
        ~RenderTargetResolver();

    private:
        uint8_t _unknown_0[8];
        int field_8;
        uint8_t _unknown_12[68];
        ShaderProgram field_80;
        ShaderProgram field_1936;
        ShaderProgram field_3792;
        ShaderProgram field_5648;
        ShaderProgram field_7504;
        ShaderProgram field_9360;
        ShaderProgram field_11216;
        ShaderProgram field_13072;
        ShaderProgram field_14928;
        ShaderProgram field_16784;
        ShaderProgram field_18640;
        ShaderProgram field_20496;
        ShaderProgram field_22352;
        ShaderProgram field_24208;
        ShaderProgram field_26064;
        ShaderProgram field_27920;
        InputAssemblerState field_29776;
    };

    // 0x100c515c0
    RenderTargetResolver::RenderTargetResolver()
        : VertexBuffer(), field_80("textureColourDepthCopyShader"),
          field_1936("textureColourDepthDownsampleCopyShader"), field_3792("textureColourCopyShader"),
          field_5648("textureDepthCopyShader"), field_7504("textureDepthDownsampleCopyShader"),
          field_9360("textureColourDepthMSCopyShader"), field_11216("textureColourDepthDownsampleMSCopyShader"),
          field_13072("textureColourMSCopyShader"), field_14928("textureDepthMSCopyShader"),
          field_16784("textureDepthDownsampleMSCopyShader"), field_18640(""), field_20496(""), field_22352(""),
          field_24208(""), field_26064(""), field_27920("") {}

    // 0x100c51950
    RenderTargetResolver::~RenderTargetResolver() {
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
    }

    // 0x100c53e50
    GPUMemoryAllocatorZone::GPUMemoryAllocatorZone(GPUMemoryAllocatorZone&& gpuMemoryAllocatorZone)
        : eastl::fixed_string<char, 512>(gpuMemoryAllocatorZone) {
        uint8_t* puVar1 = gpuMemoryAllocatorZone.field_552;
        uint64_t uVar2 = *(uint64_t*)&gpuMemoryAllocatorZone.field_560;
        uint32_t uVar3 = *(uint32_t*)&gpuMemoryAllocatorZone.field_572;
        int iVar4 = gpuMemoryAllocatorZone.field_576;
        field_564 = gpuMemoryAllocatorZone.field_564;
        *(uint32_t*)&field_572 = uVar3;
        field_576 = iVar4;
        field_552 = puVar1;
        *(uint64_t*)&field_560 = uVar2;
        new (&field_584)
            eastl::fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul>(gpuMemoryAllocatorZone.field_584);
        m_inclusiveAllocations = gpuMemoryAllocatorZone.m_inclusiveAllocations;
        new (&field_29696) eastl::fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul>(
            gpuMemoryAllocatorZone.field_29696);
    }

    // 0x100c557f0
    void GPUMemoryAllocatorZone::UpdateInclusiveMemory()::$_105::operator()(
        GPUMemoryAllocatorZone* gpuMemoryAllocatorZone) const {
        long lVar3;
        fixed_map<eastl::fixed_string<char, _512>, ZoneObjectMemory, _48ul>* fixed_map;
        fixed_string<char, _512>* str;
        long* plVar6;

        long lVar2 = field_0;
        UpdateInclusiveMemory(gpuMemoryAllocatorZone);
        int iVar5 = GetInclusiveAllocations(gpuMemoryAllocatorZone);
        int* piVar1 = (int*)(lVar2 + 29688);
        *piVar1 = *piVar1 + iVar5;
        fixed_map = (fixed_map<eastl::fixed_string<char, _512>, ZoneObjectMemory, _48ul>*)GetInclusiveObjectMemory(
            gpuMemoryAllocatorZone);
        fixed_map<eastl::fixed_string<char, 512>, ZoneObjectMemory, 48ul> local_71e0(*fixed_map);
        uint64_t local_71f0 = local_71e0.begin();
        uint64_t local_71e8 = local_71e0.end();
        while (true) {
            if (local_71f0 != local_71e8 == '\0')
                break;
            str = (fixed_string<char, _512>*)*local_71f0;
            lVar3 = *(long*)(str + 552);
            plVar6 = (long*)(*((lVar2 + 29696)))[*str];
            *plVar6 = *plVar6 + lVar3;
            ++local_71f0;
        }
    }

    // 0x100c55900
    uint64_t GPUMemoryAllocatorZone::GetSibling() const {
        return *(uint64_t*)((long)&field_564 + 4);
    }

} // namespace jag::render
