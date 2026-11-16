// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainVS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainVS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainVS::~TerrainVS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainVS::~TerrainVS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainVS::~TerrainVS();

    // 0x10088b760, 192 bytes, base-object constructor, placed by class name and debug map
    // TerrainVS::TerrainVS()
    void TerrainVS::TerrainVS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined2* local_58;
        undefined8 local_50;
        undefined8* local_48;
        undefined8 local_40;
        undefined2 local_35;
        undefined8 local_33;
        undefined2 local_2b;
        undefined1 local_29;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_35 = 20815;
        local_58 = &local_35;
        local_50 = 2;
        EffectList::EffectList(local_78, (initializer_list*)&local_58);
        local_33 = 3467240919659709186;
        local_2b = 5433;
        local_29 = 61;
        local_48 = &local_33;
        local_40 = 11;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f16eb8;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088b820, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainVS::TerrainVS(): jumps straight to the base-object constructor

    // 0x10088b830, 752 bytes, placed by class name and debug map
    // TerrainVS::GetSource(EffectManager const&, EffectList const&) const
    TerrainVS* TerrainVS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        byte bVar3;
        char cVar4;
        char* pcVar5;
        RT7VertexShaderSourceStream local_170[2];
        ViewTransformsFragment local_50[24];
        undefined4 local_38;
        char local_31;

        RT7VertexShaderSourceStream::RT7VertexShaderSourceStream(local_170);
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            local_38 = 0;
        } else {
            local_38 = EffectList::Contains();
        }
        bVar3 = EffectList::Contains();
        local_31 = EffectList::Contains();
        cVar4 = EffectList::Contains();
        poVar1 = (ostream*)(local_170[0].field_0 + 16);
        std::operator<<(poVar1,
                        "attribute vec3 aVertexPosition;\nattribute vec4 aVertexNormal_FogProportion;\nattribute vec4 "
                        "aMaterialSettingsSlotXY_MaterialSettingsSlotXY2;\nattribute vec2 "
                        "aMaterialSettingsSlotXY3;\nattribute vec4 aTextureScale;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aTextureWeight;\nattribute vec4 aMaterialProperties;\n");
        std::operator<<(poVar1, "uniform mat4 uModelMatrix;\n");
        local_50->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        if ((byte)((byte)local_38 | bVar3) == 1) {
            local_50->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
            pcVar5 = (char*)shadersourceprovider::GetShaderString(70);
            std::operator<<(poVar1, pcVar5);
        }
        if (bVar3 != 0) {
            local_50->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        if (local_31 != '\0') {
            std::operator<<(poVar1, "uniform mediump vec4 uAtlasMeta;\n");
        }
        std::operator<<(poVar1, "uniform float uFade;\n");
        std::operator<<(poVar1, "out highp vec4 vWorldPos_ViewSpaceDepth;\n");
        std::operator<<(poVar1, "out vec4 vVertexAlbedo;\n");
        if (cVar2 == '\0' && cVar4 == '\0') {
            cVar2 = EffectList::Contains();
            if (cVar2 != '\0')
                goto LAB_10088b9e2;
        } else {
        LAB_10088b9e2:
            std::operator<<(poVar1, "out vec3 vWorldNormal;\n");
        }
        if (bVar3 == 1 && cVar4 == '\0') {
            std::operator<<(poVar1, "out vec3 vAmbientColour;\n");
        }
        if (local_31 != '\0') {
            std::operator<<(poVar1, "flat out highp vec4 vMaterialSettingsSlots1D;\nflat out highp vec4 "
                                    "vTextureScale;\nout vec4 vTextureWeight;\n");
        }
        std::operator<<(poVar1, "flat out vec4 vMaterialProperties;\n");
        if ((char)local_38 == '\0') {
            cVar2 = EffectList::Contains();
            if (cVar2 == '\0')
                goto LAB_10088ba5a;
        }
        pcVar5 = (char*)shadersourceprovider::GetShaderString(71);
        std::operator<<(poVar1, pcVar5);
    LAB_10088ba5a:
        if ((char)local_38 != '\0') {
            pcVar5 = (char*)shadersourceprovider::GetShaderString(69);
            std::operator<<(poVar1, pcVar5);
        }
        if (bVar3 != 0) {
            local_50->BuildVSFragment();
            std::operator<<(poVar1, (basic_string*)local_50);
            local_50->~basic_string();
        }
        pcVar5 = (char*)shadersourceprovider::GetShaderString(100);
        std::operator<<(poVar1, pcVar5);
        ((TerrainVS*)this)->str();
        local_170->~RT7VertexShaderSourceStream();
        return (TerrainVS*)this;
    }

} // namespace jag::graphics
