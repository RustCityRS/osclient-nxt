// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryPointShadowFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryPointShadowFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryPointShadowFS();
        virtual ModelGeometryPointShadowFS* GetSource(const EffectManager& effectManager,
                                                      const EffectList& effectList) const;
        ModelGeometryPointShadowFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ModelGeometryPointShadowFS::~ModelGeometryPointShadowFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryPointShadowFS::~ModelGeometryPointShadowFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008966f0
    ModelGeometryPointShadowFS::ModelGeometryPointShadowFS() {
        EffectList local_58;
        uint32_t local_26 = 1112620859;
        uint16_t local_22 = 9281;
        uint64_t local_30 = 6;
        EffectList local_48(&local_26);
        new (this) ShaderSource(local_58, local_48);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100896790
    ModelGeometryPointShadowFS* ModelGeometryPointShadowFS::GetSource(const EffectManager& effectManager,
                                                                      const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar4;
        EffectList* in_RCX;
        uint8_t local_170[280];
        ReturnValue local_58;

        new (local_170) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_31 = in_RCX->Contains(59);
        uint8_t bVar1 = in_RCX->Contains(63);
        bool cVar2 = in_RCX->Contains(81);
        uint8_t bVar3 = 1;
        if (!cVar2) {
            bVar3 = in_RCX->Contains(74);
        }
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(
            basic_ostream,
            "UNIFORM_BUFFER_BEGIN(PointLightShadowPass)\n   uniform highp mat4 uLightViewProjTrans;   uniform highp "
            "vec4 uLightPos;\n   uniform highp vec4 uLightNearFarClip;\nUNIFORM_BUFFER_END\n");
        cVar2 = in_RCX->Contains(66);
        if (!cVar2) {
            cVar2 = in_RCX->Contains(108);
            if (cVar2)
                goto LAB_10089686d;
        } else {
        LAB_10089686d:
            if ((bVar1 | bVar3) == 1) {
                std::operator<<(basic_ostream, "uniform highp float uTextureAnimationTime;\n");
                if (bVar1 != 0) {
                    std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D "
                                                   "uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
                }
                std::operator<<(basic_ostream, "uniform float uAlphaTestThreshold;\n");
                std::operator<<(basic_ostream, "in highp vec4 vWorldPos;\n");
                if (bVar3 != 0) {
                    std::operator<<(basic_ostream, "in mediump vec4 vVertexAlbedo;\n");
                }
                if (bVar1 != 0) {
                    std::operator<<(basic_ostream, "in vec2 vTextureUV;\n");
                    std::operator<<(basic_ostream, "flat in vec2 vMaterialSettingsSlotXY;\n");
                    if (bVar1 != 0) {
                        local_58 = effectManager.field_40.BuildFSFragment(*in_RCX, 2);
                        std::operator<<(basic_ostream, &local_58);
                        if (bVar1 != 0) {
                            if (local_31 == '\0') {
                                pcVar4 = shadersourceprovider::GetShaderString(92);
                                std::operator<<(basic_ostream, pcVar4);
                            } else {
                                pcVar4 = shadersourceprovider::GetShaderString(93);
                                std::operator<<(basic_ostream, pcVar4);
                            }
                        }
                    }
                }
                std::operator<<(basic_ostream, "\nvoid main()\n{\n");
                if (bVar3 != 0) {
                    std::operator<<(basic_ostream,
                                    "   if (vVertexAlbedo.a == 0.0)\n   {\n      discard;\n      return;\n   }\n");
                }
                std::operator<<(basic_ostream, "   float alpha = 1.0;\n");
                if (bVar1 != 0) {
                    std::operator<<(
                        basic_ostream,
                        "   TextureSettings textureSettings;\n   getTextureSettings(vMaterialSettingsSlotXY, "
                        "textureSettings);\n   vec4 texelAlbedo;\n   getTexel(vTextureUV, "
                        "textureSettings.textureMeta1, uAtlasMeta, textureSettings.wrapping, uTextureAtlas, "
                        "texelAlbedo);\n   alpha = texelAlbedo.a;\n");
                }
                if (bVar3 != 0) {
                    std::operator<<(basic_ostream, "   alpha *= vVertexAlbedo.a;\n");
                }
                std::operator<<(basic_ostream,
                                "   if (alpha <= uAlphaTestThreshold)\n   {\n      discard;\n      return;\n   }\n");
                std::operator<<(basic_ostream, "   gl_FragColor.r = 0.0;\n");
                goto LAB_1008969ff;
            }
        }
        std::operator<<(basic_ostream, "in highp vec4 vWorldPos;\n");
        std::operator<<(basic_ostream, "\nvoid main()\n{\n");
    LAB_1008969ff:
        std::operator<<(basic_ostream,
                        "   vec3 toLightVec = uLightPos.xyz - vWorldPos.xyz;   float dstToLightSqrd = dot(toLightVec, "
                        "toLightVec);\n   gl_FragDepth = dstToLightSqrd * uLightNearFarClip.z;\n");
        std::operator<<(basic_ostream, "}\n");
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
