// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainNormalFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class TerrainNormalFS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainNormalFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        TerrainNormalFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainNormalFS::~TerrainNormalFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    TerrainNormalFS::~TerrainNormalFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    TerrainNormalFS::~TerrainNormalFS();

    // 0x10088ac80, 208 bytes, base-object constructor, placed by class name and debug map
    // TerrainNormalFS::TerrainNormalFS()
    void TerrainNormalFS::TerrainNormalFS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined1* local_58;
        undefined8 local_50;
        undefined8* local_48;
        undefined8 local_40;
        undefined1 local_31;
        undefined8 local_30;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_31 = 79;
        local_58 = &local_31;
        local_50 = 1;
        EffectList::EffectList(local_78, (initializer_list*)&local_58);
        local_30 = 6589968288485031739;
        local_48 = &local_30;
        local_40 = 8;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f16dc8;
        new (&field_40) TextureAtlasLookup();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088ad50, 16 bytes, complete-object constructor, placed by class name and debug map
    // TerrainNormalFS::TerrainNormalFS(): jumps straight to the base-object constructor

    // 0x10088ad60, 640 bytes, placed by class name and debug map
    // TerrainNormalFS::GetSource(EffectManager const&, EffectList const&) const
    TerrainNormalFS* TerrainNormalFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char* pcVar4;
        undefined1 local_168[280];
        DebugReturn local_50[31];
        char local_31;

        new (local_168) RT7PixelShaderSourceStream();
        local_31 = EffectList::Contains();
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = '\0';
        } else {
            cVar2 = EffectList::Contains();
        }
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            cVar3 = EffectList::Contains();
            if (cVar3 == '\0') {
                std::operator<<((ostream*)(local_168 + 16), "\nvoid main()\n{\n}\n");
                goto LAB_10088af6e;
            }
        }
        local_50->BuildUniforms();
        poVar1 = (ostream*)(local_168 + 16);
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        local_50->BuildUniforms();
        std::operator<<(poVar1, (basic_string*)local_50);
        local_50->~basic_string();
        cVar3 = EffectList::Contains();
        if (cVar3 != '\0') {
            std::operator<<(poVar1, "#define STIPPLE_TRANSPARENCY_CLIP_FAR\n");
        }
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "uniform highp float uGridSize;\nuniform mediump vec4 uAtlasMeta;\nuniform "
                                    "sampler2D uTextureAtlas;\nuniform sampler2D uTextureAtlasSettings;\n");
        }
        std::operator<<(poVar1, "in highp vec3 vWorldPosition;\n");
        std::operator<<(poVar1, "in vec3 vNormal;\n");
        if (cVar2 != '\0') {
            std::operator<<(poVar1, "flat in highp vec4 vMaterialSettingsSlots1D;\nflat in highp vec4 "
                                    "vTextureScale;\nin vec4 vTextureWeight;\n");
            if (cVar2 != '\0') {
                local_50->BuildFSFragment(&param_1->field_40);
                std::operator<<(poVar1, (basic_string*)local_50);
                local_50->~basic_string();
            }
        }
        if (local_31 == '\0') {
            if (cVar2 != '\0') {
                pcVar4 = (char*)shadersourceprovider::GetShaderString(92);
                std::operator<<(poVar1, pcVar4);
            }
            pcVar4 = (char*)shadersourceprovider::GetShaderString(101);
            std::operator<<(poVar1, pcVar4);
        } else {
            if (cVar2 != '\0') {
                pcVar4 = (char*)shadersourceprovider::GetShaderString(93);
                std::operator<<(poVar1, pcVar4);
            }
            pcVar4 = (char*)shadersourceprovider::GetShaderString(103);
            std::operator<<(poVar1, pcVar4);
        }
    LAB_10088af6e:
        str();
        local_168->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
