// libs/game/runetek5/telemetry/grid/TelemetryGridGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class TelemetryGridGroup {
    public:
        unsigned int GetId() const;
        TelemetryGridGroup(int arg1);
        unsigned long GetRowIndexFromId(int arg1) const;
        unsigned long GetColumnIndexFromId(int arg1) const;
        int AddColumn(int arg1, int arg2);
        void MoveColumn(unsigned int arg1, unsigned int arg2);
        void RemoveColumn(unsigned int arg1);
        uint32_t AddRow(int arg1, int arg2);
        void InnerMoveRow(unsigned int arg1, unsigned int arg2);
        void MoveRow(unsigned int arg1, unsigned int arg2);
        void RemoveRow(unsigned int arg1);
        bool IsRowPinned(unsigned int arg1) const;
        ~TelemetryGridGroup();
        TelemetryGridGroup(TelemetryGridGroup&& telemetryGridGroup);
        TelemetryGridGroup* operator=(TelemetryGridGroup&& telemetryGridGroup);
        static float NOT_SET;          // = -0.0f
        static int32_t NOT_PINNED[21]; // initialised in its definition

    private:
        unsigned int m_id;
        uint8_t _unknown_4[108];
    };

    // 0x1003b4e20
    bool TelemetryGridGroup::IsRowPinned(unsigned int arg1) const {
        int* piVar1 = &field_72[(unsigned long)arg1];
        return *piVar1 != -1;
    }

    // 0x1003bab90
    TelemetryGridGroup::~TelemetryGridGroup() {
        field_104.~vector();
        field_72.~vector();
        field_40.~vector();
        field_8.~vector();
    }

    // 0x1003bae60
    TelemetryGridGroup::TelemetryGridGroup(TelemetryGridGroup&& telemetryGridGroup)
        : m_id(telemetryGridGroup.m_id), field_8(telemetryGridGroup.field_8), field_40(telemetryGridGroup.field_40),
          field_72(telemetryGridGroup.field_72), field_104(telemetryGridGroup.field_104) {}

    // 0x1003bb2b0
    TelemetryGridGroup* TelemetryGridGroup::operator=(TelemetryGridGroup&& telemetryGridGroup) {
        m_id = telemetryGridGroup.m_id;
        field_8 = telemetryGridGroup.field_8;
        field_40 = telemetryGridGroup.field_40;
        field_72 = telemetryGridGroup.field_72;
        field_104 = telemetryGridGroup.field_104;
        return this;
    }

} // namespace jag::game
