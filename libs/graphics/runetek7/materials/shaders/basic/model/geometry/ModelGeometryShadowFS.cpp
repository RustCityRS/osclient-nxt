// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryShadowFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryShadowFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryShadowFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryShadowFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryShadowFS::~ModelGeometryShadowFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryShadowFS::~ModelGeometryShadowFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryShadowFS::~ModelGeometryShadowFS();

    // 0x100896e60, 144 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryShadowFS::ModelGeometryShadowFS()
    void ModelGeometryShadowFS::ModelGeometryShadowFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_25;
        undefined1 local_21;

        EffectList::EffectList(local_58);
        local_25 = 1112620859;
        local_21 = 65;
        local_38 = &local_25;
        local_30 = 5;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f17710;
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100896ef0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryShadowFS::ModelGeometryShadowFS(): jumps straight to the base-object constructor

    // 0x100896f00, 704 bytes, placed by class name and debug map
    // ModelGeometryShadowFS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryShadowFS* ModelGeometryShadowFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        byte bVar2;
        char cVar3;
        byte bVar4;
        char* pcVar5;
        undefined1 local_170[280];
        TextureAtlasLookup local_58[24];
        char local_31;

        new (local_170) RT7PixelShaderSourceStream();
        local_31 = EffectList::Contains();
        bVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        bVar4 = 1;
        if (cVar3 == '\0') {
            bVar4 = EffectList::Contains();
        }
        cVar3 = EffectList::Contains();
        if (cVar3 == '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 != '\0')
                goto LAB_100896fc7;
        } else {
        LAB_100896fc7:
            if ((bVar2 | bVar4) == 1) {
                poVar1 = (ostream*)(local_170 + 16);
                std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
                if (bVar2 != 0) {
                    std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform "
                                            "sampler2D uTextureAtlasSettings;\n");
                }
                std::operator<<(poVar1, "uniform float uAlphaTestThreshold;\n");
                if (bVar4 != 0) {
                    std::operator<<(poVar1, "in mediump vec4 vVertexAlbedo;\n");
                }
                if (bVar2 != 0) {
                    std::operator<<(poVar1, "in vec2 vTextureUV;\n");
                    std::operator<<(poVar1, "flat in vec2 vMaterialSettingsSlotXY;\n");
                    if (bVar2 != 0) {
                        local_58->BuildFSFragment(&param_1->field_40);
                        std::operator<<(poVar1, (basic_string*)local_58);
                        local_58->~basic_string();
                        if (bVar2 != 0) {
                            if (local_31 == '\0') {
                                pcVar5 = (char*)shadersourceprovider::GetShaderString(92);
                                std::operator<<(poVar1, pcVar5);
                            } else {
                                pcVar5 = (char*)shadersourceprovider::GetShaderString(93);
                                std::operator<<(poVar1, pcVar5);
                            }
                        }
                    }
                }
                std::operator<<(poVar1, "\nvoid main()\n{\n");
                if (bVar4 != 0) {
                    std::operator<<(poVar1,
                                    "   if (vVertexAlbedo.a == 0.0)\n   {\n      discard;\n      return;\n   }\n");
                }
                std::operator<<(poVar1, "   float alpha = 1.0;\n");
                if (bVar2 != 0) {
                    std::operator<<(
                        poVar1, "   TextureSettings textureSettings;\n   getTextureSettings(vMaterialSettingsSlotXY, "
                                "textureSettings);\n   vec4 texelAlbedo;\n   getTexel(vTextureUV, "
                                "textureSettings.textureMeta1, uAtlasMeta, textureSettings.wrapping, uTextureAtlas, "
                                "texelAlbedo);\n   alpha = texelAlbedo.a;\n");
                }
                if (bVar4 != 0) {
                    std::operator<<(poVar1, "   alpha *= vVertexAlbedo.a;\n");
                }
                std::operator<<(poVar1,
                                "   if (alpha <= uAlphaTestThreshold)\n   {\n      discard;\n      return;\n   }\n");
                std::operator<<(poVar1, "   gl_FragColor.r = 0.0;\n");
                goto LAB_100897142;
            }
        }
        std::operator<<((ostream*)(local_170 + 16), "\nvoid main()\n{\n");
    LAB_100897142:
        std::operator<<((ostream*)(local_170 + 16), "}\n");
        ((ModelGeometryShadowFS*)this)->str();
        local_170->~RT7PixelShaderSourceStream();
        return (ModelGeometryShadowFS*)this;
    }

} // namespace jag::graphics
