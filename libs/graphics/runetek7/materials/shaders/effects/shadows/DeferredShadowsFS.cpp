// libs/graphics/runetek7/materials/shaders/effects/shadows/DeferredShadowsFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class DeferredShadowsFS {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadowsFS();
        virtual auto GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        DeferredShadowsFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: DeferredShadowsFS::~DeferredShadowsFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: DeferredShadowsFS::~DeferredShadowsFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088d0b0
    DeferredShadowsFS::DeferredShadowsFS() {
        uint8_t local_33 = 29;
        uint64_t local_50 = 1;
        EffectList local_78(&local_33);
        uint64_t local_32 = 2314575489985564505;
        uint16_t local_2a = 8737;
        uint64_t local_40 = 10;
        EffectList local_68(&local_32);
        new (this) ShaderSource(local_78, local_68);
    }

    // 0x10088d170
    auto DeferredShadowsFS::GetSource(const EffectManager& effectManager, const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream_00;
        uint8_t local_160[280];
        ReturnValue local_48;

        new (local_160) RT7PixelShaderSourceStream(*this, effectList, 1, 1, 1, 1, 1, 1, 24);
        bool cVar1 = effectList.Contains(29);
        bool cVar2 = effectList.Contains(30);
        local_48.BuildUniforms();
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_160 + 16);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        if (cVar1) {
            local_48 = DirLights::BuildUniforms();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
        }
        if (cVar2) {
            basic_ostream_00 = std::operator<<(basic_ostream, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform "
                                                              "mat4 uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
            local_48 = DirLightShadowMapping::BuildUniforms();
            std::operator<<(basic_ostream_00,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
            if (cVar2) {
                local_48 = DirLightShadowMapping::BuildFSFragment(5);
                std::operator<<(basic_ostream,
                                (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_48);
            }
        }
        auto str = shadersourceprovider::GetShaderString(9);
        std::operator<<(basic_ostream, str);
        auto result = local_160->str();
        return result;
    }

} // namespace jag::graphics
