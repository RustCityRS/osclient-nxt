// libs/hal/render/state/OGL/VAOManager_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class VAOManager {
    public:
        class Key;
        // virtual methods in vtable order
        virtual ~VAOManager();
        virtual void OnEndFrame();
        VAOManager();
        Register(InputAssemblerState const&, ImmediateRenderContext&);
        Get(InputAssemblerState const&);
        void GarbageCollect();
        void DestroyRenderingResources();
        void InvalidateIndexBuffer(IndexBuffer const&);
        void InvalidateVertexBuffer(VertexBuffer const&);

        // data members, from how the methods use this: 1016456 bytes
        undefined** field_0;            // offset 0, vtable pointer
        RenderDeviceOnEndFrame field_8; // offset 8
        char _unknown_9[1016447];
    };

    class VAOManager::Key {
    public:
        Key(InputAssemblerState const&);
        ~Key();
        Key(Key const&);

        // data members, from how the methods use this: 200 bytes
        undefined8 field_0;    // offset 0
        VertexBuffer* field_8; // offset 8
        char _unknown_16[96];
        undefined4 field_112; // offset 112
        char _unknown_116[4];
        uint field_120; // offset 120
        char _unknown_124[68];
        undefined4 field_192; // offset 192
        char _unknown_196[4];
    };

    // 0x100bc7310, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // VAOManager::Key::~Key(): jumps straight to the base-object destructor

} // namespace jag::render
