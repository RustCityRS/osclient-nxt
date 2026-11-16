// libs/graphics/runetek7/materials/shaders/basic/model/billboard/ModelBillboardFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class ModelBillboardFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelBillboardFS();
        virtual ModelBillboardFS* GetSource(const EffectManager& effectManager, const EffectList& effectList) const;
        ModelBillboardFS();

    private:
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100022b10: ModelBillboardFS::~ModelBillboardFS() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: ModelBillboardFS::~ModelBillboardFS() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1008949d0
    ModelBillboardFS::ModelBillboardFS() {
        initializer_list<EffectType> local_58;
        EffectList local_68(local_58);
        uint32_t local_26 = 807223355;
        uint16_t local_22 = 17721;
        uint64_t local_30 = 6;
        EffectList local_48(&local_26);
        new (this) ShaderSource(local_68, local_48);
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100894a90
    ModelBillboardFS* ModelBillboardFS::GetSource(const EffectManager& effectManager,
                                                  const EffectList& effectList) const {
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        char* pcVar4;
        EffectList* in_RCX;
        uint8_t local_170[280];

        new (local_170) RT7PixelShaderSourceStream(effectManager, *in_RCX, 1, 1, 1, 1, 1, 1, 24);
        char local_31 = in_RCX->Contains(59);
        char cVar1 = in_RCX->Contains(48);
        if (!cVar1) {
            cVar1 = '\0';
        } else {
            cVar1 = in_RCX->Contains(29);
        }
        bool cVar2 = in_RCX->Contains(64);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_170 + 16);
        std::operator<<(basic_ostream, "in vec4 vVertexAlbedo;\n");
        std::operator<<(basic_ostream, "in vec2 vTextureUV;\n");
        std::operator<<(basic_ostream, "flat in vec2 vMaterialSettingsSlotXY;\n");
        if (!cVar1) {
            if (in_RCX->Contains(57) != '\0')
                goto LAB_100894b7d;
        } else {
        LAB_100894b7d:
            pcVar4 = shadersourceprovider::GetShaderString(68);
            std::operator<<(basic_ostream, pcVar4);
        }
        std::operator<<(basic_ostream, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                       "uTextureAtlasSettings;\nuniform float uAlphaTestThreshold;\n");
        auto local_58 = effectManager.field_40.BuildFSFragment(*in_RCX, 2);
        std::operator<<(basic_ostream,
                        (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        if (!cVar1) {
            cVar1 = in_RCX->Contains(57);
            if (!cVar1)
                goto LAB_100894bf9;
        }
        pcVar4 = shadersourceprovider::GetShaderString(67);
        std::operator<<(basic_ostream, pcVar4);
    LAB_100894bf9:
        if (cVar2) {
            local_58 = BloomHDR::BuildFSFragment();
            std::operator<<(basic_ostream,
                            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char> _>*)&local_58);
        }
        if (local_31 == '\0') {
            pcVar4 = shadersourceprovider::GetShaderString(92);
            std::operator<<(basic_ostream, pcVar4);
            pcVar4 = shadersourceprovider::GetShaderString(30);
            std::operator<<(basic_ostream, pcVar4);
        } else {
            pcVar4 = shadersourceprovider::GetShaderString(93);
            std::operator<<(basic_ostream, pcVar4);
            pcVar4 = shadersourceprovider::GetShaderString(32);
            std::operator<<(basic_ostream, pcVar4);
        }
        *this = local_170->str();
        return this;
    }

} // namespace jag::graphics
