// libs/graphics/runetek7/materials/shaders/basic/particles/ParticleVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ParticleVS {
    public:
        // virtual methods in vtable order
        virtual ~ParticleVS();
        virtual ParticleVS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ParticleVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ParticleVS::~ParticleVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ParticleVS::~ParticleVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088a0b0
    ParticleVS::ParticleVS() {
        uint8_t local_37 = 79;
        uint64_t local_50 = 1;
        EffectList local_78(&local_37);
        uint64_t local_36 = 7660457383239823389;
        uint32_t local_2e = 555753246;
        uint16_t local_2a = 7202;
        uint64_t local_40 = 14;
        EffectList local_68(&local_36);
        new (this) ShaderSource(local_78, local_68);
    }

    // 0x10088a180
    ParticleVS* ParticleVS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar5;
        EffectList* in_RCX;
        uint8_t local_178[280];
        basic_ostream<char, std::char_traits<char> _>* local_60;
        ReturnValue local_50;

        new (local_178) RT7VertexShaderSourceStream(effectManager, *in_RCX, 2, 2, 1, 1, 1, 1, 24);
        uint8_t bVar1 = in_RCX->Contains(48);
        char cVar2 = in_RCX->Contains(30);
        char local_32 = in_RCX->Contains(28);
        uint8_t bVar3 = in_RCX->Contains(29);
        uint8_t local_31 = in_RCX->Contains(57);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream,
                        "attribute vec4 aParticleOrigin_CreationTime;\nattribute vec2 aParticleOffset;\nattribute vec4 "
                        "aVertexColour;\nattribute vec4 aMaterialSettingsSlotXY_Rotation;\nattribute vec4 "
                        "aParticleUVAnimationData;\nattribute vec3 aParticleVelocity;\n");
        local_50.BuildUniforms();
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        std::operator<<(basic_ostream,
                        "uniform highp float uTextureAnimationTime;\nuniform highp mat4 uInvViewMatrix;\n");
        if (bVar1 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(70);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (local_31 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(62);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (cVar2) {
            if (local_32 == '\0') {
                local_60 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform "
                                                          "mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
                local_50 = DirLightShadowMapping::BuildUniforms();
                std::operator<<(local_60, &local_50);
            } else {
                std::operator<<(basic_ostream, "uniform sampler2D uShadowBuffer;\n");
            }
        }
        if ((bVar3 | bVar1) == 1) {
            local_50 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        std::operator<<(
            basic_ostream,
            "out highp vec4 vWorldPosition;\nflat out vec4 vVertexAlbedo;\nflat out vec2 vMaterialSettingsSlotXY;\nout "
            "vec4 vTextureUV;\nout float vUVInterpolationAmount;\nflat out float vAlphaOutput;\n");
        bool cVar4 = in_RCX->Contains(103);
        if (cVar4) {
            std::operator<<(basic_ostream, "flat out float vSoftFadeEnabled;\n");
        }
        cVar4 = in_RCX->Contains(103);
        if (!cVar4) {
            cVar4 = in_RCX->Contains(105);
            if (!cVar4)
                goto LAB_10088a375;
        }
        std::operator<<(basic_ostream, "out float vViewSpaceDepth;\n");
    LAB_10088a375:
        if ((bVar1 | local_31) == 1) {
            pcVar5 = shadersourceprovider::GetShaderString(71);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (bVar1 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(69);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (local_31 != 0) {
            pcVar5 = shadersourceprovider::GetShaderString(61);
            std::operator<<(basic_ostream, pcVar5);
        }
        if (cVar2 == '\x01' && local_32 == '\0') {
            local_50 = DirLightShadowMapping::BuildFSFragment(5);
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_50);
        }
        pcVar5 = shadersourceprovider::GetShaderString(44);
        std::operator<<(basic_ostream, pcVar5);
        *this = local_178->str();
        return this;
    }

} // namespace jag::graphics
