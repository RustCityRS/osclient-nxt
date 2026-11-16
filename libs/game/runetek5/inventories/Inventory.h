// libs/game/runetek5/inventories/Inventory.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Inventory {
    public:
        class Slot;
        Inventory* operator=(Inventory&& inventory);
        ~Inventory();
        Inventory();
        Inventory(Inventory&& inventory);
        Inventory(ConfigProvider* configProvider, int arg2);
        void CheckContainer(int arg1, bool arg2);
        uint32_t GetSlotType(int arg1);
        uint32_t GetSlotCount(int arg1);
        uint32_t GetSlotVarBitValue(int arg1, const shared_ptr<VarBitType>& varBitType);
        int GetCategoryCount(int arg1);
        int GetParamCount(int arg1, bool arg2);
        int GetFreeSpace(const shared_ptr<InvType>& invType);
        int GetTotal(int arg1);

    private:
        ConfigProvider* field_0;
        int field_8;
        uint8_t _unknown_12[44];
    };

    class Inventory::Slot {
    public:
        Slot();

    private:
        uint64_t field_0;
    };

    // 0x1004b3620
    Inventory* Inventory::operator=(Inventory&& inventory) {
        field_8 = inventory.field_8;
        field_0 = inventory.field_0;
        field_16 = inventory.field_16;
        field_48 = inventory.field_48;
        return this;
    }

    // 0x1004b5470
    Inventory::~Inventory() {
        field_48.~vector();
        field_16.~vector();
    }

    // 0x1004b63d0
    Inventory::Inventory(Inventory&& inventory)
        : field_8(inventory.field_8), field_0(inventory.field_0), field_16(inventory.field_16),
          field_48(inventory.field_48) {}

    // 0x1004b6410
    Inventory::Inventory() : field_0(nullptr) {}

    // 0x1004bfb30
    Inventory::Slot::Slot() : field_0(4294967295) {}

} // namespace jag::game
