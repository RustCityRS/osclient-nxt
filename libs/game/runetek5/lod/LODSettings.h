// libs/game/runetek5/lod/LODSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LODSettings {
    public:
        int GetLODMinimumDistance() const;
        uint64_t GetLODDistance(LODLevel lodLevel) const;
        LODSettings();
        uint8_t GetLowestUsableLOD() const;
        int GetFarPlane() const;
        void GetFogRange(unsigned int arg1, float arg2, float arg3) const;
        uint8_t GetLOD(unsigned int arg1) const;
        static int64_t m_defaultLOD; // = 1

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        unsigned int field_12;
        int m_lODMinimumDistance;
        uint8_t m_lowestUsableLOD;
        uint8_t field_21;
        uint8_t _unknown_22[6];
    };

    // 0x1004426b0
    uint64_t LODSettings::GetLODDistance(LODLevel lodLevel) const {
        if ((uint8_t)lodLevel < 5) {
            return (*(void (*)(...))(&DAT_1004426ec + *(int*)(&DAT_1004426ec + (unsigned long)lodLevel * 4)))();
        }
        return 0;
    }

} // namespace jag::game
