// libs/graphics/runetek7/materials/shaders/effects/shadows/ShadowCascadeBoxFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeBoxFS {
    public:
        // virtual methods in vtable order
        virtual ~ShadowCascadeBoxFS();
        virtual ShadowCascadeBoxFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ShadowCascadeBoxFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ShadowCascadeBoxFS::~ShadowCascadeBoxFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ShadowCascadeBoxFS::~ShadowCascadeBoxFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088d410
    ShadowCascadeBoxFS::ShadowCascadeBoxFS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088d470
    ShadowCascadeBoxFS* ShadowCascadeBoxFS::GetSource(const EffectManager& effectManager,
                                                      const EffectList& effectList) const {
        uint8_t local_148[280];

        new (local_148) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto local_30 = DirLightShadowMapping::BuildSharedFragment();
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
            "                                                                            \nflat in float vCascade;     "
            "                                                \n                                                        "
            "                    \nvoid main()                                                                 \n{     "
            "                                                                      \n    int iCascade = int(vCascade); "
            "                                          \n    gl_FragColor = vec4(0.0);                                 "
            "              \n    gl_FragColor[GetConstantCascadeIndex(iCascade)] = gl_FragCoord.z;       \n}\n");
        *this = local_148->str();
        return this;
    }

} // namespace jag::graphics
