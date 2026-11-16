// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryHighlightFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryHighlightFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryHighlightFS();
        virtual ModelGeometryHighlightFS* GetSource(const EffectManager& effectManager,
                                                    const EffectList& effectList) const;
        ModelGeometryHighlightFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ModelGeometryHighlightFS::~ModelGeometryHighlightFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryHighlightFS::~ModelGeometryHighlightFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008959c0
    ModelGeometryHighlightFS::ModelGeometryHighlightFS() {
        uint8_t local_21 = 79;
        uint64_t local_40 = 1;
        EffectList local_68(&local_21);
        uint32_t local_28 = 457128785;
        uint16_t local_24 = 15938;
        uint8_t local_22 = 106;
        uint64_t local_30 = 7;
        EffectList local_58(&local_28);
        new (this) ShaderSource(local_68, local_58);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100895a80
    ModelGeometryHighlightFS* ModelGeometryHighlightFS::GetSource(const EffectManager& effectManager,
                                                                  const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar3;
        EffectList* in_RCX;
        uint8_t local_170[280];
        ReturnValue local_58;

        new (local_170) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_31 = in_RCX->Contains(59);
        bool cVar1 = in_RCX->Contains(63);
        char cVar2 = in_RCX->Contains(81);
        if (!cVar2) {
            cVar2 = '\0';
        } else {
            cVar2 = in_RCX->Contains(66);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
        std::operator<<(basic_ostream, "#define STIPPLE_TRANSPARENCY_CLIP_NEAR\n");
        std::operator<<(basic_ostream, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        local_58.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        std::operator<<(basic_ostream, "uniform float uAlphaTestThreshold;\n");
        if (cVar1) {
            std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform "
                                           "sampler2D uTextureAtlasSettings;\n");
        }
        std::operator<<(basic_ostream, "uniform vec4 uTint;\n");
        std::operator<<(basic_ostream, "in highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "in vec3 vNormal;\n");
        if (cVar2) {
            std::operator<<(basic_ostream, "in vec4 vVertexAlbedo;\n");
        }
        if (cVar1) {
            std::operator<<(basic_ostream, "in vec2 vTextureUV;\n");
        }
        std::operator<<(basic_ostream, "flat in vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        if (cVar1) {
            local_58 = effectManager.field_40.BuildFSFragment(*in_RCX, 2);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
            if (cVar1) {
                if (local_31 == '\0') {
                    pcVar3 = shadersourceprovider::GetShaderString(92);
                    std::operator<<(basic_ostream, pcVar3);
                } else {
                    pcVar3 = shadersourceprovider::GetShaderString(93);
                    std::operator<<(basic_ostream, pcVar3);
                }
            }
        }
        pcVar3 = shadersourceprovider::GetShaderString(35);
        std::operator<<(basic_ostream, pcVar3);
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
