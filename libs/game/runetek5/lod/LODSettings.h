// libs/game/runetek5/lod/LODSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LODSettings {
    public:
        GetLODMinimumDistance() const;
        GetLODDistance(LODLevel) const;
        LODSettings();
        GetLowestUsableLOD() const;
        int GetFarPlane() const;
        void GetFogRange(unsigned int, float, float) const;
        byte GetLOD(unsigned int) const;
        static /* 8 bytes */ m_defaultLOD; // = 1

        // data members, from how the methods use this: 28 bytes
        uint field_0;                 // offset 0
        uint field_4;                 // offset 4
        uint field_8;                 // offset 8
        uint field_12;                // offset 12
        int field_16;                 // offset 16
        undefined1 m_lowestUsableLOD; // offset 20
        byte field_21;                // offset 21
        char _unknown_22[6];
    };

    // 0x1004426b0, 80 bytes, inline, placed by class name and debug map
    // LODSettings::GetLODDistance(LODLevel) const
    undefined8 LODSettings::GetLODDistance(undefined8 param_1, uint param_2) {
        if ((byte)param_2 < 5) {
            /* WARNING: Could not recover jumptable at 4299433674. Too many branches */
            /* WARNING: Treating indirect jump as call */
            return (*(code*)(&DAT_1004426ec + *(int*)(&DAT_1004426ec + (ulong)param_2 * 4)))();
        }
        return 0;
    }

} // namespace jag::game
