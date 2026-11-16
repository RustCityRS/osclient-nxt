// libs/graphics/runetek7/materials/shaders/effects/shadows/ShadowCascadeSelectionVS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ShadowCascadeSelectionVS {
    public:
        // virtual methods in vtable order
        virtual ~ShadowCascadeSelectionVS();
        virtual ShadowCascadeSelectionVS* GetSource(const EffectManager& effectManager,
                                                    const EffectList& effectList) const;
        ShadowCascadeSelectionVS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100022b10: ShadowCascadeSelectionVS::~ShadowCascadeSelectionVS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ShadowCascadeSelectionVS::~ShadowCascadeSelectionVS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10088d790
    ShadowCascadeSelectionVS::ShadowCascadeSelectionVS() {

        EffectList local_40;
        EffectList local_30;
        new (this) ShaderSource(local_40, local_30);
    }

    // 0x10088d7f0
    ShadowCascadeSelectionVS* ShadowCascadeSelectionVS::GetSource(const EffectManager& effectManager,
                                                                  const EffectList& effectList) const {
        uint8_t local_148[280];

        new (local_148) render::VertexShaderSourceStream(2, 2, 1, 1, 1, 1, 24);
        auto local_30 = DirLightShadowMapping::BuildSharedFragment();
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16),
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_30);
        auto str = shadersourceprovider::GetShaderString(55);
        std::operator<<((basic_ostream<char, std::char_traits<char> _>*)(local_148 + 16), str);
        *this = local_148->str();
        return this;
    }

} // namespace jag::graphics
