// libs/graphics/runetek7/effects/irradiance/LightProbeDE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "LightProbeDE.h"
#include "libs/graphics/runetek7/model/GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LightProbe_DE::~LightProbe_DE();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    LightProbe_DE::~LightProbe_DE();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    LightProbe_DE::~LightProbe_DE();

    // 0x10092fc30, 160 bytes, placed by debug map only (low confidence)
    // DrawableElementPool<LightProbe_DE>::GetDrawableElementPool()
    undefined1* DrawableElementPool<LightProbe_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(local_18, local_18 + 1);
                new (&GetDrawableElementPool()::pool) FastPool<LightProbe_DE, int>(1024, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6840, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

    // 0x100930010, 64 bytes, placed by debug map only (low confidence)
    // IsLightProbeResourceInitialised(shared_ptr<render::BufferedRenderTargets> const&)
    ulong IsLightProbeResourceInitialised(shared_ptr* param_1) {
        BufferedRenderTargets* this;
        RenderTargets* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        ulong uVar2;

        if (shared_ptr::operator_cast_to_bool(param_1)) {
            this = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator->(
                (shared_ptr<render::BufferedRenderTargets>*)param_1);
            this_00 = (RenderTargets*)GetWriteRT();
            this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_00->GetColourTargetTextures();
            uVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag::graphics
