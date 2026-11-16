// libs/hal/render/shaders/VertexDeclarationManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "VertexDeclarationManager.h"

namespace jag::render {
    // 0x100bee130, 48 bytes, base-object destructor, placed by class name and debug map
    // VertexDeclarationManager::~VertexDeclarationManager()
    void VertexDeclarationManager::~VertexDeclarationManager() {
        field_0 = &PTR__VertexDeclarationManager_100f28210;
        (&field_8)->~vector_map();
        ~AutoSingleton();
    }

    // 0x100bee160, 16 bytes, complete-object destructor, placed by class name and debug map
    // VertexDeclarationManager::~VertexDeclarationManager(): jumps straight to the base-object destructor

    // 0x100bee170, 32 bytes, deleting destructor, placed by class name and debug map
    // VertexDeclarationManager::~VertexDeclarationManager()
    void VertexDeclarationManager::~VertexDeclarationManager() {
        ~VertexDeclarationManager(this);
        operator_delete(this);
    }

    // 0x100bee190, 80 bytes, placed by class name and debug map
    // VertexDeclarationManager::Register(VertexDeclaration const*)
    void VertexDeclarationManager::Register(VertexDeclaration* param_1) {
        long* plVar1;
        undefined8* puVar2;
        uint local_1c;

        local_1c = param_1->GetMinMapX();
        plVar1 = (long*)eastl::vector_map<
            unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>::
        operator[](
            (vector_map<unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>*)&field_8,
            &local_1c);
        if (*plVar1 == 0) {
            puVar2 = (undefined8*)eastl::vector_map<
                unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>::
            operator[](
                (vector_map<
                    unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
                    eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>*)&field_8,
                &local_1c);
            *puVar2 = param_1;
        }
    }

    // 0x100bee270, 64 bytes, placed by class name and debug map
    // VertexDeclarationManager::Unregister(VertexDeclaration const*)
    void VertexDeclarationManager::Unregister(VertexDeclaration* param_1) {
        long* plVar1;
        uint local_14;

        param_1->GetMinMapX();
        plVar1 = (long*)eastl::vector_map<
            unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
            eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>::
        operator[](
            (vector_map<unsigned int, VertexDeclaration_const*, eastl::less<unsigned int>, eastl::allocator,
                        eastl::vector<eastl::pair<unsigned int, VertexDeclaration_const*>, eastl::allocator>>*)&field_8,
            &local_14);
        if (*plVar1 != 0) {
            (&field_8, &local_14)->erase();
        }
    }

    // 0x100bee2f0, 80 bytes, placed by class name and debug map
    // VertexDeclarationManager::GetVertexDeclaration(unsigned int)
    undefined8 VertexDeclarationManager::GetVertexDeclaration(uint param_1) {
        long lVar1;
        long lVar2;
        undefined8 uVar3;
        uint local_1c;

        local_1c = param_1;
        lVar1 = (&field_8, &local_1c)->find();
        lVar2 = (&field_8)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(undefined8*)(lVar1 + 8);
        }
        return uVar3;
    }

} // namespace jag::render
