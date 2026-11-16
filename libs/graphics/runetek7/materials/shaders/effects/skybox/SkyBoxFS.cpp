// libs/graphics/runetek7/materials/shaders/effects/skybox/SkyBoxFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class SkyBoxFS {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        SkyBoxFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SkyBoxFS::~SkyBoxFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    SkyBoxFS::~SkyBoxFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    SkyBoxFS::~SkyBoxFS();

    // 0x10088d8d0, 112 bytes, base-object constructor, placed by class name and debug map
    // SkyBoxFS::SkyBoxFS()
    void SkyBoxFS::SkyBoxFS() {
        EffectList local_58[16];
        EffectList local_48[16];
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_25;
        undefined1 local_21;

        EffectList::EffectList(local_58);
        local_25 = 825243933;
        local_21 = 84;
        local_38 = &local_25;
        local_30 = 5;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_58, local_48);
        field_0 = &PTR__ScriptOption_100f17160;
    }

    // 0x10088d940, 16 bytes, complete-object constructor, placed by class name and debug map
    // SkyBoxFS::SkyBoxFS(): jumps straight to the base-object constructor

    // 0x10088d950, 560 bytes, placed by class name and debug map
    // SkyBoxFS::GetSource(EffectManager const&, EffectList const&) const
    SkyBoxFS* SkyBoxFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        MapArea* this_00;
        long lVar4;
        char* pcVar5;
        ostream* poVar6;
        undefined1 local_160[280];
        DirLights local_48[24];

        new (local_160) RT7PixelShaderSourceStream();
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = '\0';
        } else {
            cVar2 = EffectList::Contains();
        }
        cVar3 = EffectList::Contains();
        poVar1 = (ostream*)(local_160 + 16);
        std::operator<<(poVar1, "uniform samplerCube uSkyBoxMap1;\nuniform samplerCube uSkyBoxMap2;\nuniform bool "
                                "uSkyBoxUseFirst;\nuniform bool uSkyBoxUseSecond;\nuniform float "
                                "uSkyBoxInterpolant;\nuniform float uExposure;\n");
        if (cVar2 != '\0') {
            local_48->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_48);
            local_48->~basic_string();
        }
        if (cVar3 != '\0') {
            local_48->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_48);
            local_48->~basic_string();
        }
        poVar6 = poVar1;
        std::operator<<(poVar1, "in vec3 vViewSpaceNormal;\n");
        if (cVar2 != '\0') {
            poVar6 = poVar1;
            std::operator<<(poVar1, "in vec4 vViewVectorAndLength;\n");
        }
        this_00 = (MapArea*)poVar6->Instance();
        lVar4 = this_00->GetOrigin();
        local_48->BuildFragment(*(bool*)(lVar4 + 147));
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        if (cVar3 != '\0') {
            local_48->BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)local_48);
            local_48->~basic_string();
        }
        if (cVar2 != '\0') {
            pcVar5 = (char*)shadersourceprovider::GetShaderString(70);
            poVar6 = std::operator<<(poVar1, pcVar5);
            pcVar5 = (char*)shadersourceprovider::GetShaderString(69);
            poVar6 = std::operator<<(poVar6, pcVar5);
            pcVar5 = (char*)shadersourceprovider::GetShaderString(67);
            std::operator<<(poVar6, pcVar5);
        }
        pcVar5 = (char*)shadersourceprovider::GetShaderString(98);
        std::operator<<(poVar1, pcVar5);
        str();
        local_160->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
