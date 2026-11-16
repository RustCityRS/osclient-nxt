// libs/game/runetek5/telemetry/grid/TelemetryGridGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "TelemetryGridGroup.h"

namespace jag::game {
    // 0x100d42b58
    float TelemetryGridGroup::NOT_SET = -0.0f;

    // 0x100d42b5c
    int32_t TelemetryGridGroup::NOT_PINNED[21] = {
        -1,         -1088052846, 1057621669, 1071504862, 1070517967, 1069267900,  1060162765,
        1059376333, 1058380186,  1067131426, 1066441371, 1065567300, -973078528,  1072064102,
        1010055512, 1059760810,  1068149418, 1002127079, 1032997157, -1106097883, 0,
    };

    // 0x1000b9960: TelemetryGridGroup::GetId() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1003b43c0
    TelemetryGridGroup::TelemetryGridGroup(int arg1) : m_id(arg1) {
        field_8.reserve(4);
        field_40.reserve(20);
        field_72.reserve(20);
        field_104.reserve(20);
    }

    // 0x1003b44d0
    unsigned long TelemetryGridGroup::GetRowIndexFromId(int arg1) const {
        int* piVar2;
        unsigned long uVar3;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_40;
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                piVar2 = (int*)(*this_00)[arg1_00];
                if (*piVar2 == arg1) {
                    return arg1_00;
                }
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar3 = this_00->size();
            } while (arg1_00 < uVar3);
        }
        return 4294967295;
    }

    // 0x1003b4540
    unsigned long TelemetryGridGroup::GetColumnIndexFromId(int arg1) const {
        int* piVar2;
        unsigned long uVar3;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_8;
        if (this_00->size() != 0) {
            arg1_00 = 0;
            do {
                piVar2 = (int*)(*this_00)[arg1_00];
                if (*piVar2 == arg1) {
                    return arg1_00;
                }
                arg1_00 = (unsigned long)((int)arg1_00 + 1);
                uVar3 = this_00->size();
            } while (arg1_00 < uVar3);
        }
        return 4294967295;
    }

    // 0x1003b45b0
    int TelemetryGridGroup::AddColumn(int arg1, int arg2) {
        bool bVar1;
        Logger* pLVar4;
        Layout* this_00;
        unsigned long uVar5;
        unsigned long uVar7;

        uint8_t* puVar6 = &field_8;
        long lVar3 = puVar6->size();
        if (lVar3 == 8) {
            pLVar4 = logger::default_logger();
            pLVar4->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/telemetry/"
                        "grid/TelemetryGridGroup.cpp",
                        47, "Reached column limit");
            arg2 = -1;
        } else {
            if (GetColumnIndexFromId((unsigned int)arg1) == -1) {
                if (arg2 == -1) {
                    arg2 = puVar6->size();
                }
                lVar3 = puVar6->HeapBeginPtr();
                puVar6->insert((int*)(lVar3 + (long)arg2 * 4), (unsigned int)arg1);
                puVar6 = &field_104;
                lVar3 = puVar6->size();
                if (lVar3 != 0) {
                    uVar5 = 0;
                    uVar7 = 1;
                    do {
                        this_00 = (Layout*)(*puVar6)[uVar5];
                        lVar3 = this_00->HeapBeginPtr();
                        this_00->insert((int*)(lVar3 + (long)arg2 * 4), NOT_SET);
                        uVar5 = puVar6->size();
                        bVar1 = uVar7 < uVar5;
                        uVar5 = uVar7;
                        uVar7 = (unsigned long)((int)uVar7 + 1);
                    } while (bVar1);
                }
            } else {
                pLVar4 = logger::default_logger();
                pLVar4->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "telemetry/grid/TelemetryGridGroup.cpp",
                            52, "Already have column with id %d in group %d", (unsigned long)(unsigned int)arg1,
                            (unsigned long)m_id);
                arg2 = -1;
            }
        }
        return arg2;
    }

    // 0x1003b47a0
    void TelemetryGridGroup::MoveColumn(unsigned int arg1, unsigned int arg2) {
        bool bVar1;
        uint64_t in_RAX;
        vector<int>* this_00;
        unsigned long uVar4;
        unsigned long uVar6;
        int local_38;

        int local_34 = (int)((unsigned long)in_RAX >> 32);
        uint8_t* puVar5 = &field_8;
        uint32_t* puVar2 = (uint32_t*)(*puVar5)[(unsigned long)arg1];
        _local_38 = (((uint64_t)local_34 << 32) | (uint32_t)(*puVar2));
        long lVar3 = puVar5->HeapBeginPtr();
        puVar5->erase((int*)(lVar3 + (unsigned long)arg1 * 4));
        lVar3 = puVar5->HeapBeginPtr();
        puVar5->insert((int*)(lVar3 + (unsigned long)arg2 * 4), local_38);
        puVar5 = &field_104;
        lVar3 = puVar5->size();
        if (lVar3 != 0) {
            uVar4 = 0;
            uVar6 = 1;
            do {
                this_00 = (vector<int>*)(*puVar5)[uVar4];
                puVar2 = (uint32_t*)(*this_00)[(unsigned long)arg1];
                _local_38 = (((uint64_t)(*puVar2) << 32) | (uint32_t)local_38);
                lVar3 = this_00->HeapBeginPtr();
                this_00->erase((int*)(lVar3 + (unsigned long)arg1 * 4));
                lVar3 = this_00->HeapBeginPtr();
                this_00->insert((int*)(lVar3 + (unsigned long)arg2 * 4), local_34);
                uVar4 = puVar5->size();
                bVar1 = uVar6 < uVar4;
                uVar4 = uVar6;
                uVar6 = (unsigned long)((int)uVar6 + 1);
            } while (bVar1);
        }
    }

    // 0x1003b4890
    void TelemetryGridGroup::RemoveColumn(unsigned int arg1) {
        Layout* this_00;
        unsigned long uVar2;
        unsigned int uVar3;
        unsigned long arg1_00;

        long lVar1 = field_8.HeapBeginPtr();
        field_8.erase((int*)(lVar1 + (unsigned long)arg1 * 4));
        uint8_t* this_01 = &field_104;
        lVar1 = this_01->size();
        if (lVar1 != 0) {
            uVar3 = 1;
            arg1_00 = 0;
            do {
                this_00 = (Layout*)(*this_01)[arg1_00];
                lVar1 = this_00->HeapBeginPtr();
                this_00->erase((int*)(lVar1 + (unsigned long)arg1 * 4));
                arg1_00 = (unsigned long)uVar3;
                uVar2 = this_01->size();
                uVar3 = uVar3 + 1;
            } while (arg1_00 < uVar2);
        }
    }

    // 0x1003b4920
    uint32_t TelemetryGridGroup::AddRow(int arg1, int arg2) {
        uint8_t* this_01;
        int iVar1;
        uint32_t uVar2;
        Logger* this_02;
        unsigned long uVar4;
        unsigned int* puVar5;
        unsigned int uVar6;
        long lVar7;
        char* str2;
        unsigned int arg1_00;
        vector<int> local_60;
        vector<eastl::vector<int>>* local_40;

        uint8_t* this_00 = &field_40;
        long lVar3 = this_00->size();
        if (lVar3 == 40) {
            this_02 = logger::default_logger();
            str2 = "Reached row limit";
            iVar1 = 96;
        } else {
            iVar1 = GetRowIndexFromId(arg1);
            if (iVar1 == -1) {
                if (arg2 == -1) {
                    arg2 = this_00->size();
                }
                lVar3 = this_00->HeapBeginPtr();
                lVar7 = (long)arg2;
                this_00->insert((lVar3 + lVar7 * 4), arg1);
                this_01 = &field_72;
                lVar3 = this_01->HeapBeginPtr();
                this_01->insert((lVar3 + lVar7 * 4), NOT_PINNED);
                local_60 = eastl::vector<int>();
                local_60.reserve(4);
                local_40 = (vector<eastl::vector<int>>*)local_60.HeapBeginPtr();
                uVar4 = field_8.size();
                local_60.insert(local_40, uVar4, NOT_SET);
                local_40 = (vector<eastl::vector<int>>*)&field_104;
                lVar3 = local_40->HeapBeginPtr();
                local_40->insert((lVar7 * 32 + lVar3), local_60);
                uVar6 = arg2 + 1;
                while (true) {
                    uVar4 = this_00->size();
                    if (uVar4 <= uVar6)
                        break;
                    puVar5 = (unsigned int*)(*this_01)[(unsigned long)uVar6];
                    arg1_00 = arg2 + 1;
                    if ((*puVar5 != 4294967295) && (*puVar5 < arg1_00)) {
                        InnerMoveRow(arg1_00, arg2);
                    }
                    uVar6 = arg2 + 2;
                    arg2 = arg1_00;
                }
                uVar2 = GetRowIndexFromId(arg1);
                return uVar2;
            }
            this_02 = logger::default_logger();
            str2 = "Already have row with id %d in group %d";
            iVar1 = 101;
        }
        this_02->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/telemetry/"
                     "grid/TelemetryGridGroup.cpp",
                     iVar1, str2);
        return 4294967295;
    }

    // 0x1003b4b50
    void TelemetryGridGroup::InnerMoveRow(unsigned int arg1, unsigned int arg2) {
        uint8_t* puVar3 = &field_40;
        int* piVar1 = (int*)(*puVar3)[(unsigned long)arg1];
        int local_30 = *piVar1;
        long lVar2 = puVar3->HeapBeginPtr();
        puVar3->erase((int*)(lVar2 + (unsigned long)arg1 * 4));
        lVar2 = puVar3->HeapBeginPtr();
        puVar3->insert((int*)(lVar2 + (unsigned long)arg2 * 4), local_30);
        puVar3 = &field_72;
        piVar1 = (int*)(*puVar3)[(unsigned long)arg1];
        int local_2c = *piVar1;
        lVar2 = puVar3->HeapBeginPtr();
        puVar3->erase((int*)(lVar2 + (unsigned long)arg1 * 4));
        lVar2 = puVar3->HeapBeginPtr();
        puVar3->insert((int*)(lVar2 + (unsigned long)arg2 * 4), local_2c);
        puVar3 = &field_104;
        vector<int>* arg1_00 = (vector<int>*)(*puVar3)[(unsigned long)arg1];
        vector<int> local_50(*arg1_00);
        lVar2 = puVar3->HeapBeginPtr();
        puVar3->erase((vector<int>*)((unsigned long)arg1 * 32 + lVar2));
        lVar2 = puVar3->HeapBeginPtr();
        puVar3->insert((vector<int>*)((unsigned long)arg2 * 32 + lVar2), local_50);
    }

    // 0x1003b4cd0
    void TelemetryGridGroup::MoveRow(unsigned int arg1, unsigned int arg2) {
        unsigned long uVar2;
        int* piVar3;
        unsigned int uVar4;
        unsigned long arg1_00;

        InnerMoveRow(arg1, arg2);
        uint8_t* this_00 = &field_72;
        if (this_00->size() != 0) {
            uVar4 = 1;
            arg1_00 = 0;
            do {
                piVar3 = (int*)(*this_00)[arg1_00];
                if ((*piVar3 != -1) && (uVar4 - 1 != *piVar3)) {
                    piVar3 = (int*)(*this_00)[arg1_00];
                    *piVar3 = uVar4 - 1;
                }
                arg1_00 = (unsigned long)uVar4;
                uVar2 = this_00->size();
                uVar4 = uVar4 + 1;
            } while (arg1_00 < uVar2);
        }
    }

    // 0x1003b4d50
    void TelemetryGridGroup::RemoveRow(unsigned int arg1) {
        unsigned long uVar2;
        unsigned int arg1_00;

        unsigned long uVar4 = (unsigned long)arg1;
        uint8_t* this_00 = &field_40;
        long lVar1 = this_00->HeapBeginPtr();
        this_00->erase((lVar1 + uVar4 * 4));
        lVar1 = field_72.HeapBeginPtr();
        field_72.erase((lVar1 + uVar4 * 4));
        lVar1 = field_104.HeapBeginPtr();
        field_104.erase((uVar4 * 32 + lVar1));
        unsigned long uVar5 = this_00->size();
        if (uVar4 < uVar5) {
            uVar5 = uVar4;
            do {
                arg1_00 = (unsigned int)uVar4;
                if (IsRowPinned(arg1_00) == '\0') {
                    if (arg1_00 != (unsigned int)uVar5) {
                        InnerMoveRow(arg1_00, (unsigned int)uVar5);
                    }
                    uVar5 = (unsigned long)(arg1_00 + 1);
                }
                uVar4 = (unsigned long)(arg1_00 + 1);
                uVar2 = this_00->size();
            } while (uVar4 < uVar2);
        }
    }

} // namespace jag::game
