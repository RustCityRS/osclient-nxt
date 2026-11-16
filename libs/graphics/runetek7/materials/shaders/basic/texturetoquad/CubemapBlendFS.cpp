// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/CubemapBlendFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class CubemapBlendFS {
    public:
        // virtual methods in vtable order
        virtual ~CubemapBlendFS();
        virtual CubemapBlendFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        CubemapBlendFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: CubemapBlendFS::~CubemapBlendFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: CubemapBlendFS::~CubemapBlendFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088bb20
    CubemapBlendFS::CubemapBlendFS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088bb80
    CubemapBlendFS* CubemapBlendFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_148[280];
        ReturnValue local_30;

        PixelShaderSourceStream* this_00 = (PixelShaderSourceStream*)local_148;
        new (this_00) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto pMVar1 = this_00->Instance();
        long lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 147) != '\0') {
            pMVar1 = (MapArea*)pMVar1->Instance();
            lVar2 = pMVar1->GetOrigin();
            local_30 = TextureCubeUtils::BuildFragment(*(bool*)(lVar2 + 147));
            std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16);
        basic_ostream<char, std::char_traits<char> _>* this_01 = basic_ostream;
        std::operator<<(
            basic_ostream,
            "                                                                                                       "
            "\nin vec3 vTexCoord;                                                                                     "
            "\n                                                                                                       "
            "\nuniform samplerCube sTextureCubeA;                                                                     "
            "\nuniform samplerCube sTextureCubeB;                                                                     "
            "\nuniform float uLerpValue;                                                                              "
            "\n                                                                                                       "
            "\nvoid main()                                                                                            "
            "\n{                                                                                                      "
            "\n                                                                                                       "
            "\n");
        pMVar1 = (MapArea*)this_01->Instance();
        lVar2 = pMVar1->GetOrigin();
        if (*(char*)(lVar2 + 147) == '\0') {
            std::operator<<(
                basic_ostream,
                "   vec3 sampleA = textureCube(sTextureCubeA, vTexCoord).rgb;                                       \n "
                "  vec3 sampleB = textureCube(sTextureCubeB, vTexCoord).rgb;                                       \n  "
                " vec4 finalColour = vec4(mix(sampleA, sampleB, uLerpValue), 1.0);                                \n");
        } else {
            std::operator<<(
                basic_ostream,
                "   vec3 sampleA = textureCubeSRGB(sTextureCubeA, vTexCoord).rgb;                                   \n "
                "  vec3 sampleB = textureCubeSRGB(sTextureCubeB, vTexCoord).rgb;                                   \n  "
                " vec4 finalColour = vec4(LinearToSRGB(mix(sampleA, sampleB, uLerpValue)), 1.0);                  \n");
        }
        std::operator<<(
            basic_ostream,
            "   gl_FragColor = finalColour;                                                                     \n}\n");
        *this = local_148->str();
        return this;
    }

} // namespace jag::graphics
