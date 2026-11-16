// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/CubemapBlendVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class CubemapBlendVS {
    public:
        // virtual methods in vtable order
        virtual ~CubemapBlendVS();
        virtual CubemapBlendVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        CubemapBlendVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: CubemapBlendVS::~CubemapBlendVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: CubemapBlendVS::~CubemapBlendVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088bcc0
    CubemapBlendVS::CubemapBlendVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088bd20
    CubemapBlendVS* CubemapBlendVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        uint8_t local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_128 + 16),
            "                                                                       \nattribute vec3 aPos;             "
            "                                      \nattribute vec2 aTexCoord;                                         "
            "     \n                                                                       \nuniform int uCubemapFace; "
            "                                             \n                                                           "
            "            \nout vec3 vTexCoord;                                                    \n                   "
            "                                                    \nvoid main()                                         "
            "                   \n{                                                                      \n   vec4 "
            "clipPos = vec4(aPos.x, aPos.y, aPos.z, 1.0);                   \n                                         "
            "                              \n   const int CUBEMAP_FACE_POS_X = 0;                                      "
            "                             \n   const int CUBEMAP_FACE_NEG_X = 1;                                       "
            "                            \n   const int CUBEMAP_FACE_POS_Y = 2;                                        "
            "                           \n   const int CUBEMAP_FACE_NEG_Y = 3;                                         "
            "                          \n   const int CUBEMAP_FACE_POS_Z = 4;                                          "
            "                         \n   const int CUBEMAP_FACE_NEG_Z = 5;                                           "
            "                        \n                                                                                "
            "                       \n   vec2 srcTexCoords = aTexCoord;                                                "
            "                      \n   vec3 texCoords = vec3(0.0, 0.0, 0.0);                                          "
            "                     \n   if (uCubemapFace == CUBEMAP_FACE_POS_X)                                         "
            "                    \n   {                                                                                "
            "                   \n       srcTexCoords.x = 1.0 - srcTexCoor..." /* TRUNCATED STRING LITERAL */
        );
        *this = local_128->str();
        return this;
    }

} // namespace jag::graphics
