// libs/hal/render/state/OGL/VAOManager_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class VAOManager {
    public:
        class Key;
        // virtual methods in vtable order
        virtual ~VAOManager();
        virtual void OnEndFrame();
        VAOManager();
        auto Register(const InputAssemblerState& inputAssemblerState, ImmediateRenderContext& immediateRenderContext);
        auto Get(const InputAssemblerState& inputAssemblerState);
        void GarbageCollect();
        void DestroyRenderingResources();
        void InvalidateIndexBuffer(const IndexBuffer& indexBuffer);
        void InvalidateVertexBuffer(const VertexBuffer& vertexBuffer);

    private:
        RenderDeviceOnEndFrame field_8;
        uint8_t _unknown_9[7];
        Key field_16;
        uint8_t _unknown_216[1016240];
    };

    class VAOManager::Key {
    public:
        Key(const InputAssemblerState& inputAssemblerState);
        ~Key();
        Key(const Key& key);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[104];
        uint32_t field_112;
        uint8_t _unknown_116[76];
        uint32_t field_192;
        uint8_t _unknown_196[4];
    };

} // namespace jag::render
