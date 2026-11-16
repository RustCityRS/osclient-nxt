// libs/errstring/ErrString.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class Error {
    public:
        void SetCode(int arg1);
        Error(int arg1);
        int GetCode() const;
        Error(int resultType);
        Error();
        bool IsError() const;
        auto GetErrorString() const;
        bool IsErrorFileExists() const;
        char const* GetErrorString<eastl::fixed_string<char, 256>>(eastl::fixed_string<char, 256>& str) const;

    private:
        int m_code;
    };

    // 0x1001838b0: TintMode::TintMode() has the same machine code as Error::Error()

    // 0x1001838c0
    bool Error::IsError() const {
        return field_0 != 0;
    }

    // 0x100186e50
    auto Error::GetErrorString() const {
        auto result;
        GetErrorString<eastl::string>(&result, m_code);
        return result;
    }

    // 0x1001981a0
    Error::Error() : m_stackFrames(0) {}

    // 0x1009eef90
    bool Error::IsErrorFileExists() const {
        return m_code == 17;
    }

    // 0x100b206e0
    char const* Error::GetErrorString<eastl::fixed_string<char, 256>>(eastl::fixed_string<char, 256>& str) const {
        str.clear();
        return GetErrorString<eastl::fixed_string<char, 256>>(str, m_code);
    }

} // namespace jag

namespace jag::render {
    // 0x1001838b0: TextureFormatBitSet::TextureFormatBitSet() has the same machine code as Error::Error()

    // 0x1001838c0: VertexArrayObject::IsValid() const has the same machine code as Error::IsError() const

} // namespace jag::render

namespace jag::graphics {
    // 0x1001838b0: RenderPassBitSet::RenderPassBitSet() has the same machine code as Error::Error()

    // 0x1001838b0: ParticleModuleUpdateState::ParticleModuleUpdateState() has the same machine code as Error::Error()

} // namespace jag::graphics

namespace jag::game {
    // 0x1001838c0: WaterNormalParamsTarget::IsValid() const has the same machine code as Error::IsError() const

} // namespace jag::game
