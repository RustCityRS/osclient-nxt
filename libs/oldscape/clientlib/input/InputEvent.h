// libs/oldscape/clientlib/input/InputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::input {
    class InputEvent {
    public:
        DispatchToInputHandler(InputHandler*);
        InputEvent();
        Clear();

        // data members, from how the methods use this: 32 bytes
        undefined4 field_0; // offset 0
        undefined2 field_4; // offset 4
        char _unknown_6[2];
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        char _unknown_20[4];
        undefined8 field_24; // offset 24
    };

    // 0x1003928c0, 480 bytes, inline, placed by class name and debug map
    // InputEvent::DispatchToInputHandler(InputHandler*)
    undefined4 InputEvent::DispatchToInputHandler(InputHandler* param_1) {
        undefined4 uVar1;
        undefined8 uVar2;

        switch (field_0) {
        case 0:
            uVar1 = (**(code**)(param_1->field_0 + 56))(param_1, field_12, field_16, field_24);
            break;
        case 1:
            uVar1 = (**(code**)(param_1->field_0 + 64))(param_1, field_12, field_16, field_24);
            break;
        case 2:
            uVar1 = (**(code**)(param_1->field_0 + 72))(param_1, *(undefined4*)&field_4, field_24);
            break;
        case 3:
            uVar1 = (**(code**)(param_1->field_0 + 32))(param_1, *(undefined4*)&field_4, field_8, field_12, field_16,
                                                        field_24);
            break;
        case 4:
            uVar1 = (**(code**)(param_1->field_0 + 40))(param_1, *(undefined4*)&field_4, field_8, field_12, field_16,
                                                        field_24);
            break;
        case 5:
            uVar1 = (**(code**)(param_1->field_0 + 48))(param_1, *(undefined4*)&field_4, field_12, field_16, field_24);
            break;
        case 6:
            uVar1 = (**(code**)param_1->field_0)(param_1, *(undefined4*)&field_4, field_24);
            break;
        case 7:
            uVar1 = (**(code**)(param_1->field_0 + 16))(param_1, *(undefined4*)&field_4, field_24);
            break;
        case 8:
            uVar1 = (**(code**)(param_1->field_0 + 24))(param_1, field_4, field_24);
            break;
        case 9:
            uVar1 = (**(code**)(param_1->field_0 + 80))(param_1, *(undefined4*)&field_4, field_24);
            break;
        case 10:
            uVar1 = (**(code**)(param_1->field_0 + 104))(param_1, field_12, field_16, *(undefined4*)&field_4, field_8);
            break;
        case 11:
            uVar1 = (**(code**)(param_1->field_0 + 88))(param_1, *(undefined4*)&field_4, field_24);
            break;
        case 4294967295:
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/input/InputEvent.h",
                                78, "Trying to dispatch UNSET input event!");
            return 0;
        default:
            LogAndAbort("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                        "input/InputEvent.h",
                        82, "IllegalStateException: m_type %i");
            return 0;
        }
        return uVar1;
    }

    // 0x100392b00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // InputEvent::InputEvent(): jumps straight to the base-object constructor

    // 0x100396f10, 16 bytes, base-object constructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputEvent::InputEvent()
    /* game::QuestType::MasterQuestVar::MasterQuestVar() */

    void game::QuestType::MasterQuestVar::MasterQuestVar() {
        SetDefaults();
    }

    // 0x100396f20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputEvent::Clear()
    /* game::EnvSkySettings::SetDefaults() */

    void game::EnvSkySettings::SetDefaults() {
        m_skyBoxID = 4294967295;
    }

} // namespace jag::oldscape::input
