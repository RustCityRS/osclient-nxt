// libs/graphics/runetek7/materials/shaders/effects/shadows/ShadowCascadeBoxVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeBoxVS {
    public:
        // virtual methods in vtable order
        virtual ~ShadowCascadeBoxVS();
        virtual ShadowCascadeBoxVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ShadowCascadeBoxVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ShadowCascadeBoxVS::~ShadowCascadeBoxVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ShadowCascadeBoxVS::~ShadowCascadeBoxVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088d540
    ShadowCascadeBoxVS::ShadowCascadeBoxVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088d5a0
    ShadowCascadeBoxVS* ShadowCascadeBoxVS::GetSource(const EffectManager& effectManager,
                                                      const EffectList& effectList) const {
        uint8_t local_148[280];

        new (local_148) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        auto local_30 = DirLightShadowMapping::BuildSharedFragment();
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        basic_ostream<char, std::char_traits<char> _>* pbVar1 = std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
            "                                                                                           \nattribute "
            "vec3 aPos;                                                                       \nattribute float "
            "aCascadeIndex;                                                             \n                             "
            "                                                              \nflat out float vCascade;                  "
            "                                                 \n                                                       "
            "                                    \nuniform mat4 uWorldViewProjMats[");
        pbVar1 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar1, 4);
        std::operator<<(
            pbVar1,
            "];                             \n                                                                         "
            "                  \nvoid main()                                                                           "
            "     \n{                                                                                          \n    "
            "vCascade = aCascadeIndex;                                                              \n    int iCascade "
            "= int(aCascadeIndex);                                                     \n    gl_Position = "
            "uWorldViewProjMats[GetConstantCascadeIndex(iCascade)] * vec4(aPos, 1.0); \n}\n");
        *this = local_148->str();
        return this;
    }

} // namespace jag::graphics
