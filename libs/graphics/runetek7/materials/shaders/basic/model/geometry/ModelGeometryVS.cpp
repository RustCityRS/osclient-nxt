// libs/graphics/runetek7/materials/shaders/basic/model/geometry/ModelGeometryVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelGeometryVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelGeometryVS();
        virtual ModelGeometryVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelGeometryVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ModelGeometryVS::~ModelGeometryVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelGeometryVS::~ModelGeometryVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100897590
    ModelGeometryVS::ModelGeometryVS() {
        uint16_t local_4b = 7503;
        uint8_t local_49 = 81;
        uint64_t local_68 = 3;
        EffectList local_90(&local_4b);
        uint64_t local_48 = 1875553863705697087;
        uint64_t uStack_40 = 8650947773573845559;
        uint32_t local_38 = 809065533;
        uint64_t local_58 = 20;
        EffectList local_80(&local_48);
        new (this) ShaderSource(local_90, local_80);
    }

    // 0x100897660
    ModelGeometryVS* ModelGeometryVS::GetSource(const EffectManager& effectManager,
                                                const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* pbVar5;
        char* pcVar6;
        EffectList* in_RCX;
        uint8_t local_170[280];
        ReturnValue local_58;

        new (local_170) RT7VertexShaderSourceStream(effectManager, *in_RCX, 2, 2, 1, 1, 1, 1, 24);
        uint8_t bVar1 = in_RCX->Contains(30);
        char local_34 = in_RCX->Contains(82);
        uint8_t local_35 = in_RCX->Contains(42);
        char local_33 = in_RCX->Contains(87);
        uint8_t bVar2 = in_RCX->Contains(26);
        uint8_t bVar3 = in_RCX->Contains(55);
        bool cVar4 = in_RCX->Contains(48);
        uint8_t local_32 = bVar2;
        if (!cVar4) {
            bVar2 = 0;
        } else {
            bVar2 = in_RCX->Contains(29);
        }
        uint8_t local_31 = in_RCX->Contains(57);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(
            basic_ostream,
            "attribute vec4 aVertexPosition_BoneLabel;\nattribute vec2 aTextureUV;\nattribute vec4 "
            "aVertexNormal_BatchFlags;\nattribute vec4 aVertexTangent;\nattribute vec4 aVertexColour;\nattribute vec4 "
            "aVertexColourUnwhitenedRGB_TilePositionLevel;\nattribute vec4 aMaterialSettingsSlotXY_TilePositionXZ;\n");
        cVar4 = in_RCX->Contains(75);
        if (cVar4) {
            std::operator<<(basic_ostream, "attribute vec4 aVertexSkinBones;\nattribute vec4 aVertexSkinWeights;\n");
            std::operator<<(basic_ostream, "uniform float uSmoothSkinning;\n");
        }
        std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\nuniform float uVertexScale;\n");
        local_58.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        cVar4 = in_RCX->Contains(74);
        if (cVar4) {
            pbVar5 = std::operator<<(basic_ostream, "uniform vec4 uBoneTransforms[");
            pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5, 168);
            std::operator<<(pbVar5, "];\n");
            pbVar5 = std::operator<<(basic_ostream, "uniform vec4 uLabelDeltas[");
            pbVar5 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar5, 32);
            std::operator<<(pbVar5, "];\n");
        }
        if ((uint8_t)(bVar1 | local_35 | bVar2) == 1) {
            local_58 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        }
        if (bVar2 != 0) {
            pcVar6 = shadersourceprovider::GetShaderString(70);
            std::operator<<(basic_ostream, pcVar6);
        }
        if (local_31 != 0) {
            pcVar6 = shadersourceprovider::GetShaderString(62);
            std::operator<<(basic_ostream, pcVar6);
        }
        if (local_34 != '\0') {
            std::operator<<(basic_ostream, "uniform mediump vec4 uTint;\n");
        }
        if (local_33 != '\0') {
            pcVar6 = shadersourceprovider::GetShaderString(58);
            std::operator<<(basic_ostream, pcVar6);
        }
        std::operator<<(basic_ostream, "uniform float uFade;\n");
        std::operator<<(basic_ostream, "out highp vec3 vWorldPosition;\n");
        std::operator<<(basic_ostream, "out highp vec3 vNormal;\n");
        cVar4 = in_RCX->Contains(61);
        if (cVar4) {
            std::operator<<(basic_ostream, "out vec4 vTangent;\n");
        }
        if ((local_32 & bVar3) == 1) {
            std::operator<<(basic_ostream, "out vec3 vTilePosition;\n");
        }
        cVar4 = in_RCX->Contains(81);
        if (cVar4) {
            std::operator<<(basic_ostream, "out mediump vec4 vVertexAlbedo;\n");
        }
        cVar4 = in_RCX->Contains(63);
        if (cVar4) {
            std::operator<<(basic_ostream, "out vec2 vTextureUV;\n");
        }
        std::operator<<(basic_ostream, "flat out vec3 vMaterialSettingsSlotXY_BatchFlags;\n");
        if ((bVar2 | local_31) == 1) {
            pcVar6 = shadersourceprovider::GetShaderString(71);
            std::operator<<(basic_ostream, pcVar6);
        }
        if (bVar2 != 0) {
            pcVar6 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar6);
        }
        if (local_31 != 0) {
            pcVar6 = shadersourceprovider::GetShaderString(61);
            std::operator<<(basic_ostream, pcVar6);
        }
        pcVar6 = shadersourceprovider::GetShaderString(34);
        std::operator<<(basic_ostream, pcVar6);
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
