// libs/jtl/RoundRobin.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 7 instantiations, e.g. <eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>, <eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul, , <eastl::vector<bool>, 2ul>
    class RoundRobin {
    public:
        void GetWrite();
        void Advance();
        void GetRead();
        RoundRobin();
        ~RoundRobin();
    };

    // 0x1001bd1a0
    void RoundRobin<render::PixelUnpackBuffer, 2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 168)];
    }

    // 0x1001bd330
    void RoundRobin<render::Texture2D, 2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 1032)];
    }

    // 0x1001bd350
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 1572952)];
    }

    // 0x1001bd370
    void RoundRobin<render::VertexBuffer, 2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 168)];
    }

    // 0x1001bd390
    void RoundRobin<render::Texture2D, 2ul>::Advance() {
        *(unsigned long*)(this + 1024) = (unsigned long)(~*(unsigned int*)(this + 1024) & 1);
        *(unsigned long*)(this + 1032) = (unsigned long)(~*(unsigned int*)(this + 1032) & 1);
    }

    // 0x1001bd3c0
    void RoundRobin<render::VertexBuffer, 2ul>::Advance() {
        *(unsigned long*)(this + 160) = (unsigned long)(~*(unsigned int*)(this + 160) & 1);
        *(unsigned long*)(this + 168) = (unsigned long)(~*(unsigned int*)(this + 168) & 1);
    }

    // 0x1001bd3f0
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>::Advance() {
        *(unsigned long*)(this + 1572944) = (unsigned long)(~*(unsigned int*)(this + 1572944) & 1);
        *(unsigned long*)(this + 1572952) = (unsigned long)(~*(unsigned int*)(this + 1572952) & 1);
    }

    // 0x1001bd420
    void RoundRobin<eastl::vector<bool>, 2ul>::Advance() {
        *(unsigned long*)(this + 64) = (unsigned long)(~*(unsigned int*)(this + 64) & 1);
        *(unsigned long*)(this + 72) = (unsigned long)(~*(unsigned int*)(this + 72) & 1);
    }

    // 0x1001bd4a0
    void RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>,
                    2ul>::Advance() {
        *(unsigned long*)(this + 12368) = (unsigned long)(~*(unsigned int*)(this + 12368) & 1);
        *(unsigned long*)(this + 12376) = (unsigned long)(~*(unsigned int*)(this + 12376) & 1);
    }

    // 0x1001bee90
    void RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>::GetRead() {
        (*this)[*(unsigned long*)(this + 1572944)];
    }

    // 0x1001bf620
    void RoundRobin<render::Texture2D, 2ul>::GetRead() {
        (*this)[*(unsigned long*)(this + 1024)];
    }

    // 0x1001bf640
    void RoundRobin<eastl::vector<bool>, 2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 72)];
    }

    // 0x1001bfb90
    void RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 72)];
    }

    // 0x1001c0520
    void RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>,
                    2ul>::GetWrite() {
        (*this)[*(unsigned long*)(this + 12376)];
    }

    // 0x1001c2640
    void RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>::GetRead() {
        (*this)[*(unsigned long*)(this + 64)];
    }

    // 0x1001c27c0
    void RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>,
                    2ul>::GetRead() {
        (*this)[*(unsigned long*)(this + 12368)];
    }

    // 0x1001c29f0
    void RoundRobin<render::VertexBuffer, 2ul>::GetRead() {
        (*this)[*(unsigned long*)(this + 160)];
    }

    // 0x1001d7f00
    RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>::RoundRobin()
        : std::array<eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>() {
        *(uint64_t*)(this + 1572944) = 0;
        *(uint64_t*)(this + 1572952) = 1;
    }

    // 0x1001d81a0
    RoundRobin<render::VertexBuffer, 2ul>::RoundRobin() : std::array<render::VertexBuffer, 2ul>() {
        *(uint64_t*)(this + 160) = 0;
        *(uint64_t*)(this + 168) = 1;
    }

    // 0x1001d8240
    RoundRobin<render::Texture2D, 2ul>::RoundRobin() : std::array<render::Texture2D, 2ul>() {
        *(uint64_t*)(this + 1024) = 0;
        *(uint64_t*)(this + 1032) = 1;
    }

    // 0x1001d8300
    RoundRobin<render::PixelUnpackBuffer, 2ul>::RoundRobin() : std::array<render::PixelUnpackBuffer, 2ul>() {
        *(uint64_t*)(this + 160) = 0;
        *(uint64_t*)(this + 168) = 1;
    }

    // 0x1001d83a0
    RoundRobin<eastl::vector<bool>, 2ul>::RoundRobin() : std::array<eastl::vector<bool>, 2ul>() {
        *(uint64_t*)(this + 64) = 0;
        *(uint64_t*)(this + 72) = 1;
    }

    // 0x1001d8500
    RoundRobin<render::PixelUnpackBuffer, 2ul>::~RoundRobin() {}

    // 0x1001d8550
    RoundRobin<render::Texture2D, 2ul>::~RoundRobin() {}

    // 0x1001d85a0
    RoundRobin<render::VertexBuffer, 2ul>::~RoundRobin() {}

    // 0x1001d85f0
    RoundRobin<eastl::fixed_vector<math::Vector2T<float>, 98304ul>, 2ul>::~RoundRobin() {}

    // 0x1001d86f0
    RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>::RoundRobin()
        : std::array<eastl::vector<render::VertexBuffer>, 2ul>() {
        *(uint64_t*)(this + 64) = 0;
        *(uint64_t*)(this + 72) = 1;
    }

    // 0x1001d8c50
    RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>,
               2ul>::RoundRobin()
        : std::array<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>,
                     2ul>() {
        *(uint64_t*)(this + 12368) = 0;
        *(uint64_t*)(this + 12376) = 1;
    }

    // 0x1001d8ef0
    RoundRobin<eastl::fixed_vector<oldscape::OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>,
               2ul>::~RoundRobin() {}

    // 0x1001d8fe0
    RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>::~RoundRobin() {}

    // 0x1001d9050
    RoundRobin<eastl::vector<bool>, 2ul>::~RoundRobin() {}

} // namespace jag
