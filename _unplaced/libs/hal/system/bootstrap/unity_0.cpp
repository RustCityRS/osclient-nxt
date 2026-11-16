// _unplaced/libs/hal/system/bootstrap/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "_unplaced/classes/jag/math/ColourHSL.h"
#include "libs/bytepacking/ShuffledPacket.h"
#include "libs/clientstream/standard/standard_ClientStream_impl.h"
#include "libs/console/Command.h"
#include "libs/console/Console.h"
#include "libs/game/runetek5/assetbuilder/jobs/buildcombinedlocation/BuildCombinedLocationData.h"
#include "libs/game/runetek5/config/loctype/LocType.h"
#include "libs/game/runetek5/config/questtype/QuestType.h"
#include "libs/game/runetek5/map/EnvironmentSettings.h"
#include "libs/game/runetek5/scene/Entity.h"
#include "libs/graphics/graphicutils/screenshot/Screenshot.h"
#include "libs/graphics/runetek7/animation/Animation.h"
#include "libs/graphics/runetek7/animation/asm/LayeredAnimationStateMachineDescriptor.h"
#include "libs/graphics/runetek7/fonts/TextRun.h"
#include "libs/graphics/runetek7/lighting/PointLight.h"
#include "libs/graphics/runetek7/model/GeometryBatchVertex.h"
#include "libs/graphics/runetek7/particles/ModularParticleSystem.h"
#include "libs/graphics/runetek7/particles/ModularParticleSystemVisuals.h"
#include "libs/hal/render/debug/GPUMemoryZone.h"
#include "libs/hal/system/callstack/Callstack.h"
#include "libs/hal/thread/ThreadPool.h"
#include "libs/jtl/StringEnum.h"
#include "libs/jtl/allocator/BucketAllocator.h"
#include "libs/logger/Logger.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"
#include "libs/oldscape/osrendercore/RenderState.h"
#include "libs/ui/components/Component.h"

namespace jag {
    class DebugName {
    public:
        GetDebugName() const;
        DebugName(char const*);
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ThreadPoolSingleton::GetThreadPool();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    BucketAllocatorEASTL::operator=(BucketAllocatorEASTL const&);

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    SafeBucketAllocatorEASTL::operator=(SafeBucketAllocatorEASTL const&);

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    EntityWaypoint::GetCoord() const;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ShuffledPacketFactory::p1();

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ShuffledPacketFactory::p1_alt1();

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ShuffledPacketFactory::p1_alt2();

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    ShuffledPacketFactory::p1_alt3();

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    DebugName::GetDebugName() const;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    StringEnumEntry::GetName() const;

    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    DebugName::DebugName(char const*);

    // 0x10000be60, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        ___cxa_atexit(std::unique_ptr<std::thread, std::default_delete<std::thread>>::~unique_ptr, &_g_mainThread,
                      4294967296);
    }

    // 0x10000be80, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130() {
        new (&_g_initParams) SystemInitParams();
        ___cxa_atexit(PTR__SystemInitParams_100ee63d8, &_g_initParams, 4294967296);
    }

} // namespace jag

namespace jag::game {
    class TcpConnectionMessageBase {
    public:
        GetPacket();
        void SetEndPosition(int);
        int GetEndPosition() const;

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[40];
        int m_endPosition; // offset 40
        char _unknown_44[4];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    EnvScatteringSettings::GetSimpleScatteringParams() const;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    EnvVolumetricSettings::GetParams() const;

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    EnvSkySettings::GetSkyModelRequest();

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    BuildCombinedLocationRequestData::GetLocationContainerLocationList() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    TcpConnectionMessageBase::GetPacket();

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    EnvSkySettings::GetSkyBox() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    EnvToneMapSettings::GetToneMapParams() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    LocTypeCustomisation::GetModelList() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    EnvColourGradingSettings::GetColourRemapIDs() const;

} // namespace jag::game

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ScriptedPointLight::GetRadius();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    TextureAtlasUsageMap::GetUsed();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    LayeredAnimationStateMachineLayerDescriptor::GetAnimationStateMachineDescriptor();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AnimationResource::GetAnimationDescriptor() const;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    GeometryBatchVertexPos::GetPosition() const;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    LayeredAnimationStateMachineLayerDescriptor::GetAnimationStateMachineDescriptor() const;

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    TextureAtlasUsageMap::GetLoading();

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    ModularParticleSystemDrawable::GetTextureAtlasReference() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ModularParticleSystemTemplate::GetName() const;

    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    TextRunSlice::begin() const;

} // namespace jag::graphics

// 0x100f309b0, 16 bytes, __data
g_exitCode = {1, 0, 0, 0};

// 0x100f886b0, 8 bytes, __common; zero-initialised
g_pApp;

// 0x100f886b8, 8 bytes, __common; zero-initialised
g_mainThread;

// 0x100f886c0, 56 bytes, __common; zero-initialised
g_initParams;

namespace jag::render {
    class ZoneObjectMemory {
    public:
        ZoneObjectMemory(unsigned long long);
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    GPUMemoryAllocatorZone::GetName() const;

    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    ZoneObjectMemory::ZoneObjectMemory(unsigned long long);

} // namespace jag::render

namespace jag::oldscape {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ConsoleCommandHelp::Usage() const;

    // 0x100009d10: the linker folded this into eastl::string::Layout::HeapBeginPtr(), which has identical code
    OSRenderCore_LogicThread_Common::GetRenderStateJava();

    // 0x10000add0: the linker folded this into eastl::allocator::allocator(eastl::allocator const&), which has identical code
    OSRenderCore_LogicThread_JavaStyle::OSRenderCore_LogicThread_JavaStyle();

} // namespace jag::oldscape

namespace jag::callstack {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    CallstackResolved::GetStack();

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    SignalState::GetJumpBuffer();

} // namespace jag::callstack

namespace jag::graphicutils {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Screengrabber::GetScreenshotData() const;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    RenderToTextureHelper::GetQuadVBPos() const;

} // namespace jag::graphicutils

namespace jag::logger {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    LogStream::GetName() const;

} // namespace jag::logger

namespace jag::math {
    // 0x100009d90: the linker folded this into Vector3T<float>::Vector3T(float, float, float), which has identical code
    ColourHSL::ColourHSL(float, float, float);

} // namespace jag::math

namespace jag::ui {
    // 0x10000add0: the linker folded this into eastl::allocator::allocator(eastl::allocator const&), which has identical code
    ComponentServerConfig::SetServerActiveProperties(ServerActiveProperties const&);

} // namespace jag::ui

namespace jag::console {
    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    RegisteredCommand::RegisteredCommand(CommandData&);

} // namespace jag::console
