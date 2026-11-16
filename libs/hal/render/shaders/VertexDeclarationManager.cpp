// libs/hal/render/shaders/VertexDeclarationManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "VertexDeclarationManager.h"

namespace jag::render {
    // 0x100bee130
    VertexDeclarationManager::~VertexDeclarationManager() {}

    // 0x100bee190
    void VertexDeclarationManager::Register(const VertexDeclaration* vertexDeclaration) {
        uint64_t* puVar2;

        unsigned int local_1c = vertexDeclaration->GetMinMapX();
        long* plVar1 = &field_8[local_1c];
        if (*plVar1 == 0) {
            puVar2 = &field_8[local_1c];
            *puVar2 = vertexDeclaration;
        }
    }

    // 0x100bee270
    void VertexDeclarationManager::Unregister(const VertexDeclaration* vertexDeclaration) {
        unsigned int local_14;

        vertexDeclaration->GetMinMapX();
        long* plVar1 = &field_8[local_14];
        if (*plVar1 != 0) {
            eastl::vector_map<unsigned int, VertexDeclaration const*>::erase(field_8);
        }
    }

    // 0x100bee2f0
    uint64_t VertexDeclarationManager::GetVertexDeclaration(unsigned int arg1) {
        uint64_t uVar3;

        long lVar1 = eastl::vector_map<unsigned int, VertexDeclaration const*>::find(field_8);
        long lVar2 = field_8.end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(uint64_t*)(lVar1 + 8);
        }
        return uVar3;
    }

} // namespace jag::render
