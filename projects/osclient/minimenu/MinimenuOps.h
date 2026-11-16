// projects/osclient/minimenu/MinimenuOps.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::minimenu {
    class MinimenuOps {
    public:
        MinimenuOps();
        ~MinimenuOps();
        void GetOp(Value value) const;
        long GetOp(int arg1) const;
        static int32_t NULL_OP; // = 0

    private:
        uint8_t _unknown_0[8];
        long field_8;
        long field_16;
    };

    // 0x100071e50
    void MinimenuOps::GetOp(MinimenuOps::Value value) const {
        GetOp(value);
    }

    // 0x100078940
    MinimenuOps::~MinimenuOps() {}

} // namespace jag::oldscape::minimenu
