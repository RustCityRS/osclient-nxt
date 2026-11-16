// libs/hal/render/shaders/VertexDeclaration.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class VertexDeclaration {
    public:
        void GetVertexElemDescs() const;
        Option<float>* GetVertexElementByteOffsets() const;
        unsigned int GetNumVertexStreams() const;
        int hash() const;
        VertexDeclaration();
        ~VertexDeclaration();
        void Destroy();
        uint64_t Create(const VertexElementDesc* vertexElementDesc, unsigned long arg2, const void* arg3,
                        unsigned long arg4);
        uint8_t operator!=(const VertexDeclaration& vertexDeclaration) const;
        uint64_t operator==(const VertexDeclaration& vertexDeclaration) const;
        uint32_t GetVertexStride(unsigned int arg1) const;

    private:
        RenderResourceLivenessMethod field_0;
        uint8_t field_4;
        uint8_t _unknown_5[83];
        unsigned int m_numVertexStreams;
        unsigned int field_92;
        uint8_t _unknown_96[4];
    };

    // 0x100bf5c20
    uint8_t VertexDeclaration::operator!=(const VertexDeclaration& vertexDeclaration) const {
        return *this == vertexDeclaration ^ 1;
    }

    // 0x100bf8630
    uint64_t VertexDeclaration::operator==(const VertexDeclaration& vertexDeclaration) const {
        bool bVar1;
        bool cVar2;

        if (((m_numVertexStreams == vertexDeclaration.m_numVertexStreams) &&
             (bVar1 = &field_56 == &vertexDeclaration.field_56, bVar1)) &&
            (cVar2 = field_8 == vertexDeclaration.field_8, cVar2)) {
            return field_32 == vertexDeclaration.field_32;
        }
        return 0;
    }

    // 0x100c27aa0
    uint32_t VertexDeclaration::GetVertexStride(unsigned int arg1) const {
        uint32_t* puVar1 = &field_56[(unsigned long)arg1];
        return *puVar1;
    }

} // namespace jag::render
