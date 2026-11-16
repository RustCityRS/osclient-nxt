// libs/hal/debugoutput/DebugOutput.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.debugoutput

namespace jag {
    class DebugOutput {
    public:
        void WriteDebugString(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, DEBUG_OUTPUT_LEVEL);
        static /* 8 bytes */ g_skipConsoleCreation;
    };

    // 0x103be25e0, 8 bytes, __common; zero-initialised
    DebugOutput::g_skipConsoleCreation;

    // 0x100cac6f0, 32 bytes, placed by class name and debug map
    // DebugOutput::WriteDebugString(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, DebugOutput::DEBUG_OUTPUT_LEVEL)
    void DebugOutput::WriteDebugString() {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        _puts(pcVar1);
    }

} // namespace jag
