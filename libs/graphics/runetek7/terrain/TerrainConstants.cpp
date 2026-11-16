// libs/graphics/runetek7/terrain/TerrainConstants.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TerrainConstants.h"

namespace jag::graphics {
    // 0x1039bd1ec, set at startup by ___cxx_global_var_init.137
    TerrainBaseData TerrainConstants::EMPTY_SOURCE;

    // 0x1039bd214, set at startup by ___cxx_global_var_init.138
    math::Point<float> TerrainConstants::EDGE_CENTRE_OFFSETS[4] = {
        /* [0] */ Point<float>(-1.0, 0.0),
        /* [1] */ Point<float>(0.0, 1.0),
        /* [2] */ Point<float>(1.0, 0.0),
        /* [3] */ Point<float>(0.0, -1.0),
    };

    // 0x1039bd234, set at startup by ___cxx_global_var_init.139
    math::Point<float> TerrainConstants::CORNERS[4] = {
        /* [0] */ Point<float>(0.0, 0.0),
        /* [1] */ Point<float>(0.0, 1.0),
        /* [2] */ Point<float>(1.0, 1.0),
        /* [3] */ Point<float>(1.0, 0.0),
    };

    // 0x1007b1e90
    void TerrainConstants::CreateTriangle(TerrainTriangle& terrainTriangle,
                                          TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE,
                                          const TerrainBaseData* terrainBaseData1,
                                          const TerrainBaseData* terrainBaseData2) {
        uint64_t uVar1;

        local_58.field_32._0_4_ = 0;
        local_58._36_5_ = 0;
        uint32_t uStack_2f = 0;
        local_58._16_8_ = 0;
        local_58.field_20._4_4_ = 0;
        local_58.field_28 = 0;
        local_58._29_3_ = 0;
        local_58.field_0 = 0;
        local_58.field_4 = 0;
        local_58._6_2_ = 0;
        local_58._8_8_ = 0;
        TerrainTriangle local_58;
        *(unsigned long*)((long)&terrainTriangle.field_20 + 5) =
            (((uint64_t)((uint8_t)local_58.field_32) << 56) |
             (uint64_t)((((uint64_t)local_58._28_4_ << 24) | (uint32_t)local_58.field_20._5_3_)));
        *(unsigned long*)((long)&terrainTriangle.field_32 + 1) =
            (((uint64_t)local_58._36_5_ << 24) | (uint32_t)local_58.field_32._1_3_);
        *(uint64_t*)((long)&terrainTriangle.field_12 + 4) = local_58._16_8_;
        *(unsigned long*)((long)&terrainTriangle.field_20 + 4) =
            (((uint64_t)local_58._28_4_ << 32) | (uint32_t)local_58.field_20._4_4_);
        terrainTriangle.field_0 = local_58.field_0;
        terrainTriangle.field_4 = local_58.field_4;
        *(uint16_t*)&terrainTriangle.field_6 = local_58._6_2_;
        *(uint64_t*)&terrainTriangle.field_8 = local_58._8_8_;
        if ((tRIANGLE_USAGE == 0) ||
            ((tRIANGLE_USAGE != 2 && (terrainBaseData1 = terrainBaseData2, terrainBaseData2 == nullptr)))) {
            uVar1 = 0;
        } else {
            terrainTriangle.field_40 = 1;
            CopyTriangleSource(terrainBaseData1, terrainTriangle);
            uVar1 = 1;
        }
        return uVar1;
    }

    // 0x1007b2470
    void TerrainConstants::CopyVertexLocationAndNormal(const TerrainVertex& terrainVertex1,
                                                       TerrainVertex& terrainVertex2) {
        terrainVertex2.field_40.SetXYZ(terrainVertex1.field_40);
        terrainVertex2.field_52.SetXYZ(terrainVertex1.field_52);
    }

    // 0x1007b24b0
    void TerrainConstants::CopyVertexSource(const TerrainBaseData& terrainBaseData1,
                                            TerrainBaseData& terrainBaseData2) {
        *(uint32_t*)&terrainBaseData2.field_12 = *(uint32_t*)&terrainBaseData1.field_12;
        *(uint32_t*)((long)&terrainBaseData2.field_12 + 4) = *(uint32_t*)((long)&terrainBaseData1.field_12 + 4);
        terrainBaseData2.field_0 = terrainBaseData1.field_0;
        terrainBaseData2.field_8 = terrainBaseData1.field_8;
        *(uint32_t*)&terrainBaseData2.field_20 = *(uint32_t*)&terrainBaseData1.field_20;
        *(uint32_t*)((long)&terrainBaseData2.field_20 + 4) = *(uint32_t*)((long)&terrainBaseData1.field_20 + 4);
        *(uint8_t*)((long)&terrainBaseData2.field_32 + 6) = *(uint8_t*)((long)&terrainBaseData1.field_32 + 6);
        *(uint8_t*)((long)&terrainBaseData2.field_32 + 7) = *(uint8_t*)((long)&terrainBaseData1.field_32 + 7);
    }

    // 0x1007b3de0
    void TerrainConstants::CopyVertex(const TerrainVertex& terrainVertex1, TerrainVertex& terrainVertex2) {
        CopyVertexLocationAndNormal(terrainVertex1, terrainVertex2);
        CopyVertexSource((TerrainBaseData*)terrainVertex1, (TerrainBaseData*)terrainVertex2);
    }

    // 0x1007b3e10
    void TerrainConstants::CopyTriangleSource(const TerrainBaseData& terrainBaseData,
                                              TerrainTriangle& terrainTriangle) {
        *(uint32_t*)&terrainTriangle.field_12 = *(uint32_t*)&terrainBaseData.field_12;
        *(uint32_t*)((long)&terrainTriangle.field_12 + 4) = *(uint32_t*)((long)&terrainBaseData.field_12 + 4);
        terrainTriangle.field_0 = terrainBaseData.field_0;
        terrainTriangle.field_8 = terrainBaseData.field_8;
        *(uint32_t*)&terrainTriangle.field_32 = *(uint32_t*)&terrainBaseData.field_32;
        terrainTriangle.field_28 = terrainBaseData.field_28;
        *(uint8_t*)((long)&terrainTriangle.field_32 + 6) = *(uint8_t*)((long)&terrainBaseData.field_32 + 6);
        *(uint8_t*)((long)&terrainTriangle.field_32 + 7) = *(uint8_t*)((long)&terrainBaseData.field_32 + 7);
    }

    // 0x1007c9120
    void ___cxx_global_var_init_137(undefined8 param_1, TerrainEmptyInit* param_2) {
        new ((TerrainBaseData*)&TerrainConstants::EMPTY_SOURCE) TerrainBaseData(*param_2);
    }

} // namespace jag::graphics
