// libs/graphics/runetek7/materials/shaders/effects/shadows/DeferredShadowsFS.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class DeferredShadowsFS {
    public:
        // virtual methods in vtable order
        virtual ~DeferredShadowsFS();
        virtual GetSource(EffectManager const&, EffectList const&) const;
        DeferredShadowsFS();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredShadowsFS::~DeferredShadowsFS();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    DeferredShadowsFS::~DeferredShadowsFS();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredShadowsFS::~DeferredShadowsFS();

    // 0x10088d0b0, 176 bytes, base-object constructor, placed by class name and debug map
    // DeferredShadowsFS::DeferredShadowsFS()
    void DeferredShadowsFS::DeferredShadowsFS() {
        EffectList local_78[16];
        EffectList local_68[16];
        undefined1* local_58;
        undefined8 local_50;
        undefined8* local_48;
        undefined8 local_40;
        undefined1 local_33;
        undefined8 local_32;
        undefined2 local_2a;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_33 = 29;
        local_58 = &local_33;
        local_50 = 1;
        EffectList::EffectList(local_78, (initializer_list*)&local_58);
        local_32 = 2314575489985564505;
        local_2a = 8737;
        local_48 = &local_32;
        local_40 = 10;
        EffectList::EffectList(local_68, (initializer_list*)&local_48);
        new (this) ShaderSource(local_78, local_68);
        field_0 = &PTR__ScriptOption_100f17070;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10088d160, 16 bytes, complete-object constructor, placed by class name and debug map
    // DeferredShadowsFS::DeferredShadowsFS(): jumps straight to the base-object constructor

    // 0x10088d170, 416 bytes, placed by class name and debug map
    // DeferredShadowsFS::GetSource(EffectManager const&, EffectList const&) const
    DeferredShadowsFS* DeferredShadowsFS::GetSource(EffectManager* param_1, EffectList* param_2) {
        ostream* poVar1;
        char cVar2;
        char cVar3;
        ostream* poVar4;
        char* pcVar5;
        undefined1 local_160[280];
        ViewTransformsFragment local_48[24];

        new (local_160) RT7PixelShaderSourceStream();
        cVar2 = EffectList::Contains();
        cVar3 = EffectList::Contains();
        local_48->BuildUniforms();
        poVar1 = (ostream*)(local_160 + 16);
        std::operator<<(poVar1, (basic_string*)local_48);
        local_48->~basic_string();
        if (cVar2 != '\0') {
            local_48->BuildUniforms();
            std::operator<<(poVar1, (basic_string*)local_48);
            local_48->~basic_string();
        }
        if (cVar3 != '\0') {
            poVar4 = std::operator<<(poVar1, "UNIFORM_BUFFER_BEGIN(SunlightViewTransform)\n   uniform mat4 "
                                             "uSunlightViewMatrix;\nUNIFORM_BUFFER_END\n");
            local_48->BuildUniforms();
            std::operator<<(poVar4, (basic_string*)local_48);
            local_48->~basic_string();
            if (cVar3 != '\0') {
                local_48->BuildFSFragment(5);
                std::operator<<(poVar1, (basic_string*)local_48);
                local_48->~basic_string();
            }
        }
        pcVar5 = (char*)shadersourceprovider::GetShaderString(9);
        std::operator<<(poVar1, pcVar5);
        str();
        local_160->~RT7PixelShaderSourceStream();
        return this;
    }

} // namespace jag::graphics
