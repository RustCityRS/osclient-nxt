// libs/hal/input/InputKeyCodes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.input

namespace jag::input {
    class KeyCodeNameKeeper {
    public:
        KeyCodeNameKeeper(int, char const*);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100ca1570, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // KeyCodeNameKeeper::KeyCodeNameKeeper(int, char const*)
    void KeyCodeNameKeeper::KeyCodeNameKeeper(int param_1, char* param_2) {}

    // 0x100ca1580, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // KeyCodeNameKeeper::KeyCodeNameKeeper(int, char const*): jumps straight to the base-object constructor

} // namespace jag::input
