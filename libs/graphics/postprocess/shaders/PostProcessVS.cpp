// libs/graphics/postprocess/shaders/PostProcessVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class PostProcessVS {
    public:
        PostProcessVS* BuildVSFragment();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x1009aeae0, 160 bytes, placed by class name and debug map
    // PostProcessVS::BuildVSFragment()
    PostProcessVS* PostProcessVS::BuildVSFragment() {
        undefined1 local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_128 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \n                                                                       \nout vec2 vTexCoord;       "
            "                                             \n                                                           "
            "            \nvoid main()                                                            \n{                  "
            "                                                    \n   vTexCoord = aTexCoord;                           "
            "                   \n   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);                    \n}           "
            "                                                           \n");
        str();
        local_128->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::postprocess
