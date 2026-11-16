// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryHighlightFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryHighlightFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryHighlightFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryHighlightFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryHighlightFS::~ModelGeometryHighlightFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryHighlightFS::~ModelGeometryHighlightFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryHighlightFS::~ModelGeometryHighlightFS();

    // 0x1008959c0, 176 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryHighlightFS::ModelGeometryHighlightFS()
    void ModelGeometryHighlightFS::ModelGeometryHighlightFS() {
        EffectList local_68[16];
        EffectList local_58[16];
        undefined1* local_48;
        undefined8 local_40;
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_28;
        undefined2 local_24;
        undefined1 local_22;
        undefined1 local_21;

        local_21 = 79;
        local_48 = &local_21;
        local_40 = 1;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        local_28 = 457128785;
        local_24 = 15938;
        local_22 = 106;
        local_38 = &local_28;
        local_30 = 7;
        EffectList::EffectList(local_58, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_58);
        field_0 = &PTR__ScriptOption_100f17620;
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100895a70, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryHighlightFS::ModelGeometryHighlightFS(): jumps straight to the base-object constructor

    // 0x100895a80, 608 bytes, placed by class name and debug map
    // ModelGeometryHighlightFS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryHighlightFS* ModelGeometryHighlightFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char* pcVar4;
        undefined1 local_170[280];
        ViewTransformsFragment local_58[24];
        char local_31;

        new (local_170) RT7PixelShaderSourceStream();
        local_31 = EffectList::Contains();
        cVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        if (cVar3 == '\0') {
            cVar3 = '\0';
        } else {
            cVar3 = EffectList::Contains();
        }
        poVar1 = (ostream*)(local_170 + 16);
        std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
        std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_NEAR\n");
        std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        local_58->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_58);
        local_58->~basic_string();
        std::operator<<(poVar1, "uniform float uAlphaTestThreshold;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                    "uTextureAtlasSettings;\n");
        }
        std::operator<<(poVar1, "uniform vec4 uTint;\n");
        std::operator<<(poVar1, "in highp vec3 vWorldPosition;\n");
        std::operator<<(poVar1, "in vec3 vNormal;\n");
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "in vec4 vVertexAlbedo;\n");
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "in vec2 vTextureUV;\n");
        }
        std::operator<<(poVar1, "flat in vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        if (cVar2 != '\0') {
            local_58->BuildFSFragment(&param_1->field_40);
            std::operator<<(poVar1, (basic_string*)local_58);
            local_58->~basic_string();
            if (cVar2 != '\0') {
                if (local_31 == '\0') {
                    pcVar4 = (char*)shadersourceprovider::GetShaderString(92);
                    std::operator<<(poVar1, pcVar4);
                } else {
                    pcVar4 = (char*)shadersourceprovider::GetShaderString(93);
                    std::operator<<(poVar1, pcVar4);
                }
            }
        }
        pcVar4 = (char*)shadersourceprovider::GetShaderString(35);
        std::operator<<(poVar1, pcVar4);
        ((ModelGeometryHighlightFS*)this)->str();
        local_170->~RT7PixelShaderSourceStream();
        return (ModelGeometryHighlightFS*)this;
    }

} // namespace jag::graphics
