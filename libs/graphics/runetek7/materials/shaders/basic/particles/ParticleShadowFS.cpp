// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleShadowFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleShadowFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleShadowFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleShadowFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ParticleShadowFS::~ParticleShadowFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleShadowFS::~ParticleShadowFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100889ce0
    ParticleShadowFS::ParticleShadowFS() {
        EffectList local_58;
        uint8_t local_21 = 59;
        uint64_t local_30 = 1;
        EffectList local_48(&local_21);
        new (this) ShaderSource(local_58, local_48);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100889d70
    auto ParticleShadowFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar2;
        uint8_t local_160[280];

        new (local_160) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        bool cVar1 = effectList.Contains(59);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16);
        std::operator<<(basic_ostream, "in vec4 vVertexAlbedo;\nin vec4 vTextureUV;\nin float "
                                       "vUVInterpolationAmount;\nflat in vec2 vMaterialSettingsSlotXY;\n");
        std::operator<<(
            basic_ostream,
            "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
        if (!cVar1) {
            pcVar2 = shadersourceprovider::GetShaderString(92);
            std::operator<<(basic_ostream, pcVar2);
        } else {
            pcVar2 = shadersourceprovider::GetShaderString(93);
            std::operator<<(basic_ostream, pcVar2);
        }
        auto local_48 = field_40.BuildFSFragment(effectList, 0);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        std::operator<<(basic_ostream, "void main()\n{\n");
        std::operator<<(
            basic_ostream,
            "   TextureSettings textureSettings;\n   getTextureSettings(vMaterialSettingsSlotXY, textureSettings);\n   "
            "vec4 texelAlbedo;\n   getTexel(vTextureUV.xy, textureSettings.textureMeta1, uAtlasMeta, 0.0, "
            "uTextureAtlas, texelAlbedo);\n   vec4 fragColour = vVertexAlbedo * texelAlbedo;\n");
        std::operator<<(basic_ostream, "   if (fragColour.a < 0.001)\n   {\n       discard;\n   }\n");
        std::operator<<(basic_ostream,
                        "   float transmittance = 1.0 - fragColour.a;\n   gl_FragColor.r = transmittance;\n");
        std::operator<<(basic_ostream, "}\n");
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
