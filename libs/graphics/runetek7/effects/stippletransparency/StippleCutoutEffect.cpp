// libs/graphics/runetek7/effects/stippletransparency/StippleCutoutEffect.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "StippleCutoutEffect.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    StippleCutoutEffect::~StippleCutoutEffect();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    StippleCutoutEffect::~StippleCutoutEffect();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    StippleCutoutEffect::~StippleCutoutEffect();

    // 0x10091e010, 144 bytes, placed by class name and debug map
    // StippleCutoutEffect::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void StippleCutoutEffect::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        ShaderProgram* this_00;
        vector* pvVar1;
        HashedString* pHVar2;
        undefined4 local_38;
        float fStack_34;
        undefined8 uStack_30;

        this_00 = (ShaderProgram*)param_3->GetProgram();
        pvVar1 = (&field_32, (type*)param_1)->SSOBeginPtr();
        uStack_30 = *(undefined8*)(pvVar1 + 24);
        fStack_34 = (float)((ulong) * (undefined8*)(pvVar1 + 16) >> 32);
        _local_38 = CONCAT44(1.0 / fStack_34, (int)*(undefined8*)(pvVar1 + 16));
        pHVar2 = (HashedString*)graphics::operator*((graphics*)206);
        pvVar1 = (&field_32, (type*)param_1)->SSOBeginPtr();
        this_00->SetShaderConstVector4(pHVar2, pvVar1);
        pHVar2 = (HashedString*)graphics::operator*((graphics*)207);
        this_00->SetShaderConstVector4(pHVar2, (Vector4T*)&local_38);
    }

    // 0x10091e0a0, 32 bytes, placed by class name and debug map
    // StippleCutoutEffect::BuildUniforms()
    StippleCutoutEffect* StippleCutoutEffect::BuildUniforms() {
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            (basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>*)this,
            "   uniform highp vec4 uStippleCutoutPosDepthVisibility;\n   uniform highp vec4 "
            "uStippleCutoutStartRangeAndMinAlpha;\n");
        return this;
    }

} // namespace jag::graphics
