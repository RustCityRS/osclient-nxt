// libs/oldscape/jagex3/dash3d/TileHighlightGenerator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "TileHighlightGenerator.h"

namespace jag::oldscape::dash3d {
    // 0x1002f16a0
    uint8_t* TileHighlightGenerator::Generate() {
        ReturnValue local_30;

        uint8_t* this_00 = &field_64;
        if (this_00->operator_cast_to_bool() == '\0') {
            LoadGroundTriangles();
            ClipTriangles();
            OffsetTriangles();
            GenerateNormalsForTriangles();
            LoadOutlineTriangles();
            CreateModelFromTriangles(&local_30, this);
            *this_00 = local_30;
        }
        return this_00;
    }

    // 0x100304450
    void TileHighlightGenerator::LoadGroundTriangles() {
        bool bVar1;
        int arg1;

        auto piVar5 = SSOBeginPtr();
        int iVar2 = *piVar5 >> 7;
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        piVar5 = (int*)y();
        int arg2 = *piVar5 >> 7;
        if (arg2 < 0) {
            arg2 = 0;
        }
        int iVar3 = Right();
        iVar3 = iVar3 - 1 >> 7;
        if (101 < iVar3) {
            iVar3 = 102;
        }
        int iVar4 = MaxZ();
        iVar4 = iVar4 - 1 >> 7;
        if (101 < iVar4) {
            iVar4 = 102;
        }
        if (arg2 <= iVar4) {
            do {
                arg1 = iVar2;
                if (iVar2 <= iVar3) {
                    do {
                        LoadGroundTrianglesForTile(arg1, arg2);
                        bVar1 = arg1 < iVar3;
                        arg1 = arg1 + 1;
                    } while (bVar1);
                }
                bVar1 = arg2 < iVar4;
                arg2 = arg2 + 1;
            } while (bVar1);
        }
    }

    // 0x100304520
    void TileHighlightGenerator::ClipTriangles() {
        int* piVar1;
        int iVar2;
        uint8_t local_50[28];
        float local_34;

        vector<TileHighlightGenerator::OutputTriangle> local_70;
        Layout* this_00 = (Layout*)(field_24 + 8);
        auto pOVar4 = this_00->HeapBeginPtr();
        auto pOVar3 = this_00->end();
        if (pOVar4 != pOVar3) {
            do {
                piVar1 = (int*)SSOBeginPtr();
                local_34 = (float)*piVar1;
                piVar1 = (int*)y();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)*piVar1);
                new ((local_50 + 12)) jag::math::ColourHSL(1.0, 0.0, 0.0);
                ClipTriangle(*pOVar4, *local_50, local_70);
                pOVar4 = pOVar4 + 72;
            } while (pOVar4 != pOVar3);
        }
        this_00->clear();
        pOVar4 = (OutputTriangle*)local_70.HeapBeginPtr();
        pOVar3 = (OutputTriangle*)local_70.end();
        if (pOVar4 != pOVar3) {
            do {
                piVar1 = (int*)SSOBeginPtr();
                local_34 = (float)*piVar1;
                piVar1 = (int*)y();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)*piVar1);
                new ((local_50 + 12)) jag::math::ColourHSL(0.0, 0.0, 1.0);
                ClipTriangle(*pOVar4, *local_50, *this_00);
                pOVar4 = pOVar4 + 72;
            } while (pOVar4 != pOVar3);
        }
        local_70.clear();
        pOVar4 = (OutputTriangle*)this_00->HeapBeginPtr();
        pOVar3 = (OutputTriangle*)this_00->end();
        if (pOVar4 != pOVar3) {
            do {
                iVar2 = Right();
                local_34 = (float)iVar2;
                iVar2 = MaxZ();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)iVar2);
                new ((local_50 + 12)) jag::math::ColourHSL(-1.0, 0.0, 0.0);
                ClipTriangle(*pOVar4, *local_50, local_70);
                pOVar4 = pOVar4 + 72;
            } while (pOVar4 != pOVar3);
        }
        this_00->clear();
        pOVar4 = (OutputTriangle*)local_70.HeapBeginPtr();
        pOVar3 = (OutputTriangle*)local_70.end();
        if (pOVar4 != pOVar3) {
            do {
                iVar2 = Right();
                local_34 = (float)iVar2;
                iVar2 = MaxZ();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)iVar2);
                new ((local_50 + 12)) jag::math::ColourHSL(0.0, 0.0, -1.0);
                ClipTriangle(*pOVar4, *local_50, *this_00);
                pOVar4 = pOVar4 + 72;
            } while (pOVar4 != pOVar3);
        }
    }

    // 0x1003047b0
    void TileHighlightGenerator::OffsetTriangles() {
        Vector3T<float>* this_01;
        unsigned long arg1;
        ColourHSL local_38;

        array<TileHighlightGenerator::OutputVertex, 3ul>* this_00 =
            (array<TileHighlightGenerator::OutputVertex, 3ul>*)((field_24 + 8))->HeapBeginPtr();
        array<TileHighlightGenerator::OutputVertex, 3ul>* paVar1 =
            (array<TileHighlightGenerator::OutputVertex, 3ul>*)((field_24 + 8))->end();
        if (this_00 != paVar1) {
            do {
                arg1 = 0;
                do {
                    local_38 = jag::math::ColourHSL(0.0, 1.0, 0.0);
                    this_01 = (Vector3T<float>*)(*this_00)[arg1];
                    *this_01 += local_38;
                    arg1 = arg1 + 1;
                } while (arg1 != 3);
                this_00 = this_00 + 72;
            } while (this_00 != paVar1);
        }
    }

    // 0x100304850
    void TileHighlightGenerator::GenerateNormalsForTriangles() {
        Vector3T<float>* pVVar2;
        Vector3T<float>* vector32;
        long lVar3;
        unsigned long arg1;
        ReturnValue local_60;
        uint64_t local_50[2];
        uint64_t local_40[2];

        array<TileHighlightGenerator::OutputVertex, 3ul>* this_00 =
            (array<TileHighlightGenerator::OutputVertex, 3ul>*)((field_24 + 8))->HeapBeginPtr();
        array<TileHighlightGenerator::OutputVertex, 3ul>* paVar1 =
            (array<TileHighlightGenerator::OutputVertex, 3ul>*)((field_24 + 8))->end();
        if (this_00 != paVar1) {
            do {
                pVVar2 = (Vector3T<float>*)(*this_00)[1];
                vector32 = (Vector3T<float>*)(*this_00)[0];
                local_50[0] = *pVVar2 - *vector32;
                pVVar2 = (Vector3T<float>*)(*this_00)[2];
                local_40[0] = *pVVar2 - *vector32;
                local_60[0] = (ReturnValue)jag::math::Vector3Cross<float>(*local_50, *local_40);
                local_60 = jag::math::Vector3T<float>::NormalizeSafe();
                arg1 = 0;
                do {
                    lVar3 = (*this_00)[arg1];
                    ((lVar3 + 12))->SetXYZ(local_60);
                    arg1 = arg1 + 1;
                } while (arg1 != 3);
                this_00 = this_00 + 72;
            } while (this_00 != paVar1);
        }
    }

    // 0x100304950
    void TileHighlightGenerator::LoadOutlineTriangles() {
        Vector3T<float>* vector32;
        Vector3T<float>* vector32_00;
        Vector3T<float>* vector32_01;
        Vector3T<float>* vector32_02;
        Vector3T<float>* vector32_03;
        Vector3T<float>* vector32_04;
        Vector3T<float>* vector32_05;
        Vector3T<float>* vector32_06;
        uint64_t local_258[2];
        OutputVertex local_120;
        OutputVertex local_108;

        local_258[0] = GetCornerHeights();
        long lVar4 = 0;
        float* pfVar2 = (float*)(*local_258)[0];
        float local_140 = *pfVar2;
        pfVar2 = (float*)(*local_258)[1];
        float local_148 = *pfVar2;
        pfVar2 = (float*)(*local_258)[2];
        float local_13c = *pfVar2;
        pfVar2 = (float*)(*local_258)[3];
        float local_ec = *pfVar2;
        do {
            new ((OutputVertex*)((long)&local_e8[0].field_0 + lVar4)) OutputVertex();
            lVar4 = lVar4 + 24;
        } while (lVar4 != 192);
        auto piVar3 = SSOBeginPtr();
        float local_144 = (float)*piVar3;
        int iVar1 = MaxZ();
        ColourHSL local_248(local_144, local_13c, (float)iVar1);
        ColourHSL local_238(-0.57735026, -0.57735026, 0.57735026f);
        OutputVertex* pOVar5 = &local_138;
        new (pOVar5) OutputVertex(3, vector32);
        OutputVertex local_e8 = *pOVar5;
        iVar1 = Right();
        local_144 = (float)iVar1;
        iVar1 = MaxZ();
        ColourHSL local_228(local_144, local_ec, (float)iVar1);
        ColourHSL local_218(0.57735026f, -0.57735026, 0.57735026f);
        OutputVertex* pOVar6 = &local_138;
        new (pOVar6) OutputVertex(pOVar5, vector32_00);
        (*(&local_e8 + 1)) = *pOVar6;
        piVar3 = (int*)SSOBeginPtr();
        local_144 = (float)*piVar3;
        local_13c = local_13c + 0.125;
        iVar1 = MaxZ();
        ColourHSL local_208(local_144, local_13c, (float)iVar1);
        ColourHSL local_1f8(-0.57735026, 0.57735026f, 0.57735026f);
        pOVar5 = &local_138;
        new (pOVar5) OutputVertex(pOVar6, vector32_01);
        (*(&local_e8 + 2)) = *pOVar5;
        iVar1 = Right();
        local_13c = (float)iVar1;
        local_ec = local_ec + 0.125;
        iVar1 = MaxZ();
        ColourHSL local_1e8(local_13c, local_ec, (float)iVar1);
        ColourHSL local_1d8(0.57735026f, 0.57735026f, 0.57735026f);
        pOVar6 = &local_138;
        new (pOVar6) OutputVertex(pOVar5, vector32_02);
        (*(&local_e8 + 3)) = *pOVar6;
        piVar3 = (int*)SSOBeginPtr();
        local_ec = (float)*piVar3;
        piVar3 = (int*)y();
        ColourHSL local_1c8(local_ec, local_140, (float)*piVar3);
        ColourHSL local_1b8(-0.57735026, -0.57735026, -0.57735026);
        pOVar5 = &local_138;
        new (pOVar5) OutputVertex(pOVar6, vector32_03);
        OutputVertex local_88 = *pOVar5;
        iVar1 = Right();
        local_ec = (float)iVar1;
        piVar3 = (int*)y();
        ColourHSL local_1a8(local_ec, local_148, (float)*piVar3);
        ColourHSL local_198(0.57735026f, -0.57735026, -0.57735026);
        pOVar6 = &local_138;
        new (pOVar6) OutputVertex(pOVar5, vector32_04);
        OutputVertex local_70 = *pOVar6;
        piVar3 = (int*)SSOBeginPtr();
        local_ec = (float)*piVar3;
        local_140 = local_140 + 0.125;
        piVar3 = (int*)y();
        ColourHSL local_188(local_ec, local_140, (float)*piVar3);
        ColourHSL local_178(-0.57735026, 0.57735026f, -0.57735026);
        pOVar5 = &local_138;
        new (pOVar5) OutputVertex(pOVar6, vector32_05);
        OutputVertex local_58 = *pOVar5;
        iVar1 = Right();
        local_140 = (float)iVar1;
        local_148 = local_148 + 0.125;
        piVar3 = (int*)y();
        ColourHSL local_168(local_140, local_148, (float)*piVar3);
        ColourHSL local_158(0.57735026f, 0.57735026f, -0.57735026);
        OutputVertex local_138(pOVar5, vector32_06);
        OutputVertex local_40 = local_138;
        vector<TileHighlightGenerator::OutputTriangle>* this_00 =
            (vector<TileHighlightGenerator::OutputTriangle>*)(field_24 + 8);
        local_138._16_8_ = local_40._16_8_;
        local_138.field_0 = local_40.field_0;
        local_138.field_4 = local_40.field_4;
        local_138._8_8_ = local_40._8_8_;
        local_120.field_0 = local_58.field_0;
        local_120.field_4 = local_58.field_4;
        local_120._8_8_ = local_58._8_8_;
        local_120._16_8_ = local_58._16_8_;
        local_108.field_0 = local_e8[2].field_0;
        local_108.field_4 = local_e8[2].field_4;
        local_108._8_8_ = local_e8[2]._8_8_;
        local_108._16_8_ = local_e8[2]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[2]._16_8_;
        local_138.field_0 = local_e8[2].field_0;
        local_138.field_4 = local_e8[2].field_4;
        local_138._8_8_ = local_e8[2]._8_8_;
        local_120.field_0 = local_e8[3].field_0;
        local_120.field_4 = local_e8[3].field_4;
        local_120._8_8_ = local_e8[3]._8_8_;
        local_120._16_8_ = local_e8[3]._16_8_;
        local_108.field_0 = local_40.field_0;
        local_108.field_4 = local_40.field_4;
        local_108._8_8_ = local_40._8_8_;
        local_108._16_8_ = local_40._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[0]._16_8_;
        local_138.field_0 = local_e8[0].field_0;
        local_138.field_4 = local_e8[0].field_4;
        local_138._8_8_ = local_e8[0]._8_8_;
        local_120.field_0 = local_e8[2].field_0;
        local_120.field_4 = local_e8[2].field_4;
        local_120._8_8_ = local_e8[2]._8_8_;
        local_120._16_8_ = local_e8[2]._16_8_;
        local_108.field_0 = local_58.field_0;
        local_108.field_4 = local_58.field_4;
        local_108._8_8_ = local_58._8_8_;
        local_108._16_8_ = local_58._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_58._16_8_;
        local_138.field_0 = local_58.field_0;
        local_138.field_4 = local_58.field_4;
        local_138._8_8_ = local_58._8_8_;
        local_120.field_0 = local_88.field_0;
        local_120.field_4 = local_88.field_4;
        local_120._8_8_ = local_88._8_8_;
        local_120._16_8_ = local_88._16_8_;
        local_108.field_0 = local_e8[0].field_0;
        local_108.field_4 = local_e8[0].field_4;
        local_108._8_8_ = local_e8[0]._8_8_;
        local_108._16_8_ = local_e8[0]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_40._16_8_;
        local_138.field_0 = local_40.field_0;
        local_138.field_4 = local_40.field_4;
        local_138._8_8_ = local_40._8_8_;
        local_120.field_0 = local_e8[3].field_0;
        local_120.field_4 = local_e8[3].field_4;
        local_120._8_8_ = local_e8[3]._8_8_;
        local_120._16_8_ = local_e8[3]._16_8_;
        local_108.field_0 = local_e8[1].field_0;
        local_108.field_4 = local_e8[1].field_4;
        local_108._8_8_ = local_e8[1]._8_8_;
        local_108._16_8_ = local_e8[1]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[1]._16_8_;
        local_138.field_0 = local_e8[1].field_0;
        local_138.field_4 = local_e8[1].field_4;
        local_138._8_8_ = local_e8[1]._8_8_;
        local_120.field_0 = local_70.field_0;
        local_120.field_4 = local_70.field_4;
        local_120._8_8_ = local_70._8_8_;
        local_120._16_8_ = local_70._16_8_;
        local_108.field_0 = local_40.field_0;
        local_108.field_4 = local_40.field_4;
        local_108._8_8_ = local_40._8_8_;
        local_108._16_8_ = local_40._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[3]._16_8_;
        local_138.field_0 = local_e8[3].field_0;
        local_138.field_4 = local_e8[3].field_4;
        local_138._8_8_ = local_e8[3]._8_8_;
        local_120.field_0 = local_e8[2].field_0;
        local_120.field_4 = local_e8[2].field_4;
        local_120._8_8_ = local_e8[2]._8_8_;
        local_120._16_8_ = local_e8[2]._16_8_;
        local_108.field_0 = local_e8[0].field_0;
        local_108.field_4 = local_e8[0].field_4;
        local_108._8_8_ = local_e8[0]._8_8_;
        local_108._16_8_ = local_e8[0]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[0]._16_8_;
        local_138.field_0 = local_e8[0].field_0;
        local_138.field_4 = local_e8[0].field_4;
        local_138._8_8_ = local_e8[0]._8_8_;
        local_120.field_0 = local_e8[1].field_0;
        local_120.field_4 = local_e8[1].field_4;
        local_120._8_8_ = local_e8[1]._8_8_;
        local_120._16_8_ = local_e8[1]._16_8_;
        local_108.field_0 = local_e8[3].field_0;
        local_108.field_4 = local_e8[3].field_4;
        local_108._8_8_ = local_e8[3]._8_8_;
        local_108._16_8_ = local_e8[3]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_88._16_8_;
        local_138.field_0 = local_88.field_0;
        local_138.field_4 = local_88.field_4;
        local_138._8_8_ = local_88._8_8_;
        local_120.field_0 = local_58.field_0;
        local_120.field_4 = local_58.field_4;
        local_120._8_8_ = local_58._8_8_;
        local_120._16_8_ = local_58._16_8_;
        local_108.field_0 = local_40.field_0;
        local_108.field_4 = local_40.field_4;
        local_108._8_8_ = local_40._8_8_;
        local_108._16_8_ = local_40._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_40._16_8_;
        local_138.field_0 = local_40.field_0;
        local_138.field_4 = local_40.field_4;
        local_138._8_8_ = local_40._8_8_;
        local_120.field_0 = local_70.field_0;
        local_120.field_4 = local_70.field_4;
        local_120._8_8_ = local_70._8_8_;
        local_120._16_8_ = local_70._16_8_;
        local_108.field_0 = local_88.field_0;
        local_108.field_4 = local_88.field_4;
        local_108._8_8_ = local_88._8_8_;
        local_108._16_8_ = local_88._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_58._16_8_;
        local_138.field_0 = local_58.field_0;
        local_138.field_4 = local_58.field_4;
        local_138._8_8_ = local_58._8_8_;
        local_120.field_0 = local_e8[2].field_0;
        local_120.field_4 = local_e8[2].field_4;
        local_120._8_8_ = local_e8[2]._8_8_;
        local_120._16_8_ = local_e8[2]._16_8_;
        local_108.field_0 = local_e8[0].field_0;
        local_108.field_4 = local_e8[0].field_4;
        local_108._8_8_ = local_e8[0]._8_8_;
        local_108._16_8_ = local_e8[0]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[0]._16_8_;
        local_138.field_0 = local_e8[0].field_0;
        local_138.field_4 = local_e8[0].field_4;
        local_138._8_8_ = local_e8[0]._8_8_;
        local_120.field_0 = local_88.field_0;
        local_120.field_4 = local_88.field_4;
        local_120._8_8_ = local_88._8_8_;
        local_120._16_8_ = local_88._16_8_;
        local_108.field_0 = local_58.field_0;
        local_108.field_4 = local_58.field_4;
        local_108._8_8_ = local_58._8_8_;
        local_108._16_8_ = local_58._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[1]._16_8_;
        local_138.field_0 = local_e8[1].field_0;
        local_138.field_4 = local_e8[1].field_4;
        local_138._8_8_ = local_e8[1]._8_8_;
        local_120.field_0 = local_e8[3].field_0;
        local_120.field_4 = local_e8[3].field_4;
        local_120._8_8_ = local_e8[3]._8_8_;
        local_120._16_8_ = local_e8[3]._16_8_;
        local_108.field_0 = local_40.field_0;
        local_108.field_4 = local_40.field_4;
        local_108._8_8_ = local_40._8_8_;
        local_108._16_8_ = local_40._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_40._16_8_;
        local_138.field_0 = local_40.field_0;
        local_138.field_4 = local_40.field_4;
        local_138._8_8_ = local_40._8_8_;
        local_120.field_0 = local_70.field_0;
        local_120.field_4 = local_70.field_4;
        local_120._8_8_ = local_70._8_8_;
        local_120._16_8_ = local_70._16_8_;
        local_108.field_0 = local_e8[1].field_0;
        local_108.field_4 = local_e8[1].field_4;
        local_108._8_8_ = local_e8[1]._8_8_;
        local_108._16_8_ = local_e8[1]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[0]._16_8_;
        local_138.field_0 = local_e8[0].field_0;
        local_138.field_4 = local_e8[0].field_4;
        local_138._8_8_ = local_e8[0]._8_8_;
        local_120.field_0 = local_e8[2].field_0;
        local_120.field_4 = local_e8[2].field_4;
        local_120._8_8_ = local_e8[2]._8_8_;
        local_120._16_8_ = local_e8[2]._16_8_;
        local_108.field_0 = local_e8[3].field_0;
        local_108.field_4 = local_e8[3].field_4;
        local_108._8_8_ = local_e8[3]._8_8_;
        local_108._16_8_ = local_e8[3]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_e8[3]._16_8_;
        local_138.field_0 = local_e8[3].field_0;
        local_138.field_4 = local_e8[3].field_4;
        local_138._8_8_ = local_e8[3]._8_8_;
        local_120.field_0 = local_e8[1].field_0;
        local_120.field_4 = local_e8[1].field_4;
        local_120._8_8_ = local_e8[1]._8_8_;
        local_120._16_8_ = local_e8[1]._16_8_;
        local_108.field_0 = local_e8[0].field_0;
        local_108.field_4 = local_e8[0].field_4;
        local_108._8_8_ = local_e8[0]._8_8_;
        local_108._16_8_ = local_e8[0]._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_40._16_8_;
        local_138.field_0 = local_40.field_0;
        local_138.field_4 = local_40.field_4;
        local_138._8_8_ = local_40._8_8_;
        local_120.field_0 = local_58.field_0;
        local_120.field_4 = local_58.field_4;
        local_120._8_8_ = local_58._8_8_;
        local_120._16_8_ = local_58._16_8_;
        local_108.field_0 = local_88.field_0;
        local_108.field_4 = local_88.field_4;
        local_108._8_8_ = local_88._8_8_;
        local_108._16_8_ = local_88._16_8_;
        this_00->push_back(local_138);
        local_138._16_8_ = local_88._16_8_;
        local_138.field_0 = local_88.field_0;
        local_138.field_4 = local_88.field_4;
        local_138._8_8_ = local_88._8_8_;
        local_120.field_0 = local_70.field_0;
        local_120.field_4 = local_70.field_4;
        local_120._8_8_ = local_70._8_8_;
        local_120._16_8_ = local_70._16_8_;
        local_108.field_0 = local_40.field_0;
        local_108.field_4 = local_40.field_4;
        local_108._8_8_ = local_40._8_8_;
        local_108._16_8_ = local_40._16_8_;
        this_00->push_back(local_138);
    }

    // 0x1003055d0
    auto TileHighlightGenerator::CreateModelFromTriangles() {
        auto result;
        long lVar2;
        unsigned long arg7;
        unsigned short* arg8;
        Model* this_01;
        vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>* this_02;
        shared_ptr<jag::graphics::GeometryBatch>* geometryBatch;
        ReturnValue local_98;
        GeometryBatch* local_78;
        Vector3T<float>* local_70;
        ModelRSevenUnlit* local_68;
        ReturnValue local_60;
        ColourHSL local_50;
        ReturnValue local_40;

        make_shared<jag::graphics::Model>(&local_60);
        vector<TileHighlightGenerator::OutputTriangle>* this_00 =
            (vector<TileHighlightGenerator::OutputTriangle>*)(field_24 + 8);
        long lVar1 = this_00->size();
        if (lVar1 != 0) {
            CreateIndicesForTriangles(&local_98, this);
            make_shared<jag::graphics::GeometryBatch>(&local_40);
            local_68 = &result;
            local_78 = (GeometryBatch*)local_40.operator->();
            lVar1 = this_00->size();
            local_70 = (Vector3T<float>*)this_00->HeapBeginPtr();
            lVar2 = this_00->HeapBeginPtr();
            arg7 = local_98.size();
            arg8 = (unsigned short*)local_98.HeapBeginPtr();
            local_50 = jag::math::ColourHSL(1.0, 1.0, 1.0);
            local_78->LoadMeshFromData(lVar1 * 3, 24, local_70, (lVar2 + 12), nullptr, nullptr, arg7, arg8, local_50,
                                       0);
            this_01 = (Model*)local_60.operator->();
            this_02 = (vector<
                       std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                       MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>*)
                          this_01->GetBatchList();
            geometryBatch = (shared_ptr<jag::graphics::GeometryBatch>*)*local_60;
            &result = (ReturnValue*)local_68;
            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::MakeUnique<
                jag::graphics::Model&, shared_ptr<jag::graphics::GeometryBatch>&>((Model*)&local_50, geometryBatch);
            this_02->push_back(local_50);
        }
        local_40[0]._0_1_ = 1;
        make_shared<ModelRSevenUnlit, shared_ptr<jag::graphics::Model>, bool>(&local_98, &local_60, &local_40);
        result.Light(local_98.operator->(), 0, 256, 1, 1);
        return (ReturnValue*)&result;
    }

    // 0x100305810
    void TileHighlightGenerator::ClipTriangle(const TileHighlightGenerator::OutputTriangle& outputTriangle,
                                              const TileHighlightGenerator::ClipPlane& clipPlane,
                                              eastl::vector<TileHighlightGenerator::OutputTriangle>& outputTriangles) {
        unsigned int uVar1;
        Vector3T<float>* pVVar2;
        Vector4T<float>* this_00;
        array<jag::math::Vector3T<float>, _2ul>* vector3s;
        uint64_t* puVar3;
        float fVar6;
        TileHighlightGenerator local_190;
        uint64_t local_100;
        uint32_t uStack_f8;
        uint32_t uStack_f4;
        uint32_t uStack_f0;
        uint32_t local_ec;
        uint64_t local_e8;
        uint32_t uStack_e0;
        uint32_t uStack_dc;
        uint32_t uStack_d8;
        uint32_t local_d4;
        uint64_t local_d0;
        uint32_t uStack_c8;
        uint32_t uStack_c4;
        uint32_t uStack_c0;
        uint32_t local_bc;
        uint64_t local_b8;
        uint32_t uStack_b0;
        uint32_t uStack_ac;
        uint32_t uStack_a8;
        uint32_t local_a4;
        uint64_t local_a0;
        uint32_t uStack_98;
        uint32_t uStack_94;
        uint32_t uStack_90;
        uint32_t local_8c;
        uint64_t local_88;
        uint32_t uStack_80;
        uint32_t uStack_7c;
        uint32_t uStack_78;
        uint32_t local_74;

        uint64_t local_58 = 0;
        uint64_t uStack_50 = 0;
        uint64_t local_68 = 0;
        uint64_t uStack_60 = 0;
        uint32_t local_48 = 0;
        long lVar4 = 0;
        do {
            new ((Vector3T<int>*)((long)&local_68 + lVar4)) jag::math::Vector3T();
            lVar4 = lVar4 + 12;
        } while (lVar4 != 36);
        ClipPlane* local_70 = clipPlane + 12;
        unsigned long arg1 = 0;
        unsigned int uVar5 = 0;
        do {
            pVVar2 = &outputTriangle[arg1];
            local_190._0_8_ = *pVVar2 - clipPlane;
            this_00 = &local_68[arg1];
            this_00->SetXYZ(local_190);
            fVar6 = jag::math::Vector3Dot<float>(*this_00, *local_70);
            uVar1 = 1 << ((uint8_t)arg1 & 31);
            if (fVar6 < 0.0) {
                uVar1 = 0;
            }
            uVar5 = uVar5 | uVar1;
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        switch (uVar5) {
        case 0:
            goto switchD_10030591c_caseD_0;
        case 1:
            vector3s = &local_68[0];
            puVar3 = &local_68[1];
            local_100 = *puVar3;
            uStack_f8 = *(uint32_t*)(puVar3 + 1);
            puVar3 = &local_68[2];
            uStack_f4 = (uint32_t)*puVar3;
            uStack_f0 = (uint32_t)((unsigned long)*puVar3 >> 32);
            local_ec = *(uint32_t*)(puVar3 + 1);
            break;
        case 2:
            vector3s = &local_68[1];
            puVar3 = &local_68[2];
            local_e8 = *puVar3;
            uStack_e0 = *(uint32_t*)(puVar3 + 1);
            puVar3 = &local_68[0];
            uStack_dc = (uint32_t)*puVar3;
            uStack_d8 = (uint32_t)((unsigned long)*puVar3 >> 32);
            local_d4 = *(uint32_t*)(puVar3 + 1);
            break;
        case 3:
            puVar3 = &local_68[0];
            local_d0 = *puVar3;
            uStack_c8 = *(uint32_t*)(puVar3 + 1);
            puVar3 = &local_68[1];
            uStack_c4 = (uint32_t)*puVar3;
            uStack_c0 = (uint32_t)((unsigned long)*puVar3 >> 32);
            local_bc = *(uint32_t*)(puVar3 + 1);
            pVVar2 = &local_68[2];
            goto LAB_100305bc4;
        case 4:
            vector3s = &local_68[2];
            puVar3 = &local_68[0];
            local_b8 = *puVar3;
            uStack_b0 = *(uint32_t*)(puVar3 + 1);
            puVar3 = &local_68[1];
            uStack_ac = (uint32_t)*puVar3;
            uStack_a8 = (uint32_t)((unsigned long)*puVar3 >> 32);
            local_a4 = *(uint32_t*)(puVar3 + 1);
            break;
        case 5:
            puVar3 = &local_68[2];
            local_a0 = *puVar3;
            uStack_98 = *(uint32_t*)(puVar3 + 1);
            puVar3 = &local_68[0];
            uStack_94 = (uint32_t)*puVar3;
            uStack_90 = (uint32_t)((unsigned long)*puVar3 >> 32);
            local_8c = *(uint32_t*)(puVar3 + 1);
            pVVar2 = &local_68[1];
            goto LAB_100305bc4;
        case 6:
            puVar3 = &local_68[1];
            local_88 = *puVar3;
            uStack_80 = *(uint32_t*)(puVar3 + 1);
            puVar3 = &local_68[2];
            uStack_7c = (uint32_t)*puVar3;
            uStack_78 = (uint32_t)((unsigned long)*puVar3 >> 32);
            local_74 = *(uint32_t*)(puVar3 + 1);
            pVVar2 = &local_68[0];
        LAB_100305bc4:
            ClipTriangleDouble(&local_190, (array<jag::math::Vector3T<float>, _2ul>*)this, pVVar2, clipPlane);
            PushTwoBack(&local_190, outputTriangles, (array<TileHighlightGenerator::OutputTriangle, _2ul>*)&local_190);
            return;
        case 7:
            outputTriangles.push_back(outputTriangle);
            return;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/TileHighlightGenerator.cpp",
                            297, "Vertex clip mask out-of-range.");
        }
        ClipTriangleSingle(&local_190, (Vector3T<float>*)this, vector3s, clipPlane);
        outputTriangles.push_back(local_190);
    switchD_10030591c_caseD_0:
    }

    // 0x100305c40
    void TileHighlightGenerator::LoadGroundTrianglesForTile(int arg1, int arg2) {
        int iVar1;
        unsigned int uVar2;
        int arg4;
        long lVar4;
        hash_set<int>* hash_set;
        array<rseven::TerrainVertex, 3ul>* this_01;
        array<rseven::TerrainVertex, 3ul>* paVar5;
        Vector3T<int>* pVVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int in_stack_fffffffffffffeec;
        int in_stack_fffffffffffffef8;
        OutputVertex local_100;
        OutputVertex local_e8;
        OutputVertex local_d0;
        hash_set<int> local_b8;
        Vector3T<float> local_80;
        Vector3T<float> local_70;
        Vector3T<float> local_60;
        uint64_t local_50;
        MapRebuildHandler_LogicThread* local_48;
        shared_ptr<rseven::BuildTerrainResultLevel> local_40;

        shared_ptr* this_00 = (shared_ptr*)(*(world**)field_24)->GetSquare(field_16, arg1, arg2);
        if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            lVar4 = (*this_00).operator->();
            iVar1 = *(int*)(lVar4 + 36);
            lVar4 = (*this_00).operator->();
            iVar7 = *(int*)(lVar4 + 40);
            local_b8 = eastl::hash_set(local_100);
            MakeSharedPool<rseven::BuildTerrainResultLevel, 64>::MakeShared<>();
            local_48 = (MapRebuildHandler_LogicThread*)this_00->end();
            local_50 = *(uint64_t*)field_24;
            lVar4 = (*this_00).operator->();
            uVar2 = *(unsigned int*)(lVar4 + 36);
            lVar4 = (*this_00).operator->();
            arg4 = *(int*)(lVar4 + 40);
            hash_set = (hash_set<int>*)*local_40;
            uVar8 = iVar1 * 128;
            iVar7 = iVar7 * 128;
            local_48->CollectGroundData((Square*)(unsigned long)uVar8, (int)local_50, *((world*)(unsigned long)uVar2),
                                        arg4, iVar7, uVar8 + 128, iVar7 + 128, (int)&local_b8, *hash_set,
                                        *((BuildTerrainResultLevel*)((unsigned long)in_stack_fffffffffffffeec << 32)),
                                        0, in_stack_fffffffffffffef8);
            lVar4 = local_40.operator->();
            this_01 = (array<rseven::TerrainVertex, 3ul>*)((lVar4 + 12560))->HeapBeginPtr();
            paVar5 = (array<rseven::TerrainVertex, 3ul>*)((lVar4 + 12560))->end();
            if (this_01 != paVar5) {
                do {
                    pVVar6 = (Vector3T<int>*)(*this_01)[0];
                    local_80.Vector3T<int>(*pVVar6);
                    local_100 = OutputVertex(pVVar6);
                    pVVar6 = (Vector3T<int>*)(*this_01)[1];
                    local_70.Vector3T<int>(*pVVar6);
                    local_e8 = OutputVertex(pVVar6);
                    pVVar6 = (Vector3T<int>*)(*this_01)[2];
                    local_60.Vector3T<int>(*pVVar6);
                    local_d0 = OutputVertex(pVVar6);
                    ((field_24 + 8))->push_back(local_100);
                    this_01 = this_01 + 88;
                } while (this_01 != paVar5);
            }
        }
    }

    // 0x100305e80
    uint64_t TileHighlightGenerator::GetCornerHeights() {
        Layout* this_01;
        float* pfVar4;
        Vector2T<int>* vector2;
        float* pfVar5;
        unsigned long arg1;
        Point<float> local_98;
        Vector2T<float> local_90;
        uint8_t local_88[16];
        uint8_t local_78[16];
        uint64_t local_68;
        Layout* local_60;
        array<TileHighlightGenerator::OutputVertex, 3ul>* local_58;
        float local_34;

        uint64_t uStack_40 = 9187343237679939583;
        auto piVar3 = SSOBeginPtr();
        int iVar1 = *piVar3;
        piVar3 = (int*)y();
        new (local_88) sidebars::SideBarData(iVar1, *piVar3);
        iVar1 = Right();
        piVar3 = (int*)y();
        new ((local_88 + 8)) sidebars::SideBarData(iVar1 - 1, *piVar3);
        piVar3 = (int*)SSOBeginPtr();
        iVar1 = *piVar3;
        int iVar2 = MaxZ();
        new (local_78) sidebars::SideBarData(iVar1, iVar2 - 1);
        iVar1 = Right();
        iVar2 = MaxZ();
        new ((local_78 + 8)) sidebars::SideBarData(iVar1 - 1, iVar2 - 1);
        array<TileHighlightGenerator::OutputVertex, 3ul>* this_00 =
            (array<TileHighlightGenerator::OutputVertex, 3ul>*)((field_24 + 8))->HeapBeginPtr();
        array<TileHighlightGenerator::OutputVertex, 3ul>* local_50 =
            (array<TileHighlightGenerator::OutputVertex, 3ul>*)((field_24 + 8))->end();
        if (this_00 != local_50) {
            do {
                this_01 = (Layout*)this_00->begin();
                local_58 = this_00;
                local_60 = (Layout*)this_00->end();
                if (this_01 != local_60) {
                    do {
                        arg1 = 0;
                        do {
                            pfVar4 = (float*)this_01->SSOBeginPtr();
                            local_34 = *pfVar4;
                            pfVar4 = (float*)this_01->second();
                            local_98 = jag::math::Point(local_34, *pfVar4);
                            vector2 = (Vector2T<int>*)(*local_88)[arg1];
                            local_90.Vector2T<int>(*vector2);
                            local_68 = local_98 - local_90;
                            if ((float)local_68.LengthSq() <= 4.0) {
                                pfVar4 = &9187343237679939583 [arg1];
                                pfVar5 = (float*)this_01->y();
                                pfVar5 = std::min<float>(*pfVar4, *pfVar5);
                                *pfVar4 = *pfVar5;
                            }
                            arg1 = arg1 + 1;
                        } while (arg1 != 4);
                        this_01 = this_01 + 24;
                    } while (this_01 != local_60);
                }
                this_00 = local_58 + 72;
            } while (this_00 != local_50);
        }
        return 9187343237679939583;
    }

    // 0x100306210
    auto TileHighlightGenerator::CreateIndicesForTriangles() {
        unsigned long uVar2;

        auto result;
        vector<TileHighlightGenerator::OutputTriangle>* this_00 =
            (vector<TileHighlightGenerator::OutputTriangle>*)(field_24 + 8);
        long lVar1 = this_00->size();
        result.reserve(lVar1 * 3);
        lVar1 = this_00->size();
        if (lVar1 * 3 != 0) {
            uVar2 = 0;
            do {
                result.push_back((unsigned short)uVar2);
                uVar2 = uVar2 + 1;
                lVar1 = this_00->size();
            } while (uVar2 < (unsigned long)(lVar1 * 3));
        }
        return result;
    }

    // 0x100306570
    TileHighlightGenerator*
    TileHighlightGenerator::ClipTriangleSingle(const jag::math::Vector3T<float>& vector3,
                                               std::array<jag::math::Vector3T<float>, 2ul> vector3s,
                                               const TileHighlightGenerator::ClipPlane& clipPlane) {
        TileHighlightGenerator TStack0000000000000008;
        uint64_t local_50[2];
        uint64_t local_40[2];

        Vector3T<float>* pVVar1 = &TStack0000000000000008[0];
        local_50[0] = IntersectLinePlane(&TStack0000000000000008, (Vector3T<float>*)vector3s, pVVar1,
                                         (Vector3T<float>*)(clipPlane + 12));
        pVVar1 = &TStack0000000000000008[1];
        local_40[0] = IntersectLinePlane(&TStack0000000000000008, (Vector3T<float>*)vector3s, pVVar1,
                                         (Vector3T<float>*)(clipPlane + 12));
        ClipPlane* pCVar2 = clipPlane;
        *vector3s + clipPlane;
        new (this) OutputVertex(pCVar2);
        pCVar2 = clipPlane;
        *local_50 + clipPlane;
        new (field_24) OutputVertex(pCVar2);
        *local_40 + clipPlane;
        new (&field_48) OutputVertex(clipPlane);
        return this;
    }

    // 0x100306630
    void TileHighlightGenerator::PushTwoBack(
        eastl::vector<TileHighlightGenerator::OutputTriangle>& outputTriangles1,
        const std::array<TileHighlightGenerator::OutputTriangle, 2ul>& outputTriangles2) {
        OutputTriangle* pOVar1 = &outputTriangles2[0];
        outputTriangles1.push_back(*pOVar1);
        pOVar1 = &outputTriangles2[1];
        outputTriangles1.push_back(*pOVar1);
    }

    // 0x100306670
    TileHighlightGenerator*
    TileHighlightGenerator::ClipTriangleDouble(std::array<jag::math::Vector3T<float>, 2ul> vector3s,
                                               const jag::math::Vector3T<float>& vector3,
                                               const TileHighlightGenerator::ClipPlane& clipPlane) {
        TileHighlightGenerator TStack0000000000000008;
        uint64_t local_58[2];
        uint64_t local_48[2];

        TileHighlightGenerator* pTVar2 = &TStack0000000000000008;
        Vector3T<float>* vector31 = (Vector3T<float>*)(*pTVar2)[0];
        local_58[0] = IntersectLinePlane(pTVar2, vector31, vector3, (Vector3T<float>*)(clipPlane + 12));
        pTVar2 = &TStack0000000000000008;
        Vector3T<float>* local_38 = (Vector3T<float>*)(*pTVar2)[1];
        local_48[0] = IntersectLinePlane(pTVar2, local_38, vector3, (Vector3T<float>*)(clipPlane + 12));
        ClipPlane* pCVar1 = clipPlane;
        *vector31 + clipPlane;
        new (this) OutputVertex(pCVar1);
        pCVar1 = clipPlane;
        *local_48 + clipPlane;
        new (field_24) OutputVertex(pCVar1);
        pCVar1 = clipPlane;
        *local_58 + clipPlane;
        new (&field_48) OutputVertex(pCVar1);
        pCVar1 = clipPlane;
        *local_38 + clipPlane;
        new (field_72) OutputVertex(pCVar1);
        pCVar1 = clipPlane;
        *local_48 + clipPlane;
        new (field_96) OutputVertex(pCVar1);
        *vector31 + clipPlane;
        new (field_120) OutputVertex(clipPlane);
        return this;
    }

    // 0x100306800
    uint64_t TileHighlightGenerator::IntersectLinePlane(const jag::math::Vector3T<float>& vector31,
                                                        const jag::math::Vector3T<float>& vector32,
                                                        const jag::math::Vector3T<float>& vector33) {
        float fVar1;
        uint64_t uVar2;
        uint64_t local_38;

        uint64_t local_28 = vector32 - vector31;
        float local_1c = jag::math::Vector3Dot<float>(local_28, vector33);
        uint32_t local_30 = 0;
        if (local_1c == 0.0) {
            uVar2 = *(uint64_t*)vector31;
        } else {
            fVar1 = jag::math::Vector3Dot<float>(vector31, vector33);
            local_38 = (*(fVar1 / local_1c)) * local_28;
            uVar2 = vector31 - local_38;
        }
        return uVar2;
    }

} // namespace jag::oldscape::dash3d
