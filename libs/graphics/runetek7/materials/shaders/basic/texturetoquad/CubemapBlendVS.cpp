// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/CubemapBlendVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class CubemapBlendVS {
    public:
        // virtual methods in vtable order
        virtual ~CubemapBlendVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        CubemapBlendVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    CubemapBlendVS::~CubemapBlendVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    CubemapBlendVS::~CubemapBlendVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    CubemapBlendVS::~CubemapBlendVS();

    // 0x10088bcc0, 80 bytes, base-object constructor, placed by class name and debug map
    // CubemapBlendVS::CubemapBlendVS()
    void CubemapBlendVS::CubemapBlendVS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f16f08;
    }

    // 0x10088bd10, 16 bytes, complete-object constructor, placed by class name and debug map
    // CubemapBlendVS::CubemapBlendVS(): jumps straight to the base-object constructor

    // 0x10088bd20, 160 bytes, placed by class name and debug map
    // CubemapBlendVS::GetSource(EffectManager const&, EffectList const&) const
    CubemapBlendVS* CubemapBlendVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        undefined1 local_128[280];

        new (local_128) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        std::operator<<(
            (ostream*)(local_128 + 16),
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
        str();
        local_128->~VertexShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
