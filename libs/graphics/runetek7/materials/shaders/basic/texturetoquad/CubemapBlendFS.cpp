// libs/graphics/runetek7/materials/shaders/basic/texturetoquad/CubemapBlendFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class CubemapBlendFS {
    public:
        // virtual methods in vtable order
        virtual ~CubemapBlendFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        CubemapBlendFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    CubemapBlendFS::~CubemapBlendFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    CubemapBlendFS::~CubemapBlendFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    CubemapBlendFS::~CubemapBlendFS();

    // 0x10088bb20, 80 bytes, base-object constructor, placed by class name and debug map
    // CubemapBlendFS::CubemapBlendFS()
    void CubemapBlendFS::CubemapBlendFS() {
        EffectList local_40[16];
        EffectList local_30[16];

        EffectList::EffectList(local_40);
        EffectList::EffectList(local_30);
        new (this) ShaderSource(local_40, local_30);
        field_0 = &PTR__ScriptOption_100f16ee0;
    }

    // 0x10088bb70, 16 bytes, complete-object constructor, placed by class name and debug map
    // CubemapBlendFS::CubemapBlendFS(): jumps straight to the base-object constructor

    // 0x10088bb80, 320 bytes, placed by class name and debug map
    // CubemapBlendFS::GetSource(EffectManager const&, EffectList const&) const
    CubemapBlendFS* CubemapBlendFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        MapArea* pMVar2;
        long lVar3;
        PixelShaderSourceStream* this_00;
        ostream* this_01;
        undefined1 local_148[280];
        TextureCubeUtils local_30[24];

        this_00 = (PixelShaderSourceStream*)local_148;
        render::PixelShaderSourceStream::PixelShaderSourceStream(this_00, 1, 1, 1, 1, 1, 1, 24);
        pMVar2 = (MapArea*)this_00->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 147) != '\0') {
            pMVar2 = (MapArea*)pMVar2->Instance();
            lVar3 = pMVar2->GetOrigin();
            local_30->BuildFragment(*(bool*)(lVar3 + 147));
            std::operator<<((ostream*)(local_148 + 16), (basic_string*)local_30);
            local_30->~basic_string();
        }
        poVar1 = (ostream*)(local_148 + 16);
        this_01 = poVar1;
        std::operator<<(
            poVar1, "                                                                                                  "
                    "     \nin vec3 vTexCoord;                                                                         "
                    "            \n                                                                                    "
                    "                   \nuniform samplerCube sTextureCubeA;                                           "
                    "                          \nuniform samplerCube sTextureCubeB;                                    "
                    "                                 \nuniform float uLerpValue;                                      "
                    "                                        \n                                                        "
                    "                                               \nvoid main()                                      "
                    "                                                      \n{                                         "
                    "                                                             \n                                   "
                    "                                                                    \n");
        pMVar2 = (MapArea*)this_01->Instance();
        lVar3 = pMVar2->GetOrigin();
        if (*(char*)(lVar3 + 147) == '\0') {
            std::operator<<(
                poVar1,
                "   vec3 sampleA = textureCube(sTextureCubeA, vTexCoord).rgb;                                       \n "
                "  vec3 sampleB = textureCube(sTextureCubeB, vTexCoord).rgb;                                       \n  "
                " vec4 finalColour = vec4(mix(sampleA, sampleB, uLerpValue), 1.0);                                \n");
        } else {
            std::operator<<(
                poVar1,
                "   vec3 sampleA = textureCubeSRGB(sTextureCubeA, vTexCoord).rgb;                                   \n "
                "  vec3 sampleB = textureCubeSRGB(sTextureCubeB, vTexCoord).rgb;                                   \n  "
                " vec4 finalColour = vec4(LinearToSRGB(mix(sampleA, sampleB, uLerpValue)), 1.0);                  \n");
        }
        std::operator<<(
            poVar1,
            "   gl_FragColor = finalColour;                                                                     \n}\n");
        str();
        local_148->~PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
