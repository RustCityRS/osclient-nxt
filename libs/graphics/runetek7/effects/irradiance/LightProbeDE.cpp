// libs/graphics/runetek7/effects/irradiance/LightProbeDE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "LightProbeDE.h"
#include "libs/graphics/runetek7/model/GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100022b10: LightProbe_DE::~LightProbe_DE() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10092fc30
    void DrawableElementPool<LightProbe_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(*local_18, *(local_18 + 1));
                new ((FastPool<LightProbe_DE, int>*)&GetDrawableElementPool()::pool)
                    FastPool<LightProbe_DE, int>(1024, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6840, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x100930010
    unsigned long
    IsLightProbeResourceInitialised(const shared_ptr<render::BufferedRenderTargets>& bufferedRenderTargets) {
        RenderTargets* this_00;
        unsigned long uVar2;

        if (bufferedRenderTargets.operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            this_00 = ((BufferedRenderTargets*)bufferedRenderTargets.operator->())->GetWriteRT();
            uVar2 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                         this_00->GetColourTargetTextures())
                        ->empty();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

} // namespace jag::graphics
