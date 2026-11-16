// libs/graphics/runetek7/materials/shaders/basic/model/billboard/ModelBillboardVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelBillboardVS {
    public:
        // virtual methods in vtable order
        virtual ~ModelBillboardVS();
        virtual ModelBillboardVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelBillboardVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ModelBillboardVS::~ModelBillboardVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelBillboardVS::~ModelBillboardVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x100894ce0
    ModelBillboardVS::ModelBillboardVS() {
        uint8_t local_32 = 79;
        uint64_t local_50 = 1;
        EffectList local_78(&local_32);
        uint64_t local_31 = 4129322897965402644;
        uint8_t local_29 = 86;
        uint64_t local_40 = 9;
        EffectList local_68(&local_31);
        new (this) ShaderSource(local_78, local_68);
    }

    // 0x100894da0
    ModelBillboardVS* ModelBillboardVS::GetSource(const EffectManager& effectManager,
                                                  const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t bVar2;
        char* pcVar5;
        EffectList* in_RCX;
        uint8_t local_168[280];
        ReturnValue local_50;

        new (local_168) RT7VertexShaderSourceStream(effectManager, *in_RCX, 2, 2, 1, 1, 1, 1, 24);
        if (!(in_RCX->Contains(48))) {
            bVar2 = 0;
        } else {
            bVar2 = in_RCX->Contains(29);
        }
        uint8_t bVar3 = in_RCX->Contains(57);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_168 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec4 aVertexPositionDepthOffset;\nattribute vec4 aVertexColour;\nattribute vec2 "
                        "aBillboardSize;\nattribute vec4 aMaterialSettingsSlotXY_UV;\nattribute vec4 "
                        "aBone_Label_BillboardLabel_Joint;\n");
        basic_ostream<char, std::char_traits<char> _>* pbVar4 =
            std::operator<<(basic_ostream, "uniform mat4 uModelMatrix;\n");
        local_50.BuildUniforms();
        pbVar4 = std::operator<<(pbVar4, &local_50);
        std::operator<<(pbVar4, "uniform float uFade;\n");
        if (in_RCX->Contains(74)) {
            pbVar4 = std::operator<<(basic_ostream, "uniform vec4 uBoneTransforms[");
            pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, 168);
            std::operator<<(pbVar4, "];\n");
        }
        if (in_RCX->Contains(76)) {
            pbVar4 = std::operator<<(basic_ostream, "uniform vec4 uLabelDeltas[");
            pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, 32);
            std::operator<<(pbVar4, "];\n");
            pbVar4 = std::operator<<(basic_ostream, "uniform vec4 uBillboardLabelTransforms[");
            pbVar4 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar4, 20);
            std::operator<<(pbVar4, "];\n");
        }
        if (bVar2 != 0) {
            local_50 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
            pcVar5 = shadersourceprovider::GetShaderString(70);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (bVar3 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(62);
            std::operator<<(basic_ostream, pcVar5);
        }
        std::operator<<(basic_ostream,
                        "out vec4 vVertexAlbedo;\nout vec2 vTextureUV;\nflat out vec2 vMaterialSettingsSlotXY;\n");
        if ((bVar2 | bVar3) == 1) {
            pcVar5 = shadersourceprovider::GetShaderString(71);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (bVar2 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (bVar3 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(61);
            std::operator<<(basic_ostream, pcVar5);
        }
        pcVar5 = shadersourceprovider::GetShaderString(31);
        std::operator<<(basic_ostream, pcVar5);
        *this = local_168->str();
        return this;
    }

} // namespace jag::graphics
