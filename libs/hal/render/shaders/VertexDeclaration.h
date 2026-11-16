// libs/hal/render/shaders/VertexDeclaration.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class VertexDeclaration {
    public:
        GetVertexElemDescs() const;
        GetVertexElementByteOffsets() const;
        GetNumVertexStreams() const;
        hash() const;
        VertexDeclaration();
        ~VertexDeclaration();
        void Destroy();
        Create(VertexElementDesc const*, unsigned long, void const*, unsigned long);
        byte operator!=(VertexDeclaration const&) const;
        operator==(VertexDeclaration const&) const;
        GetVertexStride(unsigned int) const;

        // data members, from how the methods use this: 100 bytes
        int field_0;        // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[83];
        int field_88; // offset 88
        char _unknown_92[8];
    };

    // 0x100bf5c20, 16 bytes, inline, placed by class name
    // VertexDeclaration::operator!=(VertexDeclaration const&) const
    /* VertexDeclaration::TEMPNAMEPLACEHOLDERVALUE(VertexDeclaration const&)
   const */

    byte VertexDeclaration::operator!=(VertexDeclaration* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100bf8630, 96 bytes, inline, placed by class name
    // VertexDeclaration::operator==(VertexDeclaration const&) const
    /* VertexDeclaration::TEMPNAMEPLACEHOLDERVALUE(VertexDeclaration const&)
   const */

    undefined8 VertexDeclaration::operator==(VertexDeclaration* param_1) {
        bool bVar1;
        char cVar2;
        undefined8 uVar3;

        if (((field_88 == param_1->field_88) &&
             (bVar1 = std::operator==((array*)&field_56, (array*)&param_1->field_56), bVar1)) &&
            (cVar2 = Array<VertexElementDesc, eastl::allocator>::operator==(
                 (Array<VertexElementDesc, eastl::allocator>*)&field_8, (Array*)&param_1->field_8),
             cVar2 != '\0')) {
            uVar3 = Array<unsigned int, eastl::allocator>::operator==((Array<unsigned int, eastl::allocator>*)&field_32,
                                                                      (Array*)&param_1->field_32);
            return uVar3;
        }
        return 0;
    }

    // 0x100c27aa0, 32 bytes, inline, placed by class name
    // VertexDeclaration::GetVertexStride(unsigned int) const
    undefined4 VertexDeclaration::GetVertexStride(uint param_1) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<unsigned int, 8ul>::operator[]((array<unsigned int, 8ul>*)&field_56,
                                                                        (ulong)param_1);
        return *puVar1;
    }

} // namespace jag::render
