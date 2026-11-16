// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainNormalFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainNormalFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainNormalFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainNormalFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: TerrainNormalFS::~TerrainNormalFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainNormalFS::~TerrainNormalFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088ac80
    TerrainNormalFS::TerrainNormalFS() {
        uint8_t local_31 = 79;
        uint64_t local_50 = 1;
        EffectList local_78(&local_31);
        uint64_t local_30 = 6589968288485031739;
        uint64_t local_40 = 8;
        EffectList local_68(&local_30);
        new (this) ShaderSource(local_78, local_68);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x10088ad60
    auto TerrainNormalFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar3;
        uint8_t local_168[280];

        new (local_168) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        char local_31 = effectList.Contains(59);
        char cVar1 = effectList.Contains(63);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = effectList.Contains(61);
        }
        if (effectList.Contains(91)) {
            if (!(effectList.Contains(116))) {
                std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_168 + 16),
                                "\nvoid main()\n{\n}\n");
                goto LAB_10088af6e;
            }
        }
        auto local_50 = DebugReturn::BuildUniforms();
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_168 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        if (effectList.Contains(116)) {
            std::operator<<(basic_ostream, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform highp float uGridSize;\nuniform mediump vec4 uAtlasMeta;\nuniform "
                                           "sampler2D uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
        }
        std::operator<<(basic_ostream, "in highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "in vec3 vNormal;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, "flat in highp vec4 vMaterialSettingsSlots1D;\nflat in highp vec4 "
                                           "vTextureScale;\nin vec4 vTextureWeight;\n");
            if (cVar1) {
                local_50 = field_40.BuildFSFragment(effectList, 1);
                std::operator<<(basic_ostream,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            }
        }
        if (local_31 == '\0') {
            if (cVar1) {
                pcVar3 = shadersourceprovider::GetShaderString(92);
                std::operator<<(basic_ostream, pcVar3);
            }
            pcVar3 = shadersourceprovider::GetShaderString(101);
            std::operator<<(basic_ostream, pcVar3);
        } else {
            if (cVar1) {
                pcVar3 = shadersourceprovider::GetShaderString(93);
                std::operator<<(basic_ostream, pcVar3);
            }
            pcVar3 = shadersourceprovider::GetShaderString(103);
            std::operator<<(basic_ostream, pcVar3);
        }
    LAB_10088af6e:
        auto result = local_168->str();
        return result;
    }

} // namespace jag::graphics
