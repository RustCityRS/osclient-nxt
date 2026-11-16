// libs/game/runetek5/inventories/InventoryManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class InventoryManager {
    public:
        void CreateInventory(int arg1, bool arg2);
        long GetInventory(int arg1, bool arg2);
        void DeleteInventory(int arg1, bool arg2);

    private:
        ConfigProvider* field_0;
        int field_8;
        uint8_t _unknown_12[4];
    };

    // 0x1004b34e0
    void InventoryManager::CreateInventory(int arg1, bool arg2) {
        uint64_t in_register_00000011;

        int local_14 = (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) + arg1 * 2;
        Inventory local_68(field_0, arg1);
        Inventory* this_00 = &field_8[local_14];
        *this_00 = local_68;
        field_8[local_14];
    }

    // 0x1004b3670
    long InventoryManager::GetInventory(int arg1, bool arg2) {
        long lVar1 = eastl::vector_map<int, Inventory>::find(field_8);
        long lVar2 = field_8.end();
        long lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1 + 8;
        }
        return lVar3;
    }

    // 0x1004b36f0
    void InventoryManager::DeleteInventory(int arg1, bool arg2) {
        eastl::vector_map<int, Inventory>::erase(field_8);
    }

} // namespace jag::game
