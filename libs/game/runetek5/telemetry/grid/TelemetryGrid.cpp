// libs/game/runetek5/telemetry/grid/TelemetryGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class TelemetryGrid {
    public:
        TelemetryGrid();
        ulong GetGroupIndexById(int) const;
        int AddGroup(TelemetryGridGroup&&, int);

        // data members, from how the methods use this: 16 bytes
        long field_0; // offset 0
        long field_8; // offset 8
    };

    // 0x1003b72b0, 64 bytes, base-object constructor, placed by class name and debug map
    // TelemetryGrid::TelemetryGrid()
    void TelemetryGrid::TelemetryGrid() {
        new (this) eastl::vector<TelemetryGridGroup, eastl::allocator>();
        reserve(2);
    }

    // 0x1003b7350, 16 bytes, complete-object constructor, placed by class name and debug map
    // TelemetryGrid::TelemetryGrid(): jumps straight to the base-object constructor

    // 0x1003b7360, 112 bytes, placed by class name and debug map
    // TelemetryGrid::GetGroupIndexById(int) const
    ulong TelemetryGrid::GetGroupIndexById(int param_1) {
        long lVar2;
        CoordMapSquare* this_00;
        ulong uVar3;
        ulong uVar4;

        lVar2 = size();
        if (lVar2 != 0) {
            uVar4 = 0;
            do {
                this_00 = (CoordMapSquare*)eastl::vector<TelemetryGridGroup, eastl::allocator>::operator[](
                    (vector<TelemetryGridGroup, eastl::allocator>*)this, uVar4);
                if (this_00->GetX() == param_1) {
                    return uVar4;
                }
                uVar4 = (ulong)((int)uVar4 + 1);
                uVar3 = size();
            } while (uVar4 < uVar3);
        }
        return 4294967295;
    }

    // 0x1003b7440, 224 bytes, placed by class name and debug map
    // TelemetryGrid::AddGroup(TelemetryGridGroup&&, int)
    int TelemetryGrid::AddGroup(TelemetryGridGroup* param_1, int param_2) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;

        lVar2 = size();
        if (lVar2 == 5) {
            uVar3 = logger::default_logger();
            pcVar5 = "Reached group limit";
            uVar4 = 29;
        } else {
            iVar1 = param_1->GetX();
            iVar1 = GetGroupIndexById(this, iVar1);
            if (iVar1 == -1) {
                if (param_2 == -1) {
                    param_2 = size();
                }
                lVar2 = HeapBeginPtr();
                insert((TelemetryGridGroup*)((long)param_2 * 136 + lVar2), param_1);
                return param_2;
            }
            uVar3 = logger::default_logger();
            param_1->GetX();
            pcVar5 = "Already have group with id: %d";
            uVar4 = 34;
        }
        logger::Logger::Log(uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "telemetry/grid/TelemetryGrid.cpp",
                            uVar4, pcVar5);
        return -1;
    }

} // namespace jag::game
