// libs/graphics/runetek7/materials/ShaderSlotManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ShaderResourceSlotManager {
    public:
        void SetMaxSize(unsigned long);
        int RegisterSlotID(unsigned int);
        void UnregisterSlotID(unsigned int);
        GetTextureSlot(unsigned int);
        void Clear();
        ShaderResourceSlotManager();
        ~ShaderResourceSlotManager();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    class ShaderSlotManager {
    public:
        void SetMaxSize(unsigned long);
        void Clear();
        AllocSlot();
        void FreeSlot(int);
        ShaderSlotManager();
        ~ShaderSlotManager();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x10097ed40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::ShaderResourceSlotManager(): jumps straight to the base-object constructor

    // 0x10098eac0, 16 bytes, complete-object constructor, inline, placed by class name
    // ShaderSlotManager::ShaderSlotManager(): jumps straight to the base-object constructor

    // 0x10098ead0, 16 bytes, complete-object destructor, inline, placed by class name
    // ShaderSlotManager::~ShaderSlotManager(): jumps straight to the base-object destructor

    // 0x10098eae0, 16 bytes, base-object constructor, inline, placed by class name
    // ShaderSlotManager::ShaderSlotManager()
    void ShaderSlotManager::ShaderSlotManager() {
        new (this) eastl::stack<int, eastl::vector<int, eastl::allocator>>();
    }

    // 0x10098eb10, 16 bytes, base-object destructor, inline, placed by class name
    // ShaderSlotManager::~ShaderSlotManager()
    void ShaderSlotManager::~ShaderSlotManager() {
        ~stack();
    }

} // namespace jag::graphics
