// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/DepthDownsamplePackedFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DepthDownsamplePackedFS {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsamplePackedFS();
        virtual DepthDownsamplePackedFS* GetSource(const EffectManager& effectManager,
                                                   const EffectList& effectList) const;
        DepthDownsamplePackedFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: DepthDownsamplePackedFS::~DepthDownsamplePackedFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DepthDownsamplePackedFS::~DepthDownsamplePackedFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088bfb0
    DepthDownsamplePackedFS::DepthDownsamplePackedFS() {
        EffectList local_58;
        uint16_t local_22 = 22890;
        uint64_t local_30 = 2;
        EffectList local_48(&local_22);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x10088c030
    DepthDownsamplePackedFS* DepthDownsamplePackedFS::GetSource(const EffectManager& effectManager,
                                                                const EffectList& effectList) const {
        EffectList* in_RCX;
        int iVar4;
        uint8_t local_160[280];
        unsigned long local_48;
        float local_38;
        float local_34;

        new (local_160) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        basic_ostream<char, std::char_traits<char> _>* pbVar2 = std::operator<<(
            (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16),
            "uniform vec2 uTexelSize;\nuniform SAMPLER_2D_AUTO_MULTISAMPLE uDepthTexture;\nin vec2 vTextureUV;\n");
        std::operator<<(pbVar2,
                        "\nvoid main()\n{\n    float x1 = float(texture2DMultisample(uDepthTexture, vTextureUV, "
                        "uViewportLookupScale.zw));\n    float x2 = float(texture2DMultisample(uDepthTexture, "
                        "vec2(vTextureUV.x + uTexelSize.x * 0.5, vTextureUV.y), uViewportLookupScale.zw));\n");
        unsigned long uVar3 = 4294967295;
        do {
            local_34 = (float)(int)uVar3 * 0.16666667f;
            iVar4 = -3;
            local_48 = uVar3;
            do {
                pbVar2 = std::operator<<(
                    (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16),
                    "    x1 = max(x1, float(texture2DMultisample(uDepthTexture, (vTextureUV + uTexelSize * vec2(");
                local_38 = (float)(iVar4 + 2) * 0.16666667f;
                pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2,
                                                                                                  local_38);
                pbVar2 = std::operator<<(pbVar2, ", ");
                pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2,
                                                                                                  local_34);
                pbVar2 = std::operator<<(
                    pbVar2,
                    ")), uViewportLookupScale.zw)));\n    x2 = max(x2, float(texture2DMultisample(uDepthTexture, "
                    "(vec2(vTextureUV.x + uTexelSize.x * 0.5, vTextureUV.y) + uTexelSize * vec2(");
                pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2,
                                                                                                  local_38);
                pbVar2 = std::operator<<(pbVar2, ", ");
                pbVar2 = (basic_ostream<char, std::char_traits<char> _>*)std::ostream::operator<<((ostream*)pbVar2,
                                                                                                  local_34);
                std::operator<<(pbVar2, ")), uViewportLookupScale.zw)));\n");
                iVar4 = iVar4 + 2;
            } while (iVar4 < 0);
            uVar3 = (unsigned long)((int)local_48 + 2);
        } while ((int)local_48 < 0);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16),
                        "    x1 = clamp(x1, 0.0, 0.999999);\n    x2 = clamp(x2, 0.0, 0.999999);\n    gl_FragColor = "
                        "vec4(PackFloatToVec2(x1), PackFloatToVec2(x2));\n}\n");
        *this = local_160->str();
        return this;
    }

} // namespace jag::graphics
