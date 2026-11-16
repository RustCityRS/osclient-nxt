// libs/hal/render/buffers/ShaderStorageBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::fixedfunction {
    // 0x100bfc120
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)&arg1.field_8;
        *(BufferedRenderTargets**)(this + 16) = arg1.field_0;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfc160
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfc170
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfc180
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfc190
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::BufferedRenderTargets::WriteFinished()::$_3::operator()((__3*)this, arg1);
    }

    // 0x100bfc1d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfc2e0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) = function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            (char const*)->Create(unsigned int)::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            (char const*)->Create(unsigned int)::$_4&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            (char const*)->Create(unsigned int)::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfc320
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfc330
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfc340
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfc350
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (char const*)->Create(unsigned int)::$_4::operator()((__4*)this, arg1);
    }

    // 0x100bfc380
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfc390
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) = function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            (char const*)->Create(unsigned int)::$_5&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            (char const*)->Create(unsigned int)::$_5&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            (char const*)->Create(unsigned int)::$_5&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfc3d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfc3e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bfc3f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfc400
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (char const*)->Create(unsigned int)::$_5::operator()((__5*)this, arg1);
    }

    // 0x100bfc420
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfcbf0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_6&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc const&, unsigned int)::$_6,
                     void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                         *(std::array<render::Texture::Desc, 2ul> const&), int,
                                                         *(render::Texture::Desc const&), unsigned int)::$_6&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc const&, unsigned int)::$_6,
                     void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                         *(std::array<render::Texture::Desc, 2ul> const&), int,
                                                         *(render::Texture::Desc const&), unsigned int)::$_6&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc const&, unsigned int)::$_6,
                     void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                         *(std::array<render::Texture::Desc, 2ul> const&), int,
                                                         *(render::Texture::Desc const&), unsigned int)::$_6&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfcc30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfcc40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfcc50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfcc60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderTargets::Create(char const*, render::TextureType,
                                      *(std::array<render::Texture::Desc, 2ul> const&), int,
                                      *(render::Texture::Desc const&), unsigned int)::$_6::operator()((__6*)this, arg1);
    }

    // 0x100bfcc90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_6&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfcca0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_7&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc const&, unsigned int)::$_7,
                     void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                         *(std::array<render::Texture::Desc, 2ul> const&), int,
                                                         *(render::Texture::Desc const&), unsigned int)::$_7&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc const&, unsigned int)::$_7,
                     void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                         *(std::array<render::Texture::Desc, 2ul> const&), int,
                                                         *(render::Texture::Desc const&), unsigned int)::$_7&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc const&, unsigned int)::$_7,
                     void>(render::RenderTargets::Create(char const*, render::TextureType,
                                                         *(std::array<render::Texture::Desc, 2ul> const&), int,
                                                         *(render::Texture::Desc const&), unsigned int)::$_7&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfcce0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfccf0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bfcd00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfcd10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderTargets::Create(char const*, render::TextureType,
                                      *(std::array<render::Texture::Desc, 2ul> const&), int,
                                      *(render::Texture::Desc const&), unsigned int)::$_7::operator()((__7*)this, arg1);
    }

    // 0x100bfcd30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc const&, unsigned int)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfcff0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
                unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
                unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
                unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd040
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfd050
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfd070
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfd080
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8::operator()((__8*)this, arg1);
    }

    // 0x100bfd3a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfd3b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
                int->SetTargetCubeMapFace(render::CubeFace)::$_9&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
            int->SetTargetCubeMapFace(render::CubeFace)::$_9&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
                int->SetTargetCubeMapFace(render::CubeFace)::$_9&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd3f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfd400
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfd410
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfd420
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        int->SetTargetCubeMapFace(render::CubeFace)::$_9::operator()((__9*)this, arg1);
    }

    // 0x100bfd610
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfd620
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
                int->SetTargetMipLayerLevel(int, int)::$_10&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
            int->SetTargetMipLayerLevel(int, int)::$_10&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
                int->SetTargetMipLayerLevel(int, int)::$_10&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd670
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfd680
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfd6a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfd6b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        int->SetTargetMipLayerLevel(int, int)::$_10::operator()((__10*)this, arg1);
    }

    // 0x100bfd810
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfd8f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&& arg1) {
        *(uint64_t*)this = 0;
        (eastl::fixed_vector<render::Texture*, 2ul> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::__11((__11*)(this + 16), (__11*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&,
                                                                     int, int, render::CubeFace)::$_11,
                     void>((eastl::fixed_vector<render::Texture*, 2ul> const&)
                               ->BindColourTargetTextures(int, int, render::CubeFace)::$_11&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&,
                                                                     int, int, render::CubeFace)::$_11,
                     void>((eastl::fixed_vector<render::Texture*, 2ul> const&)
                               ->BindColourTargetTextures(int, int, render::CubeFace)::$_11&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&,
                                                                     int, int, render::CubeFace)::$_11,
                     void>((eastl::fixed_vector<render::Texture*, 2ul> const&)
                               ->BindColourTargetTextures(int, int, render::CubeFace)::$_11&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd970
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfd980
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (eastl::fixed_vector<render::Texture*, 2ul> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::__11(arg1, (__11*)this);
    }

    // 0x100bfd9d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfd9e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (eastl::fixed_vector<render::Texture*, 2ul> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::operator()((__11*)this, arg1);
    }

    // 0x100bfdc20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100bfdc30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int, int,
                                                        render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul> const&, int,
                                                              int, render::CubeFace)::$_11&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (eastl::fixed_vector<render::Texture*, 2ul> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::~__11((__11*)this);
    }

    // 0x100bfdc40
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&& arg1) {
        *(uint64_t*)this = 0;
        Texture* pTVar1 = arg1.field_8;
        *(RenderTargets**)(this + 16) = arg1.field_0;
        *(Texture**)(this + 24) = pTVar1;
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
                (render::Texture*)->BindDepthStencilTargetTexture()::$_12&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
                (render::Texture*)->BindDepthStencilTargetTexture()::$_12&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
                (render::Texture*)->BindDepthStencilTargetTexture()::$_12&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfdc80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfdc90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bfdca0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfdcb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (render::Texture*)->BindDepthStencilTargetTexture()::$_12::operator()((__12*)this, arg1);
    }

    // 0x100bfde50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfde60
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&& arg1) {
        *(uint64_t*)this = 0;
        *(RenderTargets**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfdea0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfdeb0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bfdec0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfded0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderTargets::Unbind()::$_13::operator()((__13*)this, arg1);
    }

    // 0x100bfe1d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfe1e0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&& arg1) {
        *(uint64_t*)this = 0;
        *(RenderTargets**)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfe220
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfe230
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bfe240
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfe250
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14::operator()((__14*)this, arg1);
    }

    // 0x100bfe350
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100bfe360
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate()
                                                                    const ::$_15&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 144) = function<render::RenderTargets::Invalidate() const ::$_15, void>(
            render::RenderTargets::Invalidate() const ::$_15&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::RenderTargets::Invalidate() const ::$_15, void>(
            render::RenderTargets::Invalidate() const ::$_15&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::RenderTargets::Invalidate() const ::$_15, void>(
            render::RenderTargets::Invalidate() const ::$_15&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfe3a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bfe3b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100bfe3c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bfe3d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_15::operator()((__15*)this, arg1);
    }

    // 0x100bfe610
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c06160
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)::__17(
            (SetShaderConstMatrix4_int_unsigned_int_jag__math__Matrix44T<float> const__unsigned_int_*)(this + 16),
            (__17*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                  unsigned int) const ::$_17,
                     void>(int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)
                               const ::$_17&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                  unsigned int) const ::$_17,
                     void>(int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)
                               const ::$_17&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                  unsigned int) const ::$_17,
                     void>(int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)
                               const ::$_17&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c061e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c061f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)::__17(arg1, (__17*)this);
    }

    // 0x100c06240
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c06250
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_17::operator()((__17*)this, arg1);
    }

    // 0x100c062e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c064b0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)::__18(
            (SetShaderConstMatrix3_int_unsigned_int_jag__math__Matrix33T<float> const__unsigned_int_*)(this + 16),
            (__18*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                  unsigned int) const ::$_18,
                     void>(int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)
                               const ::$_18&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                  unsigned int) const ::$_18,
                     void>(int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)
                               const ::$_18&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                  unsigned int) const ::$_18,
                     void>(int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)
                               const ::$_18&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06530
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c06540
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)::__18(arg1, (__18*)this);
    }

    // 0x100c06590
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c065a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_18::operator()((__18*)this, arg1);
    }

    // 0x100c06630
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c06850
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)::__19(
            (SetShaderConstMatrix2_int_unsigned_int_jag__math__Matrix22T<float> const__unsigned_int_*)(this + 16),
            (__19*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                  unsigned int) const ::$_19,
                     void>(int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)
                               const ::$_19&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                  unsigned int) const ::$_19,
                     void>(int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)
                               const ::$_19&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                  unsigned int) const ::$_19,
                     void>(int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)
                               const ::$_19&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c068d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c068e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)::__19(arg1, (__19*)this);
    }

    // 0x100c06930
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c06940
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_19::operator()((__19*)this, arg1);
    }

    // 0x100c069d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c06a90
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int)::__20(
            (SetShaderConstFloat4Array_int_unsigned_int_float_const__unsigned_int_*)(this + 16), (__20*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                         const ::$_20,
                     void>(int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int) const ::$_20&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                         const ::$_20,
                     void>(int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int) const ::$_20&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                         const ::$_20,
                     void>(int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int) const ::$_20&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06b10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c06b20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int)::__20(arg1, (__20*)this);
    }

    // 0x100c06b70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c06b80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_20::operator()((__20*)this, arg1);
    }

    // 0x100c06c20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c06ce0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int)::__21(
            (SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const__unsigned_int_*)(this + 16), (__21*)arg1);
        *(void (**)(...))(this + 144) = function<render::ShaderProgram::SetShaderConstUint4Array(
                                                     int, unsigned int, unsigned int const*, unsigned int) const ::$_21,
                                                 void>(
            int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int) const ::$_21&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::ShaderProgram::SetShaderConstUint4Array(
                                             int, unsigned int, unsigned int const*, unsigned int) const ::$_21,
                                         void>(
            int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int) const ::$_21&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::ShaderProgram::SetShaderConstUint4Array(
                                                     int, unsigned int, unsigned int const*, unsigned int) const ::$_21,
                                                 void>(
            int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int) const ::$_21&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06d60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c06d70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int)::__21(arg1, (__21*)this);
    }

    // 0x100c06dc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c06dd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_21::operator()((__21*)this, arg1);
    }

    // 0x100c06e70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c06e80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstFloat3Array(unsigned int, float const*)::__22(
            (SetShaderConstFloat3Array_int_unsigned_int_float_const__*)(this + 16), (__22*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22,
                     void>(int->SetShaderConstFloat3Array(unsigned int, float const*) const ::$_22&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22,
                     void>(int->SetShaderConstFloat3Array(unsigned int, float const*) const ::$_22&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22,
                     void>(int->SetShaderConstFloat3Array(unsigned int, float const*) const ::$_22&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06f00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c06f10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstFloat3Array(unsigned int, float const*)::__22(arg1, (__22*)this);
    }

    // 0x100c06f60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c06f70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_22::operator()((__22*)this, arg1);
    }

    // 0x100c07010
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07020
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstFloat2Array(unsigned int, float const*)::__23(
            (SetShaderConstFloat2Array_int_unsigned_int_float_const__*)(this + 16), (__23*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23,
                     void>(int->SetShaderConstFloat2Array(unsigned int, float const*) const ::$_23&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23,
                     void>(int->SetShaderConstFloat2Array(unsigned int, float const*) const ::$_23&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23,
                     void>(int->SetShaderConstFloat2Array(unsigned int, float const*) const ::$_23&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c070a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c070b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstFloat2Array(unsigned int, float const*)::__23(arg1, (__23*)this);
    }

    // 0x100c07100
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07110
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_23::operator()((__23*)this, arg1);
    }

    // 0x100c071b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c071c0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int)::__24(
            (SetShaderConstFloat1Array_int_unsigned_int_float_const__unsigned_int_*)(this + 16), (__24*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                         const ::$_24,
                     void>(int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int) const ::$_24&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                         const ::$_24,
                     void>(int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int) const ::$_24&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                         const ::$_24,
                     void>(int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int) const ::$_24&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07240
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07250
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int)::__24(arg1, (__24*)this);
    }

    // 0x100c072a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c072b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_24::operator()((__24*)this, arg1);
    }

    // 0x100c07350
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07360
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstInt4Array(unsigned int, int const*)::__25(
            (SetShaderConstInt4Array_int_unsigned_int_int_const__*)(this + 16), (__25*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
                int->SetShaderConstInt4Array(unsigned int, int const*) const ::$_25&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
                int->SetShaderConstInt4Array(unsigned int, int const*) const ::$_25&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
                int->SetShaderConstInt4Array(unsigned int, int const*) const ::$_25&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c073e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c073f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstInt4Array(unsigned int, int const*)::__25(arg1, (__25*)this);
    }

    // 0x100c07440
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07450
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_25::operator()((__25*)this, arg1);
    }

    // 0x100c074f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07500
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstInt3Array(unsigned int, int const*)::__26(
            (SetShaderConstInt3Array_int_unsigned_int_int_const__*)(this + 16), (__26*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
                int->SetShaderConstInt3Array(unsigned int, int const*) const ::$_26&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
                int->SetShaderConstInt3Array(unsigned int, int const*) const ::$_26&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
                int->SetShaderConstInt3Array(unsigned int, int const*) const ::$_26&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07580
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07590
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstInt3Array(unsigned int, int const*)::__26(arg1, (__26*)this);
    }

    // 0x100c075e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c075f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_26::operator()((__26*)this, arg1);
    }

    // 0x100c07690
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c076a0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstInt2Array(unsigned int, int const*)::__27(
            (SetShaderConstInt2Array_int_unsigned_int_int_const__*)(this + 16), (__27*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
                int->SetShaderConstInt2Array(unsigned int, int const*) const ::$_27&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
                int->SetShaderConstInt2Array(unsigned int, int const*) const ::$_27&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
                int->SetShaderConstInt2Array(unsigned int, int const*) const ::$_27&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07720
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07730
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstInt2Array(unsigned int, int const*)::__27(arg1, (__27*)this);
    }

    // 0x100c07780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07790
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_27::operator()((__27*)this, arg1);
    }

    // 0x100c07830
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07840
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstInt1Array(unsigned int, int const*)::__28(
            (SetShaderConstInt1Array_int_unsigned_int_int_const__*)(this + 16), (__28*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
                int->SetShaderConstInt1Array(unsigned int, int const*) const ::$_28&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
                int->SetShaderConstInt1Array(unsigned int, int const*) const ::$_28&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
                int->SetShaderConstInt1Array(unsigned int, int const*) const ::$_28&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c078c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c078d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstInt1Array(unsigned int, int const*)::__28(arg1, (__28*)this);
    }

    // 0x100c07920
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07930
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_28::operator()((__28*)this, arg1);
    }

    // 0x100c079d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c079e0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int)::__29(
            (SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const__unsigned_int_*)(this + 16), (__29*)arg1);
        *(void (**)(...))(this + 144) = function<render::ShaderProgram::SetShaderConstUInt1Array(
                                                     int, unsigned int, unsigned int const*, unsigned int) const ::$_29,
                                                 void>(
            int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int) const ::$_29&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::ShaderProgram::SetShaderConstUInt1Array(
                                             int, unsigned int, unsigned int const*, unsigned int) const ::$_29,
                                         void>(
            int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int) const ::$_29&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<render::ShaderProgram::SetShaderConstUInt1Array(
                                                     int, unsigned int, unsigned int const*, unsigned int) const ::$_29,
                                                 void>(
            int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int) const ::$_29&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07a60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07a70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int)::__29(arg1, (__29*)this);
    }

    // 0x100c07ac0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07ad0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_29::operator()((__29*)this, arg1);
    }

    // 0x100c07b70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07b80
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30,
                     void>(int->SetShaderConstVector4(math::Vector4T<float> const*) const ::$_30&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30,
                     void>(int->SetShaderConstVector4(math::Vector4T<float> const*) const ::$_30&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30,
                     void>(int->SetShaderConstVector4(math::Vector4T<float> const*) const ::$_30&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07bd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07be0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
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

    // 0x100c07c00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07c10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_30::operator()((__30*)this, arg1);
    }

    // 0x100c07ca0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07cb0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31,
                     void>(int->SetShaderConstVector3(math::Vector3T<float> const*) const ::$_31&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31,
                     void>(int->SetShaderConstVector3(math::Vector3T<float> const*) const ::$_31&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31,
                     void>(int->SetShaderConstVector3(math::Vector3T<float> const*) const ::$_31&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07d00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07d10
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c07d30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07d40
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_31::operator()((__31*)this, arg1);
    }

    // 0x100c07dd0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c07ea0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)::__32(
            (SetShaderConstVector4_int_unsigned_int_jag__math__Vector4T<float> const__unsigned_int_*)(this + 16),
            (__32*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                  unsigned int) const ::$_32,
                     void>(int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)
                               const ::$_32&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                  unsigned int) const ::$_32,
                     void>(int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)
                               const ::$_32&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                  unsigned int) const ::$_32,
                     void>(int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)
                               const ::$_32&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07f20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c07f30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)::__32(arg1, (__32*)this);
    }

    // 0x100c07f80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c07f90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_32::operator()((__32*)this, arg1);
    }

    // 0x100c08030
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08200
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*)::__33(
            (SetShaderConstVector3_int_unsigned_int_jag__math__Vector3T<float> const__*)(this + 16), (__33*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                         const ::$_33,
                     void>(int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*) const ::$_33&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                         const ::$_33,
                     void>(int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*) const ::$_33&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                         const ::$_33,
                     void>(int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*) const ::$_33&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08280
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08290
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*)::__33(arg1, (__33*)this);
    }

    // 0x100c082e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c082f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_33::operator()((__33*)this, arg1);
    }

    // 0x100c08390
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08550
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&& arg1) {
        *(uint64_t*)this = 0;
        int->SetShaderConstVector2(*unsigned int, math::Vector2T<float> const*)::__34(
            (SetShaderConstVector2_int_unsigned_int_jag__math__Vector2T<float> const__*)(this + 16), (__34*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                         const ::$_34,
                     void>(int->SetShaderConstVector2(*unsigned int, math::Vector2T<float> const*) const ::$_34&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                         const ::$_34,
                     void>(int->SetShaderConstVector2(*unsigned int, math::Vector2T<float> const*) const ::$_34&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                         const ::$_34,
                     void>(int->SetShaderConstVector2(*unsigned int, math::Vector2T<float> const*) const ::$_34&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c085d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c085e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        int->SetShaderConstVector2(*unsigned int, math::Vector2T<float> const*)::__34(arg1, (__34*)this);
    }

    // 0x100c08630
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c08640
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_34::operator()((__34*)this, arg1);
    }

    // 0x100c086e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c086f0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
                int->SetShaderConstFloat4(float, float, float, float) const ::$_35&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
                int->SetShaderConstFloat4(float, float, float, float) const ::$_35&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
                int->SetShaderConstFloat4(float, float, float, float) const ::$_35&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08740
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08750
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
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

    // 0x100c08770
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c08780
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_35::operator()((__35*)this, arg1);
    }

    // 0x100c08820
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08830
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
                int->SetShaderConstFloat3(float, float, float) const ::$_36&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
                int->SetShaderConstFloat3(float, float, float) const ::$_36&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
                int->SetShaderConstFloat3(float, float, float) const ::$_36&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08880
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08890
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c088b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c088c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_36::operator()((__36*)this, arg1);
    }

    // 0x100c08950
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08960
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
                int->SetShaderConstFloat2(float, float) const ::$_37&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
                int->SetShaderConstFloat2(float, float) const ::$_37&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
                int->SetShaderConstFloat2(float, float) const ::$_37&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c089b0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c089c0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c089e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c089f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_37::operator()((__37*)this, arg1);
    }

    // 0x100c08a80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08a90
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
                int->SetShaderConstFloat1(float) const ::$_38&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
            int->SetShaderConstFloat1(float) const ::$_38&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
                int->SetShaderConstFloat1(float) const ::$_38&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08ad0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08ae0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c08af0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c08b00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_38::operator()((__38*)this, arg1);
    }

    // 0x100c08b90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08ba0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar2 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 24);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = uVar2;
        *(uint64_t*)(this + 40) = uVar3;
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
                int->SetShaderConstInt4(int, int, int, int) const ::$_39&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
                int->SetShaderConstInt4(int, int, int, int) const ::$_39&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
                int->SetShaderConstInt4(int, int, int, int) const ::$_39&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08bf0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08c00
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
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

    // 0x100c08c20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c08c30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_39::operator()((__39*)this, arg1);
    }

    // 0x100c08cc0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08cd0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
                int->SetShaderConstInt3(int, int, int) const ::$_40&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
                int->SetShaderConstInt3(int, int, int) const ::$_40&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
                int->SetShaderConstInt3(int, int, int) const ::$_40&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08d20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08d30
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c08d50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c08d60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_40::operator()((__40*)this, arg1);
    }

    // 0x100c08df0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c08e00
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
                int->SetShaderConstInt2(int, int) const ::$_41&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
            int->SetShaderConstInt2(int, int) const ::$_41&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
                int->SetShaderConstInt2(int, int) const ::$_41&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08e50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c08e60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c08e80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c08e90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_41::operator()((__41*)this, arg1);
    }

    // 0x100c08f20
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c091a0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
                int->SetShaderConstInt1(int) const ::$_42&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
            int->SetShaderConstInt1(int) const ::$_42&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
                int->SetShaderConstInt1(int) const ::$_42&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c091e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c091f0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c09200
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c09210
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        const ::$_42::operator()((__42*)this, arg1);
    }

    // 0x100c09290
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c0ac10
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) =
            function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c0ac50
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c0ac60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100c0ac70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c0ac80
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        render::ShaderProgram::OnEndFrame()::$_44::operator()((__44*)this, arg1);
    }

    // 0x100c0ace0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x100bfe630
    shared_ptr_if_not_array<render::ShaderProgram>::type make_shared<render::ShaderProgram>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ShaderProgram* local_28[2];

        auto arg1 = aligned_alloc(1888, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<render::ShaderProgram>::type result;
        } else {
            local_28[0] = placement_new<render::ShaderProgram>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::ShaderProgram>, int, render::ShaderProgram*&>(arg1, &local_2c,
                                                                                                       local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100bfe820
    render::ShaderProgram* placement_new<render::ShaderProgram>(void* arg1) {
        new (arg1) render::ShaderProgram("");
        return arg1;
    }

    // 0x100bfe840
    ref_counter_shared<render::ShaderProgram>*
    placement_new<ref_counter_shared<render::ShaderProgram>, int, render::ShaderProgram*&>(
        void* arg1, int&& arg2, render::ShaderProgram*& arg3) {
        new (arg1) ref_counter_shared<render::ShaderProgram>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100bfe870
    ref_counter_shared<render::ShaderProgram>::ref_counter_shared(unsigned long arg1,
                                                                  render::ShaderProgram* shaderProgram)
        : ref_counter_base() {}

    // 0x100bfe8b0
    void ref_counter_shared<render::ShaderProgram>::DeleteData() {
        long lVar1;
        ref_counter_shared<render::ShaderProgram> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<render::ShaderProgram> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 1856;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100c01ab0
    void
    SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
                                                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate(24, arg2);
    }

    // 0x100c036f0
    shared_ptr_if_not_array<render::VertexShader>::type make_shared<render::VertexShader>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        VertexShader* local_28[2];

        auto arg1 = aligned_alloc(176, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<render::VertexShader>::type result;
        } else {
            local_28[0] = placement_new<render::VertexShader>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::VertexShader>, int, render::VertexShader*&>(arg1, &local_2c,
                                                                                                     local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100c03880
    render::VertexShader* placement_new<render::VertexShader>(void* arg1) {
        new (arg1) render::VertexShader();
        return arg1;
    }

    // 0x100c038a0
    ref_counter_shared<render::VertexShader>*
    placement_new<ref_counter_shared<render::VertexShader>, int, render::VertexShader*&>(void* arg1, int&& arg2,
                                                                                         render::VertexShader*& arg3) {
        new (arg1) ref_counter_shared<render::VertexShader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100c038d0
    ref_counter_shared<render::VertexShader>::ref_counter_shared(unsigned long arg1, render::VertexShader* vertexShader)
        : ref_counter_base() {}

    // 0x100c03910
    void ref_counter_shared<render::VertexShader>::DeleteData() {
        long lVar1;
        ref_counter_shared<render::PixelShader> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<render::PixelShader> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 144;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100c04350
    shared_ptr_if_not_array<render::PixelShader>::type make_shared<render::PixelShader>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        PixelShader* local_28[2];

        auto arg1 = aligned_alloc(176, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<render::PixelShader>::type result;
        } else {
            local_28[0] = placement_new<render::PixelShader>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::PixelShader>, int, render::PixelShader*&>(arg1, &local_2c,
                                                                                                   local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100c044e0
    render::PixelShader* placement_new<render::PixelShader>(void* arg1) {
        new (arg1) render::PixelShader();
        return arg1;
    }

    // 0x100c04500
    ref_counter_shared<render::PixelShader>*
    placement_new<ref_counter_shared<render::PixelShader>, int, render::PixelShader*&>(void* arg1, int&& arg2,
                                                                                       render::PixelShader*& arg3) {
        new (arg1) ref_counter_shared<render::PixelShader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100c04530
    ref_counter_shared<render::PixelShader>::ref_counter_shared(unsigned long arg1, render::PixelShader* pixelShader)
        : ref_counter_base() {}

    // 0x100c04f50
    shared_ptr_if_not_array<render::ComputeShader>::type make_shared<render::ComputeShader>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        ComputeShader* local_28[2];

        auto arg1 = aligned_alloc(176, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<render::ComputeShader>::type result;
        } else {
            local_28[0] = placement_new<render::ComputeShader>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<render::ComputeShader>, int, render::ComputeShader*&>(arg1, &local_2c,
                                                                                                       local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100c050e0
    render::ComputeShader* placement_new<render::ComputeShader>(void* arg1) {
        new (arg1) render::ComputeShader();
        return arg1;
    }

    // 0x100c05100
    ref_counter_shared<render::ComputeShader>*
    placement_new<ref_counter_shared<render::ComputeShader>, int, render::ComputeShader*&>(
        void* arg1, int&& arg2, render::ComputeShader*& arg3) {
        new (arg1) ref_counter_shared<render::ComputeShader>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100c05130
    ref_counter_shared<render::ComputeShader>::ref_counter_shared(unsigned long arg1,
                                                                  render::ComputeShader* computeShader)
        : ref_counter_base() {}

    // 0x100c0a0c0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
                                                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate(24, arg2);
    }

} // namespace jag

namespace jag::render {
    class ShaderStorageBuffer {
    public:
        ShaderStorageBuffer(ShaderStorageBuffer&& pooledBuffer);
        ShaderStorageBuffer(ShaderStorageBuffer&& shaderConstBuffer);
        ShaderStorageBuffer();
        ~ShaderStorageBuffer();
        void Destroy();
        void Create(unsigned int arg1, unsigned int arg2, const void* arg3);
        auto MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        auto MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Unmap();
        static int32_t BUFFER_TYPE; // = 37074

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        unsigned int field_8;
        uint8_t _unknown_12[4];
        long field_16;
        int field_24;
        uint8_t _unknown_28[4];
        int field_32;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        uint8_t _unknown_48[9];
    };

    class VertexElementDesc {
    public:
        AuthSDKTokenResponse hash() const;
        VertexElementDesc(unsigned int arg1, const char* str, ShaderInputFormat shaderInputFormat, bool arg4,
                          VertexUsage vertexUsage, unsigned int arg6);
        uint32_t operator==(const VertexElementDesc& vertexElementDesc) const;
        VertexElementDesc();

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        char* field_8;
        ShaderInputFormat field_16;
        bool field_20;
        uint8_t _unknown_21[3];
        VertexUsage field_24;
        unsigned int field_28;
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x100bde5b0
    VertexElementDesc::VertexElementDesc(unsigned int arg1, const char* str, ShaderInputFormat shaderInputFormat,
                                         bool arg4, VertexUsage vertexUsage, unsigned int arg6) {
        VertexElementDesc(arg1, str, shaderInputFormat, arg4, vertexUsage, arg6);
    }

    // 0x100bfc010
    ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&& shaderConstBuffer)
        : BufferInterface(shaderConstBuffer) {}

    // 0x100c008a0
    VertexElementDesc::VertexElementDesc()
        : field_0(0), field_8(nullptr), field_16(4294967295), field_20(false), field_24(4294967295), field_28(0),
          field_32(0) {}

    // 0x100c0b0c0
    uint64_t ShaderTextureSamplerData::operator==(const ShaderTextureSamplerData& shaderTextureSamplerData) const {
        if ((((field_16 == shaderTextureSamplerData.field_16) && (field_0 == shaderTextureSamplerData.field_0)) &&
             (field_20 == shaderTextureSamplerData.field_20)) &&
            (field_8 == shaderTextureSamplerData.field_8)) {
            return field_24 == shaderTextureSamplerData.field_24;
        }
        return 0;
    }

    // 0x100c0b250
    uint32_t ShaderTextureImageData::operator==(const ShaderTextureImageData& shaderTextureImageData) const {
        if ((field_8 == shaderTextureImageData.field_8) && (field_0 == shaderTextureImageData.field_0)) {
            return field_12 == shaderTextureImageData.field_12;
        }
        return 0;
    }

} // namespace jag::render

namespace jag::math {
    // 0x100bfc1e0
    Vector4T<float>::Vector4T(float arg1) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg1;
        *(float*)(this + 8) = arg1;
        *(float*)(this + 12) = arg1;
    }

    // 0x100c06800
    Matrix22T<float>* Matrix22T<float>::operator=(const Matrix22T<float>& matrix22) {
        long lVar1 = 0;
        do {
            (*((this + lVar1))) = (*((matrix22 + lVar1)));
            lVar1 = lVar1 + 8;
        } while (lVar1 != 16);
        return this;
    }

} // namespace jag::math
