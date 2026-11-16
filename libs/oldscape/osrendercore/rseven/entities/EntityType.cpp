// libs/oldscape/osrendercore/rseven/entities/EntityType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

namespace jag::oldscape::rseven {
    // 0x1001d1890, 160 bytes, placed by debug map only (low confidence)
    // GetEntityTypeString(EntityType)
    char* GetEntityTypeString(int param_1) {
        switch (param_1) {
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
            if (param_1 == 128) {
                return "STATIC_GEOMETRY";
            }
        switchD_1001d18b1_caseD_4:
            return "UNKNOWN";
        }
    }

} // namespace jag::oldscape::rseven
