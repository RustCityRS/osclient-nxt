// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryNormalFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryNormalFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryNormalFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelGeometryNormalFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryNormalFS::~ModelGeometryNormalFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelGeometryNormalFS::~ModelGeometryNormalFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelGeometryNormalFS::~ModelGeometryNormalFS();

    // 0x100895fc0, 224 bytes, base-object constructor, placed by class name and debug map
    // ModelGeometryNormalFS::ModelGeometryNormalFS()
    void ModelGeometryNormalFS::ModelGeometryNormalFS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined1* local_58;
        undefined8 local_50;
        undefined8* local_48;
        undefined8 local_40;
        undefined1 local_37;
        undefined8 local_36;
        undefined4 local_2e;
        undefined2 local_2a;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_37 = 79;
        local_58 = &local_37;
        local_50 = 1;
        EffectList::EffectList(local_78, (initializer_list*)&local_58);
        local_36 = 4484815854646541137;
        local_2e = 1970554218;
        local_2a = 29531;
        local_48 = &local_36;
        local_40 = 14;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f17670;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008960a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelGeometryNormalFS::ModelGeometryNormalFS(): jumps straight to the base-object constructor

    // 0x1008960b0, 816 bytes, placed by class name and debug map
    // ModelGeometryNormalFS::GetSource(EffectManager const&, EffectList const&) const
    ModelGeometryNormalFS* ModelGeometryNormalFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        char* pcVar5;
        undefined1 local_170[280];
        ViewTransformsFragment local_50[31];
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
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            cVar4 = EffectList::Contains();
            if (cVar4 == '\0') {
                cVar4 = EffectList::Contains();
                if (cVar4 == '\0') {
                    cVar4 = EffectList::Contains();
                    if (cVar4 == '\0') {
                        std::operator<<((ostream*)(local_170 + 16), "\nvoid main()\n{\n}\n");
                        goto LAB_10089635f;
                    }
                }
            }
        }
        poVar1 = (ostream*)(local_170 + 16);
        std::operator<<(poVar1, "uniform highp float uTextureAnimationTime;\n");
        local_50->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        std::operator<<(poVar1, "uniform float uAlphaTestThreshold;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                    "uTextureAtlasSettings;\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_NEAR\n#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        }
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            local_50->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        std::operator<<(poVar1, "in highp vec3 vWorldPosition;\nin vec3 vNormal;\n");
        cVar4 = EffectList::Contains();
        if (cVar4 != '\0') {
            std::operator<<(poVar1, "in vec4 vTangent;\n");
        }
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "in vec4 vVertexAlbedo;\n");
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "in vec2 vTextureUV;\n");
        }
        std::operator<<(poVar1, "flat in vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "layout(location = 1) out vec4 fFaceNormal;\n");
        }
        if (cVar2 != '\0') {
            local_50->BuildFSFragment(&param_1->field_40);
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        if (local_31 == '\0') {
            if (cVar2 != '\0') {
                pcVar5 = (char*)shadersourceprovider::GetShaderString(92);
                std::operator<<(poVar1, pcVar5);
            }
            pcVar5 = (char*)shadersourceprovider::GetShaderString(37);
            std::operator<<(poVar1, pcVar5);
        } else {
            if (cVar2 != '\0') {
                pcVar5 = (char*)shadersourceprovider::GetShaderString(93);
                std::operator<<(poVar1, pcVar5);
            }
            pcVar5 = (char*)shadersourceprovider::GetShaderString(39);
            std::operator<<(poVar1, pcVar5);
        }
    LAB_10089635f:
        ((ModelGeometryNormalFS*)this)->str();
        local_170->~RT7PixelShaderSourceStream();
        return (ModelGeometryNormalFS*)this;
    }

} // namespace jag::graphics
