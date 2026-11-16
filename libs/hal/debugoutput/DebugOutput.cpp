// libs/hal/debugoutput/DebugOutput.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.debugoutput

namespace jag {
    class DebugOutput {
    public:
        void WriteDebugString(const eastl::fixed_string<char, 2048>& str, DEBUG_OUTPUT_LEVEL dEBUG_OUTPUT_LEVEL);
        static int64_t g_skipConsoleCreation;

        uint8_t _unknown_0[1];
    };

    // 0x103be25e0
    int64_t DebugOutput::g_skipConsoleCreation;

    // 0x100cac6f0
    void DebugOutput::WriteDebugString(const eastl::fixed_string<char, 2048>& str,
                                       DebugOutput::DEBUG_OUTPUT_LEVEL dEBUG_OUTPUT_LEVEL) {
        _puts((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

} // namespace jag
