// libs/graphics/runetek7/terrain/TerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TerrainOverlayShape.h"

namespace jag::graphics {
    // 0x1007b1600, 32 bytes, base-object constructor, placed by class name and debug map
    // TerrainOverlayShape::TerrainOverlayShape(TerrainOverlayShapeType)
    void TerrainOverlayShape::TerrainOverlayShape(undefined1 param_2) {
        field_0 = &PTR__TerrainOverlayShape_100f14680;
        m_iD = param_2;
        new (&field_16) eastl::vector<TerrainVertex, eastl::allocator>();
    }

    // 0x1007b1640, 32 bytes, base-object destructor, placed by class name and debug map
    // TerrainOverlayShape::~TerrainOverlayShape()
    void TerrainOverlayShape::~TerrainOverlayShape() {
        field_0 = &PTR__TerrainOverlayShape_100f14680;
        (&field_16)->~vector();
    }

    // 0x1007b4270, 16 bytes, complete-object destructor, placed by class name
    // TerrainOverlayShape::~TerrainOverlayShape(): jumps straight to the base-object destructor

    // 0x1007b4280, 16 bytes, deleting destructor, placed by class name
    // TerrainOverlayShape::~TerrainOverlayShape()
    void TerrainOverlayShape::~TerrainOverlayShape() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x1007b4290, 304 bytes, placed by class name
    // TerrainOverlayShape::GetShape(TerrainOverlayShapeType)
    void TerrainOverlayShape::GetShape(ulong param_1) {
        if (11 < (byte)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/TerrainOverlayShape.cpp",
                            111, "TerrainOverlayShape: Shape not implemented!");
        }
        /* WARNING: Could not recover jumptable at 4303045296. Too many branches */
        /* WARNING: Treating indirect jump as call */
        (*(code*)(&DAT_1007b4390 + *(int*)(&DAT_1007b4390 + (param_1 & 4294967295) * 4)))();
    }

} // namespace jag::graphics
