// libs/errstring/ErrString.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class Error {
    public:
        SetCode(int);
        Error(int);
        int GetCode() const;
        Error();
        IsError() const;
        GetErrorString() const;
        bool IsErrorFileExists() const;
        char const* GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
            eastl::fixed_string<char, 256, true, eastl::allocator>&) const;

        // data members, from how the methods use this: 4 bytes
        int m_code; // offset 0
    };

    // 0x1001838b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Error::Error(): jumps straight to the base-object constructor

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    TintMode::TintMode();

    // 0x1001838c0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Error::IsError() const
    /* game::WaterNormalParamsTarget::IsValid() const */

    bool game::WaterNormalParamsTarget::IsValid() {
        return field_0 != 0;
    }

    // 0x100186e50, 64 bytes, inline, placed by class header (inline)
    // Error::GetErrorString() const
    Error* Error::GetErrorString() {
        int* in_RSI;

        new (this) eastl::string();
        GetErrorString<eastl::string>((basic_string*)this, *in_RSI);
        return this;
    }

    // 0x1001981a0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Error::Error()
    /* callstack::Callstack::Callstack() */

    void callstack::Callstack::Callstack() {
        m_stackFrames = 0;
    }

    // 0x1009eef90, 16 bytes, inline, placed by class header (inline)
    // Error::IsErrorFileExists() const
    bool Error::IsErrorFileExists() {
        return m_code == 17;
    }

    // 0x100b206e0, 48 bytes, inline, placed by class header (inline)
    // char const* Error::GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator> >(eastl::fixed_string<char, 256, true, eastl::allocator>&) const
    char* Error::GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(fixed_string* param_1) {
        char* pcVar1;

        eastl::string::clear();
        pcVar1 = GetErrorString<eastl::fixed_string<char, 256, true, eastl::allocator>>(param_1, m_code);
        return pcVar1;
    }

} // namespace jag

namespace jag::render {
    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    TextureFormatBitSet::TextureFormatBitSet();

    // 0x1001838c0: the linker folded this into Error::IsError() const, which has identical code
    VertexArrayObject::IsValid() const;

} // namespace jag::render

namespace jag::graphics {
    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    RenderPassBitSet::RenderPassBitSet();

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    ParticleModuleUpdateState::ParticleModuleUpdateState();

} // namespace jag::graphics

namespace jag::game {
    // 0x1001838c0: the linker folded this into Error::IsError() const, which has identical code
    WaterNormalParamsTarget::IsValid() const;

} // namespace jag::game
