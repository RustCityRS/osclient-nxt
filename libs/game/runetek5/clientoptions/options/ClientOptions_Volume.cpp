// libs/game/runetek5/clientoptions/options/ClientOptions_Volume.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientOptions_Volume.h"

namespace jag::game::option {
    // 0x1005f8210, 112 bytes, base-object constructor, placed by class name and debug map
    // Volume::Volume(graphics::RT7Core&, Settings&, char const*, SoundVolumeClass)
    void Volume::Volume(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_5) {
        undefined8 in_RAX;
        undefined1 local_38[8];

        local_38 = (undefined1[8])in_RAX;
        new (local_38) oldscape::sidebars::SideBarData(0, 255);
        new (this) Option<int>(param_1, param_2, param_3, local_38);
        field_0 = &PTR__MaxBackgroundFps_100f096f8;
        field_200 = param_5;
    }

    // 0x1005f8310, 16 bytes, complete-object constructor, placed by class name and debug map
    // Volume::Volume(graphics::RT7Core&, Settings&, char const*, SoundVolumeClass): jumps straight to the base-object constructor

    // 0x1005f8320, 96 bytes, placed by class name and debug map
    // Volume::ApplySettingImpl(graphics::RT7Core&, graphics::EffectManager&, int)
    void Volume::ApplySettingImpl(RT7Core* param_1, EffectManager* param_2, int param_3) {
        SoundManager* pSVar1;
        undefined8 uVar2;

        pSVar1 = (SoundManager*)Singleton<SoundManager>::InstancePtr();
        if (pSVar1 == (SoundManager*)0) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "clientoptions/options/ClientOptions_Volume.cpp",
                                20, "Could not apply setting %s because the sound manager is unavailable", field_16);
        } else {
            pSVar1->SetVolume(field_200, field_24);
        }
    }

} // namespace jag::game::option
