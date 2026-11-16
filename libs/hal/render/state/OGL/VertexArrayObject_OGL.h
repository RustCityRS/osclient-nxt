// libs/hal/render/state/OGL/VertexArrayObject_OGL.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class VertexArrayObject {
    public:
        float GetLastUsageSeconds() const;
        unsigned int GetNativeVAO() const;
        bool IsValid() const;
        void Create(ImmediateRenderContext& immediateRenderContext);
        void Bind(ImmediateRenderContext& immediateRenderContext) const;
        ~VertexArrayObject();
        void Destroy();
        VertexArrayObject();

    private:
        unsigned int m_nativeVAO;
        float m_lastUsageSeconds;
        uint8_t _unknown_8[4];
    };

} // namespace jag::render
