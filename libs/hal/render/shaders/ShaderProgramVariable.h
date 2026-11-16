// libs/hal/render/shaders/ShaderProgramVariable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class ShaderProgramVariable {
    public:
        ShaderProgramVariable(const char* str, ShaderInputFormat shaderInputFormat, bool arg3, VertexUsage vertexUsage);
        auto GetVertexElementDesc(unsigned int arg1) const;

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
        ShaderInputFormat field_16;
        bool field_20;
        uint8_t _unknown_21[3];
        VertexUsage field_24;
        uint8_t _unknown_28[4];
    };

    // 0x1007bc280
    ShaderProgramVariable::ShaderProgramVariable(const char* str, ShaderInputFormat shaderInputFormat, bool arg3,
                                                 VertexUsage vertexUsage)
        : HashedString(str), field_16(shaderInputFormat), field_20(arg3), field_24(vertexUsage) {}

    // 0x1008f2dd0
    auto ShaderProgramVariable::GetVertexElementDesc(unsigned int arg1) const {
        auto str = HeapBeginPtr();
        return auto(arg1, str, field_16, field_20, field_24, 0);
    }

} // namespace jag::render
