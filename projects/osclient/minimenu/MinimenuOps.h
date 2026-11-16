// projects/osclient/minimenu/MinimenuOps.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::minimenu {
    class MinimenuOps {
    public:
        MinimenuOps();
        ~MinimenuOps();
        void GetOp(Value) const;
        long GetOp(int) const;
        static /* 4 bytes */ NULL_OP; // = 0

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        long field_8;  // offset 8
        long field_16; // offset 16
    };

    // 0x10006d220, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MinimenuOps::~MinimenuOps(): jumps straight to the base-object destructor

    // 0x100071e50, 16 bytes, inline, placed by class name
    // MinimenuOps::GetOp(MinimenuOps::Value) const
    void MinimenuOps::GetOp(int param_2) {
        GetOp(this, param_2);
    }

    // 0x100078940, 16 bytes, base-object destructor, inline, placed by class name
    // MinimenuOps::~MinimenuOps()
    void MinimenuOps::~MinimenuOps() {
        ~hash_map();
    }

} // namespace jag::oldscape::minimenu
