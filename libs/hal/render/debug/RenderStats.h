// libs/hal/render/debug/RenderStats.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class RenderStats {
    public:
        class FrameStats;
        uint32_t GetTriangleCount() const;
        TextWrapMode GetLineCount() const;
        uint32_t GetAvgDrawCalls() const;
        unsigned int GetAvgTriangleCount() const;
        void Update();
        RenderStats(unsigned int arg1);
        void AddDrawCall();
        void AddPrimitives(PrimitiveType primitiveType, int arg2);
        void AddDispatchCall();
        void Reset();
        void AddTriangles(int arg1);
        void AddLines(int arg1);

    private:
        unsigned int field_0;
        unsigned int field_4;
        FrameStats field_8;
        unsigned int field_12;
        uint32_t field_16;
        int field_20;
        unsigned int field_24;
        unsigned int field_28;
        int field_32;
        int field_36;
        unsigned int field_40;
        unsigned int field_44;
        FrameStats field_48;
    };

    class RenderStats::FrameStats {
    public:
        FrameStats();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
    };

    // 0x100061e30
    uint32_t RenderStats::GetTriangleCount() const {
        return m_tint;
    }

    // 0x100c28640
    void RenderStats::AddDrawCall() {
        field_8 = field_8 + 1;
    }

    // 0x100c28650
    void RenderStats::AddPrimitives(PrimitiveType primitiveType, int arg2) {
        if ((primitiveType & 4294967294) == 4) {
            AddTriangles(arg2 / 3);
            return;
        }
        if ((primitiveType & 4294967293) == 1) {
            AddLines(arg2 / 2);
        }
    }

    // 0x100c286a0
    void RenderStats::AddDispatchCall() {
        field_36 = field_36 + 1;
    }

    // 0x100c32f80
    RenderStats::RenderStats(unsigned int arg1) : field_0(0), field_4(arg1) {}

    // 0x100c35c80
    void RenderStats::AddTriangles(int arg1) {
        field_20 = field_20 + arg1;
    }

    // 0x100c35c90
    void RenderStats::AddLines(int arg1) {
        field_32 = field_32 + arg1;
    }

} // namespace jag::render
