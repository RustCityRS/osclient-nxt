// libs/graphics/runetek7/water/WaterPatchDE.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "WaterPatchDE.h"
#include "libs/graphics/runetek7/model/GeometryBatchInstance.h"

namespace jag::graphics {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    WaterPatch_DE::~WaterPatch_DE();

    // 0x100153080: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    WaterPatch_DE::~WaterPatch_DE();

    // 0x100153090: the linker folded this into oldscape::ClientObj::~ClientObj(), which has identical code
    WaterPatch_DE::~WaterPatch_DE();

    // 0x1007a2500, 160 bytes, placed by debug map only (low confidence)
    // DrawableElementPool<WaterPatch_DE>::GetDrawableElementPool()
    undefined1* DrawableElementPool<WaterPatch_DE>::GetDrawableElementPool() {
        int* piVar2;
        int local_18[2];

        if (GetDrawableElementPool()::pool == '\0') {
            if (___cxa_guard_acquire(&GetDrawableElementPool()::pool) != 0) {
                local_18[0] = 16;
                local_18[1] = 16;
                piVar2 = std::max<int>(local_18, local_18 + 1);
                new (&GetDrawableElementPool()::pool) FastPool<WaterPatch_DE, int>(256, *piVar2);
                ___cxa_atexit(PTR__FastPool_100ee6848, &GetDrawableElementPool()::pool, 4294967296);
                ___cxa_guard_release(&GetDrawableElementPool()::pool);
            }
        }
        return &GetDrawableElementPool()::pool;
    }

} // namespace jag::graphics
