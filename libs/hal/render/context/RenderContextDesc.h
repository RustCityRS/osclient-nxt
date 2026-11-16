// libs/hal/render/context/RenderContextDesc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class RenderContextDesc {
    public:
        ~RenderContextDesc();
        RenderContextDesc(RenderContextDesc const&);
        RenderContextDesc* operator=(RenderContextDesc const&);
        RenderContextDesc(shared_ptr<OpenGLView> const&);
        RenderContextDesc();

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

    // 0x100c15920, 48 bytes, inline, placed by class name and debug map
    // RenderContextDesc::operator=(RenderContextDesc const&)
    /* RenderContextDesc::TEMPNAMEPLACEHOLDERVALUE(RenderContextDesc const&)
    */

    RenderContextDesc* RenderContextDesc::operator=(RenderContextDesc* param_1) {
        undefined4 uVar1;

        field_8 = param_1->field_8;
        uVar1 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = uVar1;
        shared_ptr<OpenGLView>::operator=((shared_ptr<OpenGLView>*)&field_16, (shared_ptr*)&param_1->field_16);
        return this;
    }

    // 0x100c26af0, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderContextDesc::RenderContextDesc(): jumps straight to the base-object constructor

    // 0x100c32f10, 48 bytes, base-object constructor, inline, placed by class name
    // RenderContextDesc::RenderContextDesc()
    void RenderContextDesc::RenderContextDesc() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_4 = 530464;
        field_8 = 16777217;
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::render
