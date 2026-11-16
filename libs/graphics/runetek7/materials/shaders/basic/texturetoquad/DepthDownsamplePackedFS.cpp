// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/DepthDownsamplePackedFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthDownsamplePackedFS {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsamplePackedFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        DepthDownsamplePackedFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DepthDownsamplePackedFS::~DepthDownsamplePackedFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DepthDownsamplePackedFS::~DepthDownsamplePackedFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DepthDownsamplePackedFS::~DepthDownsamplePackedFS();

    // 0x10088bfb0, 112 bytes, base-object constructor, placed by class name and debug map
    // DepthDownsamplePackedFS::DepthDownsamplePackedFS()
    void DepthDownsamplePackedFS::DepthDownsamplePackedFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined2* local_38;
        undefined8 local_30;
        undefined2 local_22;

        EffectList::EffectList(local_58);
        local_22 = 22890;
        local_38 = &local_22;
        local_30 = 2;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f16f58;
    }

    // 0x10088c020, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthDownsamplePackedFS::DepthDownsamplePackedFS(): jumps straight to the base-object constructor

    // 0x10088c030, 448 bytes, placed by class name and debug map
    // DepthDownsamplePackedFS::GetSource(EffectManager const&, EffectList const&) const
    DepthDownsamplePackedFS* DepthDownsamplePackedFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar2;
        ulong uVar3;
        int iVar4;
        undefined1 local_160[280];
        ulong local_48;
        float local_38;
        float local_34;

        new (local_160) RT7PixelShaderSourceStream();
        poVar2 = std::operator<<(
            (ostream*)(local_160 + 16),
            "uniform vec2 uTexelSize;\nuniform SAMPLER_2D_AUTO_MULTISAMPLE uDepthTexture;\nin vec2 vTextureUV;\n");
        std::operator<<(poVar2,
                        "\nvoid main()\n{\n    float x1 = float(texture2DMultisample(uDepthTexture, vTextureUV, "
                        "uViewportLookupScale.zw));\n    float x2 = float(texture2DMultisample(uDepthTexture, "
                        "vec2(vTextureUV.x + uTexelSize.x * 0.5, vTextureUV.y), uViewportLookupScale.zw));\n");
        uVar3 = 4294967295;
        do {
            local_34 = (float)(int)uVar3 * 0.16666667;
            iVar4 = -3;
            local_48 = uVar3;
            do {
                poVar2 = std::operator<<(
                    (ostream*)(local_160 + 16),
                    "    x1 = max(x1, float(texture2DMultisample(uDepthTexture, (vTextureUV + uTexelSize * vec2(");
                local_38 = (float)(iVar4 + 2) * 0.16666667;
                poVar2 = (ostream*)std::ostream::operator<<(poVar2, local_38);
                poVar2 = std::operator<<(poVar2, ", ");
                poVar2 = (ostream*)std::ostream::operator<<(poVar2, local_34);
                poVar2 = std::operator<<(
                    poVar2,
                    ")), uViewportLookupScale.zw)));\n    x2 = max(x2, float(texture2DMultisample(uDepthTexture, "
                    "(vec2(vTextureUV.x + uTexelSize.x * 0.5, vTextureUV.y) + uTexelSize * vec2(");
                poVar2 = (ostream*)std::ostream::operator<<(poVar2, local_38);
                poVar2 = std::operator<<(poVar2, ", ");
                poVar2 = (ostream*)std::ostream::operator<<(poVar2, local_34);
                std::operator<<(poVar2, ")), uViewportLookupScale.zw)));\n");
                iVar4 = iVar4 + 2;
            } while (iVar4 < 0);
            uVar3 = (ulong)((int)local_48 + 2);
        } while ((int)local_48 < 0);
        std::operator<<((ostream*)(local_160 + 16),
                        "    x1 = clamp(x1, 0.0, 0.999999);\n    x2 = clamp(x2, 0.0, 0.999999);\n    gl_FragColor = "
                        "vec4(PackFloatToVec2(x1), PackFloatToVec2(x2));\n}\n");
        ((DepthDownsamplePackedFS*)this)->str();
        local_160->~RT7PixelShaderSourceStream();
        return (DepthDownsamplePackedFS*)this;
    }

} // namespace jag::graphics
