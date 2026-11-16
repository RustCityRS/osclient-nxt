// libs/graphics/runetek7/terrain/TerrainConstants.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TerrainConstants.h"

namespace jag::graphics {
    // 0x1039bd1ec, 40 bytes, __common; set at startup by ___cxx_global_var_init.137
    TerrainBaseData TerrainConstants::EMPTY_SOURCE;

    // 0x1039bd214, 32 bytes, __common; set at startup by ___cxx_global_var_init.138
    math::Point<float> TerrainConstants::EDGE_CENTRE_OFFSETS[4] = {
        /* [0] */ Point<float>(-1.0, 0.0),
        /* [1] */ Point<float>(0.0, 1.0),
        /* [2] */ Point<float>(1.0, 0.0),
        /* [3] */ Point<float>(0.0, -1.0),
    };

    // 0x1039bd234, 32 bytes, __common; set at startup by ___cxx_global_var_init.139
    math::Point<float> TerrainConstants::CORNERS[4] = {
        /* [0] */ Point<float>(0.0, 0.0),
        /* [1] */ Point<float>(0.0, 1.0),
        /* [2] */ Point<float>(1.0, 1.0),
        /* [3] */ Point<float>(1.0, 0.0),
    };

    // 0x1007b1e90, 128 bytes, placed by class name and debug map
    // TerrainConstants::CreateTriangle(TerrainTriangle&, TerrainConstants::TRIANGLE_USAGE, TerrainBaseData const*, TerrainBaseData const*)
    undefined8 TerrainConstants::CreateTriangle(TerrainTriangle* param_1, int param_2, TerrainBaseData* param_3,
                                                TerrainBaseData* param_4) {
        undefined8 uVar1;
        TerrainTriangle local_58;
        undefined3 uStack_2f;

        local_58.field_32._0_4_ = 0;
        local_58._36_5_ = 0;
        uStack_2f = 0;
        local_58._16_8_ = 0;
        local_58.field_20._4_4_ = 0;
        local_58.field_28 = 0;
        local_58._29_3_ = 0;
        local_58.field_0 = 0;
        local_58.field_4 = 0;
        local_58._6_2_ = 0;
        local_58._8_8_ = 0;
        new (&local_58) TerrainTriangle();
        *(ulong*)((long)&param_1->field_20 + 5) =
            CONCAT17((undefined1)local_58.field_32, CONCAT43(local_58._28_4_, local_58.field_20._5_3_));
        *(ulong*)((long)&param_1->field_32 + 1) = CONCAT53(local_58._36_5_, local_58.field_32._1_3_);
        *(undefined8*)((long)&param_1->field_12 + 4) = local_58._16_8_;
        *(ulong*)((long)&param_1->field_20 + 4) = CONCAT44(local_58._28_4_, local_58.field_20._4_4_);
        param_1->field_0 = local_58.field_0;
        param_1->field_4 = local_58.field_4;
        *(undefined2*)&param_1->field_6 = local_58._6_2_;
        *(undefined8*)&param_1->field_8 = local_58._8_8_;
        if ((param_2 == 0) || ((param_2 != 2 && (param_3 = param_4, param_4 == (TerrainBaseData*)0)))) {
            uVar1 = 0;
        } else {
            param_1->field_40 = 1;
            CopyTriangleSource(param_3, param_1);
            uVar1 = 1;
        }
        return uVar1;
    }

    // 0x1007b2470, 64 bytes, placed by class name
    // TerrainConstants::CopyVertexLocationAndNormal(TerrainVertex const&, TerrainVertex&)
    void TerrainConstants::CopyVertexLocationAndNormal(TerrainVertex* param_1, TerrainVertex* param_2) {
        (&param_2->field_40, (Vector3T*)&param_1->field_40)->SetXYZ();
        (&param_2->field_52, (Vector3T*)&param_1->field_52)->SetXYZ();
    }

    // 0x1007b24b0, 64 bytes, placed by class name
    // TerrainConstants::CopyVertexSource(TerrainBaseData const&, TerrainBaseData&)
    void TerrainConstants::CopyVertexSource(TerrainBaseData* param_1, TerrainBaseData* param_2) {
        *(undefined4*)&param_2->field_12 = *(undefined4*)&param_1->field_12;
        *(undefined4*)((long)&param_2->field_12 + 4) = *(undefined4*)((long)&param_1->field_12 + 4);
        param_2->field_0 = param_1->field_0;
        param_2->field_8 = param_1->field_8;
        *(undefined4*)&param_2->field_20 = *(undefined4*)&param_1->field_20;
        *(undefined4*)((long)&param_2->field_20 + 4) = *(undefined4*)((long)&param_1->field_20 + 4);
        *(undefined1*)((long)&param_2->field_32 + 6) = *(undefined1*)((long)&param_1->field_32 + 6);
        *(undefined1*)((long)&param_2->field_32 + 7) = *(undefined1*)((long)&param_1->field_32 + 7);
    }

    // 0x1007b3de0, 48 bytes, placed by class name
    // TerrainConstants::CopyVertex(TerrainVertex const&, TerrainVertex&)
    void TerrainConstants::CopyVertex(TerrainVertex* param_1, TerrainVertex* param_2) {
        CopyVertexLocationAndNormal(param_1, param_2);
        CopyVertexSource((TerrainBaseData*)param_1, (TerrainBaseData*)param_2);
    }

    // 0x1007b3e10, 64 bytes, placed by class name
    // TerrainConstants::CopyTriangleSource(TerrainBaseData const&, TerrainTriangle&)
    void TerrainConstants::CopyTriangleSource(TerrainBaseData* param_1, TerrainTriangle* param_2) {
        *(undefined4*)&param_2->field_12 = *(undefined4*)&param_1->field_12;
        *(undefined4*)((long)&param_2->field_12 + 4) = *(undefined4*)((long)&param_1->field_12 + 4);
        param_2->field_0 = param_1->field_0;
        param_2->field_8 = param_1->field_8;
        *(undefined4*)&param_2->field_32 = *(undefined4*)&param_1->field_32;
        param_2->field_28 = param_1->field_28;
        *(undefined1*)((long)&param_2->field_32 + 6) = *(undefined1*)((long)&param_1->field_32 + 6);
        *(undefined1*)((long)&param_2->field_32 + 7) = *(undefined1*)((long)&param_1->field_32 + 7);
    }

    // 0x1007c9120, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137(undefined8 param_1, TerrainEmptyInit* param_2) {
        new (&TerrainConstants::EMPTY_SOURCE) TerrainBaseData(param_2);
    }

    // 0x1007c9140, 112 bytes, placed by the data it initialises
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138() {
        new (&TerrainConstants::EDGE_CENTRE_OFFSETS) math::Point<float>(-1.0, 0.0);
        new (&DAT_1039bd21c) math::Point<float>(0.0, 1.0);
        new (&DAT_1039bd224) math::Point<float>(1.0, 0.0);
        new (&DAT_1039bd22c) math::Point<float>(0.0, -1.0);
    }

    // 0x1007c91b0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        new (&TerrainConstants::CORNERS) math::Point<float>(0.0, 0.0);
        new (&DAT_1039bd23c) math::Point<float>(0.0, 1.0);
        new (&DAT_1039bd244) math::Point<float>(1.0, 1.0);
        new (&DAT_1039bd24c) math::Point<float>(1.0, 0.0);
    }

} // namespace jag::graphics
