// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/DepthDownsampleFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DepthDownsampleFS {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsampleFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        DepthDownsampleFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DepthDownsampleFS::~DepthDownsampleFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DepthDownsampleFS::~DepthDownsampleFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DepthDownsampleFS::~DepthDownsampleFS();

    // 0x10088bdc0, 112 bytes, base-object constructor, placed by class name and debug map
    // DepthDownsampleFS::DepthDownsampleFS()
    void DepthDownsampleFS::DepthDownsampleFS() {
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
        field_0 = &PTR__ScriptOption_100f16f30;
    }

    // 0x10088be30, 16 bytes, complete-object constructor, placed by class name and debug map
    // DepthDownsampleFS::DepthDownsampleFS(): jumps straight to the base-object constructor

    // 0x10088be40, 368 bytes, placed by class name and debug map
    // DepthDownsampleFS::GetSource(EffectManager const&, EffectList const&) const
    DepthDownsampleFS* DepthDownsampleFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        ulong uVar3;
        ostream* poVar4;
        int iVar5;
        undefined1 local_160[280];
        ulong local_48;
        float local_34;

        new (local_160) RT7PixelShaderSourceStream();
        poVar1 = (ostream*)(local_160 + 16);
        std::operator<<(
            poVar1,
            "uniform vec2 uTexelSize;\nuniform SAMPLER_2D_AUTO_MULTISAMPLE uDepthTexture;\n\nin vec2 "
            "vTextureUV;\n\nvec2 GetViewportUV(vec2 uv)\n{\n   return uv * uViewportOffsetScale.zw + "
            "uViewportOffsetScale.xy;\n}\n\nvoid main()\n{\n    float depth = "
            "float(texture2DMultisample(uDepthTexture, GetViewportUV(vTextureUV), uFullScreenLookupScale.zw));\n");
        uVar3 = 4294967295;
        do {
            local_34 = (float)(int)uVar3 * 0.33333334;
            iVar5 = -3;
            local_48 = uVar3;
            do {
                poVar4 = std::operator<<(poVar1, "    depth = max(depth, float(texture2DMultisample(uDepthTexture, "
                                                 "GetViewportUV(vTextureUV + uTexelSize * vec2(");
                poVar4 = (ostream*)std::ostream::operator<<(poVar4, (float)(iVar5 + 2) * 0.33333334);
                poVar4 = std::operator<<(poVar4, ", ");
                poVar4 = (ostream*)std::ostream::operator<<(poVar4, local_34);
                std::operator<<(poVar4, ")), uFullScreenLookupScale.zw)));\n");
                iVar5 = iVar5 + 2;
            } while (iVar5 < 0);
            uVar3 = (ulong)((int)local_48 + 2);
        } while ((int)local_48 < 0);
        std::operator<<(poVar1, "    gl_FragColor = vec4(1.0 - depth, 0.0, 0.0, 1.0);\n}\n");
        ((DepthDownsampleFS*)this)->str();
        local_160->~RT7PixelShaderSourceStream();
        return (DepthDownsampleFS*)this;
    }

} // namespace jag::graphics
