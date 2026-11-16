// libs/game/runetek5/telemetry/grid/TelemetryGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class TelemetryGrid {
    public:
        TelemetryGrid();
        unsigned long GetGroupIndexById(int arg1) const;
        int AddGroup(TelemetryGridGroup&& telemetryGridGroup, int arg2);

    private:
        long field_0;
        long field_8;
    };

    // 0x1003b72b0
    TelemetryGrid::TelemetryGrid() : eastl::vector<TelemetryGridGroup>() {
        reserve(2);
    }

    // 0x1003b7360
    unsigned long TelemetryGrid::GetGroupIndexById(int arg1) const {
        unsigned long uVar3;
        unsigned long arg1_00;

        if (size() != 0) {
            arg1_00 = 0;
            do {
                if (((CoordMapSquare*)(*this)[arg1_00])->GetX() == arg1) {
                    return arg1_00;
                }
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar3 = size();
            } while (arg1_00 < uVar3);
        }
        return 4294967295;
    }

    // 0x1003b7440
    int TelemetryGrid::AddGroup(TelemetryGridGroup&& telemetryGridGroup, int arg2) {
        int iVar1;
        Logger* this_00;
        char* str2;

        long lVar2 = size();
        if (lVar2 == 5) {
            this_00 = logger::default_logger();
            str2 = "Reached group limit";
            iVar1 = 29;
        } else {
            iVar1 = telemetryGridGroup.GetX();
            iVar1 = GetGroupIndexById(iVar1);
            if (iVar1 == -1) {
                if (arg2 == -1) {
                    arg2 = size();
                }
                lVar2 = HeapBeginPtr();
                insert((TelemetryGridGroup*)((long)arg2 * 136 + lVar2), telemetryGridGroup);
                return arg2;
            }
            this_00 = logger::default_logger();
            telemetryGridGroup.GetX();
            str2 = "Already have group with id: %d";
            iVar1 = 34;
        }
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/telemetry/"
                     "grid/TelemetryGrid.cpp",
                     iVar1, str2);
        return -1;
    }

} // namespace jag::game
