// libs/hal/render/buffers/ShaderStorageBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::fixedfunction {
    // 0x100bfc120, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::__3, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __3* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(BufferedRenderTargets**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(
            render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfc160, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfc170, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3,
   void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfc180, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfc190, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3,
   void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::BufferedRenderTargets::WriteFinished()::$_3::operator()(param_1, param_2);
    }

    // 0x100bfc1d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::BufferedRenderTargets::WriteFinished()::$_3, void>(render::BufferedRenderTargets::WriteFinished()::$_3&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferedRenderTargets::WriteFinished()::$_3, void>(
        render::BufferedRenderTargets::WriteFinished()::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfc2e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::__4, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __4* param_1) {
        RenderTargets* pRVar1;

        *(undefined8*)this = 0;
        pRVar1 = param_1->field_8;
        *(undefined1**)(this + 16) = param_1->field_0;
        *(RenderTargets**)(this + 24) = pRVar1;
        *(code**)(this + 144) = function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            (char const*)->Create(unsigned int)::$_4&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            (char const*)->Create(unsigned int)::$_4&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
            (char const*)->Create(unsigned int)::$_4&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfc320, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfc330, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned
   int)::$_4&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfc340, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfc350, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned
   int)::$_4&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (char const*)->Create(unsigned int)::$_4::operator()(param_1, param_2);
    }

    // 0x100bfc380, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_4, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_4&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfc390, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::__5, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __5* param_1) {
        *(undefined8*)this = 0;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            (char const*)->Create(unsigned int)::$_5&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            (char const*)->Create(unsigned int)::$_5&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
            (char const*)->Create(unsigned int)::$_5&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfc3d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfc3e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned
   int)::$_5&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bfc3f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfc400, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned
   int)::$_5&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (char const*)->Create(unsigned int)::$_5::operator()(param_1, param_2);
    }

    // 0x100bfc420, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, unsigned int)::$_5, void>(
        render::RenderTargets::Create(char const*, unsigned int)::$_5&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfcbf0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_6,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_6&&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::__6,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __6* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc_const&, unsigned int)::$_6,
                     void>((char const*)
                               ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
                                        render::Texture::Desc_const&, unsigned int)::$_6&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::Create(char const*, render::TextureType,
                                                               std::array<render::Texture::Desc, 2ul> const&, int,
                                                               render::Texture::Desc_const&, unsigned int)::$_6,
                                 void>((char const*)
                                           ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                                    int, render::Texture::Desc_const&, unsigned int)::$_6&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc_const&, unsigned int)::$_6,
                     void>((char const*)
                               ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
                                        render::Texture::Desc_const&, unsigned int)::$_6&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfcc30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfcc40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_6,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_6&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_6&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfcc50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_6,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_6&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*,
   render::RenderContext&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfcc60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_6,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_6&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_6&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (char const*)
            ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
                     render::Texture::Desc_const&, unsigned int)::$_6::operator()(param_1, param_2);
    }

    // 0x100bfcc90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_6&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_6,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_6&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfcca0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_7,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_7&&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::__7,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __7* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc_const&, unsigned int)::$_7,
                     void>((char const*)
                               ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
                                        render::Texture::Desc_const&, unsigned int)::$_7&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::Create(char const*, render::TextureType,
                                                               std::array<render::Texture::Desc, 2ul> const&, int,
                                                               render::Texture::Desc_const&, unsigned int)::$_7,
                                 void>((char const*)
                                           ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                                    int, render::Texture::Desc_const&, unsigned int)::$_7&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::Create(char const*, render::TextureType,
                                                   std::array<render::Texture::Desc, 2ul> const&, int,
                                                   render::Texture::Desc_const&, unsigned int)::$_7,
                     void>((char const*)
                               ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
                                        render::Texture::Desc_const&, unsigned int)::$_7&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfcce0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfccf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_7,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_7&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bfcd00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_7,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*,
   render::RenderContext&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfcd10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Create(char const*,
   render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
   render::Texture::Desc const&, unsigned int)::$_7,
   void>(render::RenderTargets::Create(char const*, render::TextureType,
   std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&,
   unsigned int)::$_7&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_7&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (char const*)
            ->Create(render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int,
                     render::Texture::Desc_const&, unsigned int)::$_7::operator()(param_1, param_2);
    }

    // 0x100bfcd30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7, void>(render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&, int, render::Texture::Desc const&, unsigned int)::$_7&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Create(char const*, render::TextureType, std::array<render::Texture::Desc, 2ul> const&,
                                      int, render::Texture::Desc_const&, unsigned int)::$_7,
        void>(render::RenderTargets::Create(char const*, render::TextureType,
                                            std::array<render::Texture::Desc, 2ul> const&, int,
                                            render::Texture::Desc_const&, unsigned int)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfcff0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::__8, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __8* param_1) {
        long lVar1;

        *(undefined8*)this = 0;
        lVar1 = param_1->field_8;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(long*)(this + 24) = lVar1;
        *(long*)(this + 32) = param_1->field_16;
        *(code**)(this + 144) =
            function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
                unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
                unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
                unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd040, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd050, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned
   long, unsigned long const*)::$_8,
   void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long
   const*)::$_8&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfd070, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd080, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned
   long, unsigned long const*)::$_8,
   void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long
   const*)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        unsigned long->SetEnabledRenderTargets(unsigned long const*)::$_8::operator()(param_1, param_2);
    }

    // 0x100bfd3a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8, void>(
        render::RenderTargets::SetEnabledRenderTargets(unsigned long, unsigned long const*)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfd3b0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::__9, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __9* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
            int->SetTargetCubeMapFace(render::CubeFace)::$_9&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
            int->SetTargetCubeMapFace(render::CubeFace)::$_9&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
            int->SetTargetCubeMapFace(render::CubeFace)::$_9&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd3f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd400, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int,
   render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int,
   render::CubeFace)::$_9&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfd410, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd420, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int,
   render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int,
   render::CubeFace)::$_9&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        int->SetTargetCubeMapFace(render::CubeFace)::$_9::operator()(param_1, param_2);
    }

    // 0x100bfd610, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9, void>(
        render::RenderTargets::SetTargetCubeMapFace(int, render::CubeFace)::$_9&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfd620, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::__10, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __10* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)&param_1->field_8;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)&param_1->field_16;
        *(code**)(this + 144) = function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
            int->SetTargetMipLayerLevel(int, int)::$_10&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
            int->SetTargetMipLayerLevel(int, int)::$_10&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
            int->SetTargetMipLayerLevel(int, int)::$_10&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd670, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd680, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int,
   int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int,
   int)::$_10&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfd6a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd6b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int,
   int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int,
   int)::$_10&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        int->SetTargetMipLayerLevel(int, int)::$_10::operator()(param_1, param_2);
    }

    // 0x100bfd810, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10, void>(
        render::RenderTargets::SetTargetMipLayerLevel(int, int, int)::$_10&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfd8f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::__11,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __11* param_1) {
        *(undefined8*)this = 0;
        (eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::__11((__11*)(this + 16), (__11*)param_1);
        *(code**)(this + 144) =
            function<render::RenderTargets::BindColourTargetTextures(
                         eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
                         render::CubeFace)::$_11,
                     void>((eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
                               ->BindColourTargetTextures(int, int, render::CubeFace)::$_11&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::BindColourTargetTextures(
                                     eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int,
                                     int, render::CubeFace)::$_11,
                                 void>((eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
                                           ->BindColourTargetTextures(int, int, render::CubeFace)::$_11&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::BindColourTargetTextures(
                         eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
                         render::CubeFace)::$_11,
                     void>((eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
                               ->BindColourTargetTextures(int, int, render::CubeFace)::$_11&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfd970, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(
        eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
        render::CubeFace)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd980, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*,
   2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11,
   void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*,
   2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(
        eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
        render::CubeFace)::$_11&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        (eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::__11(param_2, param_1);
    }

    // 0x100bfd9d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(
        eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
        render::CubeFace)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfd9e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*,
   2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11,
   void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*,
   2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(
        eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
        render::CubeFace)::$_11&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::operator()(param_1, param_2);
    }

    // 0x100bfdc20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(
        eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
        render::CubeFace)::$_11&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100bfdc30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11, void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*,
   2ul, true, eastl::allocator> const&, int, int, render::CubeFace)::$_11,
   void>(render::RenderTargets::BindColourTargetTextures(eastl::fixed_vector<render::Texture*,
   2ul, true, eastl::allocator> const&, int, int,
   render::CubeFace)::$_11&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindColourTargetTextures(
            eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
            render::CubeFace)::$_11,
        void>(render::RenderTargets::BindColourTargetTextures(
        eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&, int, int,
        render::CubeFace)::$_11&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        (eastl::fixed_vector<render::Texture*, 2ul, true, eastl::allocator> const&)
            ->BindColourTargetTextures(int, int, render::CubeFace)::$_11::~__11((__11*)this);
    }

    // 0x100bfdc40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::__12, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __12* param_1) {
        Texture* pTVar1;

        *(undefined8*)this = 0;
        pTVar1 = param_1->field_8;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(Texture**)(this + 24) = pTVar1;
        *(code**)(this + 144) =
            function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
                (render::Texture*)->BindDepthStencilTargetTexture()::$_12&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
            (render::Texture*)->BindDepthStencilTargetTexture()::$_12&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
                (render::Texture*)->BindDepthStencilTargetTexture()::$_12&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfdc80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfdc90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12,
   void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bfdca0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfdcb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12,
   void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        (render::Texture*)->BindDepthStencilTargetTexture()::$_12::operator()(param_1, param_2);
    }

    // 0x100bfde50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12, void>(
        render::RenderTargets::BindDepthStencilTargetTexture(render::Texture*)::$_12&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfde60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::__13, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __13* param_1) {
        *(undefined8*)this = 0;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfdea0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfdeb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Unbind()::$_13,
   void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bfdec0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfded0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Unbind()::$_13,
   void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderTargets::Unbind()::$_13::operator()(param_1, param_2);
    }

    // 0x100bfe1d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Unbind()::$_13, void>(render::RenderTargets::Unbind()::$_13&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfe1e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::__14, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __14* param_1) {
        *(undefined8*)this = 0;
        *(RenderTargets**)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
            render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfe220, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfe230, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14,
   void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bfe240, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfe250, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14,
   void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14::operator()(param_1, param_2);
    }

    // 0x100bfe350, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14, void>(
        render::RenderTargets::UnbindDepthStencilTargetTexture()::$_14&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100bfe360, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::__15, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __15* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 144) = function<render::RenderTargets::Invalidate() const ::$_15, void>(
            render::RenderTargets::Invalidate() const ::$_15&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::RenderTargets::Invalidate() const ::$_15, void>(
            render::RenderTargets::Invalidate() const ::$_15&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::RenderTargets::Invalidate() const ::$_15, void>(
            render::RenderTargets::Invalidate() const ::$_15&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100bfe3a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfe3b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15,
   void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100bfe3c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bfe3d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15,
   void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_15::operator()(param_1, param_2);
    }

    // 0x100bfe610, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::RenderTargets::Invalidate() const::$_15, void>(render::RenderTargets::Invalidate() const::$_15&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::RenderTargets::Invalidate() const ::$_15, void>(render::RenderTargets::Invalidate() const ::$_15&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c06160, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17, void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::__17,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __17* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)::__17(
            (SetShaderConstMatrix4_int_unsigned_int_jag__math__Matrix44T<float> const__unsigned_int_*)(this + 16),
            (__17*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                  unsigned int) const ::$_17,
                     void>(int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)
                               const ::$_17&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstMatrix4(
                                     int, unsigned int, math::Matrix44T<float> const*, unsigned int) const ::$_17,
                                 void>(
            int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int) const ::$_17&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                                  unsigned int) const ::$_17,
                     void>(int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)
                               const ::$_17&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c061e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17, void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c061f0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17, void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int,
   unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17,
   void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int,
   math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstMatrix4(unsigned int, math::Matrix44T<float> const*, unsigned int)::__17(param_2, param_1);
    }

    // 0x100c06240, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17, void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06250, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17, void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int,
   unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17,
   void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int,
   math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_17::operator()(param_1, param_2);
    }

    // 0x100c062e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17, void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int) const::$_17&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*, unsigned int)
            const ::$_17,
        void>(render::ShaderProgram::SetShaderConstMatrix4(int, unsigned int, math::Matrix44T<float> const*,
                                                           unsigned int) const ::$_17&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c064b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18, void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::__18,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __18* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)::__18(
            (SetShaderConstMatrix3_int_unsigned_int_jag__math__Matrix33T<float> const__unsigned_int_*)(this + 16),
            (__18*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                  unsigned int) const ::$_18,
                     void>(int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)
                               const ::$_18&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstMatrix3(
                                     int, unsigned int, math::Matrix33T<float> const*, unsigned int) const ::$_18,
                                 void>(
            int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int) const ::$_18&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                                  unsigned int) const ::$_18,
                     void>(int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)
                               const ::$_18&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06530, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18, void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06540, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18, void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int,
   unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18,
   void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int,
   math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstMatrix3(unsigned int, math::Matrix33T<float> const*, unsigned int)::__18(param_2, param_1);
    }

    // 0x100c06590, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18, void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c065a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18, void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int,
   unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18,
   void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int,
   math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_18::operator()(param_1, param_2);
    }

    // 0x100c06630, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18, void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int) const::$_18&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*, unsigned int)
            const ::$_18,
        void>(render::ShaderProgram::SetShaderConstMatrix3(int, unsigned int, math::Matrix33T<float> const*,
                                                           unsigned int) const ::$_18&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c06850, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19, void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::__19,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __19* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)::__19(
            (SetShaderConstMatrix2_int_unsigned_int_jag__math__Matrix22T<float> const__unsigned_int_*)(this + 16),
            (__19*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                  unsigned int) const ::$_19,
                     void>(int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)
                               const ::$_19&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstMatrix2(
                                     int, unsigned int, math::Matrix22T<float> const*, unsigned int) const ::$_19,
                                 void>(
            int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int) const ::$_19&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                                  unsigned int) const ::$_19,
                     void>(int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)
                               const ::$_19&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c068d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19, void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c068e0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19, void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int,
   unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19,
   void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int,
   math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstMatrix2(unsigned int, math::Matrix22T<float> const*, unsigned int)::__19(param_2, param_1);
    }

    // 0x100c06930, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19, void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06940, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19, void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int,
   unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19,
   void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int,
   math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_19::operator()(param_1, param_2);
    }

    // 0x100c069d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19, void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int) const::$_19&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*, unsigned int)
            const ::$_19,
        void>(render::ShaderProgram::SetShaderConstMatrix2(int, unsigned int, math::Matrix22T<float> const*,
                                                           unsigned int) const ::$_19&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c06a90, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20, void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::__20,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __20* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int)::__20(
            (SetShaderConstFloat4Array_int_unsigned_int_float_const__unsigned_int_*)(this + 16), (__20*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                         const ::$_20,
                     void>(int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int) const ::$_20&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                         const ::$_20,
                     void>(int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int) const ::$_20&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                         const ::$_20,
                     void>(int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int) const ::$_20&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06b10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20, void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06b20, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20, void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int,
   unsigned int, float const*, unsigned int) const::$_20,
   void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*,
   unsigned int) const::$_20&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstFloat4Array(unsigned int, float const*, unsigned int)::__20(param_2, param_1);
    }

    // 0x100c06b70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20, void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06b80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20, void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int,
   unsigned int, float const*, unsigned int) const::$_20,
   void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*,
   unsigned int) const::$_20&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_20::operator()(param_1, param_2);
    }

    // 0x100c06c20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20, void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const::$_20&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int) const ::$_20,
        void>(render::ShaderProgram::SetShaderConstFloat4Array(int, unsigned int, float const*, unsigned int)
                  const ::$_20&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c06ce0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21, void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::__21,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __21* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int)::__21(
            (SetShaderConstUint4Array_int_unsigned_int_unsigned_int_const__unsigned_int_*)(this + 16), (__21*)param_1);
        *(code**)(this + 144) = function<render::ShaderProgram::SetShaderConstUint4Array(
                                             int, unsigned int, unsigned int const*, unsigned int) const ::$_21,
                                         void>(
            int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int) const ::$_21&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*,
                                                                                 unsigned int) const ::$_21,
                                 void>(int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int)
                                           const ::$_21&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::ShaderProgram::SetShaderConstUint4Array(
                                             int, unsigned int, unsigned int const*, unsigned int) const ::$_21,
                                         void>(
            int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int) const ::$_21&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06d60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21, void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06d70, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21, void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int,
   unsigned int, unsigned int const*, unsigned int) const::$_21,
   void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int
   const*, unsigned int) const::$_21&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstUint4Array(unsigned int, unsigned int const*, unsigned int)::__21(param_2, param_1);
    }

    // 0x100c06dc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21, void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06dd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21, void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int,
   unsigned int, unsigned int const*, unsigned int) const::$_21,
   void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int
   const*, unsigned int) const::$_21&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_21::operator()(param_1, param_2);
    }

    // 0x100c06e70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21, void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int) const::$_21&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_21,
        void>(render::ShaderProgram::SetShaderConstUint4Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_21&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c06e80, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22, void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::__22, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __22* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstFloat3Array(unsigned int, float const*)::__22(
            (SetShaderConstFloat3Array_int_unsigned_int_float_const__*)(this + 16), (__22*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22,
                     void>(int->SetShaderConstFloat3Array(unsigned int, float const*) const ::$_22&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22,
                     void>(int->SetShaderConstFloat3Array(unsigned int, float const*) const ::$_22&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22,
                     void>(int->SetShaderConstFloat3Array(unsigned int, float const*) const ::$_22&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c06f00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22, void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06f10, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22, void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int,
   unsigned int, float const*) const::$_22,
   void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*)
   const::$_22&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstFloat3Array(unsigned int, float const*)::__22(param_2, param_1);
    }

    // 0x100c06f60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22, void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c06f70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22, void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int,
   unsigned int, float const*) const::$_22,
   void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*)
   const::$_22&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_22::operator()(param_1, param_2);
    }

    // 0x100c07010, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22, void>(render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const::$_22&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22, void>(
        render::ShaderProgram::SetShaderConstFloat3Array(int, unsigned int, float const*) const ::$_22&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07020, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23, void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::__23, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __23* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstFloat2Array(unsigned int, float const*)::__23(
            (SetShaderConstFloat2Array_int_unsigned_int_float_const__*)(this + 16), param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23,
                     void>(int->SetShaderConstFloat2Array(unsigned int, float const*) const ::$_23&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23,
                     void>(int->SetShaderConstFloat2Array(unsigned int, float const*) const ::$_23&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23,
                     void>(int->SetShaderConstFloat2Array(unsigned int, float const*) const ::$_23&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c070a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23, void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c070b0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23, void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int,
   unsigned int, float const*) const::$_23,
   void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*)
   const::$_23&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstFloat2Array(unsigned int, float const*)::__23(param_2, param_1);
    }

    // 0x100c07100, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23, void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07110, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23, void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int,
   unsigned int, float const*) const::$_23,
   void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*)
   const::$_23&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_23::operator()(param_1, param_2);
    }

    // 0x100c071b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23, void>(render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const::$_23&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23, void>(
        render::ShaderProgram::SetShaderConstFloat2Array(int, unsigned int, float const*) const ::$_23&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c071c0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24, void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::__24,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __24* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int)::__24(
            (SetShaderConstFloat1Array_int_unsigned_int_float_const__unsigned_int_*)(this + 16), (__24*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                         const ::$_24,
                     void>(int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int) const ::$_24&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                         const ::$_24,
                     void>(int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int) const ::$_24&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                         const ::$_24,
                     void>(int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int) const ::$_24&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07240, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24, void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07250, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24, void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int,
   unsigned int, float const*, unsigned int) const::$_24,
   void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*,
   unsigned int) const::$_24&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstFloat1Array(unsigned int, float const*, unsigned int)::__24(param_2, param_1);
    }

    // 0x100c072a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24, void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c072b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24, void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int,
   unsigned int, float const*, unsigned int) const::$_24,
   void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*,
   unsigned int) const::$_24&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_24::operator()(param_1, param_2);
    }

    // 0x100c07350, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24, void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const::$_24&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int) const ::$_24,
        void>(render::ShaderProgram::SetShaderConstFloat1Array(int, unsigned int, float const*, unsigned int)
                  const ::$_24&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07360, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25, void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::__25, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __25* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstInt4Array(unsigned int, int const*)::__25(
            (SetShaderConstInt4Array_int_unsigned_int_int_const__*)(this + 16), (__25*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
                int->SetShaderConstInt4Array(unsigned int, int const*) const ::$_25&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
                int->SetShaderConstInt4Array(unsigned int, int const*) const ::$_25&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
                int->SetShaderConstInt4Array(unsigned int, int const*) const ::$_25&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c073e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25, void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c073f0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25, void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int,
   unsigned int, int const*) const::$_25,
   void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*)
   const::$_25&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstInt4Array(unsigned int, int const*)::__25(param_2, param_1);
    }

    // 0x100c07440, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25, void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07450, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25, void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int,
   unsigned int, int const*) const::$_25,
   void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*)
   const::$_25&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_25::operator()(param_1, param_2);
    }

    // 0x100c074f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25, void>(render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const::$_25&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25, void>(
        render::ShaderProgram::SetShaderConstInt4Array(int, unsigned int, int const*) const ::$_25&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07500, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26, void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::__26, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __26* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstInt3Array(unsigned int, int const*)::__26(
            (SetShaderConstInt3Array_int_unsigned_int_int_const__*)(this + 16), (__26*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
                int->SetShaderConstInt3Array(unsigned int, int const*) const ::$_26&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
                int->SetShaderConstInt3Array(unsigned int, int const*) const ::$_26&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
                int->SetShaderConstInt3Array(unsigned int, int const*) const ::$_26&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07580, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26, void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07590, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26, void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int,
   unsigned int, int const*) const::$_26,
   void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*)
   const::$_26&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstInt3Array(unsigned int, int const*)::__26(param_2, param_1);
    }

    // 0x100c075e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26, void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c075f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26, void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int,
   unsigned int, int const*) const::$_26,
   void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*)
   const::$_26&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_26::operator()(param_1, param_2);
    }

    // 0x100c07690, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26, void>(render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const::$_26&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26, void>(
        render::ShaderProgram::SetShaderConstInt3Array(int, unsigned int, int const*) const ::$_26&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c076a0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27, void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::__27, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __27* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstInt2Array(unsigned int, int const*)::__27(
            (SetShaderConstInt2Array_int_unsigned_int_int_const__*)(this + 16), param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
                int->SetShaderConstInt2Array(unsigned int, int const*) const ::$_27&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
                int->SetShaderConstInt2Array(unsigned int, int const*) const ::$_27&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
                int->SetShaderConstInt2Array(unsigned int, int const*) const ::$_27&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07720, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27, void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07730, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27, void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int,
   unsigned int, int const*) const::$_27,
   void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*)
   const::$_27&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstInt2Array(unsigned int, int const*)::__27(param_2, param_1);
    }

    // 0x100c07780, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27, void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07790, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27, void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int,
   unsigned int, int const*) const::$_27,
   void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*)
   const::$_27&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_27::operator()(param_1, param_2);
    }

    // 0x100c07830, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27, void>(render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const::$_27&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27, void>(
        render::ShaderProgram::SetShaderConstInt2Array(int, unsigned int, int const*) const ::$_27&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07840, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28, void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::__28, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __28* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstInt1Array(unsigned int, int const*)::__28(
            (SetShaderConstInt1Array_int_unsigned_int_int_const__*)(this + 16), (__28*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
                int->SetShaderConstInt1Array(unsigned int, int const*) const ::$_28&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
                int->SetShaderConstInt1Array(unsigned int, int const*) const ::$_28&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
                int->SetShaderConstInt1Array(unsigned int, int const*) const ::$_28&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c078c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28, void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c078d0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28, void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int,
   unsigned int, int const*) const::$_28,
   void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*)
   const::$_28&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstInt1Array(unsigned int, int const*)::__28(param_2, param_1);
    }

    // 0x100c07920, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28, void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07930, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28, void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int,
   unsigned int, int const*) const::$_28,
   void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*)
   const::$_28&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_28::operator()(param_1, param_2);
    }

    // 0x100c079d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28, void>(render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const::$_28&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28, void>(
        render::ShaderProgram::SetShaderConstInt1Array(int, unsigned int, int const*) const ::$_28&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c079e0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29, void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::__29,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __29* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int)::__29(
            (SetShaderConstUInt1Array_int_unsigned_int_unsigned_int_const__unsigned_int_*)(this + 16), param_1);
        *(code**)(this + 144) = function<render::ShaderProgram::SetShaderConstUInt1Array(
                                             int, unsigned int, unsigned int const*, unsigned int) const ::$_29,
                                         void>(
            int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int) const ::$_29&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*,
                                                                                 unsigned int) const ::$_29,
                                 void>(int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int)
                                           const ::$_29&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::ShaderProgram::SetShaderConstUInt1Array(
                                             int, unsigned int, unsigned int const*, unsigned int) const ::$_29,
                                         void>(
            int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int) const ::$_29&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07a60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29, void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07a70, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29, void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int,
   unsigned int, unsigned int const*, unsigned int) const::$_29,
   void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int
   const*, unsigned int) const::$_29&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstUInt1Array(unsigned int, unsigned int const*, unsigned int)::__29(param_2, param_1);
    }

    // 0x100c07ac0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29, void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07ad0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29, void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int,
   unsigned int, unsigned int const*, unsigned int) const::$_29,
   void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int
   const*, unsigned int) const::$_29&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_29::operator()(param_1, param_2);
    }

    // 0x100c07b70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29, void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int) const::$_29&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
            const ::$_29,
        void>(render::ShaderProgram::SetShaderConstUInt1Array(int, unsigned int, unsigned int const*, unsigned int)
                  const ::$_29&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07b80, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30, void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::__30, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __30* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30,
                     void>(int->SetShaderConstVector4(math::Vector4T<float> const*) const ::$_30&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30,
                     void>(int->SetShaderConstVector4(math::Vector4T<float> const*) const ::$_30&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30,
                     void>(int->SetShaderConstVector4(math::Vector4T<float> const*) const ::$_30&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07bd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30, void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07be0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30, void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int,
   math::Vector4T<float> const*) const::$_30,
   void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*)
   const::$_30&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
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

    // 0x100c07c00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30, void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07c10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30, void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int,
   math::Vector4T<float> const*) const::$_30,
   void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*)
   const::$_30&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_30::operator()(param_1, param_2);
    }

    // 0x100c07ca0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30, void>(render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const::$_30&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30, void>(
        render::ShaderProgram::SetShaderConstVector4(int, math::Vector4T<float> const*) const ::$_30&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07cb0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31, void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::__31, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __31* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 16);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31,
                     void>(int->SetShaderConstVector3(math::Vector3T<float> const*) const ::$_31&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31,
                     void>(int->SetShaderConstVector3(math::Vector3T<float> const*) const ::$_31&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31,
                     void>(int->SetShaderConstVector3(math::Vector3T<float> const*) const ::$_31&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07d00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31, void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07d10, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31, void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int,
   math::Vector3T<float> const*) const::$_31,
   void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*)
   const::$_31&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c07d30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31, void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07d40, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31, void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int,
   math::Vector3T<float> const*) const::$_31,
   void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*)
   const::$_31&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_31::operator()(param_1, param_2);
    }

    // 0x100c07dd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31, void>(render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const::$_31&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31, void>(
        render::ShaderProgram::SetShaderConstVector3(int, math::Vector3T<float> const*) const ::$_31&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c07ea0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32, void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::__32,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __32* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)::__32(
            (SetShaderConstVector4_int_unsigned_int_jag__math__Vector4T<float> const__unsigned_int_*)(this + 16),
            (__32*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                  unsigned int) const ::$_32,
                     void>(int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)
                               const ::$_32&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstVector4(
                                     int, unsigned int, math::Vector4T<float> const*, unsigned int) const ::$_32,
                                 void>(
            int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int) const ::$_32&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                                  unsigned int) const ::$_32,
                     void>(int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)
                               const ::$_32&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c07f20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32, void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07f30, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32, void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int,
   unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32,
   void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int,
   math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstVector4(unsigned int, math::Vector4T<float> const*, unsigned int)::__32(param_2, param_1);
    }

    // 0x100c07f80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32, void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c07f90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32, void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int,
   unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32,
   void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int,
   math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_32::operator()(param_1, param_2);
    }

    // 0x100c08030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32, void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int) const::$_32&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*, unsigned int)
            const ::$_32,
        void>(render::ShaderProgram::SetShaderConstVector4(int, unsigned int, math::Vector4T<float> const*,
                                                           unsigned int) const ::$_32&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08200, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33, void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::__33,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __33* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*)::__33(
            (SetShaderConstVector3_int_unsigned_int_jag__math__Vector3T<float> const__*)(this + 16), (__33*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                         const ::$_33,
                     void>(int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*) const ::$_33&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                         const ::$_33,
                     void>(int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*) const ::$_33&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                         const ::$_33,
                     void>(int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*) const ::$_33&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08280, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33, void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08290, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33, void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int,
   unsigned int, math::Vector3T<float> const*) const::$_33,
   void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int,
   math::Vector3T<float> const*) const::$_33&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstVector3(unsigned int, math::Vector3T<float> const*)::__33(param_2, param_1);
    }

    // 0x100c082e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33, void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c082f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33, void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int,
   unsigned int, math::Vector3T<float> const*) const::$_33,
   void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int,
   math::Vector3T<float> const*) const::$_33&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_33::operator()(param_1, param_2);
    }

    // 0x100c08390, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33, void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const::$_33&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*) const ::$_33,
        void>(render::ShaderProgram::SetShaderConstVector3(int, unsigned int, math::Vector3T<float> const*)
                  const ::$_33&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08550, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34, void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::__34,
        void>(function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __34* param_1) {
        *(undefined8*)this = 0;
        int->SetShaderConstVector2(unsigned int, math::Vector2T<float> const*)::__34(
            (SetShaderConstVector2_int_unsigned_int_jag__math__Vector2T<float> const__*)(this + 16), (__34*)param_1);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                         const ::$_34,
                     void>(int->SetShaderConstVector2(unsigned int, math::Vector2T<float> const*) const ::$_34&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                         const ::$_34,
                     void>(int->SetShaderConstVector2(unsigned int, math::Vector2T<float> const*) const ::$_34&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                         const ::$_34,
                     void>(int->SetShaderConstVector2(unsigned int, math::Vector2T<float> const*) const ::$_34&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c085d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34, void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c085e0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34, void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int,
   unsigned int, math::Vector2T<float> const*) const::$_34,
   void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int,
   math::Vector2T<float> const*) const::$_34&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->SetShaderConstVector2(unsigned int, math::Vector2T<float> const*)::__34(param_2, param_1);
    }

    // 0x100c08630, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34, void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08640, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34, void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int,
   unsigned int, math::Vector2T<float> const*) const::$_34,
   void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int,
   math::Vector2T<float> const*) const::$_34&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_34::operator()(param_1, param_2);
    }

    // 0x100c086e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34, void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const::$_34&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*) const ::$_34,
        void>(render::ShaderProgram::SetShaderConstVector2(int, unsigned int, math::Vector2T<float> const*)
                  const ::$_34&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c086f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35, void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::__35, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __35* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
                int->SetShaderConstFloat4(float, float, float, float) const ::$_35&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
                int->SetShaderConstFloat4(float, float, float, float) const ::$_35&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
                int->SetShaderConstFloat4(float, float, float, float) const ::$_35&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08740, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35, void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08750, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35, void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int,
   float, float, float, float) const::$_35,
   void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float)
   const::$_35&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
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

    // 0x100c08770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35, void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08780, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35, void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int,
   float, float, float, float) const::$_35,
   void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float)
   const::$_35&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_35::operator()(param_1, param_2);
    }

    // 0x100c08820, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35, void>(render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const::$_35&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35, void>(
        render::ShaderProgram::SetShaderConstFloat4(int, float, float, float, float) const ::$_35&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08830, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::__36, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __36* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 16);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
                int->SetShaderConstFloat3(float, float, float) const ::$_36&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
                int->SetShaderConstFloat3(float, float, float) const ::$_36&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
                int->SetShaderConstFloat3(float, float, float) const ::$_36&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08880, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08890, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int,
   float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int,
   float, float, float) const::$_36&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c088b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c088c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int,
   float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int,
   float, float, float) const::$_36&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_36::operator()(param_1, param_2);
    }

    // 0x100c08950, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36, void>(render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const::$_36&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36, void>(
        render::ShaderProgram::SetShaderConstFloat3(int, float, float, float) const ::$_36&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08960, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::__37, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __37* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 16);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
                int->SetShaderConstFloat2(float, float) const ::$_37&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
            int->SetShaderConstFloat2(float, float) const ::$_37&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
                int->SetShaderConstFloat2(float, float) const ::$_37&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c089b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c089c0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int,
   float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float,
   float) const::$_37&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c089e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c089f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int,
   float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float,
   float) const::$_37&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_37::operator()(param_1, param_2);
    }

    // 0x100c08a80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37, void>(render::ShaderProgram::SetShaderConstFloat2(int, float, float) const::$_37&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37, void>(
        render::ShaderProgram::SetShaderConstFloat2(int, float, float) const ::$_37&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08a90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::__38, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __38* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
            int->SetShaderConstFloat1(float) const ::$_38&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
            int->SetShaderConstFloat1(float) const ::$_38&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
            int->SetShaderConstFloat1(float) const ::$_38&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08ad0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08ae0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int,
   float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float)
   const::$_38&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c08af0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08b00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int,
   float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float)
   const::$_38&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_38::operator()(param_1, param_2);
    }

    // 0x100c08b90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38, void>(render::ShaderProgram::SetShaderConstFloat1(int, float) const::$_38&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38, void>(
        render::ShaderProgram::SetShaderConstFloat1(int, float) const ::$_38&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08ba0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::__39, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __39* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        uVar2 = *(undefined8*)(param_1 + 16);
        uVar3 = *(undefined8*)(param_1 + 24);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = uVar2;
        *(undefined8*)(this + 40) = uVar3;
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
                int->SetShaderConstInt4(int, int, int, int) const ::$_39&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
            int->SetShaderConstInt4(int, int, int, int) const ::$_39&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
                int->SetShaderConstInt4(int, int, int, int) const ::$_39&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08bf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08c00, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int,
   int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int,
   int, int, int) const::$_39&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
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

    // 0x100c08c20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08c30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int,
   int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int,
   int, int, int) const::$_39&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_39::operator()(param_1, param_2);
    }

    // 0x100c08cc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39, void>(render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const::$_39&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39, void>(
        render::ShaderProgram::SetShaderConstInt4(int, int, int, int, int) const ::$_39&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08cd0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::__40, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __40* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 16);
        *(code**)(this + 144) =
            function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
                int->SetShaderConstInt3(int, int, int) const ::$_40&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
            int->SetShaderConstInt3(int, int, int) const ::$_40&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
                int->SetShaderConstInt3(int, int, int) const ::$_40&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08d20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08d30, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int,
   int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int,
   int) const::$_40&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c08d50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08d60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int,
   int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int,
   int) const::$_40&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_40::operator()(param_1, param_2);
    }

    // 0x100c08df0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40, void>(render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const::$_40&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40, void>(
        render::ShaderProgram::SetShaderConstInt3(int, int, int, int) const ::$_40&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c08e00, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::__41, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __41* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 16);
        *(code**)(this + 144) = function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
            int->SetShaderConstInt2(int, int) const ::$_41&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
            int->SetShaderConstInt2(int, int) const ::$_41&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
            int->SetShaderConstInt2(int, int) const ::$_41&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c08e50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08e60, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int,
   int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int)
   const::$_41&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c08e80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c08e90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int,
   int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int)
   const::$_41&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_41::operator()(param_1, param_2);
    }

    // 0x100c08f20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41, void>(render::ShaderProgram::SetShaderConstInt2(int, int, int) const::$_41&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41, void>(
        render::ShaderProgram::SetShaderConstInt2(int, int, int) const ::$_41&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c091a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::__42, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __42* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
            int->SetShaderConstInt1(int) const ::$_42&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
            int->SetShaderConstInt1(int) const ::$_42&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
            int->SetShaderConstInt1(int) const ::$_42&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c091e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c091f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int,
   int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int)
   const::$_42&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100c09200, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c09210, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int,
   int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int)
   const::$_42&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        const ::$_42::operator()(param_1, param_2);
    }

    // 0x100c09290, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42, void>(render::ShaderProgram::SetShaderConstInt1(int, int) const::$_42&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42, void>(
        render::ShaderProgram::SetShaderConstInt1(int, int) const ::$_42&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x100c0ac10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::__44, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __44* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) =
            function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this =
            function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) =
            function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c0ac50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c0ac60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44,
   void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100c0ac70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100c0ac80, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44,
   void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        render::ShaderProgram::OnEndFrame()::$_44::operator()(param_1, param_2);
    }

    // 0x100c0ace0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::ShaderProgram::OnEndFrame()::$_44, void>(render::ShaderProgram::OnEndFrame()::$_44&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x100bfe630, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::ShaderProgram>::type make_shared<render::ShaderProgram>()
    jag* make_shared<render::ShaderProgram>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ShaderProgram* local_28[2];

        pvVar1 = (void*)aligned_alloc(1888, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<render::ShaderProgram>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<render::ShaderProgram>, int, render::ShaderProgram*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100bfe820, 32 bytes, inline, placed by debug map only (low confidence)
    // render::ShaderProgram* placement_new<render::ShaderProgram>(void*)
    ShaderProgram* placement_new<render::ShaderProgram>(void* param_1) {
        render::ShaderProgram::ShaderProgram(param_1, "");
        return param_1;
    }

    // 0x100bfe840, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ShaderProgram>* placement_new<ref_counter_shared<render::ShaderProgram>, int, render::ShaderProgram*&>(void*, int&&, render::ShaderProgram*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<render::ShaderProgram>, int, render::ShaderProgram*&>(
        void* param_1, int* param_2, ShaderProgram** param_3) {
        ref_counter_shared<render::ShaderProgram>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100bfe860, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ShaderProgram>::ref_counter_shared(unsigned long, render::ShaderProgram*): jumps straight to the base-object constructor

    // 0x100bfe870, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ShaderProgram>::ref_counter_shared(unsigned long, render::ShaderProgram*)
    void ref_counter_shared<render::ShaderProgram>::ref_counter_shared(ulong param_1, ShaderProgram* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ShaderProgram**)(this + 24) = param_2;
    }

    // 0x100bfe8b0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ShaderProgram>::DeleteData()
    void ref_counter_shared<render::ShaderProgram>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 1856;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100c01ab0, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<render::ShaderProgram::CreateFromSourceString()::$_16>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, 24);
    }

    // 0x100c036f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::VertexShader>::type make_shared<render::VertexShader>()
    jag* make_shared<render::VertexShader>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        VertexShader* local_28[2];

        pvVar1 = (void*)aligned_alloc(176, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<render::VertexShader>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<render::VertexShader>, int, render::VertexShader*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100c03880, 32 bytes, inline, placed by debug map only (low confidence)
    // render::VertexShader* placement_new<render::VertexShader>(void*)
    VertexShader* placement_new<render::VertexShader>(void* param_1) {
        render::VertexShader::VertexShader(param_1);
        return param_1;
    }

    // 0x100c038a0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::VertexShader>* placement_new<ref_counter_shared<render::VertexShader>, int, render::VertexShader*&>(void*, int&&, render::VertexShader*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<render::VertexShader>, int, render::VertexShader*&>(
        void* param_1, int* param_2, VertexShader** param_3) {
        ref_counter_shared<render::VertexShader>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100c038c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::VertexShader>::ref_counter_shared(unsigned long, render::VertexShader*): jumps straight to the base-object constructor

    // 0x100c038d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::VertexShader>::ref_counter_shared(unsigned long, render::VertexShader*)
    void ref_counter_shared<render::VertexShader>::ref_counter_shared(ulong param_1, VertexShader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(VertexShader**)(this + 24) = param_2;
    }

    // 0x100c03910, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::VertexShader>::DeleteData()
    /* ref_counter_shared<render::PixelShader>::DeleteData() */

    void ref_counter_shared<render::PixelShader>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 144;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100c04350, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::PixelShader>::type make_shared<render::PixelShader>()
    jag* make_shared<render::PixelShader>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        PixelShader* local_28[2];

        pvVar1 = (void*)aligned_alloc(176, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<render::PixelShader>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<render::PixelShader>, int, render::PixelShader*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100c044e0, 32 bytes, inline, placed by debug map only (low confidence)
    // render::PixelShader* placement_new<render::PixelShader>(void*)
    PixelShader* placement_new<render::PixelShader>(void* param_1) {
        render::PixelShader::PixelShader(param_1);
        return param_1;
    }

    // 0x100c04500, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::PixelShader>* placement_new<ref_counter_shared<render::PixelShader>, int, render::PixelShader*&>(void*, int&&, render::PixelShader*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<render::PixelShader>, int, render::PixelShader*&>(void* param_1, int* param_2,
                                                                                       PixelShader** param_3) {
        ref_counter_shared<render::PixelShader>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100c04520, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::PixelShader>::ref_counter_shared(unsigned long, render::PixelShader*): jumps straight to the base-object constructor

    // 0x100c04530, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::PixelShader>::ref_counter_shared(unsigned long, render::PixelShader*)
    void ref_counter_shared<render::PixelShader>::ref_counter_shared(ulong param_1, PixelShader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74a8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PixelShader**)(this + 24) = param_2;
    }

    // 0x100c04f50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<render::ComputeShader>::type make_shared<render::ComputeShader>()
    jag* make_shared<render::ComputeShader>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        ComputeShader* local_28[2];

        pvVar1 = (void*)aligned_alloc(176, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<render::ComputeShader>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<render::ComputeShader>, int, render::ComputeShader*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100c050e0, 32 bytes, inline, placed by debug map only (low confidence)
    // render::ComputeShader* placement_new<render::ComputeShader>(void*)
    ComputeShader* placement_new<render::ComputeShader>(void* param_1) {
        render::ComputeShader::ComputeShader(param_1);
        return param_1;
    }

    // 0x100c05100, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ComputeShader>* placement_new<ref_counter_shared<render::ComputeShader>, int, render::ComputeShader*&>(void*, int&&, render::ComputeShader*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<render::ComputeShader>, int, render::ComputeShader*&>(
        void* param_1, int* param_2, ComputeShader** param_3) {
        ref_counter_shared<render::ComputeShader>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100c05120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ComputeShader>::ref_counter_shared(unsigned long, render::ComputeShader*): jumps straight to the base-object constructor

    // 0x100c05130, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::ComputeShader>::ref_counter_shared(unsigned long, render::ComputeShader*)
    void ref_counter_shared<render::ComputeShader>::ref_counter_shared(ulong param_1, ComputeShader* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ComputeShader**)(this + 24) = param_2;
    }

    // 0x100c0a0c0, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<render::ShaderProgram::PreRender()::$_43>,
                                                               SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                                               void()>>::deallocate(__packaged_task_func* param_1,
                                                                                    ulong param_2) {
        BucketManager::DeAllocate(param_1, 24);
    }

} // namespace jag

namespace jag::render {
    class ShaderStorageBuffer {
    public:
        ShaderStorageBuffer(ShaderStorageBuffer&&);
        ShaderStorageBuffer();
        ~ShaderStorageBuffer();
        void Destroy();
        void Create(unsigned int, unsigned int, void const*);
        MapRead(LockType, unsigned int, unsigned int, unsigned int);
        MapWrite(LockType, unsigned int, unsigned int, unsigned int);
        void Unmap();
        static /* 4 bytes */ BUFFER_TYPE; // = 37074

        // data members, from how the methods use this: 57 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        uint field_8; // offset 8
        char _unknown_12[4];
        long field_16; // offset 16
        int field_24;  // offset 24
        char _unknown_28[4];
        int field_32;  // offset 32
        uint field_36; // offset 36
        uint field_40; // offset 40
        uint field_44; // offset 44
        char _unknown_48[9];
    };

    class VertexElementDesc {
    public:
        hash() const;
        VertexElementDesc(unsigned int, char const*, ShaderInputFormat, bool, VertexUsage, unsigned int);
        operator==(VertexElementDesc const&) const;
        VertexElementDesc();

        // data members, from how the methods use this: 40 bytes
        uint field_0; // offset 0
        char _unknown_4[4];
        char* field_8; // offset 8
        uint field_16; // offset 16
        byte field_20; // offset 20
        char _unknown_21[3];
        uint field_24; // offset 24
        uint field_28; // offset 28
        uint field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x1001e19d0: the linker folded this into VertexBuffer::VertexBuffer(VertexBuffer&&), which has identical code
    ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&);

    // 0x100bde5b0, 32 bytes, complete-object constructor, inline, placed by class header (inline)
    // VertexElementDesc::VertexElementDesc(unsigned int, char const*, ShaderInputFormat, bool, VertexUsage, unsigned int)
    void VertexElementDesc::VertexElementDesc() {
        VertexElementDesc();
    }

    // 0x100bfc010, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&)
    /* PixelBuffer::PixelBuffer(PixelBuffer&&) */

    void PixelBuffer::PixelBuffer(PixelBuffer* param_1) {
        new (this) BufferInterface(param_1);
    }

    // 0x100c00890, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VertexElementDesc::VertexElementDesc(): jumps straight to the base-object constructor

    // 0x100c008a0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VertexElementDesc::VertexElementDesc()
    void VertexElementDesc::VertexElementDesc() {
        field_0 = 0;
        field_8 = (char*)0;
        field_16 = 4294967295;
        field_20 = 0;
        field_24 = 4294967295;
        field_28 = 0;
        field_32 = 0;
    }

    // 0x100c0b0c0, 64 bytes, inline, placed by debug map only (low confidence)
    // ShaderTextureSamplerData::operator==(ShaderTextureSamplerData const&) const
    /* ShaderTextureSamplerData::TEMPNAMEPLACEHOLDERVALUE(ShaderTextureSamplerData
   const&) const */

    undefined8 ShaderTextureSamplerData::operator==(ShaderTextureSamplerData* param_1) {
        if ((((field_16 == param_1->field_16) && (field_0 == param_1->field_0)) && (field_20 == param_1->field_20)) &&
            (field_8 == param_1->field_8)) {
            return CONCAT71((int7)((ulong)field_8 >> 8), field_24 == param_1->field_24);
        }
        return 0;
    }

    // 0x100c0b250, 48 bytes, inline, placed by debug map only (low confidence)
    // ShaderTextureImageData::operator==(ShaderTextureImageData const&) const
    /* ShaderTextureImageData::TEMPNAMEPLACEHOLDERVALUE(ShaderTextureImageData
   const&) const */

    undefined4 ShaderTextureImageData::operator==(ShaderTextureImageData* param_1) {
        if ((field_8 == param_1->field_8) && (field_0 == param_1->field_0)) {
            return CONCAT31((int3)((uint)field_12 >> 8), field_12 == param_1->field_12);
        }
        return 0;
    }

} // namespace jag::render

namespace jag::math {
    // 0x100bfc1e0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector4T<float>::Vector4T(float)
    void Vector4T<float>::Vector4T(float param_1) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_1;
        *(float*)(this + 8) = param_1;
        *(float*)(this + 12) = param_1;
    }

    // 0x100c06800, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix22T<float>::operator=(Matrix22T<float> const&)
    /* Matrix22T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix22T<float> const&) */

    Matrix22T<float>* Matrix22T<float>::operator=(Matrix22T* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            Vector2T<float>::operator=((Vector2T<float>*)(this + lVar1), (Vector2T*)(param_1 + lVar1));
            lVar1 = lVar1 + 8;
        } while (lVar1 != 16);
        return this;
    }

} // namespace jag::math
