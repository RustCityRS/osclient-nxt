// libs/graphics/postprocess/shaders/PostProcessVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class PostProcessVS {
    public:
        auto BuildVSFragment();
    };

    // 0x1009aeae0
    auto PostProcessVS::BuildVSFragment() {
        uint8_t local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \n                                                                       \nout vec2 vTexCoord;       "
            "                                             \n                                                           "
            "            \nvoid main()                                                            \n{                  "
            "                                                    \n   vTexCoord = aTexCoord;                           "
            "                   \n   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);                    \n}           "
            "                                                           \n");
        auto result = local_128->str();
        return result;
    }

} // namespace jag::postprocess
