// libs/hal/render/context/RenderContextState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag::render {
    class ActiveTextureSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~ActiveTextureSaveRestore();
        ActiveTextureSaveRestore(ImmediateRenderContext&);
        static /* 24 bytes */ m_nestedCounter; // = { 0, 0, 0, 0, 1552, 0 }

        // data members, from how the methods use this: 16 bytes
        undefined** field_0;             // offset 0, vtable pointer
        ImmediateRenderContext* field_8; // offset 8
    };

    class RenderContextState {
    public:
        // virtual methods in vtable order
        virtual ~RenderContextState();
        RenderContextState(RenderContext&);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0;     // offset 0, vtable pointer
        RenderContext* field_8; // offset 8
    };

    class RenderTargetsSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~RenderTargetsSaveRestore();
        RenderTargetsSaveRestore(RenderContext&);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0;     // offset 0, vtable pointer
        RenderContext* field_8;  // offset 8
        RenderTargets* field_16; // offset 16
    };

    class RenderTargetsViewportsSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~RenderTargetsViewportsSaveRestore();
        RenderTargetsViewportsSaveRestore(RenderContext&);

        // data members, from how the methods use this: 104 bytes
        undefined** field_0;               // offset 0, vtable pointer
        RenderContext* field_8;            // offset 8
        RenderTargetsSaveRestore field_16; // offset 16
        ViewportsSaveRestore field_40;     // offset 40
    };

    class ScissorRectStateSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~ScissorRectStateSaveRestore();
        ScissorRectStateSaveRestore(RenderContext&);

        // data members, from how the methods use this: 28 bytes
        undefined** field_0;    // offset 0, vtable pointer
        RenderContext* field_8; // offset 8
        bool field_16;          // offset 16
        char _unknown_17[11];
    };

    class ViewportsSaveRestore {
    public:
        // virtual methods in vtable order
        virtual ~ViewportsSaveRestore();
        ViewportsSaveRestore(RenderContext&);

        // data members, from how the methods use this: 64 bytes
        undefined** field_0;    // offset 0, vtable pointer
        RenderContext* field_8; // offset 8
        undefined8 field_16;    // offset 16
        undefined8 field_24;    // offset 24
        undefined8 field_32;    // offset 32
        undefined8 field_40;    // offset 40
        undefined8 field_48;    // offset 48
        undefined8 field_56;    // offset 56
    };

    // 0x100c25b30, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // RenderContextState::RenderContextState(RenderContext&)
    void RenderContextState::RenderContextState(RenderContext* param_1) {
        field_0 = PTR_vtable_100ee8670 + 16;
        field_8 = param_1;
    }

    // 0x100c25b60, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ViewportsSaveRestore::ViewportsSaveRestore(RenderContext&): jumps straight to the base-object constructor

    // 0x100c25b70, 96 bytes, base-object destructor, placed by debug map only (low confidence)
    // ViewportsSaveRestore::~ViewportsSaveRestore()
    void ViewportsSaveRestore::~ViewportsSaveRestore() {
        RenderContext* this_00;
        Viewport* pVVar1;

        field_0 = &PTR__ViewportsSaveRestore_100f29070;
        this_00 = field_8;
        pVVar1 = (Viewport*)(&field_16)->data();
        this_00->SetViewports(pVVar1, 2);
        ~AutoSingleton();
    }

    // 0x100c25be0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // ViewportsSaveRestore::~ViewportsSaveRestore(): jumps straight to the base-object destructor

    // 0x100c25bf0, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // ViewportsSaveRestore::~ViewportsSaveRestore()
    void ViewportsSaveRestore::~ViewportsSaveRestore() {
        ~ViewportsSaveRestore(this);
        operator_delete(this);
    }

    // 0x100c25c10, 48 bytes, base-object constructor, placed by debug map only (low confidence)
    // RenderTargetsSaveRestore::RenderTargetsSaveRestore(RenderContext&)
    void RenderTargetsSaveRestore::RenderTargetsSaveRestore(RenderContext* param_1) {
        undefined8* puVar1;

        new (this) RenderContextState(param_1);
        field_0 = &PTR__RenderTargetsSaveRestore_100f29090;
        puVar1 = (undefined8*)param_1->GetCurrentState();
        field_16 = (RenderTargets*)*puVar1;
    }

    // 0x100c25c40, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // RenderTargetsSaveRestore::RenderTargetsSaveRestore(RenderContext&): jumps straight to the base-object constructor

    // 0x100c25c50, 80 bytes, base-object destructor, placed by debug map only (low confidence)
    // RenderTargetsSaveRestore::~RenderTargetsSaveRestore()
    void RenderTargetsSaveRestore::~RenderTargetsSaveRestore() {
        field_0 = &PTR__RenderTargetsSaveRestore_100f29090;
        (field_8, field_16)->SetRenderTargets();
        ~AutoSingleton();
    }

    // 0x100c25ca0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // RenderTargetsSaveRestore::~RenderTargetsSaveRestore(): jumps straight to the base-object destructor

    // 0x100c25cb0, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // RenderTargetsSaveRestore::~RenderTargetsSaveRestore()
    void RenderTargetsSaveRestore::~RenderTargetsSaveRestore() {
        ~RenderTargetsSaveRestore(this);
        operator_delete(this);
    }

    // 0x100c25cd0, 64 bytes, base-object constructor, placed by debug map only (low confidence)
    // RenderTargetsViewportsSaveRestore::RenderTargetsViewportsSaveRestore(RenderContext&)
    void RenderTargetsViewportsSaveRestore::RenderTargetsViewportsSaveRestore(RenderContext* param_1) {
        new (this) RenderContextState(param_1);
        field_0 = &PTR__RenderTargetsViewportsSaveRestore_100f290b0;
        new (field_16, param_1) RenderTargetsSaveRestore();
        new (field_40, param_1) ViewportsSaveRestore();
    }

    // 0x100c25d10, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // RenderTargetsViewportsSaveRestore::RenderTargetsViewportsSaveRestore(RenderContext&): jumps straight to the base-object constructor

    // 0x100c25d20, 64 bytes, base-object destructor, placed by debug map only (low confidence)
    // RenderTargetsViewportsSaveRestore::~RenderTargetsViewportsSaveRestore()
    void RenderTargetsViewportsSaveRestore::~RenderTargetsViewportsSaveRestore() {
        field_0 = &PTR__RenderTargetsViewportsSaveRestore_100f290b0;
        field_40->~ViewportsSaveRestore();
        field_16->~RenderTargetsSaveRestore();
        ~AutoSingleton();
    }

    // 0x100c25d60, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // RenderTargetsViewportsSaveRestore::~RenderTargetsViewportsSaveRestore(): jumps straight to the base-object destructor

    // 0x100c25d70, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // RenderTargetsViewportsSaveRestore::~RenderTargetsViewportsSaveRestore()
    void RenderTargetsViewportsSaveRestore::~RenderTargetsViewportsSaveRestore() {
        ~RenderTargetsViewportsSaveRestore(this);
        operator_delete(this);
    }

    // 0x100c25d90, 112 bytes, base-object constructor, placed by debug map only (low confidence)
    // ScissorRectStateSaveRestore::ScissorRectStateSaveRestore(RenderContext&)
    void ScissorRectStateSaveRestore::ScissorRectStateSaveRestore(RenderContext* param_1) {
        long lVar1;

        new (this) RenderContextState(param_1);
        field_0 = &PTR__ScissorRectStateSaveRestore_100f290d0;
        lVar1 = param_1->GetCurrentState();
        field_16 = *(bool*)(lVar1 + 56);
        lVar1 = param_1->GetCurrentState();
        new (&field_20, (Rect*)(lVar1 + 60)) math::Rect<unsigned int>();
    }

    // 0x100c25e00, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ScissorRectStateSaveRestore::ScissorRectStateSaveRestore(RenderContext&): jumps straight to the base-object constructor

    // 0x100c25e10, 160 bytes, base-object destructor, placed by debug map only (low confidence)
    // ScissorRectStateSaveRestore::~ScissorRectStateSaveRestore()
    void ScissorRectStateSaveRestore::~ScissorRectStateSaveRestore() {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        RenderContext* this_01;
        vector* pvVar5;
        int* piVar6;
        type* in_RSI;

        field_0 = &PTR__ScissorRectStateSaveRestore_100f290d0;
        this_01 = field_8;
        bVar1 = field_16;
        this_00 = &field_20;
        pvVar5 = this_00->SSOBeginPtr(in_RSI);
        iVar2 = *(int*)pvVar5;
        piVar6 = (int*)this_00->y();
        iVar3 = *piVar6;
        piVar6 = (int*)this_00->second();
        iVar4 = *piVar6;
        piVar6 = (int*)this_00->qw();
        this_01->SetScissorRectangle(bVar1, iVar2, iVar3, iVar4, *piVar6);
        ~AutoSingleton();
    }

    // 0x100c25eb0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // ScissorRectStateSaveRestore::~ScissorRectStateSaveRestore(): jumps straight to the base-object destructor

    // 0x100c25ec0, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // ScissorRectStateSaveRestore::~ScissorRectStateSaveRestore()
    void ScissorRectStateSaveRestore::~ScissorRectStateSaveRestore() {
        ~ScissorRectStateSaveRestore(this);
        operator_delete(this);
    }

    // 0x100c26070, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ActiveTextureSaveRestore::ActiveTextureSaveRestore(ImmediateRenderContext&): jumps straight to the base-object constructor

    // 0x100c26140, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // ActiveTextureSaveRestore::~ActiveTextureSaveRestore(): jumps straight to the base-object destructor

    // 0x100c26150, 32 bytes, deleting destructor, placed by debug map only (low confidence)
    // ActiveTextureSaveRestore::~ActiveTextureSaveRestore()
    void ActiveTextureSaveRestore::~ActiveTextureSaveRestore() {
        ~ActiveTextureSaveRestore(this);
        operator_delete(this);
    }

} // namespace jag::render
