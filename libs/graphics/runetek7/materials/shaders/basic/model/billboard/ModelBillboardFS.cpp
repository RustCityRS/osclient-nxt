// libs/graphics/runetek7/materials/shaders/basic/model/billboard/ModelBillboardFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class ModelBillboardFS {
    public:
        // virtual methods in vtable order
        virtual ~ModelBillboardFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        ModelBillboardFS();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelBillboardFS::~ModelBillboardFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelBillboardFS::~ModelBillboardFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    ModelBillboardFS::~ModelBillboardFS();

    // 0x1008949d0, 160 bytes, base-object constructor, placed by class name and debug map
    // ModelBillboardFS::ModelBillboardFS()
    void ModelBillboardFS::ModelBillboardFS() {
        EffectList local_68[16];
        initializer_list<EffectType> local_58[16];
        EffectList local_48[16];
        undefined4* local_38;
        undefined8 local_30;
        undefined4 local_26;
        undefined2 local_22;

        std::initializer_list<EffectType>::initializer_list(local_58);
        EffectList::EffectList(local_68, local_58);
        local_26 = 807223355;
        local_22 = 17721;
        local_38 = &local_26;
        local_30 = 6;
        EffectList::EffectList(local_48, (initializer_list*)&local_38);
        new (this) ShaderSource(local_68, local_48);
        field_0 = &PTR__ScriptOption_100f175a8;
        new (&field_40) TextureAtlasLookup();
    }

    // 0x100894a80, 16 bytes, complete-object constructor, placed by class name and debug map
    // ModelBillboardFS::ModelBillboardFS(): jumps straight to the base-object constructor

    // 0x100894a90, 592 bytes, placed by class name and debug map
    // ModelBillboardFS::GetSource(EffectManager const&, EffectList const&) const
    ModelBillboardFS* ModelBillboardFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        char* pcVar5;
        undefined1 local_170[280];
        TextureAtlasLookup local_58[24];
        char local_31;

        new (local_170) RT7PixelShaderSourceStream();
        local_31 = EffectList::Contains();
        cVar2 = EffectList::Contains();
        if (cVar2 == '\0') {
            cVar2 = '\0';
        } else {
            cVar2 = EffectList::Contains();
        }
        cVar3 = EffectList::Contains();
        poVar1 = (ostream*)(local_170 + 16);
        std::operator<<(poVar1, "in vec4 vVertexAlbedo;\n");
        std::operator<<(poVar1, "in vec2 vTextureUV;\n");
        std::operator<<(poVar1, "flat in vec2 vMaterialSettingsSlotXY;\n");
        if (cVar2 == '\0') {
            if (EffectList::Contains() != '\0')
                goto LAB_100894b7d;
        } else {
        LAB_100894b7d:
            pcVar5 = (char*)shadersourceprovider::GetShaderString(68);
            std::operator<<(poVar1, pcVar5);
        }
        std::operator<<(poVar1, "uniform vec4 uAtlasMeta;\nuniform sampler2D uTextureAtlas;\nuniform sampler2D "
                                "uTextureAtlasSettings;\nuniform float uAlphaTestThreshold;\n");
        local_58->BuildFSFragment(&param_1->field_40);
        std::operator<<(poVar1, (basic_string*)local_58);
        local_58->~basic_string();
        if (cVar2 == '\0') {
            cVar2 = EffectList::Contains();
            if (cVar2 == '\0')
                goto LAB_100894bf9;
        }
        pcVar5 = (char*)shadersourceprovider::GetShaderString(67);
        std::operator<<(poVar1, pcVar5);
    LAB_100894bf9:
        if (cVar3 != '\0') {
            local_58->BuildFSFragment();
            std::operator<<(poVar1, (basic_string*)local_58);
            local_58->~basic_string();
        }
        if (local_31 == '\0') {
            pcVar5 = (char*)shadersourceprovider::GetShaderString(92);
            std::operator<<(poVar1, pcVar5);
            pcVar5 = (char*)shadersourceprovider::GetShaderString(30);
            std::operator<<(poVar1, pcVar5);
        } else {
            pcVar5 = (char*)shadersourceprovider::GetShaderString(93);
            std::operator<<(poVar1, pcVar5);
            pcVar5 = (char*)shadersourceprovider::GetShaderString(32);
            std::operator<<(poVar1, pcVar5);
        }
        ((ModelBillboardFS*)this)->str();
        local_170->~RT7PixelShaderSourceStream();
        return (ModelBillboardFS*)this;
    }

} // namespace jag::graphics
