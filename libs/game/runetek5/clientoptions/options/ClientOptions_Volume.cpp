// libs/game/runetek5/clientoptions/options/ClientOptions_Volume.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientOptions_Volume.h"

namespace jag::game::option {
    // 0x1005f8210
    Volume::Volume(graphics::RT7Core& rt7Core, Settings& settings, const char* str, SoundVolumeClass soundVolumeClass) {
        Range<int>* in_RAX;

        Range<int>* local_38 = in_RAX;
        new (&local_38) oldscape::sidebars::SideBarData(0, 255);
        new (this) Option<int>(rt7Core, settings, str, local_38);
        field_200 = soundVolumeClass;
    }

    // 0x1005f8320
    void Volume::ApplySettingImpl(graphics::RT7Core& rt7Core, graphics::EffectManager& effectManager, int arg3) {
        auto this_00 = InstancePtr();
        if (this_00 == nullptr) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "clientoptions/options/ClientOptions_Volume.cpp",
                      20, "Could not apply setting %s because the sound manager is unavailable", field_16);
        } else {
            this_00->SetVolume(field_200, field_24);
        }
    }

} // namespace jag::game::option
