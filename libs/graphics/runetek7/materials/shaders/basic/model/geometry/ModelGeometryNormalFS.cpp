// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryNormalFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryNormalFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryNormalFS();
        virtual ModelGeometryNormalFS* GetSource(const EffectManager& effectManager,
                                                 const EffectList& effectList) const;
        ModelGeometryNormalFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ModelGeometryNormalFS::~ModelGeometryNormalFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryNormalFS::~ModelGeometryNormalFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100895fc0
    ModelGeometryNormalFS::ModelGeometryNormalFS() {
        uint8_t local_37 = 79;
        uint64_t local_50 = 1;
        EffectList local_78(&local_37);
        uint64_t local_36 = 4484815854646541137;
        uint32_t local_2e = 1970554218;
        uint16_t local_2a = 29531;
        uint64_t local_40 = 14;
        EffectList local_68(&local_36);
        new (this) ShaderSource(local_78, local_68);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x1008960b0
    ModelGeometryNormalFS* ModelGeometryNormalFS::GetSource(const EffectManager& effectManager,
                                                            const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar4;
        EffectList* in_RCX;
        uint8_t local_170[280];
        ReturnValue local_50;

        new (local_170) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_31 = in_RCX->Contains(59);
        bool cVar1 = in_RCX->Contains(63);
        char cVar2 = in_RCX->Contains(81);
        if (!cVar2) {
            cVar2 = '\0';
        } else {
            cVar2 = in_RCX->Contains(66);
        }
        if (in_RCX->Contains(91)) {
            if (!(in_RCX->Contains(66))) {
                if (!(in_RCX->Contains(117))) {
                    if (!(in_RCX->Contains(116))) {
                        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16),
                                        "\nvoid main()\n{\n}\n");
                        goto LAB_10089635f;
                    }
                }
            }
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        std::operator<<(basic_ostream, "uniform float uAlphaTestThreshold;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform "
                                           "sampler2D uTextureAtlasSettings;\n");
        }
        if (in_RCX->Contains(116)) {
            std::operator<<(basic_ostream,
                            "#define STIPPLE_TRANSPARENCY_CLIP_NEAR\n#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        }
        if (in_RCX->Contains(117)) {
            local_50 = StippleCutoutEffect::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        std::operator<<(basic_ostream, "in highp vec3 vWorldPosition;\nin vec3 vNormal;\n");
        if (in_RCX->Contains(61)) {
            std::operator<<(basic_ostream, "in vec4 vTangent;\n");
        }
        if (cVar2) {
            std::operator<<(basic_ostream, "in vec4 vVertexAlbedo;\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "in vec2 vTextureUV;\n");
        }
        std::operator<<(basic_ostream, "flat in vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        cVar2 = in_RCX->Contains(115);
        if (cVar2) {
            std::operator<<(basic_ostream, "layout(location = 1) out vec4 fFaceNormal;\n");
        }
        if (cVar1) {
            local_50 = effectManager.field_40.BuildFSFragment(*in_RCX, 2);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if (local_31 == '\0') {
            if (cVar1) {
                pcVar4 = shadersourceprovider::GetShaderString(92);
                std::operator<<(basic_ostream, pcVar4);
            }
            pcVar4 = shadersourceprovider::GetShaderString(37);
            std::operator<<(basic_ostream, pcVar4);
        } else {
            if (cVar1) {
                pcVar4 = shadersourceprovider::GetShaderString(93);
                std::operator<<(basic_ostream, pcVar4);
            }
            pcVar4 = shadersourceprovider::GetShaderString(39);
            std::operator<<(basic_ostream, pcVar4);
        }
    LAB_10089635f:
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
