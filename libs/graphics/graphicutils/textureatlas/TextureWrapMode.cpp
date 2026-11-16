// libs/graphics/graphicutils/textureatlas/TextureWrapMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class TextureWrapMode {
    public:
        TextureWrapMode(unsigned int, char const*);
        void GetByID(unsigned int);
        static TextureWrapMode const* /* 8 bytes */ CLAMP;  // = &enumArray
        static TextureWrapMode const* /* 8 bytes */ REPEAT; // = &enumArray[1] /* TextureWrapMode(1, "repeat") */
        static TextureWrapMode const* /* 8 bytes */ MIRROR; // = &enumArray[2] /* TextureWrapMode(2, "mirror") */
        static TextureWrapMode const* /* 8 bytes */ BORDER; // = &enumArray[3] /* TextureWrapMode(3, "border") */
        static TextureWrapMode /* 72 bytes */ enumArray[4]; // initialised in its definition
    };

    // 0x100f485e0, 8 bytes, __data
    TextureWrapMode const* TextureWrapMode::CLAMP = &enumArray;

    // 0x100f485e8, 8 bytes, __data
    TextureWrapMode const* TextureWrapMode::REPEAT = &enumArray[1] /* TextureWrapMode(1, "repeat") */;

    // 0x100f485f0, 8 bytes, __data
    TextureWrapMode const* TextureWrapMode::MIRROR = &enumArray[2] /* TextureWrapMode(2, "mirror") */;

    // 0x100f485f8, 8 bytes, __data
    TextureWrapMode const* TextureWrapMode::BORDER = &enumArray[3] /* TextureWrapMode(3, "border") */;

    // 0x103bd9a58, 72 bytes, __common; constructor folded by the linker, Ghidra calls it game::VarLifetime::VarLifetime; set at startup by ___cxx_global_var_init.64
    TextureWrapMode TextureWrapMode::enumArray[4] = {
        /* [0] */ TextureWrapMode(0, "clamp"),
        /* [1] */ TextureWrapMode(1, "repeat"),
        /* [2] */ TextureWrapMode(2, "mirror"),
        /* [3] */ TextureWrapMode(3, "border"),
    };

    // 0x1004a1f80: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureWrapMode::TextureWrapMode(unsigned int, char const*);

    // 0x1004a2ca0: the linker folded this into MoveSpeed::MoveSpeed(int, char const*), which has identical code
    TextureWrapMode::TextureWrapMode(unsigned int, char const*);

    // 0x100bbd900, 64 bytes, placed by class name and debug map
    // TextureWrapMode::GetByID(unsigned int)
    void TextureWrapMode::GetByID(uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id >= 0 && id < TextureWrapMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureWrapMode.cpp",
                      37, "TextureWrapMode: Invalid TextureWrapMode ID requested");
        }
        std::array<TextureWrapMode, 4ul>::operator[]((ulong)param_1);
    }

    // 0x100bc0450, 80 bytes, placed by debug map only (low confidence)
    // Screengrabber::ReadBackbuffer(int, int, int)::$_0::operator()(render::RenderContext&) const
    /* Screengrabber::ReadBackbuffer(int, int,
   int)::$_0::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const */

    void Screengrabber::ReadBackbuffer(int, int, int)::$_0::operator()(RenderContext* param_1) {
        undefined8 uVar1;

        uVar1 = std::unique_ptr<unsigned char[], std::default_delete<unsigned char[]>>::get(field_8);
        render::RenderContext::ReadColourTargetData(param_1, 0, uVar1, 7, 0, 0, 0, 0, field_16, field_20);
    }

    // 0x100bc0ab0, 112 bytes, placed by the data it initialises
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        new (&TextureWrapMode::enumArray) game::VarLifetime(0, "clamp");
        new (&DAT_103bd9a68) game::VarLifetime(1, "repeat");
        new (&DAT_103bd9a78) game::VarLifetime(2, "mirror");
        new (&DAT_103bd9a88) game::VarLifetime(3, "border");
    }

} // namespace jag::graphicutils

namespace jag::fixedfunction {
    // 0x100bc0400, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bc0410, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int,
   int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int,
   int)::$_0&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        *(undefined8*)((long)param_2 + 16) = *(undefined8*)((long)param_1 + 16);
        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x100bc0430, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100bc0440, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int,
   int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int,
   int)::$_0&&)::{lambda(void*, render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   render::RenderContext&) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        int->ReadBackbuffer(int, int)::$_0::operator()(param_1, param_2);
    }

    // 0x100bc04a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x100bbfba0, 32 bytes, inline, placed by debug map only (low confidence)
    // render::TextureCube* placement_new<render::TextureCube, char const (&) [34]>(void*, char const (&) [34])
    TextureCube* placement_new<render::TextureCube, char const (&)[34]>(void* param_1, char* param_2) {
        render::TextureCube::TextureCube(param_1, param_2);
        return param_1;
    }

    // 0x100bbfbc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::TextureCube>* placement_new<ref_counter_shared<render::TextureCube>, int, render::TextureCube*&>(void*, int&&, render::TextureCube*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<render::TextureCube>, int, render::TextureCube*&>(void* param_1, int* param_2,
                                                                                       TextureCube** param_3) {
        ref_counter_shared<render::TextureCube>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

// 0x100bbe6e0, 16 bytes, placed by debug map only (low confidence)
// frexp(float, int*)
void frexp(float param_1, int* param_2) {
    _frexpf();
}
