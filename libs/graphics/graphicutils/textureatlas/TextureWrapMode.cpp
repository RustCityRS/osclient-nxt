// libs/graphics/graphicutils/textureatlas/TextureWrapMode.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class TextureWrapMode {
    public:
        TextureWrapMode(unsigned int arg1, const char* str);
        void GetByID(unsigned int arg1);
        static TextureWrapMode const* CLAMP;  // = &enumArray
        static TextureWrapMode const* REPEAT; // = &enumArray[1] /* TextureWrapMode(1, "repeat") */
        static TextureWrapMode const* MIRROR; // = &enumArray[2] /* TextureWrapMode(2, "mirror") */
        static TextureWrapMode const* BORDER; // = &enumArray[3] /* TextureWrapMode(3, "border") */
        static TextureWrapMode enumArray[4];  // initialised in its definition
    };

    // 0x100f485e0
    TextureWrapMode const* TextureWrapMode::CLAMP = &enumArray;

    // 0x100f485e8
    TextureWrapMode const* TextureWrapMode::REPEAT = &enumArray[1] /* TextureWrapMode(1, "repeat") */;

    // 0x100f485f0
    TextureWrapMode const* TextureWrapMode::MIRROR = &enumArray[2] /* TextureWrapMode(2, "mirror") */;

    // 0x100f485f8
    TextureWrapMode const* TextureWrapMode::BORDER = &enumArray[3] /* TextureWrapMode(3, "border") */;

    // 0x103bd9a58, set at startup by ___cxx_global_var_init.64
    TextureWrapMode TextureWrapMode::enumArray[4] = {
        /* [0] */ TextureWrapMode(0, "clamp"),
        /* [1] */ TextureWrapMode(1, "repeat"),
        /* [2] */ TextureWrapMode(2, "mirror"),
        /* [3] */ TextureWrapMode(3, "border"),
    };

    // 0x1004a2ca0: TextureWrapMode::TextureWrapMode(unsigned int, char const*) has the same machine code as MoveSpeed::MoveSpeed(int, char const*)

    // 0x100bbd900
    void TextureWrapMode::GetByID(unsigned int arg1) {
        uint32_t in_register_00000034;

        if (3 < (unsigned int)this) {
            LogAssert("id >= 0 && id < TextureWrapMode::ENUM_SIZE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "textureatlas/TextureWrapMode.cpp",
                      37, "TextureWrapMode: Invalid TextureWrapMode ID requested");
        }
        (*((array<TextureWrapMode, 4ul>*)((unsigned long)this &
                                          4294967295)))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
    }

    // 0x100bc0450
    void Screengrabber::ReadBackbuffer(int, int, int)::$_0::operator()(render::RenderContext& renderContext) const {
        auto arg2 = field_8->get();
        renderContext.ReadColourTargetData(nullptr, arg2, 7, 0, 0, 0, 0, field_16, field_20);
    }

} // namespace jag::graphicutils

namespace jag::fixedfunction {
    // 0x100bc0400
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100bc0410
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100bc0430
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100bc0440
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        int->ReadBackbuffer(int, int)::$_0::operator()((__0*)this, arg1);
    }

    // 0x100bc04a0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0, void>(
        graphicutils::Screengrabber::ReadBackbuffer(int, int, int)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x100bbfba0
    render::TextureCube* placement_new<render::TextureCube, char const (&)[34]>(void* arg1, char const (&arg2)[34]) {
        new (arg1) render::TextureCube(arg2);
        return arg1;
    }

    // 0x100bbfbc0
    ref_counter_shared<render::TextureCube>*
    placement_new<ref_counter_shared<render::TextureCube>, int, render::TextureCube*&>(void* arg1, int&& arg2,
                                                                                       render::TextureCube*& arg3) {
        new (arg1) ref_counter_shared<render::TextureCube>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

// 0x100bbe6e0
void frexp(float arg1, int* arg2) {
    _frexpf();
}
