// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/DepthDownsampleFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthDownsampleFS {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsampleFS();
        virtual DepthDownsampleFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        DepthDownsampleFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: DepthDownsampleFS::~DepthDownsampleFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DepthDownsampleFS::~DepthDownsampleFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088bdc0
    DepthDownsampleFS::DepthDownsampleFS() {
        EffectList local_58;
        uint16_t local_22 = 22890;
        uint64_t local_30 = 2;
        EffectList local_48(&local_22);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x10088be40
    DepthDownsampleFS* DepthDownsampleFS::GetSource(const EffectManager& effectManager,
                                                    const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* pbVar3;
        EffectList* in_RCX;
        int iVar4;
        uint8_t local_160[280];
        unsigned long local_48;
        float local_34;

        new (local_160) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16);
        std::operator<<(
            basic_ostream,
            "uniform vec2 uTexelSize;\nuniform SAMPLER_2D_AUTO_MULTISAMPLE uDepthTexture;\n\nin vec2 "
            "vTextureUV;\n\nvec2 GetViewportUV(vec2 uv)\n{\n   return uv * uViewportOffsetScale.zw + "
            "uViewportOffsetScale.xy;\n}\n\nvoid main()\n{\n    float depth = "
            "float(texture2DMultisample(uDepthTexture, GetViewportUV(vTextureUV), uFullScreenLookupScale.zw));\n");
        unsigned long uVar2 = 4294967295;
        do {
            local_34 = (float)(int)uVar2 * 0.33333334f;
            iVar4 = -3;
            local_48 = uVar2;
            do {
                pbVar3 =
                    std::operator<<(basic_ostream, "    depth = max(depth, float(texture2DMultisample(uDepthTexture, "
                                                   "GetViewportUV(vTextureUV + uTexelSize * vec2(");
                pbVar3 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<(
                    (ostream*)pbVar3, (float)(iVar4 + 2) * 0.33333334f);
                pbVar3 = std::operator<<(pbVar3, ", ");
                pbVar3 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar3,
                                                                                                  local_34);
                std::operator<<(pbVar3, ")), uFullScreenLookupScale.zw)));\n");
                iVar4 = iVar4 + 2;
            } while (iVar4 < 0);
            uVar2 = (unsigned long)((int)local_48 + 2);
        } while ((int)local_48 < 0);
        std::operator<<(basic_ostream, "    gl_FragColor = vec4(1.0 - depth, 0.0, 0.0, 1.0);\n}\n");
        *this = local_160->str();
        return this;
    }

} // namespace jag::graphics
