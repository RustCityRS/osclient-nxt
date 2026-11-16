// libs/graphics/runetek7/water/WaterPatchDE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "WaterPatchDE.h"
#include "libs/graphics/runetek7/model/GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100022b10: WaterPatch_DE::~WaterPatch_DE() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x1007a2500
    void DrawableElementPool<WaterPatch_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(*local_18, *(local_18 + 1));
                new ((FastPool<WaterPatch_DE, int>*)&GetDrawableElementPool()::pool)
                    FastPool<WaterPatch_DE, int>(256, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6848, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

} // namespace jag::graphics
