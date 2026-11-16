// libs/graphics/runetek7/renderer/Drawable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Drawable {
    public:
        // virtual methods in vtable order
        virtual ~Drawable();
        virtual void __pure_slot_2() = 0;
        virtual void BinTriangles(const SceneViewData& arg1, BinInfoSSE& arg2);
        void GetTransformedTriangle(unsigned int arg1, math::Vector4T<float> (&arg2)[3]);
        void RenderDebug(RenderPassType arg1, DrawableElement& arg2) const;
        EnumOptionToggle GetRenderFlags() const;
        void SetRenderFlags(unsigned int arg1);
        void SetRenderFlag(unsigned int arg1, bool arg2);
        uint32_t GetRenderFlag(unsigned int arg1) const;
        void BinCommon(vFloat4* vFloat4, int arg2, BinInfoSSE& binInfoSSE, int arg4);
        Drawable(const Drawable& drawable);
        Drawable(unsigned int arg1);

    private:
        unsigned int m_renderFlags;
        uint8_t _unknown_12[4];
    };

    class DrawableBatchRenderer {
    public:
        // virtual methods in vtable order
        virtual ~DrawableBatchRenderer();
        DrawableBatchRenderer();
    };

    // 0x100669500
    void Drawable::SetRenderFlag(unsigned int arg1, bool arg2) {
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            m_renderFlags = m_renderFlags & ~arg1;
            return;
        }
        m_renderFlags = m_renderFlags | arg1;
    }

    // 0x1007b81d0
    uint32_t Drawable::GetRenderFlag(unsigned int arg1) const {
        return (arg1 & ~m_renderFlags) == 0;
    }

    // 0x100866470
    Drawable::Drawable(const Drawable& drawable) : m_renderFlags(drawable.m_renderFlags) {}

    // 0x10092f280
    Drawable::Drawable(unsigned int arg1) : m_renderFlags(arg1) {}

} // namespace jag::graphics
