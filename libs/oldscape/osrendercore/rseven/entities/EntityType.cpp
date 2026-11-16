// libs/oldscape/osrendercore/rseven/entities/EntityType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    // 0x1001d1890
    char* GetEntityTypeString(EntityType entityType) {
        switch (entityType) {
        case 0:
            return "LOCATION";
        case 1:
            return "NPC";
        case 2:
            return "PLAYER";
        case 3:
            return "OBJECT";
        case 4:
        case 5:
        case 8:
        case 9:
            goto switchD_1001d18b1_caseD_4;
        case 6:
            return "TERRAIN";
        case 7:
            return "WATER";
        case 10:
            return "MAPSQUARE";
        default:
            if (entityType == 128) {
                return "STATIC_GEOMETRY";
            }
        switchD_1001d18b1_caseD_4:
            return "UNKNOWN";
        }
    }

} // namespace jag::oldscape::rseven
