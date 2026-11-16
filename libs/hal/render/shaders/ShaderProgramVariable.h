// libs/hal/render/shaders/ShaderProgramVariable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class ShaderProgramVariable {
    public:
        ShaderProgramVariable(char const*, ShaderInputFormat, bool, VertexUsage);
        GetVertexElementDesc(unsigned int) const;

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        undefined1 field_20; // offset 20
        char _unknown_21[3];
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    // 0x1007a4960, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ShaderProgramVariable::ShaderProgramVariable(char const*, ShaderInputFormat, bool, VertexUsage): jumps straight to the base-object constructor

    // 0x1007bc280, 64 bytes, base-object constructor, inline, placed by class name
    // ShaderProgramVariable::ShaderProgramVariable(char const*, ShaderInputFormat, bool, VertexUsage)
    void ShaderProgramVariable::ShaderProgramVariable(char* param_1, undefined4 param_3, undefined1 param_4,
                                                      undefined4 param_5) {
        new (this) HashedString(param_1);
        field_16 = param_3;
        field_20 = param_4;
        field_24 = param_5;
    }

    // 0x1008f2dd0, 80 bytes, inline, placed by class name
    // ShaderProgramVariable::GetVertexElementDesc(unsigned int) const
    ShaderProgramVariable* ShaderProgramVariable::GetVertexElementDesc(uint param_1) {
        undefined8 in_RAX;
        uint uVar2;
        undefined8 uVar1;
        undefined4 in_EDX;
        undefined4 in_register_00000034;
        Layout* this_00;

        uVar2 = (uint)((ulong)in_RAX >> 32);
        this_00 = (Layout*)CONCAT44(in_register_00000034, param_1);
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        new (this) VertexElementDesc(in_EDX, uVar1, *(undefined4*)(this_00 + 16), this_00[20],
                                     *(undefined4*)(this_00 + 24), (ulong)uVar2 << 32);
        return this;
    }

} // namespace jag::render
