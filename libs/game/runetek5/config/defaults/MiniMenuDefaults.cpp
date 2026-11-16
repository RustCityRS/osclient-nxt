// libs/game/runetek5/config/defaults/MiniMenuDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MiniMenuDefaults.h"

namespace jag::game {
    // 0x100552360
    MiniMenuDefaults::MiniMenuDefaults(PacketT<Array<unsigned char>>& arg1) {
        uint32_t uVar2;
        InputEvent* inputEvent;
        MiniMenuDefaults* this_01;
        unique_ptr<KeyHeldInputEvent>* this_02;
        ReturnValue local_70;

        unique_ptr<true, void>();
        MiniMenuDefaults* local_60 = (MiniMenuDefaults*)&field_8;
        local_60->unique_ptr<true, void>();
        MiniMenuDefaults* local_58 = (MiniMenuDefaults*)&field_16;
        local_58->unique_ptr<true, void>();
        MiniMenuDefaults* local_50 = (MiniMenuDefaults*)&field_24;
        local_50->unique_ptr<true, void>();
        unique_ptr<KeyHeldInputEvent>* local_48 = (unique_ptr<KeyHeldInputEvent>*)&field_32;
        local_48->unique_ptr<true, void>();
        unique_ptr<KeyHeldInputEvent>* local_40 = (unique_ptr<KeyHeldInputEvent>*)&field_40;
        local_40->unique_ptr<true, void>();
        unique_ptr<KeyHeldInputEvent>* local_38 = (unique_ptr<KeyHeldInputEvent>*)&field_48;
        local_38->unique_ptr<true, void>();
        uint32_t* local_68 = (uint32_t*)&field_56;
        field_64 = 0;
        field_56 = 0;
    LAB_1005523fe:
        uint8_t bVar1 = arg1.g1();
        switch (bVar1) {
        case 0:
            return;
        case 1:
            inputEvent = InputEventFactory::NewInputEventUnpacked(arg1);
            this_01 = this;
            break;
        case 2:
            inputEvent = InputEventFactory::NewInputEventUnpacked(arg1);
            this_01 = local_60;
            break;
        case 3:
            inputEvent = InputEventFactory::NewInputEventUnpacked(arg1);
            this_01 = local_58;
            break;
        case 4:
            inputEvent = InputEventFactory::NewInputEventUnpacked(arg1);
            this_01 = local_50;
            break;
        case 5:
            local_70 = std::make_unique<KeyHeldInputEvent, PacketT<Array<unsigned char>>&>(arg1);
            this_02 = local_48;
            goto LAB_1005524c4;
        case 6:
            local_70 = std::make_unique<KeyHeldInputEvent, PacketT<Array<unsigned char>>&>(arg1);
            this_02 = local_40;
            goto LAB_1005524c4;
        case 7:
            local_70 = std::make_unique<KeyHeldInputEvent, PacketT<Array<unsigned char>>&>(arg1);
            this_02 = local_38;
        LAB_1005524c4:
            *this_02 = local_70;
            goto LAB_1005523fe;
        case 8:
            InputEventFactory::NewInputEventUnpacked(arg1);
            goto LAB_1005523fe;
        case 9:
            InputEventFactory::NewInputEventUnpacked(arg1);
            goto LAB_1005523fe;
        case 10:
            InputEventFactory::NewInputEventUnpacked(arg1);
            goto LAB_1005523fe;
        case 11:
            field_64 = 1;
            goto LAB_1005523fe;
        case 12:
            uVar2 = arg1.g4();
            *local_68 = uVar2;
            goto LAB_1005523fe;
        case 13:
            uVar2 = arg1.g4();
            *(uint32_t*)((long)&field_56 + 4) = uVar2;
            goto LAB_1005523fe;
        default:
            goto switchD_100552417_default;
        }
        this_01->reset(inputEvent);
        goto LAB_1005523fe;
    switchD_100552417_default:
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/defaults/"
                  "MiniMenuDefaults.cpp",
                  76, "MiniMenuDefaults: Error unrecognised .defaults config code: %u", (unsigned int)bVar1);
        goto LAB_1005523fe;
    }

} // namespace jag::game
