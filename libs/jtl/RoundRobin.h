// libs/jtl/RoundRobin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 7 instantiations, e.g. <eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>, <eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul,, <eastl::vector<bool, eastl::allocator>, 2ul>
    class RoundRobin {
    public:
        void GetWrite();
        void Advance();
        void GetRead();
        RoundRobin();
        ~RoundRobin();
    };

    // 0x1001bd1a0, 32 bytes, inline, placed by class name and debug map
    // RoundRobin<render::PixelUnpackBuffer, 2ul>::GetWrite()
    void RoundRobin<render::PixelUnpackBuffer, 2ul>::GetWrite(RoundRobin<render::PixelUnpackBuffer, 2ul>* this) {
        std::array<render::PixelUnpackBuffer, 2ul>::operator[]((array<render::PixelUnpackBuffer, 2ul>*)this,
                                                               *(ulong*)(this + 168));
    }

    // 0x1001bd330, 32 bytes, inline, placed by class name and debug map
    // RoundRobin<render::Texture2D, 2ul>::GetWrite()
    void RoundRobin<render::Texture2D, 2ul>::GetWrite(RoundRobin<render::Texture2D, 2ul>* this) {
        std::array<render::Texture2D, 2ul>::operator[]((array<render::Texture2D, 2ul>*)this, *(ulong*)(this + 1032));
    }

    // 0x1001bd350, 32 bytes, inline, placed by class name and debug map
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::GetWrite()
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::GetWrite(
        RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this) {
        std::array<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::operator[](
            (array<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>*)this,
            *(ulong*)(this + 1572952));
    }

    // 0x1001bd370, 32 bytes, inline, placed by class name and debug map
    // RoundRobin<render::VertexBuffer, 2ul>::GetWrite()
    void RoundRobin<render::VertexBuffer, 2ul>::GetWrite(RoundRobin<render::VertexBuffer, 2ul>* this) {
        std::array<render::VertexBuffer, 2ul>::operator[]((array<render::VertexBuffer, 2ul>*)this,
                                                          *(ulong*)(this + 168));
    }

    // 0x1001bd390, 48 bytes, inline, placed by class name and debug map
    // RoundRobin<render::Texture2D, 2ul>::Advance()
    void RoundRobin<render::Texture2D, 2ul>::Advance(RoundRobin<render::Texture2D, 2ul>* this) {
        *(ulong*)(this + 1024) = (ulong)(~*(uint*)(this + 1024) & 1);
        *(ulong*)(this + 1032) = (ulong)(~*(uint*)(this + 1032) & 1);
    }

    // 0x1001bd3c0, 48 bytes, inline, placed by class name and debug map
    // RoundRobin<render::VertexBuffer, 2ul>::Advance()
    /* RoundRobin<render::PixelUnpackBuffer, 2ul>::Advance() */

    void RoundRobin<render::PixelUnpackBuffer, 2ul>::Advance(RoundRobin<render::PixelUnpackBuffer, 2ul>* this) {
        *(ulong*)(this + 160) = (ulong)(~*(uint*)(this + 160) & 1);
        *(ulong*)(this + 168) = (ulong)(~*(uint*)(this + 168) & 1);
    }

    // 0x1001bd3f0, 48 bytes, inline, placed by class name and debug map
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::Advance()
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::Advance(
        RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this) {
        *(ulong*)(this + 1572944) = (ulong)(~*(uint*)(this + 1572944) & 1);
        *(ulong*)(this + 1572952) = (ulong)(~*(uint*)(this + 1572952) & 1);
    }

    // 0x1001bd420, 32 bytes, inline, placed by class name and debug map
    // RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::Advance()
    /* RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::Advance() */

    void RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::Advance(
        RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>* this) {
        *(ulong*)(this + 64) = (ulong)(~*(uint*)(this + 64) & 1);
        *(ulong*)(this + 72) = (ulong)(~*(uint*)(this + 72) & 1);
    }

    // 0x1001bd4a0, 48 bytes, inline, placed by class name and debug map
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::Advance()
    void jag::RoundRobin<
        eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true,
                            eastl::allocator>,
        2ul>::Advance(RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                     128ul, true, eastl::allocator>,
                                 2ul>* this) {
        *(ulong*)(this + 12368) = (ulong)(~*(uint*)(this + 12368) & 1);
        *(ulong*)(this + 12376) = (ulong)(~*(uint*)(this + 12376) & 1);
    }

    // 0x1001bee90, 32 bytes, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::GetRead()
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::GetRead(
        RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this) {
        std::array<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::operator[](
            (array<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>*)this,
            *(ulong*)(this + 1572944));
    }

    // 0x1001bf620, 32 bytes, inline, placed by class name
    // RoundRobin<render::Texture2D, 2ul>::GetRead()
    void RoundRobin<render::Texture2D, 2ul>::GetRead(RoundRobin<render::Texture2D, 2ul>* this) {
        std::array<render::Texture2D, 2ul>::operator[]((array<render::Texture2D, 2ul>*)this, *(ulong*)(this + 1024));
    }

    // 0x1001bf640, 16 bytes, inline, placed by class name
    // RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::GetWrite()
    void RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::GetWrite(
        RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>* this) {
        std::array<eastl::vector<bool, eastl::allocator>, 2ul>::operator[](
            (array<eastl::vector<bool, eastl::allocator>, 2ul>*)this, *(ulong*)(this + 72));
    }

    // 0x1001bfb90, 16 bytes, inline, placed by class name
    // RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::GetWrite()
    void RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::GetWrite(
        RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>* this) {
        std::array<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::operator[](
            (array<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>*)this, *(ulong*)(this + 72));
    }

    // 0x1001c0520, 32 bytes, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::GetWrite()
    void jag::RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul,
                                             true, eastl::allocator>,
                         2ul>::
        GetWrite(RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                128ul, true, eastl::allocator>,
                            2ul>* this) {
        std::array<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true,
                                       eastl::allocator>,
                   2ul>::
        operator[]((array<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul,
                                              true, eastl::allocator>,
                          2ul>*)this,
                   *(ulong*)(this + 12376));
    }

    // 0x1001c2640, 16 bytes, inline, placed by class name
    // RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::GetRead()
    void RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::GetRead(
        RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>* this) {
        std::array<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::operator[](
            (array<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>*)this, *(ulong*)(this + 64));
    }

    // 0x1001c27c0, 32 bytes, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::GetRead()
    void jag::RoundRobin<
        eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true,
                            eastl::allocator>,
        2ul>::GetRead(RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                     128ul, true, eastl::allocator>,
                                 2ul>* this) {
        std::array<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true,
                                       eastl::allocator>,
                   2ul>::
        operator[]((array<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul,
                                              true, eastl::allocator>,
                          2ul>*)this,
                   *(ulong*)(this + 12368));
    }

    // 0x1001c29f0, 32 bytes, inline, placed by class name
    // RoundRobin<render::VertexBuffer, 2ul>::GetRead()
    void RoundRobin<render::VertexBuffer, 2ul>::GetRead(RoundRobin<render::VertexBuffer, 2ul>* this) {
        std::array<render::VertexBuffer, 2ul>::operator[]((array<render::VertexBuffer, 2ul>*)this,
                                                          *(ulong*)(this + 160));
    }

    // 0x1001d7e70, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d7e80, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<render::VertexBuffer, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d7e90, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<render::Texture2D, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d7ea0, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<render::PixelUnpackBuffer, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d7eb0, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d7ec0, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<render::PixelUnpackBuffer, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d7ed0, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<render::Texture2D, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d7ee0, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<render::VertexBuffer, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d7ef0, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d7f00, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::RoundRobin()
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::RoundRobin(
        RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this) {
        new (this) std::array<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>();
        *(undefined8*)(this + 1572944) = 0;
        *(undefined8*)(this + 1572952) = 1;
    }

    // 0x1001d81a0, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<render::VertexBuffer, 2ul>::RoundRobin()
    void RoundRobin<render::VertexBuffer, 2ul>::RoundRobin(RoundRobin<render::VertexBuffer, 2ul>* this) {
        new (this) std::array<render::VertexBuffer, 2ul>();
        *(undefined8*)(this + 160) = 0;
        *(undefined8*)(this + 168) = 1;
    }

    // 0x1001d8240, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<render::Texture2D, 2ul>::RoundRobin()
    void RoundRobin<render::Texture2D, 2ul>::RoundRobin(RoundRobin<render::Texture2D, 2ul>* this) {
        new (this) std::array<render::Texture2D, 2ul>();
        *(undefined8*)(this + 1024) = 0;
        *(undefined8*)(this + 1032) = 1;
    }

    // 0x1001d8300, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<render::PixelUnpackBuffer, 2ul>::RoundRobin()
    void RoundRobin<render::PixelUnpackBuffer, 2ul>::RoundRobin(RoundRobin<render::PixelUnpackBuffer, 2ul>* this) {
        new (this) std::array<render::PixelUnpackBuffer, 2ul>();
        *(undefined8*)(this + 160) = 0;
        *(undefined8*)(this + 168) = 1;
    }

    // 0x1001d83a0, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::RoundRobin()
    void RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::RoundRobin(
        RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>* this) {
        new (this) std::array<eastl::vector<bool, eastl::allocator>, 2ul>();
        *(undefined8*)(this + 64) = 0;
        *(undefined8*)(this + 72) = 1;
    }

    // 0x1001d8500, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<render::PixelUnpackBuffer, 2ul>::~RoundRobin()
    void RoundRobin<render::PixelUnpackBuffer, 2ul>::~RoundRobin(RoundRobin<render::PixelUnpackBuffer, 2ul>* this) {
        ~array();
    }

    // 0x1001d8550, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<render::Texture2D, 2ul>::~RoundRobin()
    void RoundRobin<render::Texture2D, 2ul>::~RoundRobin(RoundRobin<render::Texture2D, 2ul>* this) {
        ~array();
    }

    // 0x1001d85a0, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<render::VertexBuffer, 2ul>::~RoundRobin()
    void RoundRobin<render::VertexBuffer, 2ul>::~RoundRobin(RoundRobin<render::VertexBuffer, 2ul>* this) {
        ~array();
    }

    // 0x1001d85f0, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::~RoundRobin()
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>::~RoundRobin(
        RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this) {
        ~array();
    }

    // 0x1001d8650, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d8680, 16 bytes, complete-object constructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::RoundRobin(): jumps straight to the base-object constructor

    // 0x1001d8690, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d86c0, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d86f0, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::RoundRobin()
    void RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::RoundRobin(
        RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>* this) {
        new (this) std::array<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>();
        *(undefined8*)(this + 64) = 0;
        *(undefined8*)(this + 72) = 1;
    }

    // 0x1001d8c50, 48 bytes, base-object constructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::RoundRobin()
    void jag::RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul,
                                             true, eastl::allocator>,
                         2ul>::
        RoundRobin(RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                  128ul, true, eastl::allocator>,
                              2ul>* this) {
        new (this) std::array<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                  128ul, true, eastl::allocator>,
                              2ul>();
        *(undefined8*)(this + 12368) = 0;
        *(undefined8*)(this + 12376) = 1;
    }

    // 0x1001d8ef0, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, true, eastl::allocator>, 2ul>::~RoundRobin()
    void jag::RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul,
                                             true, eastl::allocator>,
                         2ul>::
        ~RoundRobin(RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                   128ul, true, eastl::allocator>,
                               2ul>* this) {
        ~array();
    }

    // 0x1001d8fe0, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::~RoundRobin()
    void RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>::~RoundRobin(
        RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>* this) {
        ~array();
    }

    // 0x1001d9040, 16 bytes, complete-object destructor, inline, placed by class name
    // RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::~RoundRobin(): jumps straight to the base-object destructor

    // 0x1001d9050, 16 bytes, base-object destructor, inline, placed by class name
    // RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::~RoundRobin()
    void RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>::~RoundRobin(
        RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>* this) {
        ~array();
    }

} // namespace jag
