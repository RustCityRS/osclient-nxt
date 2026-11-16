// libs/game/runetek5/telemetry/grid/TelemetryGridGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "TelemetryGridGroup.h"

namespace jag::game {
    // 0x100d42b58, 4 bytes, __const
    float TelemetryGridGroup::NOT_SET = -0.0f;

    // 0x100d42b5c, 84 bytes, __const
    TelemetryGridGroup::NOT_PINNED = {
        -1,         -1088052846, 1057621669, 1071504862, 1070517967, 1069267900,  1060162765,
        1059376333, 1058380186,  1067131426, 1066441371, 1065567300, -973078528,  1072064102,
        1010055512, 1059760810,  1068149418, 1002127079, 1032997157, -1106097883, 0,
    };

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int TelemetryGridGroup::GetId() const;

    // 0x1003b43c0, 192 bytes, base-object constructor, placed by class name and debug map
    // TelemetryGridGroup::TelemetryGridGroup(int)
    void TelemetryGridGroup::TelemetryGridGroup(int param_1) {
        m_id = param_1;
        new (&field_8) eastl::vector<int, eastl::allocator>();
        new (&field_40) eastl::vector<int, eastl::allocator>();
        new (&field_72) eastl::vector<int, eastl::allocator>();
        new (&field_104) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        (&field_8, 4)->reserve();
        (&field_40, 20)->reserve();
        (&field_72, 20)->reserve();
        (&field_104, 20)->reserve();
    }

    // 0x1003b44c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // TelemetryGridGroup::TelemetryGridGroup(int): jumps straight to the base-object constructor

    // 0x1003b44d0, 112 bytes, placed by class name and debug map
    // TelemetryGridGroup::GetRowIndexFromId(int) const
    ulong TelemetryGridGroup::GetRowIndexFromId(int param_1) {
        long lVar1;
        int* piVar2;
        ulong uVar3;
        ulong uVar4;
        undefined1* this_00;

        this_00 = &field_40;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                                uVar4);
                if (*piVar2 == param_1) {
                    return uVar4;
                }
                uVar4 = (ulong)((int)uVar4 + 1);
                uVar3 = this_00->size();
            } while (uVar4 < uVar3);
        }
        return 4294967295;
    }

    // 0x1003b4540, 112 bytes, placed by class name and debug map
    // TelemetryGridGroup::GetColumnIndexFromId(int) const
    ulong TelemetryGridGroup::GetColumnIndexFromId(int param_1) {
        long lVar1;
        int* piVar2;
        ulong uVar3;
        ulong uVar4;
        undefined1* this_00;

        this_00 = &field_8;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                piVar2 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                                uVar4);
                if (*piVar2 == param_1) {
                    return uVar4;
                }
                uVar4 = (ulong)((int)uVar4 + 1);
                uVar3 = this_00->size();
            } while (uVar4 < uVar3);
        }
        return 4294967295;
    }

    // 0x1003b45b0, 352 bytes, placed by class name and debug map
    // TelemetryGridGroup::AddColumn(int, int)
    int TelemetryGridGroup::AddColumn(int param_1, int param_2) {
        bool bVar1;
        long lVar3;
        undefined8 uVar4;
        Layout* this_00;
        ulong uVar5;
        undefined1* puVar6;
        ulong uVar7;
        int local_34;

        puVar6 = &field_8;
        local_34 = param_1;
        lVar3 = puVar6->size();
        if (lVar3 == 8) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "telemetry/grid/TelemetryGridGroup.cpp",
                                47, "Reached column limit");
            param_2 = -1;
        } else {
            if (GetColumnIndexFromId(this, local_34) == -1) {
                if (param_2 == -1) {
                    param_2 = puVar6->size();
                }
                lVar3 = puVar6->HeapBeginPtr();
                puVar6->insert((int*)(lVar3 + (long)param_2 * 4), &local_34);
                puVar6 = &field_104;
                lVar3 = puVar6->size();
                if (lVar3 != 0) {
                    uVar5 = 0;
                    uVar7 = 1;
                    do {
                        this_00 =
                            (Layout*)eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)puVar6, uVar5);
                        lVar3 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                        this_00->insert((int*)(lVar3 + (long)param_2 * 4), &NOT_SET);
                        uVar5 = puVar6->size();
                        bVar1 = uVar7 < uVar5;
                        uVar5 = uVar7;
                        uVar7 = (ulong)((int)uVar7 + 1);
                    } while (bVar1);
                }
            } else {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/telemetry/grid/TelemetryGridGroup.cpp",
                                    52, "Already have column with id %d in group %d", local_34, m_id);
                param_2 = -1;
            }
        }
        return param_2;
    }

    // 0x1003b47a0, 240 bytes, placed by class name and debug map
    // TelemetryGridGroup::MoveColumn(unsigned int, unsigned int)
    void TelemetryGridGroup::MoveColumn(uint param_1, uint param_2) {
        bool bVar1;
        undefined8 in_RAX;
        undefined4* puVar2;
        long lVar3;
        vector<int, eastl::allocator>* this_00;
        ulong uVar4;
        undefined1* puVar5;
        ulong uVar7;
        int local_38;
        int local_34;

        local_34 = (int)((ulong)in_RAX >> 32);
        puVar5 = &field_8;
        puVar2 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar5,
                                                                               (ulong)param_1);
        _local_38 = CONCAT44(local_34, *puVar2);
        lVar3 = puVar5->HeapBeginPtr();
        puVar5->erase((int*)(lVar3 + (ulong)param_1 * 4));
        lVar3 = puVar5->HeapBeginPtr();
        puVar5->insert((int*)(lVar3 + (ulong)param_2 * 4), &local_38);
        puVar5 = &field_104;
        lVar3 = puVar5->size();
        if (lVar3 != 0) {
            uVar4 = 0;
            uVar7 = 1;
            do {
                this_00 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)puVar5, uVar4);
                puVar2 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](this_00, (ulong)param_1);
                _local_38 = CONCAT44(*puVar2, local_38);
                lVar3 = this_00->HeapBeginPtr();
                eastl::vector<int, eastl::allocator>::erase(this_00, (int*)(lVar3 + (ulong)param_1 * 4));
                lVar3 = this_00->HeapBeginPtr();
                eastl::vector<int, eastl::allocator>::insert(this_00, (int*)(lVar3 + (ulong)param_2 * 4), &local_34);
                uVar4 = puVar5->size();
                bVar1 = uVar7 < uVar4;
                uVar4 = uVar7;
                uVar7 = (ulong)((int)uVar7 + 1);
            } while (bVar1);
        }
    }

    // 0x1003b4890, 144 bytes, placed by class name and debug map
    // TelemetryGridGroup::RemoveColumn(unsigned int)
    void TelemetryGridGroup::RemoveColumn(uint param_1) {
        long lVar1;
        Layout* this_00;
        ulong uVar2;
        uint uVar3;
        ulong uVar4;
        undefined1* this_01;

        lVar1 = (&field_8)->HeapBeginPtr();
        (&field_8, (int*)(lVar1 + (ulong)param_1 * 4))->erase();
        this_01 = &field_104;
        lVar1 = this_01->size();
        if (lVar1 != 0) {
            uVar3 = 1;
            uVar4 = 0;
            do {
                this_00 = (Layout*)eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)this_01, uVar4);
                lVar1 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                this_00->erase((int*)(lVar1 + (ulong)param_1 * 4));
                uVar4 = (ulong)uVar3;
                uVar2 = this_01->size();
                uVar3 = uVar3 + 1;
            } while (uVar4 < uVar2);
        }
    }

    // 0x1003b4920, 480 bytes, placed by class name and debug map
    // TelemetryGridGroup::AddRow(int, int)
    undefined4 TelemetryGridGroup::AddRow(int param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined4 uVar2;
        long lVar3;
        undefined8 uVar4;
        ulong uVar5;
        uint* puVar6;
        uint uVar7;
        long lVar8;
        undefined8 uVar9;
        char* pcVar10;
        uint uVar11;
        vector<int, eastl::allocator> local_60[32];
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_40;
        int local_34;

        this_00 = &field_40;
        local_34 = param_1;
        lVar3 = this_00->size();
        if (lVar3 == 40) {
            uVar4 = logger::default_logger();
            pcVar10 = "Reached row limit";
            uVar9 = 96;
        } else {
            if (GetRowIndexFromId(this, local_34) == -1) {
                if (param_2 == -1) {
                    param_2 = this_00->size();
                }
                lVar3 = this_00->HeapBeginPtr();
                lVar8 = (long)param_2;
                this_00->insert((int*)(lVar3 + lVar8 * 4), &local_34);
                this_01 = &field_72;
                lVar3 = this_01->HeapBeginPtr();
                this_01->insert((int*)(lVar3 + lVar8 * 4), (int*)&NOT_PINNED);
                eastl::vector<int, eastl::allocator>::vector(local_60);
                eastl::vector<int, eastl::allocator>::reserve(local_60, 4);
                local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_60->HeapBeginPtr();
                uVar5 = (&field_8)->size();
                eastl::vector<int, eastl::allocator>::insert(local_60, (int*)local_40, uVar5, &NOT_SET);
                local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)&field_104;
                lVar3 = local_40->HeapBeginPtr();
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::insert(
                    local_40, (vector*)(lVar8 * 32 + lVar3), (vector*)local_60);
                uVar7 = param_2 + 1;
                while (true) {
                    uVar5 = this_00->size();
                    if (uVar5 <= uVar7)
                        break;
                    puVar6 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_01, (ulong)uVar7);
                    uVar11 = param_2 + 1;
                    if ((*puVar6 != 4294967295) && (*puVar6 < uVar11)) {
                        InnerMoveRow(this, uVar11, param_2);
                    }
                    uVar7 = param_2 + 2;
                    param_2 = uVar11;
                }
                uVar2 = GetRowIndexFromId(this, local_34);
                eastl::vector<int, eastl::allocator>::~vector(local_60);
                return uVar2;
            }
            uVar4 = logger::default_logger();
            pcVar10 = "Already have row with id %d in group %d";
            uVar9 = 101;
        }
        logger::Logger::Log(uVar4, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "telemetry/grid/TelemetryGridGroup.cpp",
                            uVar9, pcVar10);
        return 4294967295;
    }

    // 0x1003b4b50, 288 bytes, placed by class name and debug map
    // TelemetryGridGroup::InnerMoveRow(unsigned int, unsigned int)
    void TelemetryGridGroup::InnerMoveRow(uint param_1, uint param_2) {
        int* piVar1;
        long lVar2;
        vector* pvVar3;
        undefined1* puVar5;
        vector<int, eastl::allocator> local_50[32];
        int local_30;
        int local_2c;

        puVar5 = &field_40;
        piVar1 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar5,
                                                                        (ulong)param_1);
        local_30 = *piVar1;
        lVar2 = puVar5->HeapBeginPtr();
        puVar5->erase((int*)(lVar2 + (ulong)param_1 * 4));
        lVar2 = puVar5->HeapBeginPtr();
        puVar5->insert((int*)(lVar2 + (ulong)param_2 * 4), &local_30);
        puVar5 = &field_72;
        piVar1 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)puVar5,
                                                                        (ulong)param_1);
        local_2c = *piVar1;
        lVar2 = puVar5->HeapBeginPtr();
        puVar5->erase((int*)(lVar2 + (ulong)param_1 * 4));
        lVar2 = puVar5->HeapBeginPtr();
        puVar5->insert((int*)(lVar2 + (ulong)param_2 * 4), &local_2c);
        puVar5 = &field_104;
        pvVar3 = (vector*)eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)puVar5, (ulong)param_1);
        eastl::vector<int, eastl::allocator>::vector(local_50, pvVar3);
        lVar2 = puVar5->HeapBeginPtr();
        puVar5->erase((vector*)((ulong)param_1 * 32 + lVar2));
        lVar2 = puVar5->HeapBeginPtr();
        puVar5->insert((vector*)((ulong)param_2 * 32 + lVar2), local_50);
        eastl::vector<int, eastl::allocator>::~vector(local_50);
    }

    // 0x1003b4cd0, 128 bytes, placed by class name and debug map
    // TelemetryGridGroup::MoveRow(unsigned int, unsigned int)
    void TelemetryGridGroup::MoveRow(uint param_1, uint param_2) {
        long lVar1;
        ulong uVar2;
        int* piVar3;
        uint uVar4;
        undefined1* this_00;
        ulong uVar5;

        InnerMoveRow(this, param_1, param_2);
        this_00 = &field_72;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar4 = 1;
            uVar5 = 0;
            do {
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                                uVar5);
                if ((*piVar3 != -1) && (uVar4 - 1 != *piVar3)) {
                    piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_00, uVar5);
                    *piVar3 = uVar4 - 1;
                }
                uVar5 = (ulong)uVar4;
                uVar2 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (uVar5 < uVar2);
        }
    }

    // 0x1003b4d50, 208 bytes, placed by class name and debug map
    // TelemetryGridGroup::RemoveRow(unsigned int)
    void TelemetryGridGroup::RemoveRow(uint param_1) {
        undefined1* this_00;
        long lVar1;
        ulong uVar2;
        uint uVar4;
        ulong uVar5;
        ulong uVar6;

        uVar5 = (ulong)param_1;
        this_00 = &field_40;
        lVar1 = this_00->HeapBeginPtr();
        this_00->erase((int*)(lVar1 + uVar5 * 4));
        lVar1 = (&field_72)->HeapBeginPtr();
        (&field_72, (int*)(lVar1 + uVar5 * 4))->erase();
        lVar1 = (&field_104)->HeapBeginPtr();
        (&field_104, (vector*)(uVar5 * 32 + lVar1))->erase();
        uVar6 = this_00->size();
        if (uVar5 < uVar6) {
            uVar6 = uVar5;
            do {
                uVar4 = (uint)uVar5;
                if (IsRowPinned(this, uVar4) == '\0') {
                    if (uVar4 != (uint)uVar6) {
                        InnerMoveRow(this, uVar4, (uint)uVar6);
                    }
                    uVar6 = (ulong)(uVar4 + 1);
                }
                uVar5 = (ulong)(uVar4 + 1);
                uVar2 = this_00->size();
            } while (uVar5 < uVar2);
        }
    }

} // namespace jag::game
