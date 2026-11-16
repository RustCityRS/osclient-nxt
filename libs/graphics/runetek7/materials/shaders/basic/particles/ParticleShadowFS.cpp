// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleShadowFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ParticleShadowFS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleShadowFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ParticleShadowFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleShadowFS::~ParticleShadowFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ParticleShadowFS::~ParticleShadowFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ParticleShadowFS::~ParticleShadowFS();

    // 0x100889ce0, 128 bytes, base-object constructor, placed by class name and debug map
    // ParticleShadowFS::ParticleShadowFS()
    void ParticleShadowFS::ParticleShadowFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined1* local_38;
        undefined8 local_30;
        undefined1 local_21;

        EffectList::EffectList(local_58);
        local_21 = 59;
        local_38 = &local_21;
        local_30 = 1;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f16d28;
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100889d60, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleShadowFS::ParticleShadowFS(): jumps straight to the base-object constructor

    // 0x100889d70, 400 bytes, placed by class name and debug map
    // ParticleShadowFS::GetSource(EffectManager const&, EffectList const&) const
    ParticleShadowFS* ParticleShadowFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char* pcVar3;
        undefined1 local_160[280];
        TextureAtlasLookup local_48[24];

        new (local_160) RT7PixelShaderSourceStream();
        cVar2 = EffectList::Contains();
        poVar1 = (ostream*)(local_160 + 16);
        std::operator<<(poVar1, "in vec4 vVertexAlbedo;\nin vec4 vTextureUV;\nin float vUVInterpolationAmount;\nflat "
                                "in vec2 vMaterialSettingsSlotXY;\n");
        std::operator<<(
            poVar1,
            "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
        if (cVar2 == '\0') {
            pcVar3 = (char*)shadersourceprovider::GetShaderString(92);
            std::operator<<(poVar1, pcVar3);
        } else {
            pcVar3 = (char*)shadersourceprovider::GetShaderString(93);
            std::operator<<(poVar1, pcVar3);
        }
        local_48->BuildFSFragment(&param_1->field_40);
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        std::operator<<(poVar1, "void main()\n{\n");
        std::operator<<(
            poVar1,
            "   TextureSettings textureSettings;\n   getTextureSettings(vMaterialSettingsSlotXY, textureSettings);\n   "
            "vec4 texelAlbedo;\n   getTexel(vTextureUV.xy, textureSettings.textureMeta1, uAtlasMeta, 0.0, "
            "uTextureAtlas, texelAlbedo);\n   vec4 fragColour = vVertexAlbedo * texelAlbedo;\n");
        std::operator<<(poVar1, "   if (fragColour.a < 0.001)\n   {\n       discard;\n   }\n");
        std::operator<<(poVar1, "   float transmittance = 1.0 - fragColour.a;\n   gl_FragColor.r = transmittance;\n");
        std::operator<<(poVar1, "}\n");
        str();
        local_160->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
