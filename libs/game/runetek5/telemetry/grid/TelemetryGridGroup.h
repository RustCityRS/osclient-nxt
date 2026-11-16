// libs/game/runetek5/telemetry/grid/TelemetryGridGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class TelemetryGridGroup {
    public:
        GetId() const;
        TelemetryGridGroup(int);
        ulong GetRowIndexFromId(int) const;
        ulong GetColumnIndexFromId(int) const;
        int AddColumn(int, int);
        void MoveColumn(unsigned int, unsigned int);
        void RemoveColumn(unsigned int);
        AddRow(int, int);
        void InnerMoveRow(unsigned int, unsigned int);
        void MoveRow(unsigned int, unsigned int);
        void RemoveRow(unsigned int);
        bool IsRowPinned(unsigned int) const;
        ~TelemetryGridGroup();
        TelemetryGridGroup(TelemetryGridGroup&&);
        TelemetryGridGroup* operator=(TelemetryGridGroup&&);
        static float /* 4 bytes */ NOT_SET; // = -0.0f
        static /* 84 bytes */ NOT_PINNED;   // initialised in its definition

        // data members, from how the methods use this: 112 bytes
        int field_0; // offset 0
        char _unknown_4[108];
    };

    // 0x1003b4e20, 32 bytes, inline, placed by class name and debug map
    // TelemetryGridGroup::IsRowPinned(unsigned int) const
    bool TelemetryGridGroup::IsRowPinned(uint param_1) {
        int* piVar1;

        piVar1 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)&field_72,
                                                                        (ulong)param_1);
        return *piVar1 != -1;
    }

    // 0x1003bab80, 16 bytes, complete-object destructor, inline, placed by class name
    // TelemetryGridGroup::~TelemetryGridGroup(): jumps straight to the base-object destructor

    // 0x1003bab90, 64 bytes, base-object destructor, inline, placed by class name
    // TelemetryGridGroup::~TelemetryGridGroup()
    void TelemetryGridGroup::~TelemetryGridGroup() {
        (&field_104)->~vector();
        (&field_72)->~vector();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

    // 0x1003bae40, 16 bytes, complete-object constructor, inline, placed by class name
    // TelemetryGridGroup::TelemetryGridGroup(TelemetryGridGroup&&): jumps straight to the base-object constructor

    // 0x1003bae60, 80 bytes, base-object constructor, inline, placed by class name
    // TelemetryGridGroup::TelemetryGridGroup(TelemetryGridGroup&&)
    void TelemetryGridGroup::TelemetryGridGroup(TelemetryGridGroup* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (vector*)&param_1->field_8) eastl::vector<int, eastl::allocator>();
        new (&field_40, (vector*)&param_1->field_40) eastl::vector<int, eastl::allocator>();
        new (&field_72, (vector*)&param_1->field_72) eastl::vector<int, eastl::allocator>();
        new (&field_104, (vector*)&param_1->field_104)
            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
    }

    // 0x1003bb2b0, 80 bytes, inline, placed by class name
    // TelemetryGridGroup::operator=(TelemetryGridGroup&&)
    /* TelemetryGridGroup::TEMPNAMEPLACEHOLDERVALUE(TelemetryGridGroup&&) */

    TelemetryGridGroup* TelemetryGridGroup::operator=(TelemetryGridGroup* param_1) {
        field_0 = param_1->field_0;
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_8,
                                                        (vector*)&param_1->field_8);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_40,
                                                        (vector*)&param_1->field_40);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_72,
                                                        (vector*)&param_1->field_72);
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator=(
            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)&field_104, (vector*)&param_1->field_104);
        return this;
    }

} // namespace jag::game
