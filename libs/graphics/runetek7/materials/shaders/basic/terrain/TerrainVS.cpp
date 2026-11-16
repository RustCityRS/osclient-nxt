// libs/graphics/runetek7/materials/shaders/basic/terrain/TerrainVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class TerrainVS {
    public:
        // virtual methods in vtable order
        virtual ~TerrainVS();
        virtual TerrainVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        TerrainVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: TerrainVS::~TerrainVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: TerrainVS::~TerrainVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088b760
    TerrainVS::TerrainVS() {
        uint16_t local_35 = 20815;
        uint64_t local_50 = 2;
        EffectList local_78(&local_35);
        uint64_t local_33 = 3467240919659709186;
        uint16_t local_2b = 5433;
        uint8_t local_29 = 61;
        uint64_t local_40 = 11;
        EffectList local_68(&local_33);
        new (this) ShaderSource(local_78, local_68);
    }

    // 0x10088b830
    TerrainVS* TerrainVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar4;
        EffectList* in_RCX;
        uint8_t local_170[280];
        ReturnValue local_50;
        uint32_t local_38;

        new (local_170) RT7VertexShaderSourceStream(effectManager, *in_RCX, 2, 2, 1, 1, 1, 1, 24);
        bool cVar1 = in_RCX->Contains(29);
        if (!cVar1) {
            local_38 = 0;
        } else {
            local_38 = in_RCX->Contains(48);
        }
        uint8_t bVar2 = in_RCX->Contains(21);
        char local_31 = in_RCX->Contains(63);
        bool cVar3 = in_RCX->Contains(61);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec3 aVertexPosition;\nattribute vec4 aVertexNormal_FogProportion;\nattribute vec4 "
                        "aMaterialSettingsSlotXY_MaterialSettingsSlotXY2;\nattribute vec2 "
                        "aMaterialSettingsSlotXY3;\nattribute vec4 aTextureScale;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aTextureWeight;\nattribute vec4 aMaterialProperties;\n");
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\n");
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        if ((uint8_t)((uint8_t)local_38 | bVar2) == 1) {
            local_50 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            pcVar4 = shadersourceprovider::GetShaderString(70);
            std::operator<<(basic_ostream, pcVar4);
        }
        if (bVar2 != 0) {
            local_50 = Irradiance::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        if (local_31 != '\0') {
            std::operator<<(basic_ostream, "uniform mediump vec4 uAtlasMeta;\n");
        }
        std::operator<<(basic_ostream, "uniform float uFade;\n");
        std::operator<<(basic_ostream, "out highp vec4 vWorldPos_ViewSpaceDepth;\n");
        std::operator<<(basic_ostream, "out vec4 vVertexAlbedo;\n");
        if (!cVar1 && !cVar3) {
            cVar1 = in_RCX->Contains(2);
            if (cVar1)
                goto LAB_10088b9e2;
        } else {
        LAB_10088b9e2:
            std::operator<<(basic_ostream, "out vec3 vWorldNormal;\n");
        }
        if (bVar2 == 1 && !cVar3) {
            std::operator<<(basic_ostream, "out vec3 vAmbientColour;\n");
        }
        if (local_31 != '\0') {
            std::operator<<(basic_ostream, "flat out highp vec4 vMaterialSettingsSlots1D;\nflat out highp vec4 "
                                           "vTextureScale;\nout vec4 vTextureWeight;\n");
        }
        std::operator<<(basic_ostream, "flat out vec4 vMaterialProperties;\n");
        if ((char)local_38 == '\0') {
            cVar1 = in_RCX->Contains(57);
            if (!cVar1)
                goto LAB_10088ba5a;
        }
        pcVar4 = shadersourceprovider::GetShaderString(71);
        std::operator<<(basic_ostream, pcVar4);
    LAB_10088ba5a:
        if ((char)local_38 != '\0') {
            pcVar4 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar4);
        }
        if (bVar2 != 0) {
            local_50.BuildVSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        pcVar4 = shadersourceprovider::GetShaderString(100);
        std::operator<<(basic_ostream, pcVar4);
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
