// libs/game/runetek5/scene/entities/Hitmark.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Hitmark {
    public:
        GetExpiryTime() const;
        GetParam() const;
        Hitmark(int, int, unsigned int, int, int, int);
        bool IsValid() const;
        Hitmark();

        // data members, from how the methods use this: 28 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        uint field_8; // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        int field_20; // offset 20
        char _unknown_24[4];
    };

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    Hitmark::GetExpiryTime() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    Hitmark::GetParam() const;

    // 0x10012dc10: the linker folded this into RenderState::CameraPos::Set(int, int, int, int, int, int), which has identical code
    Hitmark::Hitmark(int, int, unsigned int, int, int, int);

    // 0x100183570: the linker folded this into File::isopen() const, which has identical code
    Hitmark::IsValid() const;

    // 0x100428a40, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Hitmark::Hitmark(int, int, unsigned int, int, int, int)
    /* render::ShaderPrecisionProfile::ShaderPrecisionProfile(render::ShaderVariablePrecision,
   render::ShaderVariablePrecision, render::ShaderVariablePrecision,
   render::ShaderVariablePrecision, render::ShaderVariablePrecision,
   render::ShaderVariablePrecision) */

    void render::ShaderPrecisionProfile::ShaderPrecisionProfile(int param_2, int param_3, uint param_4, int param_5,
                                                                int param_6, int param_7) {
        new (this) Hitmark(param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100433320, 16 bytes, complete-object constructor, inline, placed by class name
    // Hitmark::Hitmark(): jumps straight to the base-object constructor

    // 0x100433330, 32 bytes, base-object constructor, inline, placed by class name
    // Hitmark::Hitmark()
    void Hitmark::Hitmark() {
        field_0 = -1;
        field_4 = -1;
        field_8 = 0;
        field_12 = -1;
        field_16 = -1;
        field_20 = 0;
    }

} // namespace jag
