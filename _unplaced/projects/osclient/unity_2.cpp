// _unplaced/projects/osclient/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "libs/game/runetek5/scene/entities/MapSquare.h"
#include "libs/graphics/runetek7/effects/skybox/SkyBox.h"
#include "libs/graphics/runetek7/effects/viewportmap/ViewportMapManager.h"
#include "libs/js5/caching/Js5MemoryCache.h"
#include "libs/oldscape/jagex3/midi2/midiplayer.h"
#include "libs/tweaky/Tweaky_ContainerGroup.h"

namespace jag::oldscape {
    // 0x100f36fe4
    int32_t traceBackgroundModeLoginFlow = 1;

    // 0x100f3702c
    int32_t currentSupportReason = -1;

    // 0x100f8a750
    std::array<int, _4ul> g_zeroKey;

    // 0x103c04fa0
    uint8_t AllFonts[24];

    // 0x100156b90
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX)
            jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100156bf0
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100156c10
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100156c70
    void ___cxx_global_var_init_4(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100156cd0
    void ___cxx_global_var_init_6(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100156d30
    void ___cxx_global_var_init_8(void) {
        defaults::DefaultsGroup::GRAPHICS = 3;
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x103c04f50
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x103c04f90
    uint8_t WORLD_ORTHOGONAL[12];

    // 0x10012a760: SkyBoxEntry::~SkyBoxEntry() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x10012a760: ViewportMapEntry::~ViewportMapEntry() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

} // namespace jag::graphics

namespace jag::tweak {
    // 0x10012c6c0: PageInfo::~PageInfo() has the same machine code as eastl::pair<eastl::string const, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>>::~pair()

    // 0x10012c6d0: PageInfo::~PageInfo() has the same machine code as eastl::pair<eastl::string const, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>>::~pair()

} // namespace jag::tweak

namespace jag::oldscape::midi2 {
    // 0x10012e6f0: MidiPlayerMainThread::QueuedLazyWave::~QueuedLazyWave() has the same machine code as eastl::pair<unsigned long long const, LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long long>>::~pair()

    // 0x10012e700: MidiPlayerMainThread::QueuedLazyWave::~QueuedLazyWave() has the same machine code as eastl::pair<unsigned long long const, LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long long>>::~pair()

} // namespace jag::oldscape::midi2

namespace jag::oldscape::constants::skills {
    // 0x100d3d5d8
    int32_t skillxp[118] = {
        83,       174,      276,      388,     512,     650,     801,     969,     1154,    1358,    1584,    1833,
        2107,     2411,     2746,     3115,    3523,    3973,    4470,    5018,    5624,    6291,    7028,    7842,
        8740,     9730,     10824,    12031,   13363,   14833,   16456,   18247,   20224,   22406,   24815,   27473,
        30408,    33648,    37224,    41171,   45529,   50339,   55649,   61512,   67983,   75127,   83014,   91721,
        101333,   111945,   123660,   136594,  150872,  166636,  184040,  203254,  224466,  247886,  273742,  302288,
        333804,   368599,   407015,   449428,  496254,  547953,  605032,  668051,  737627,  814445,  899257,  992895,
        1096278,  1210421,  1336443,  1475581, 1629200, 1798808, 1986068, 2192818, 2421087, 2673114, 2951373, 3258594,
        3597792,  3972294,  4385776,  4842295, 5346332, 5902831, 6517253, 7195629, 7944614, 8771558, 9684577, 10692629,
        11805606, 13034431, 14391160, 0,       0,       0,       0,       0,       0,       0,       64,      64,
        0,        64,       128,      64,      64,      0,       64,      128,     0,       0,
    };

} // namespace jag::oldscape::constants::skills

namespace jag::oldscape::defaults {
    // 0x103c04f9c
    int32_t DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag {
    // 0x10012a760: Js5MemoryCacheWrapper::~Js5MemoryCacheWrapper() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

} // namespace jag

namespace jag::game {
    // 0x10012a760: MapSquareEnvInfo::~MapSquareEnvInfo() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

} // namespace jag::game
