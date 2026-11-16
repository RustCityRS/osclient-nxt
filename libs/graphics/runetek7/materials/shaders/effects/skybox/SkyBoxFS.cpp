// libs/graphics/runetek7/materials/shaders/effects/skybox/SkyBoxFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class SkyBoxFS {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        SkyBoxFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: SkyBoxFS::~SkyBoxFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: SkyBoxFS::~SkyBoxFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088d8d0
    SkyBoxFS::SkyBoxFS() {
        EffectList local_58;
        uint32_t local_25 = 825243933;
        uint8_t local_21 = 84;
        uint64_t local_30 = 5;
        EffectList local_48(&local_25);
        new (this) ShaderSource(local_58, local_48);
    }

    // 0x10088d950
    auto SkyBoxFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar4;
        uint8_t local_160[280];

        new (local_160) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        char cVar1 = effectList.Contains(29);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = effectList.Contains(48);
        }
        bool cVar2 = effectList.Contains(57);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16);
        std::operator<<(basic_ostream, "uniform samplerCube uSkyBoxMap1;\nuniform samplerCube uSkyBoxMap2;\nuniform "
                                       "bool uSkyBoxUseFirst;\nuniform bool uSkyBoxUseSecond;\nuniform float "
                                       "uSkyBoxInterpolant;\nuniform float uExposure;\n");
        if (cVar1) {
            local_48 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        }
        if (cVar2) {
            local_48 = DistanceFog::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        }
        basic_ostream<char, std::char_traits<char> _>* pbVar5 = basic_ostream;
        std::operator<<(basic_ostream, "in vec3 vViewSpaceNormal;\n");
        if (cVar1) {
            pbVar5 = basic_ostream;
            std::operator<<(basic_ostream, "in vec4 vViewVectorAndLength;\n");
        }
        long lVar3 = ((MapArea*)pbVar5->Instance())->GetOrigin();
        auto local_48 = TextureCubeUtils::BuildFragment(*(bool*)(lVar3 + 147));
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        if (cVar2) {
            local_48 = DistanceFog::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        }
        if (cVar1) {
            pcVar4 = shadersourceprovider::GetShaderString(70);
            pbVar5 = std::operator<<(basic_ostream, pcVar4);
            pcVar4 = shadersourceprovider::GetShaderString(69);
            pbVar5 = std::operator<<(pbVar5, pcVar4);
            pcVar4 = shadersourceprovider::GetShaderString(67);
            std::operator<<(pbVar5, pcVar4);
        }
        pcVar4 = shadersourceprovider::GetShaderString(98);
        std::operator<<(basic_ostream, pcVar4);
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
