// libs/hal/render/context/RenderContextState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class ActiveTextureSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~ActiveTextureSaveRestore();
        ActiveTextureSaveRestore(ImmediateRenderContext& immediateRenderContext);
        static int32_t m_nestedCounter[6]; // = { 0, 0, 0, 0, 1552, 0 }

    private:
        ImmediateRenderContext* field_8;
    };

    class RenderContextState {
    public:
        // virtual methods in vtable order
        virtual ~RenderContextState();
        RenderContextState(RenderContext& renderContext);

    private:
        RenderContext* field_8;
    };

    class RenderTargetsSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~RenderTargetsSaveRestore();
        RenderTargetsSaveRestore(RenderContext& renderContext);

    private:
        RenderContext* field_8;
        RenderTargets* field_16;
    };

    class RenderTargetsViewportsSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~RenderTargetsViewportsSaveRestore();
        RenderTargetsViewportsSaveRestore(RenderContext& renderContext);

    private:
        RenderContext* field_8;
        RenderTargetsSaveRestore field_16;
        ViewportsSaveRestore field_40;
    };

    class ScissorRectStateSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~ScissorRectStateSaveRestore();
        ScissorRectStateSaveRestore(RenderContext& renderContext);

    private:
        RenderContext* field_8;
        bool field_16;
        uint8_t _unknown_17[11];
    };

    class ViewportsSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~ViewportsSaveRestore();
        ViewportsSaveRestore(RenderContext& renderContext);

    private:
        RenderContext* field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
    };

    // 0x100c25b30
    RenderContextState::RenderContextState(RenderContext& renderContext) : field_8(renderContext) {}

    // 0x100c25b70
    ViewportsSaveRestore::~ViewportsSaveRestore() {
        field_8->SetViewports((Viewport*)field_16.data(), 2);
    }

    // 0x100c25c10
    RenderTargetsSaveRestore::RenderTargetsSaveRestore(RenderContext& renderContext)
        : RenderContextState(renderContext) {
        auto puVar1 = renderContext.GetCurrentState();
        field_16 = (RenderTargets*)*puVar1;
    }

    // 0x100c25c50
    RenderTargetsSaveRestore::~RenderTargetsSaveRestore() {
        field_8->SetRenderTargets(field_16);
    }

    // 0x100c25cd0
    RenderTargetsViewportsSaveRestore::RenderTargetsViewportsSaveRestore(RenderContext& renderContext)
        : RenderContextState(renderContext), field_16(renderContext), field_40(renderContext) {}

    // 0x100c25d20
    RenderTargetsViewportsSaveRestore::~RenderTargetsViewportsSaveRestore() {
        field_40->~ViewportsSaveRestore();
        field_16->~RenderTargetsSaveRestore();
    }

    // 0x100c25d90
    ScissorRectStateSaveRestore::ScissorRectStateSaveRestore(RenderContext& renderContext)
        : RenderContextState(renderContext) {
        long lVar1 = renderContext.GetCurrentState();
        field_16 = *(bool*)(lVar1 + 56);
        lVar1 = renderContext.GetCurrentState();
        new (&field_20) math::Rect(*((lVar1 + 60)));
    }

    // 0x100c25e10
    ScissorRectStateSaveRestore::~ScissorRectStateSaveRestore() {
        RenderContext* this_01 = field_8;
        bool arg1 = field_16;
        uint8_t* this_00 = &field_20;
        int* piVar1 = (int*)this_00->SSOBeginPtr();
        int arg2 = *piVar1;
        piVar1 = (int*)this_00->y();
        int arg3 = *piVar1;
        piVar1 = (int*)this_00->second();
        int arg4 = *piVar1;
        piVar1 = (int*)this_00->qw();
        this_01->SetScissorRectangle(arg1, arg2, arg3, arg4, *piVar1);
    }

} // namespace jag::render
