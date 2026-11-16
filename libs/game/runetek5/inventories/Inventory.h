// libs/game/runetek5/inventories/Inventory.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Inventory {
    public:
        class Slot;
        Inventory* operator=(Inventory&&);
        ~Inventory();
        Inventory();
        Inventory(Inventory&&);
        Inventory(ConfigProvider*, int);
        void CheckContainer(int, bool);
        GetSlotType(int);
        GetSlotCount(int);
        GetSlotVarBitValue(int, shared_ptr<VarBitType> const&);
        int GetCategoryCount(int);
        int GetParamCount(int, bool);
        int GetFreeSpace(shared_ptr<InvType> const&);
        int GetTotal(int);

        // data members, from how the methods use this: 56 bytes
        ConfigProvider* field_0; // offset 0
        int field_8;             // offset 8
        char _unknown_12[44];
    };

    class Inventory::Slot {
    public:
        Slot();

        // data members, from how the methods use this: 8 bytes
        undefined8 field_0; // offset 0
    };

    // 0x1004b3620, 64 bytes, inline, placed by class name and debug map
    // Inventory::operator=(Inventory&&)
    /* Inventory::TEMPNAMEPLACEHOLDERVALUE(Inventory&&) */

    Inventory* Inventory::operator=(Inventory* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        eastl::vector<Inventory::Slot, eastl::allocator>::operator=(
            (vector<Inventory::Slot, eastl::allocator>*)&field_16, (vector*)&param_1->field_16);
        eastl::vector<VarContainerSparse, eastl::allocator>::operator=(
            (vector<VarContainerSparse, eastl::allocator>*)&field_48, (vector*)&param_1->field_48);
        return this;
    }

    // 0x1004b3660, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Inventory::~Inventory(): jumps straight to the base-object destructor

    // 0x1004b5470, 48 bytes, base-object destructor, inline, placed by class name
    // Inventory::~Inventory()
    void Inventory::~Inventory() {
        (&field_48)->~vector();
        (&field_16)->~vector();
    }

    // 0x1004b5bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // Inventory::Inventory(): jumps straight to the base-object constructor

    // 0x1004b63c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Inventory::Inventory(Inventory&&): jumps straight to the base-object constructor

    // 0x1004b63d0, 64 bytes, base-object constructor, inline, placed by class name
    // Inventory::Inventory(Inventory&&)
    void Inventory::Inventory(Inventory* param_1) {
        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        new (&field_16, (vector*)&param_1->field_16) eastl::vector<Inventory::Slot, eastl::allocator>();
        new (&field_48, (vector*)&param_1->field_48) eastl::vector<VarContainerSparse, eastl::allocator>();
    }

    // 0x1004b6410, 80 bytes, base-object constructor, inline, placed by class name
    // Inventory::Inventory()
    void Inventory::Inventory() {
        field_0 = (ConfigProvider*)0;
        new (&field_16) eastl::vector<Inventory::Slot, eastl::allocator>();
        new (&field_48) eastl::vector<VarContainerSparse, eastl::allocator>();
    }

    // 0x1004bfb20, 16 bytes, complete-object constructor, inline, placed by class name
    // Inventory::Slot::Slot(): jumps straight to the base-object constructor

    // 0x1004bfb30, 16 bytes, base-object constructor, inline, placed by class name
    // Inventory::Slot::Slot()
    void Inventory::Slot::Slot() {
        field_0 = 4294967295;
    }

} // namespace jag::game
