// libs/game/runetek5/config/defaults/MiniMenuDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MiniMenuDefaults.h"

namespace jag::game {
    // 0x100552360, 592 bytes, base-object constructor, placed by class name
    // MiniMenuDefaults::MiniMenuDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void MiniMenuDefaults::MiniMenuDefaults(PacketT* param_1) {
        undefined1 uVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        InputEvent* pIVar4;
        MiniMenuDefaults* this_00;
        unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>* this_01;
        PacketT local_70[8];
        undefined4* local_68;
        MiniMenuDefaults* local_60;
        MiniMenuDefaults* local_58;
        MiniMenuDefaults* local_50;
        unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>* local_48;
        unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>* local_40;
        unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>* local_38;

        std::unique_ptr<InputEvent, std::default_delete<InputEvent>>::unique_ptr<true, void>(
            (unique_ptr<InputEvent, std::default_delete<InputEvent>>*)this);
        local_60 = (MiniMenuDefaults*)&field_8;
        std::unique_ptr<InputEvent, std::default_delete<InputEvent>>::unique_ptr<true, void>(
            (unique_ptr<InputEvent, std::default_delete<InputEvent>>*)local_60);
        local_58 = (MiniMenuDefaults*)&field_16;
        std::unique_ptr<InputEvent, std::default_delete<InputEvent>>::unique_ptr<true, void>(
            (unique_ptr<InputEvent, std::default_delete<InputEvent>>*)local_58);
        local_50 = (MiniMenuDefaults*)&field_24;
        std::unique_ptr<InputEvent, std::default_delete<InputEvent>>::unique_ptr<true, void>(
            (unique_ptr<InputEvent, std::default_delete<InputEvent>>*)local_50);
        local_48 = (unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>*)&field_32;
        std::unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>::unique_ptr<true, void>(local_48);
        local_40 = (unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>*)&field_40;
        std::unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>::unique_ptr<true, void>(local_40);
        local_38 = (unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>*)&field_48;
        std::unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>::unique_ptr<true, void>(local_38);
        local_68 = (undefined4*)&field_56;
        field_64 = 0;
        field_56 = 0;
    LAB_1005523fe:
        uVar1 = param_1->g1();
        switch (uVar1) {
        case 0:
            return;
        case 1:
            pIVar4 = (InputEvent*)InputEventFactory::NewInputEventUnpacked(param_1);
            this_00 = this;
            break;
        case 2:
            pIVar4 = (InputEvent*)InputEventFactory::NewInputEventUnpacked(param_1);
            this_00 = local_60;
            break;
        case 3:
            pIVar4 = (InputEvent*)InputEventFactory::NewInputEventUnpacked(param_1);
            this_00 = local_58;
            break;
        case 4:
            pIVar4 = (InputEvent*)InputEventFactory::NewInputEventUnpacked(param_1);
            this_00 = local_50;
            break;
        case 5:
            std::make_unique<KeyHeldInputEvent, PacketT<Array<unsigned char, eastl::allocator>>&>(local_70);
            this_01 = local_48;
            goto LAB_1005524c4;
        case 6:
            std::make_unique<KeyHeldInputEvent, PacketT<Array<unsigned char, eastl::allocator>>&>(local_70);
            this_01 = local_40;
            goto LAB_1005524c4;
        case 7:
            std::make_unique<KeyHeldInputEvent, PacketT<Array<unsigned char, eastl::allocator>>&>(local_70);
            this_01 = local_38;
        LAB_1005524c4:
            std::unique_ptr<KeyHeldInputEvent, std::default_delete<KeyHeldInputEvent>>::operator=(
                this_01, (unique_ptr*)local_70);
            local_70->~unique_ptr();
            goto LAB_1005523fe;
        case 8:
            InputEventFactory::NewInputEventUnpacked(param_1);
            goto LAB_1005523fe;
        case 9:
            InputEventFactory::NewInputEventUnpacked(param_1);
            goto LAB_1005523fe;
        case 10:
            InputEventFactory::NewInputEventUnpacked(param_1);
            goto LAB_1005523fe;
        case 11:
            field_64 = 1;
            goto LAB_1005523fe;
        case 12:
            uVar2 = param_1->g4();
            *local_68 = uVar2;
            goto LAB_1005523fe;
        case 13:
            uVar2 = param_1->g4();
            *(undefined4*)((long)&field_56 + 4) = uVar2;
            goto LAB_1005523fe;
        default:
            goto switchD_100552417_default;
        }
        this_00->reset(pIVar4);
        goto LAB_1005523fe;
    switchD_100552417_default:
        uVar3 = logger::default_logger();
        logger::Logger::Log(uVar3, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/defaults/MiniMenuDefaults.cpp",
                            76, "MiniMenuDefaults: Error unrecognised .defaults config code: %u", uVar1);
        goto LAB_1005523fe;
    }

    // 0x1005526b0, 16 bytes, complete-object constructor, placed by class name
    // MiniMenuDefaults::MiniMenuDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

} // namespace jag::game
