// _unplaced/projects/osclient/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "libs/game/runetek5/scene/entities/MapSquare.h"
#include "libs/graphics/runetek7/effects/skybox/SkyBox.h"
#include "libs/graphics/runetek7/effects/viewportmap/ViewportMapManager.h"
#include "libs/js5/caching/Js5MemoryCache.h"
#include "libs/oldscape/jagex3/midi2/midiplayer.h"
#include "libs/tweaky/Tweaky_ContainerGroup.h"

namespace jag::oldscape {
    // 0x100f36fe4, 4 bytes, __data
    traceBackgroundModeLoginFlow = 1;

    // 0x100f3702c, 4 bytes, __data
    currentSupportReason = -1;

    // 0x100f8a750, 16 bytes, __common; zero-initialised
    g_zeroKey;

    // 0x103c04fa0, 24 bytes, __bss; zero-initialised
    AllFonts;

    // 0x100156b90, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        jag::math::Vector3T<int>::Vector3T(local_28);
        new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x100156bf0, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x100156c10, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.3
    void ___cxx_global_var_init_3() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x100156c70, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.4
    void ___cxx_global_var_init_4() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x100156cd0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.6
    void ___cxx_global_var_init_6() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x100156d30, 16 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.8
    void ___cxx_global_var_init_8() {
        defaults::DefaultsGroup::GRAPHICS = 3;
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x103c04f50, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x103c04f90, 12 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    SkyBoxEntry::~SkyBoxEntry();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    ViewportMapEntry::~ViewportMapEntry();

} // namespace jag::graphics

namespace jag::tweak {
    // 0x10012c6c0: the linker folded this into eastl::pair<eastl::string const, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> >::~pair(), which has identical code
    PageInfo::~PageInfo();

    // 0x10012c6d0: the linker folded this into eastl::pair<eastl::string const, shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> >::~pair(), which has identical code
    PageInfo::~PageInfo();

} // namespace jag::tweak

namespace jag::oldscape::midi2 {
    // 0x10012e6f0: the linker folded this into eastl::pair<unsigned long long const, LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long long> >::~pair(), which has identical code
    MidiPlayerMainThread::QueuedLazyWave::~QueuedLazyWave();

    // 0x10012e700: the linker folded this into eastl::pair<unsigned long long const, LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long long> >::~pair(), which has identical code
    MidiPlayerMainThread::QueuedLazyWave::~QueuedLazyWave();

} // namespace jag::oldscape::midi2

namespace jag::oldscape::constants::skills {
    // 0x100d3d5d8, 472 bytes, __const
    skillxp = {
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
    // 0x103c04f9c, 4 bytes, __bss; zero-initialised
    DefaultsGroup::GRAPHICS;

} // namespace jag::oldscape::defaults

namespace jag {
    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    Js5MemoryCacheWrapper::~Js5MemoryCacheWrapper();

} // namespace jag

namespace jag::game {
    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    MapSquareEnvInfo::~MapSquareEnvInfo();

} // namespace jag::game
