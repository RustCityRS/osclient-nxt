// libs/hal/render/debug/RenderStats.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class RenderStats {
    public:
        class FrameStats;
        GetTriangleCount() const;
        GetLineCount() const;
        GetAvgDrawCalls() const;
        GetAvgTriangleCount() const;
        void Update();
        RenderStats(unsigned int);
        void AddDrawCall();
        void AddPrimitives(PrimitiveType, int);
        void AddDispatchCall();
        void Reset();
        void AddTriangles(int);
        void AddLines(int);

        // data members, from how the methods use this: 88 bytes
        uint field_0;        // offset 0
        uint field_4;        // offset 4
        FrameStats field_8;  // offset 8
        uint field_12;       // offset 12
        undefined4 field_16; // offset 16
        int field_20;        // offset 20
        uint field_24;       // offset 24
        uint field_28;       // offset 28
        int field_32;        // offset 32
        int field_36;        // offset 36
        uint field_40;       // offset 40
        uint field_44;       // offset 44
        FrameStats field_48; // offset 48
    };

    class RenderStats::FrameStats {
    public:
        FrameStats();

        // data members, from how the methods use this: 40 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
    };

    // 0x100061e30, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RenderStats::GetTriangleCount() const
    /* game::MSIType::GetTint() const */

    undefined4 game::MSIType::GetTint() {
        return m_tint;
    }

    // 0x100c26b10, 16 bytes, complete-object constructor, inline, placed by class name
    // RenderStats::RenderStats(unsigned int): jumps straight to the base-object constructor

    // 0x100c28640, 16 bytes, inline, placed by class name
    // RenderStats::AddDrawCall()
    void RenderStats::AddDrawCall() {
        field_8 = field_8 + 1;
    }

    // 0x100c28650, 80 bytes, inline, placed by class name
    // RenderStats::AddPrimitives(PrimitiveType, int)
    void RenderStats::AddPrimitives(uint param_2, int param_3) {
        if ((param_2 & 4294967294) == 4) {
            AddTriangles(this, param_3 / 3);
            return;
        }
        if ((param_2 & 4294967293) == 1) {
            AddLines(this, param_3 / 2);
        }
    }

    // 0x100c286a0, 16 bytes, inline, placed by class name
    // RenderStats::AddDispatchCall()
    void RenderStats::AddDispatchCall() {
        field_36 = field_36 + 1;
    }

    // 0x100c32f80, 48 bytes, base-object constructor, inline, placed by class name
    // RenderStats::RenderStats(unsigned int)
    void RenderStats::RenderStats(uint param_1) {
        field_0 = 0;
        field_4 = param_1;
        new (&field_8) FrameStats();
        new (field_48) FrameStats();
    }

    // 0x100c35c80, 16 bytes, inline, placed by class name
    // RenderStats::AddTriangles(int)
    void RenderStats::AddTriangles(int param_1) {
        field_20 = field_20 + param_1;
    }

    // 0x100c35c90, 16 bytes, inline, placed by class name
    // RenderStats::AddLines(int)
    void RenderStats::AddLines(int param_1) {
        field_32 = field_32 + param_1;
    }

} // namespace jag::render
