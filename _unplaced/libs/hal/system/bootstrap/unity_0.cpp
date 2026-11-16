// _unplaced/libs/hal/system/bootstrap/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
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
        void GetDebugName() const;
        DebugName(const char* arg1);
    };

    // 0x100009ca0: ThreadPoolSingleton::GetThreadPool() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: BucketAllocatorEASTL::operator=(BucketAllocatorEASTL const&) has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: SafeBucketAllocatorEASTL::operator=(SafeBucketAllocatorEASTL const&) has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: EntityWaypoint::GetCoord() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d10: ShuffledPacketFactory::p1() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d10: ShuffledPacketFactory::p1_alt1() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d10: ShuffledPacketFactory::p1_alt2() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d10: ShuffledPacketFactory::p1_alt3() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d10: DebugName::GetDebugName() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10000b2a0: StringEnumEntry::GetName() const has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x10000b400: DebugName::DebugName(char const*) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

    // 0x10000be60
    void ___cxx_global_var_init(void) {
        ___cxa_atexit(std::unique_ptr<std::thread>::~unique_ptr, &g_mainThread, 4294967296);
    }

    // 0x10000be80
    void ___cxx_global_var_init_130(void) {
        new (&g_initParams) SystemInitParams();
        ___cxa_atexit(PTR__SystemInitParams_100ee63d8, &g_initParams, 4294967296);
    }

} // namespace jag

namespace jag::game {
    class TcpConnectionMessageBase {
    public:
        void GetPacket();
        void SetEndPosition(int arg1);
        int GetEndPosition() const;

    private:
        uint8_t _unknown_0[40];
        int m_endPosition;
        uint8_t _unknown_44[4];
    };

    // 0x100009ca0: EnvScatteringSettings::GetSimpleScatteringParams() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: EnvVolumetricSettings::GetParams() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d00: EnvSkySettings::GetSkyModelRequest() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100009d10: BuildCombinedLocationRequestData::GetLocationContainerLocationList() const has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x100009d50: TcpConnectionMessageBase::GetPacket() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009d50: EnvSkySettings::GetSkyBox() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009d50: EnvToneMapSettings::GetToneMapParams() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009d50: LocTypeCustomisation::GetModelList() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009d50: EnvColourGradingSettings::GetColourRemapIDs() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

} // namespace jag::game

namespace jag::graphics {
    // 0x100009ca0: ScriptedPointLight::GetRadius() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: TextureAtlasUsageMap::GetUsed() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: LayeredAnimationStateMachineLayerDescriptor::GetAnimationStateMachineDescriptor() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: AnimationResource::GetAnimationDescriptor() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: GeometryBatchVertexPos::GetPosition() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: LayeredAnimationStateMachineLayerDescriptor::GetAnimationStateMachineDescriptor() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d00: TextureAtlasUsageMap::GetLoading() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100009d00: ModularParticleSystemDrawable::GetTextureAtlasReference() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100009d50: ModularParticleSystemTemplate::GetName() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x10000b2a0: TextRunSlice::begin() const has the same machine code as eastl::string::Layout::GetHeapSize() const

} // namespace jag::graphics

// 0x100f309b0
int32_t g_exitCode[4] = {1, 0, 0, 0};

// 0x100f886b0
int64_t g_pApp;

// 0x100f886b8
int64_t g_mainThread;

// 0x100f886c0
uint8_t g_initParams[56];

namespace jag::render {
    class ZoneObjectMemory {
    public:
        ZoneObjectMemory(unsigned long long arg1);
    };

    // 0x100009ca0: GPUMemoryAllocatorZone::GetName() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10000b400: ZoneObjectMemory::ZoneObjectMemory(unsigned long long) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

} // namespace jag::render

namespace jag::oldscape {
    // 0x100009ca0: ConsoleCommandHelp::Usage() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d10: OSRenderCore_LogicThread_Common::GetRenderStateJava() has the same machine code as eastl::string::Layout::HeapBeginPtr()

    // 0x10000add0: OSRenderCore_LogicThread_JavaStyle::OSRenderCore_LogicThread_JavaStyle() has the same machine code as eastl::allocator::allocator(eastl::allocator const&)

} // namespace jag::oldscape

namespace jag::callstack {
    // 0x100009ca0: CallstackResolved::GetStack() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d50: SignalState::GetJumpBuffer() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

} // namespace jag::callstack

namespace jag::graphicutils {
    // 0x100009ca0: Screengrabber::GetScreenshotData() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009d50: RenderToTextureHelper::GetQuadVBPos() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

} // namespace jag::graphicutils

namespace jag::logger {
    // 0x100009ca0: LogStream::GetName() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

} // namespace jag::logger

namespace jag::math {
    // 0x100009d90: ColourHSL::ColourHSL(float, float, float) has the same machine code as Vector3T<float>::Vector3T(float, float, float)

} // namespace jag::math

namespace jag::ui {
    // 0x10000add0: ComponentServerConfig::SetServerActiveProperties(ServerActiveProperties const&) has the same machine code as eastl::allocator::allocator(eastl::allocator const&)

} // namespace jag::ui

namespace jag::console {
    // 0x10000b400: RegisteredCommand::RegisteredCommand(CommandData&) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

} // namespace jag::console
