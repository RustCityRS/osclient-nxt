// libs/graphics/runetek7/materials/ShaderSlotManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ShaderResourceSlotManager {
    public:
        void SetMaxSize(unsigned long arg1);
        int RegisterSlotID(unsigned int arg1);
        void UnregisterSlotID(unsigned int arg1);
        uint32_t GetTextureSlot(unsigned int arg1);
        void Clear();
        ShaderResourceSlotManager();
        ~ShaderResourceSlotManager();

    private:
        uint8_t _unknown_0[32];
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    class ShaderSlotManager {
    public:
        void SetMaxSize(unsigned long arg1);
        void Clear();
        uint32_t AllocSlot();
        void FreeSlot(int arg1);
        ShaderSlotManager();
        ~ShaderSlotManager();

        uint8_t _unknown_0[1];
    };

    // 0x10098eae0
    ShaderSlotManager::ShaderSlotManager() : eastl::stack<int, eastl::vector<int>>() {}

    // 0x10098eb10
    ShaderSlotManager::~ShaderSlotManager() {}

} // namespace jag::graphics
