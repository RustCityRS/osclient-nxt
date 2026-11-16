// libs/game/runetek5/inventories/InventoryManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class InventoryManager {
    public:
        void CreateInventory(int, bool);
        long GetInventory(int, bool);
        void DeleteInventory(int, bool);

        // data members, from how the methods use this: 16 bytes
        ConfigProvider* field_0; // offset 0
        char _unknown_8[8];
    };

    // 0x1004b34e0, 112 bytes, placed by class name and debug map
    // InventoryManager::CreateInventory(int, bool)
    void InventoryManager::CreateInventory(int param_1, bool param_2) {
        Inventory* this_00;
        undefined7 in_register_00000011;
        Inventory local_68;
        int local_14;

        local_14 = (int)CONCAT71(in_register_00000011, param_2) + param_1 * 2;
        new (&local_68) Inventory(field_0, param_1);
        this_00 = (Inventory*)eastl::vector_map<int, Inventory, eastl::less<int>, eastl::allocator,
                                                eastl::vector<eastl::pair<int, Inventory>, eastl::allocator>>::
        operator[]((vector_map<int, Inventory, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, Inventory>, eastl::allocator>>*)&field_8,
                   &local_14);
        Inventory::operator=(this_00, &local_68);
        local_68.~Inventory();
        eastl::vector_map<int, Inventory, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, Inventory>, eastl::allocator>>::
        operator[]((vector_map<int, Inventory, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, Inventory>, eastl::allocator>>*)&field_8,
                   &local_14);
    }

    // 0x1004b3670, 80 bytes, placed by class name
    // InventoryManager::GetInventory(int, bool)
    long InventoryManager::GetInventory(int param_1, bool param_2) {
        long lVar1;
        long lVar2;
        long lVar3;
        undefined7 in_register_00000011;
        int local_1c;

        local_1c = (int)CONCAT71(in_register_00000011, param_2) + param_1 * 2;
        lVar1 = (&field_8, &local_1c)->find();
        lVar2 = (&field_8)->end();
        lVar3 = 0;
        if (lVar1 != lVar2) {
            lVar3 = lVar1 + 8;
        }
        return lVar3;
    }

    // 0x1004b36f0, 48 bytes, placed by class name
    // InventoryManager::DeleteInventory(int, bool)
    void InventoryManager::DeleteInventory(int param_1, bool param_2) {
        undefined7 in_register_00000011;
        int local_c;

        local_c = (int)CONCAT71(in_register_00000011, param_2) + param_1 * 2;
        (&field_8, &local_c)->erase();
    }

} // namespace jag::game
