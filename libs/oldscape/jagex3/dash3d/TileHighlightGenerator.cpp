// libs/oldscape/jagex3/dash3d/TileHighlightGenerator.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "TileHighlightGenerator.h"

namespace jag::oldscape::dash3d {
    // 0x1002f16a0, 144 bytes, placed by class name and debug map
    // TileHighlightGenerator::Generate()
    undefined1* TileHighlightGenerator::Generate() {
        undefined1* this_00;
        shared_ptr<RSevenDebugPresetProvider> local_30[16];

        this_00 = field_64;
        if (!this_00->operator_cast_to_bool()) {
            LoadGroundTriangles(this);
            ClipTriangles(this);
            OffsetTriangles(this);
            GenerateNormalsForTriangles(this);
            LoadOutlineTriangles(this);
            CreateModelFromTriangles((TileHighlightGenerator*)local_30);
            shared_ptr<ModelLit>::operator=((shared_ptr<ModelLit>*)this_00, (shared_ptr*)local_30);
            local_30->~shared_ptr();
        }
        return this_00;
    }

    // 0x100304450, 208 bytes, placed by class name
    // TileHighlightGenerator::LoadGroundTriangles()
    void TileHighlightGenerator::LoadGroundTriangles() {
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        vector* pvVar5;
        int* piVar6;
        int iVar7;
        type* in_RSI;
        int iVar8;

        pvVar5 = SSOBeginPtr(in_RSI);
        iVar2 = *(int*)pvVar5 >> 7;
        if (iVar2 < 0) {
            iVar2 = 0;
        }
        piVar6 = (int*)y();
        iVar8 = *piVar6 >> 7;
        if (iVar8 < 0) {
            iVar8 = 0;
        }
        iVar3 = Right();
        iVar3 = iVar3 + -1 >> 7;
        if (101 < iVar3) {
            iVar3 = 102;
        }
        iVar4 = MaxZ();
        iVar4 = iVar4 + -1 >> 7;
        if (101 < iVar4) {
            iVar4 = 102;
        }
        if (iVar8 <= iVar4) {
            do {
                iVar7 = iVar2;
                if (iVar2 <= iVar3) {
                    do {
                        LoadGroundTrianglesForTile(this, iVar7, iVar8);
                        bVar1 = iVar7 < iVar3;
                        iVar7 = iVar7 + 1;
                    } while (bVar1);
                }
                bVar1 = iVar8 < iVar4;
                iVar8 = iVar8 + 1;
            } while (bVar1);
        }
    }

    // 0x100304520, 656 bytes, placed by class name
    // TileHighlightGenerator::ClipTriangles()
    void TileHighlightGenerator::ClipTriangles() {
        undefined1* this_00;
        int iVar1;
        OutputTriangle* pOVar2;
        OutputTriangle* pOVar3;
        vector* pvVar4;
        int* piVar5;
        OutputTriangle* in_RSI;
        vector<TileHighlightGenerator::OutputTriangle, eastl::allocator> local_70[32];
        undefined1 local_50[28];
        float local_34;

        eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::vector(local_70);
        this_00 = &field_32;
        pOVar2 = (OutputTriangle*)this_00->HeapBeginPtr();
        pOVar3 = (OutputTriangle*)this_00->end();
        if (pOVar2 != pOVar3) {
            do {
                pvVar4 = SSOBeginPtr(in_RSI);
                local_34 = (float)*(int*)pvVar4;
                piVar5 = (int*)y();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)*piVar5);
                new ((local_50 + 12)) jag::math::ColourHSL(1.0, 0.0, 0.0);
                in_RSI = pOVar2;
                ClipTriangle(this, pOVar2, (ClipPlane*)local_50, (vector*)local_70);
                pOVar2 = pOVar2 + 72;
            } while (pOVar2 != pOVar3);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pOVar2 = (OutputTriangle*)local_70->HeapBeginPtr();
        pOVar3 = (OutputTriangle*)local_70->end();
        if (pOVar2 != pOVar3) {
            do {
                pvVar4 = SSOBeginPtr(in_RSI);
                local_34 = (float)*(int*)pvVar4;
                piVar5 = (int*)y();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)*piVar5);
                new ((local_50 + 12)) jag::math::ColourHSL(0.0, 0.0, 1.0);
                in_RSI = pOVar2;
                ClipTriangle(this, pOVar2, (ClipPlane*)local_50, (vector*)this_00);
                pOVar2 = pOVar2 + 72;
            } while (pOVar2 != pOVar3);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pOVar2 = (OutputTriangle*)this_00->HeapBeginPtr();
        pOVar3 = (OutputTriangle*)this_00->end();
        if (pOVar2 != pOVar3) {
            do {
                iVar1 = Right();
                local_34 = (float)iVar1;
                iVar1 = MaxZ();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)iVar1);
                new ((local_50 + 12)) jag::math::ColourHSL(-1.0, 0.0, 0.0);
                ClipTriangle(this, pOVar2, (ClipPlane*)local_50, (vector*)local_70);
                pOVar2 = pOVar2 + 72;
            } while (pOVar2 != pOVar3);
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pOVar2 = (OutputTriangle*)local_70->HeapBeginPtr();
        pOVar3 = (OutputTriangle*)local_70->end();
        if (pOVar2 != pOVar3) {
            do {
                iVar1 = Right();
                local_34 = (float)iVar1;
                iVar1 = MaxZ();
                new (local_50) jag::math::ColourHSL(local_34, 0.0, (float)iVar1);
                new ((local_50 + 12)) jag::math::ColourHSL(0.0, 0.0, -1.0);
                ClipTriangle(this, pOVar2, (ClipPlane*)local_50, (vector*)this_00);
                pOVar2 = pOVar2 + 72;
            } while (pOVar2 != pOVar3);
        }
        eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::~vector(local_70);
    }

    // 0x1003047b0, 160 bytes, placed by class name
    // TileHighlightGenerator::OffsetTriangles()
    void TileHighlightGenerator::OffsetTriangles() {
        array<TileHighlightGenerator::OutputVertex, 3ul>* this_00;
        array<TileHighlightGenerator::OutputVertex, 3ul>* paVar1;
        Vector3T<float>* this_01;
        ulong uVar2;
        ColourHSL local_38;

        this_00 = (array<TileHighlightGenerator::OutputVertex, 3ul>*)(&field_32)->HeapBeginPtr();
        paVar1 = (array<TileHighlightGenerator::OutputVertex, 3ul>*)(&field_32)->end();
        if (this_00 != paVar1) {
            do {
                uVar2 = 0;
                do {
                    new (&local_38) jag::math::ColourHSL(0.0, 1.0, 0.0);
                    this_01 = (Vector3T<float>*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::operator[](
                        this_00, uVar2);
                    jag::math::Vector3T<float>::operator+=(this_01, (Vector3T*)&local_38);
                    uVar2 = uVar2 + 1;
                } while (uVar2 != 3);
                this_00 = this_00 + 72;
            } while (this_00 != paVar1);
        }
    }

    // 0x100304850, 256 bytes, placed by class name
    // TileHighlightGenerator::GenerateNormalsForTriangles()
    void TileHighlightGenerator::GenerateNormalsForTriangles() {
        array<TileHighlightGenerator::OutputVertex, 3ul>* this_00;
        array<TileHighlightGenerator::OutputVertex, 3ul>* paVar1;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        long lVar4;
        ulong uVar5;
        undefined8 local_60[2];
        undefined8 local_50[2];
        undefined8 local_40[2];

        this_00 = (array<TileHighlightGenerator::OutputVertex, 3ul>*)(&field_32)->HeapBeginPtr();
        paVar1 = (array<TileHighlightGenerator::OutputVertex, 3ul>*)(&field_32)->end();
        if (this_00 != paVar1) {
            do {
                pVVar2 = (Vector3T*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::operator[](this_00, 1);
                pVVar3 = (Vector3T*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::operator[](this_00, 0);
                local_50[0] = jag::math::operator-(pVVar2, pVVar3);
                pVVar2 = (Vector3T*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::operator[](this_00, 2);
                local_40[0] = jag::math::operator-(pVVar2, pVVar3);
                local_60[0] = jag::math::Vector3Cross<float>((Vector3T*)local_50, (Vector3T*)local_40);
                local_60->NormalizeSafe();
                uVar5 = 0;
                do {
                    lVar4 = std::array<TileHighlightGenerator::OutputVertex, 3ul>::operator[](this_00, uVar5);
                    ((lVar4 + 12))->SetXYZ(local_60);
                    uVar5 = uVar5 + 1;
                } while (uVar5 != 3);
                this_00 = this_00 + 72;
            } while (this_00 != paVar1);
        }
    }

    // 0x100304950, 3200 bytes, placed by class name
    // TileHighlightGenerator::LoadOutlineTriangles()
    void TileHighlightGenerator::LoadOutlineTriangles() {
        int iVar1;
        float* pfVar2;
        vector* pvVar3;
        int* piVar4;
        long lVar5;
        OutputVertex* pOVar7;
        undefined1* this_00;
        undefined8 local_258[2];
        OutputVertex* local_248;
        float local_240;
        ColourHSL local_238;
        OutputVertex* local_228;
        float local_220;
        ColourHSL local_218;
        OutputVertex* local_208;
        float local_200;
        ColourHSL local_1f8;
        OutputVertex* local_1e8;
        float local_1e0;
        ColourHSL local_1d8;
        OutputVertex* local_1c8;
        float local_1c0;
        ColourHSL local_1b8;
        OutputVertex* local_1a8;
        float local_1a0;
        ColourHSL local_198;
        OutputVertex* local_188;
        float local_180;
        ColourHSL local_178;
        OutputVertex* local_168;
        float local_160;
        ColourHSL local_158;
        float local_148;
        float local_144;
        float local_140;
        float local_13c;
        OutputVertex local_138;
        OutputVertex local_120;
        OutputVertex local_108;
        float local_ec;
        OutputVertex local_e8[4];
        OutputVertex local_88;
        OutputVertex local_70;
        OutputVertex local_58;
        OutputVertex local_40;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_258[0] = GetCornerHeights(this);
        lVar5 = 0;
        pfVar2 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_258, 0);
        local_140 = *pfVar2;
        pfVar2 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_258, 1);
        local_148 = *pfVar2;
        pfVar2 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_258, 2);
        local_13c = *pfVar2;
        pfVar2 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_258, 3);
        local_ec = *pfVar2;
        do {
            new (((long)&local_e8[0].field_0 + lVar5)) OutputVertex();
            lVar5 = lVar5 + 24;
        } while (lVar5 != 192);
        pvVar3 = SSOBeginPtr(3);
        local_144 = (float)*(int*)pvVar3;
        iVar1 = MaxZ();
        new (&local_248) jag::math::ColourHSL(local_144, local_13c, (float)iVar1);
        new (&local_238) jag::math::ColourHSL(-0.57735026, -0.57735026, 0.57735026);
        OutputVertex::OutputVertex(local_248._0_4_, local_240, local_238._0_8_, local_238.field_8, &local_138);
        OutputVertex::operator=(local_e8, &local_138);
        iVar1 = Right();
        local_144 = (float)iVar1;
        iVar1 = MaxZ();
        new (&local_228) jag::math::ColourHSL(local_144, local_ec, (float)iVar1);
        new (&local_218) jag::math::ColourHSL(0.57735026, -0.57735026, 0.57735026);
        pOVar7 = &local_138;
        OutputVertex::OutputVertex(local_228._0_4_, local_220, local_218._0_8_, local_218.field_8, pOVar7);
        OutputVertex::operator=(local_e8 + 1, pOVar7);
        pvVar3 = SSOBeginPtr(pOVar7);
        local_144 = (float)*(int*)pvVar3;
        local_13c = local_13c + 0.125;
        iVar1 = MaxZ();
        new (&local_208) jag::math::ColourHSL(local_144, local_13c, (float)iVar1);
        new (&local_1f8) jag::math::ColourHSL(-0.57735026, 0.57735026, 0.57735026);
        OutputVertex::OutputVertex(local_208._0_4_, local_200, local_1f8._0_8_, local_1f8.field_8, &local_138);
        OutputVertex::operator=(local_e8 + 2, &local_138);
        iVar1 = Right();
        local_13c = (float)iVar1;
        local_ec = local_ec + 0.125;
        iVar1 = MaxZ();
        new (&local_1e8) jag::math::ColourHSL(local_13c, local_ec, (float)iVar1);
        new (&local_1d8) jag::math::ColourHSL(0.57735026, 0.57735026, 0.57735026);
        pOVar7 = &local_138;
        OutputVertex::OutputVertex(local_1e8._0_4_, local_1e0, local_1d8._0_8_, local_1d8.field_8, pOVar7);
        OutputVertex::operator=(local_e8 + 3, pOVar7);
        pvVar3 = SSOBeginPtr(pOVar7);
        local_ec = (float)*(int*)pvVar3;
        piVar4 = (int*)y();
        new (&local_1c8) jag::math::ColourHSL(local_ec, local_140, (float)*piVar4);
        new (&local_1b8) jag::math::ColourHSL(-0.57735026, -0.57735026, -0.57735026);
        OutputVertex::OutputVertex(local_1c8._0_4_, local_1c0, local_1b8._0_8_, local_1b8.field_8, &local_138);
        OutputVertex::operator=(&local_88, &local_138);
        iVar1 = Right();
        local_ec = (float)iVar1;
        piVar4 = (int*)y();
        new (&local_1a8) jag::math::ColourHSL(local_ec, local_148, (float)*piVar4);
        new (&local_198) jag::math::ColourHSL(0.57735026, -0.57735026, -0.57735026);
        pOVar7 = &local_138;
        OutputVertex::OutputVertex(local_1a8._0_4_, local_1a0, local_198._0_8_, local_198.field_8, pOVar7);
        OutputVertex::operator=(&local_70, pOVar7);
        pvVar3 = SSOBeginPtr(pOVar7);
        local_ec = (float)*(int*)pvVar3;
        local_140 = local_140 + 0.125;
        piVar4 = (int*)y();
        new (&local_188) jag::math::ColourHSL(local_ec, local_140, (float)*piVar4);
        new (&local_178) jag::math::ColourHSL(-0.57735026, 0.57735026, -0.57735026);
        OutputVertex::OutputVertex(local_188._0_4_, local_180, local_178._0_8_, local_178.field_8, &local_138);
        OutputVertex::operator=(&local_58, &local_138);
        iVar1 = Right();
        local_140 = (float)iVar1;
        local_148 = local_148 + 0.125;
        piVar4 = (int*)y();
        new (&local_168) jag::math::ColourHSL(local_140, local_148, (float)*piVar4);
        new (&local_158) jag::math::ColourHSL(0.57735026, 0.57735026, -0.57735026);
        OutputVertex::OutputVertex(local_168._0_4_, local_160, local_158._0_8_, local_158.field_8, &local_138);
        OutputVertex::operator=(&local_40, &local_138);
        this_00 = &field_32;
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
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
        this_00->push_back((OutputTriangle*)&local_138);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003055d0, 560 bytes, placed by class name
    // TileHighlightGenerator::CreateModelFromTriangles()
    ModelRSevenUnlit* TileHighlightGenerator::CreateModelFromTriangles() {
        vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        int iVar1;
        long lVar2;
        long lVar3;
        ulong uVar4;
        ushort* puVar5;
        Model* pMVar6;
        vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
               eastl::allocator>* this_01;
        long in_RSI;
        undefined1 local_98[40];
        Vector3T* local_70;
        ModelRSevenUnlit* local_68;
        shared_ptr local_60;
        ColourHSL local_50;
        shared_ptr local_40;

        make_shared<jag::graphics::Model>((jag*)&local_60);
        this_00 = (vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(in_RSI + 32);
        lVar2 = eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(this_00);
        if (lVar2 != 0) {
            CreateIndicesForTriangles((TileHighlightGenerator*)local_98);
            make_shared<jag::graphics::GeometryBatch>((jag*)&local_40);
            local_68 = (ModelRSevenUnlit*)this;
            local_98._32_8_ = shared_ptr<jag::graphics::GeometryBatch>::operator->(
                (shared_ptr<jag::graphics::GeometryBatch>*)&local_40);
            lVar2 = eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(this_00);
            local_70 = (Vector3T*)this_00->HeapBeginPtr();
            lVar3 = this_00->HeapBeginPtr();
            uVar4 = local_98->size();
            puVar5 = (ushort*)local_98->HeapBeginPtr();
            new (&local_50) jag::math::ColourHSL(1.0, 1.0, 1.0);
            local_98._32_8_->LoadMeshFromData(lVar2 * 3, 24, local_70, (Vector3T*)(lVar3 + 12), 0, 0, uVar4, puVar5,
                                              (Vector3T*)&local_50, 0);
            pMVar6 = (Model*)shared_ptr<jag::graphics::Model>::operator->((shared_ptr<jag::graphics::Model>*)&local_60);
            this_01 =
                (vector<std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                        eastl::allocator>*)pMVar6->GetBatchList();
            pMVar6 = (Model*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)&local_60);
            this = (TileHighlightGenerator*)local_68;
            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::MakeUnique<
                jag::graphics::Model&, shared_ptr<jag::graphics::GeometryBatch>&>(
                (MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>*)&local_50, pMVar6, &local_40);
            eastl::vector<
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>,
                eastl::allocator>::push_back(this_01, (unique_ptr*)&local_50);
            local_50.~unique_ptr();
            local_40.~shared_ptr();
            local_98->~vector();
        }
        local_40._0_1_ = 1;
        make_shared<ModelRSevenUnlit, shared_ptr<jag::graphics::Model>, bool>((jag*)local_98, &local_60,
                                                                              (bool*)&local_40);
        iVar1 = shared_ptr<ModelRSevenUnlit>::operator->((shared_ptr<ModelRSevenUnlit>*)local_98);
        Light(iVar1, 0, 256, 1, 1);
        local_98->~shared_ptr();
        local_60.~shared_ptr();
        return (ModelRSevenUnlit*)this;
    }

    // 0x100305810, 1056 bytes, placed by class name
    // TileHighlightGenerator::ClipTriangle(TileHighlightGenerator::OutputTriangle const&, TileHighlightGenerator::ClipPlane const&, eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>&)
    void TileHighlightGenerator::ClipTriangle(OutputTriangle* param_1, ClipPlane* param_2, vector* param_3) {
        uint uVar1;
        Vector3T* pVVar2;
        Vector4T<float>* this_00;
        undefined8* puVar3;
        undefined8 uVar4;
        long lVar5;
        undefined8 in_R8;
        undefined8 in_R9;
        ulong uVar6;
        uint uVar7;
        float fVar8;
        undefined4 uVar9;
        undefined4 uVar10;
        undefined8 uVar11;
        TileHighlightGenerator local_190;
        undefined8 local_100;
        undefined4 uStack_f8;
        undefined4 uStack_f4;
        undefined4 uStack_f0;
        undefined4 local_ec;
        undefined8 local_e8;
        undefined4 uStack_e0;
        undefined4 uStack_dc;
        undefined4 uStack_d8;
        undefined4 local_d4;
        undefined8 local_d0;
        undefined4 uStack_c8;
        undefined4 uStack_c4;
        undefined4 uStack_c0;
        undefined4 local_bc;
        undefined8 local_b8;
        undefined4 uStack_b0;
        undefined4 uStack_ac;
        undefined4 uStack_a8;
        undefined4 local_a4;
        undefined8 local_a0;
        undefined4 uStack_98;
        undefined4 uStack_94;
        undefined4 uStack_90;
        undefined4 local_8c;
        undefined8 local_88;
        undefined4 uStack_80;
        undefined4 uStack_7c;
        undefined4 uStack_78;
        undefined4 local_74;
        ClipPlane* local_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined4 local_48;

        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        lVar5 = 0;
        do {
            new (((long)&local_68 + lVar5)) jag::math::Vector3T<int>();
            lVar5 = lVar5 + 12;
        } while (lVar5 != 36);
        local_70 = param_2 + 12;
        uVar6 = 0;
        uVar7 = 0;
        do {
            pVVar2 = (Vector3T*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::operator[](
                (array<TileHighlightGenerator::OutputVertex, 3ul>*)param_1, uVar6);
            local_190._0_8_ = jag::math::operator-(pVVar2, (Vector3T*)param_2);
            this_00 = (Vector4T<float>*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, uVar6);
            jag::math::Vector4T<float>::SetXYZ(this_00, (Vector3T*)&local_190);
            fVar8 = jag::math::Vector3Dot<float>((Vector3T*)this_00, (Vector3T*)local_70);
            uVar1 = 1 << ((byte)uVar6 & 31);
            if (fVar8 < 0.0) {
                uVar1 = 0;
            }
            uVar7 = uVar7 | uVar1;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 3);
        switch (uVar7) {
        case 0:
            goto switchD_10030591c_caseD_0;
        case 1:
            uVar4 = std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 0);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 1);
            local_100 = *puVar3;
            uStack_f8 = *(undefined4*)(puVar3 + 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 2);
            uStack_f4 = (undefined4)*puVar3;
            uStack_f0 = (undefined4)((ulong)*puVar3 >> 32);
            local_ec = *(undefined4*)(puVar3 + 1);
            uVar11 = CONCAT44(local_ec, uStack_f0);
            uVar9 = (undefined4)local_100;
            uVar10 = uStack_f8;
            break;
        case 2:
            uVar4 = std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 2);
            local_e8 = *puVar3;
            uStack_e0 = *(undefined4*)(puVar3 + 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 0);
            uStack_dc = (undefined4)*puVar3;
            uStack_d8 = (undefined4)((ulong)*puVar3 >> 32);
            local_d4 = *(undefined4*)(puVar3 + 1);
            uVar11 = CONCAT44(local_d4, uStack_d8);
            uVar9 = (undefined4)local_e8;
            uVar10 = uStack_e0;
            break;
        case 3:
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 0);
            local_d0 = *puVar3;
            uStack_c8 = *(undefined4*)(puVar3 + 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 1);
            uStack_c4 = (undefined4)*puVar3;
            uStack_c0 = (undefined4)((ulong)*puVar3 >> 32);
            local_bc = *(undefined4*)(puVar3 + 1);
            uVar4 = std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 2);
            uVar11 = CONCAT44(local_bc, uStack_c0);
            uVar9 = (undefined4)local_d0;
            uVar10 = uStack_c8;
            goto LAB_100305bc4;
        case 4:
            uVar4 = std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 2);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 0);
            local_b8 = *puVar3;
            uStack_b0 = *(undefined4*)(puVar3 + 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 1);
            uStack_ac = (undefined4)*puVar3;
            uStack_a8 = (undefined4)((ulong)*puVar3 >> 32);
            local_a4 = *(undefined4*)(puVar3 + 1);
            uVar11 = CONCAT44(local_a4, uStack_a8);
            uVar9 = (undefined4)local_b8;
            uVar10 = uStack_b0;
            break;
        case 5:
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 2);
            local_a0 = *puVar3;
            uStack_98 = *(undefined4*)(puVar3 + 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 0);
            uStack_94 = (undefined4)*puVar3;
            uStack_90 = (undefined4)((ulong)*puVar3 >> 32);
            local_8c = *(undefined4*)(puVar3 + 1);
            uVar4 = std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 1);
            uVar11 = CONCAT44(local_8c, uStack_90);
            uVar9 = (undefined4)local_a0;
            uVar10 = uStack_98;
            goto LAB_100305bc4;
        case 6:
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 1);
            local_88 = *puVar3;
            uStack_80 = *(undefined4*)(puVar3 + 1);
            puVar3 = (undefined8*)std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 2);
            uStack_7c = (undefined4)*puVar3;
            uStack_78 = (undefined4)((ulong)*puVar3 >> 32);
            local_74 = *(undefined4*)(puVar3 + 1);
            uVar4 = std::array<jag::math::Vector3T<float>, 3ul>::operator[](
                (array<jag::math::Vector3T<float>, 3ul>*)&local_68, 0);
            uVar11 = CONCAT44(local_74, uStack_78);
            uVar9 = (undefined4)local_88;
            uVar10 = uStack_80;
        LAB_100305bc4:
            ClipTriangleDouble(&local_190, (TileHighlightGenerator*)this, uVar4, param_2, in_R8, in_R9, uVar9, uVar10,
                               uVar11);
            PushTwoBack(&local_190, param_3, (array*)&local_190);
            return;
        case 7:
            param_3->push_back(param_1);
            return;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/TileHighlightGenerator.cpp",
                            297, "Vertex clip mask out-of-range.");
        }
        ClipTriangleSingle(&local_190, (TileHighlightGenerator*)this, uVar4, param_2, in_R8, in_R9, uVar9, uVar10,
                           uVar11);
        param_3->push_back((OutputTriangle*)&local_190);
    switchD_10030591c_caseD_0:
    }

    // 0x100305c40, 576 bytes, placed by class name
    // TileHighlightGenerator::LoadGroundTrianglesForTile(int, int)
    void TileHighlightGenerator::LoadGroundTrianglesForTile(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        shared_ptr* this_00;
        long lVar4;
        BuildTerrainResultLevel* pBVar5;
        array<rseven::TerrainVertex, 3ul>* this_01;
        array<rseven::TerrainVertex, 3ul>* paVar6;
        Vector3T* pVVar7;
        allocator* this_02;
        int iVar8;
        int iVar9;
        allocator local_100[24];
        undefined1 local_e8[24];
        undefined1 local_d0[24];
        hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> local_b8[56];
        OutputVertex* local_80;
        undefined4 local_78;
        OutputVertex* local_70;
        undefined4 local_68;
        OutputVertex* local_60;
        undefined4 local_58;
        world* local_50;
        Square* local_48;
        shared_ptr local_40;

        this_00 = (shared_ptr*)(field_24, field_16, param_1, param_2)->GetSquare();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            iVar9 = *(int*)(lVar4 + 36);
            lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            iVar8 = *(int*)(lVar4 + 40);
            this_02 = local_100;
            eastl::allocator::allocator(this_02, "EASTL hash_set");
            eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::hash_set(local_b8,
                                                                                                            this_02);
            MakeSharedPool<rseven::BuildTerrainResultLevel, 64>::MakeShared<>(
                &local_40, (MakeSharedPool<rseven::BuildTerrainResultLevel, 64>*)this_02);
            local_48 = (Square*)this_00->end();
            local_50 = field_24;
            lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            iVar1 = *(int*)(lVar4 + 36);
            lVar4 = shared_ptr<Square>::operator->((shared_ptr<Square>*)this_00);
            iVar2 = *(int*)(lVar4 + 40);
            pBVar5 = (BuildTerrainResultLevel*)shared_ptr<rseven::BuildTerrainResultLevel>::operator*(
                (shared_ptr<rseven::BuildTerrainResultLevel>*)&local_40);
            iVar9 = iVar9 * 128;
            iVar8 = iVar8 * 128;
            rseven::MapRebuildHandler_LogicThread::CollectGroundData(local_48, iVar9, local_50, iVar1, iVar2, iVar8,
                                                                     iVar9 + 128, iVar8 + 128, (hash_set*)local_b8,
                                                                     pBVar5, 0, 0);
            lVar4 = shared_ptr<rseven::BuildTerrainResultLevel>::operator->(
                (shared_ptr<rseven::BuildTerrainResultLevel>*)&local_40);
            this_01 = (array<rseven::TerrainVertex, 3ul>*)((lVar4 + 12560))->HeapBeginPtr();
            paVar6 = (array<rseven::TerrainVertex, 3ul>*)((lVar4 + 12560))->end();
            if (this_01 != paVar6) {
                do {
                    pVVar7 = (Vector3T*)std::array<rseven::TerrainVertex, 3ul>::operator[](this_01, 0);
                    jag::math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_80, pVVar7);
                    OutputVertex::OutputVertex(local_80, local_78, (OutputTriangle*)local_100);
                    pVVar7 = (Vector3T*)std::array<rseven::TerrainVertex, 3ul>::operator[](this_01, 1);
                    jag::math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_70, pVVar7);
                    OutputVertex::OutputVertex(local_70, local_68, local_e8);
                    pVVar7 = (Vector3T*)std::array<rseven::TerrainVertex, 3ul>::operator[](this_01, 2);
                    jag::math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_60, pVVar7);
                    OutputVertex::OutputVertex(local_60, local_58, local_d0);
                    (&field_32, (OutputTriangle*)local_100)->push_back();
                    this_01 = this_01 + 88;
                } while (this_01 != paVar6);
            }
            local_40.~shared_ptr();
            local_b8->~hash_map();
        }
    }

    // 0x100305e80, 512 bytes, placed by class name
    // TileHighlightGenerator::GetCornerHeights()
    undefined8 TileHighlightGenerator::GetCornerHeights() {
        int iVar1;
        int iVar2;
        vector* pvVar3;
        int* piVar4;
        array<TileHighlightGenerator::OutputVertex, 3ul>* this_00;
        Layout* this_01;
        float* pfVar5;
        Vector2T* pVVar6;
        Vector2T<float>* pVVar7;
        float* pfVar8;
        type* in_RSI;
        type* ptVar9;
        ulong uVar10;
        Point<float> local_98[8];
        Vector2T<float> local_90[8];
        undefined1 local_88[16];
        undefined1 local_78[16];
        undefined8 local_68;
        Layout* local_60;
        array<TileHighlightGenerator::OutputVertex, 3ul>* local_58;
        array<TileHighlightGenerator::OutputVertex, 3ul>* local_50;
        undefined8 local_48;
        undefined8 uStack_40;
        float local_34;

        local_48 = 9187343237679939583;
        uStack_40 = 9187343237679939583;
        pvVar3 = SSOBeginPtr(in_RSI);
        iVar1 = *(int*)pvVar3;
        piVar4 = (int*)y();
        new (local_88) sidebars::SideBarData(iVar1, *piVar4);
        iVar1 = Right();
        piVar4 = (int*)y();
        ptVar9 = (type*)(ulong)(iVar1 - 1U);
        new ((local_88 + 8)) sidebars::SideBarData(iVar1 - 1U, *piVar4);
        pvVar3 = SSOBeginPtr(ptVar9);
        iVar1 = *(int*)pvVar3;
        iVar2 = MaxZ();
        new (local_78) sidebars::SideBarData(iVar1, iVar2 + -1);
        iVar1 = Right();
        iVar2 = MaxZ();
        pVVar7 = (Vector2T<float>*)(ulong)(iVar1 - 1U);
        new ((local_78 + 8)) sidebars::SideBarData(iVar1 - 1U, iVar2 + -1);
        this_00 = (array<TileHighlightGenerator::OutputVertex, 3ul>*)(&field_32)->HeapBeginPtr();
        local_50 = (array<TileHighlightGenerator::OutputVertex, 3ul>*)(&field_32)->end();
        if (this_00 != local_50) {
            do {
                this_01 = (Layout*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::begin(this_00);
                local_58 = this_00;
                local_60 = (Layout*)std::array<TileHighlightGenerator::OutputVertex, 3ul>::end(this_00);
                if (this_01 != local_60) {
                    do {
                        uVar10 = 0;
                        do {
                            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)pVVar7);
                            local_34 = *(float*)pvVar3;
                            pfVar5 = (float*)this_01->second();
                            jag::math::Point<float>::Point(local_98, local_34, *pfVar5);
                            pVVar6 = (Vector2T*)std::array<jag::math::Vector2T<int>, 4ul>::operator[](
                                (array<jag::math::Vector2T<int>, 4ul>*)local_88, uVar10);
                            jag::math::Vector2T<float>::Vector2T<int>(local_90, pVVar6);
                            pVVar7 = local_90;
                            local_68 = jag::math::operator-((Vector2T*)local_98, (Vector2T*)local_90);
                            if ((float)local_68.LengthSq() <= 4.0) {
                                pfVar5 =
                                    (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&local_48, uVar10);
                                pVVar7 = (Vector2T<float>*)this_01->y();
                                pfVar8 = std::min<float>(pfVar5, (float*)pVVar7);
                                *pfVar5 = *pfVar8;
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 != 4);
                        this_01 = this_01 + 24;
                    } while (this_01 != local_60);
                }
                this_00 = local_58 + 72;
            } while (this_00 != local_50);
        }
        return local_48;
    }

    // 0x100306210, 160 bytes, placed by class name
    // TileHighlightGenerator::CreateIndicesForTriangles()
    TileHighlightGenerator* TileHighlightGenerator::CreateIndicesForTriangles() {
        long lVar1;
        ulong uVar2;
        long in_RSI;
        vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>* this_00;
        ushort local_2a;

        new (this) eastl::vector<unsigned short, eastl::allocator>();
        this_00 = (vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>*)(in_RSI + 32);
        lVar1 = eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(this_00);
        reserve(lVar1 * 3);
        lVar1 = eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(this_00);
        if (lVar1 * 3 != 0) {
            uVar2 = 0;
            do {
                local_2a = (ushort)uVar2;
                push_back(&local_2a);
                uVar2 = uVar2 + 1;
                lVar1 = eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>::size(this_00);
            } while (uVar2 < (ulong)(lVar1 * 3));
        }
        return this;
    }

    // 0x100306570, 192 bytes, placed by class name
    // TileHighlightGenerator::ClipTriangleSingle(jag::math::Vector3T<float> const&, std::array<jag::math::Vector3T<float>, 2ul>, TileHighlightGenerator::ClipPlane const&)
    /* TileHighlightGenerator::ClipTriangleSingle(jag::math::Vector3T<float>
   const&, std::array<jag::math::Vector3T<float>, 2ul>,
   TileHighlightGenerator::ClipPlane const&) */

    OutputVertex* TileHighlightGenerator::ClipTriangleSingle(undefined8 param_1_00, undefined4 param_2,
                                                             OutputVertex* param_1, undefined8 param_4,
                                                             Vector3T* param_5, Vector3T* param_6, undefined8 param_7,
                                                             undefined8 param_8, TileHighlightGenerator param_9) {
        Vector3T* pVVar1;
        TileHighlightGenerator* this;
        TileHighlightGenerator* this_00;
        undefined8 local_50;
        undefined4 local_48;
        undefined8 local_40;
        undefined4 local_38;

        this_00 = &param_9;
        this = this_00;
        pVVar1 = (Vector3T*)std::array<jag::math::Vector3T<float>, 2ul>::operator[](
            (array<jag::math::Vector3T<float>, 2ul>*)this_00, 0);
        local_50 = IntersectLinePlane(this, param_5, pVVar1, param_6 + 12);
        local_48 = param_2;
        pVVar1 = (Vector3T*)std::array<jag::math::Vector3T<float>, 2ul>::operator[](
            (array<jag::math::Vector3T<float>, 2ul>*)this_00, 1);
        local_40 = IntersectLinePlane(this_00, param_5, pVVar1, param_6 + 12);
        local_38 = param_2;
        jag::math::operator+(param_5, param_6);
        OutputVertex::OutputVertex(param_1);
        jag::math::operator+((Vector3T*)&local_50, param_6);
        OutputVertex::OutputVertex(param_1 + 1);
        jag::math::operator+((Vector3T*)&local_40, param_6);
        OutputVertex::OutputVertex(param_1 + 2);
        return param_1;
    }

    // 0x100306630, 64 bytes, placed by class name
    // TileHighlightGenerator::PushTwoBack(eastl::vector<TileHighlightGenerator::OutputTriangle, eastl::allocator>&, std::array<TileHighlightGenerator::OutputTriangle, 2ul> const&)
    /* TileHighlightGenerator::PushTwoBack(eastl::vector<TileHighlightGenerator::OutputTriangle,
   eastl::allocator>&, std::array<TileHighlightGenerator::OutputTriangle,
   2ul> const&) */

    void TileHighlightGenerator::PushTwoBack(vector* param_1, array* param_2) {
        OutputTriangle* pOVar1;

        pOVar1 = (OutputTriangle*)std::array<TileHighlightGenerator::OutputTriangle, 2ul>::operator[](
            (array<TileHighlightGenerator::OutputTriangle, 2ul>*)param_2, 0);
        param_1->push_back(pOVar1);
        pOVar1 = (OutputTriangle*)std::array<TileHighlightGenerator::OutputTriangle, 2ul>::operator[](
            (array<TileHighlightGenerator::OutputTriangle, 2ul>*)param_2, 1);
        param_1->push_back(pOVar1);
    }

    // 0x100306670, 288 bytes, placed by class name
    // TileHighlightGenerator::ClipTriangleDouble(std::array<jag::math::Vector3T<float>, 2ul>, jag::math::Vector3T<float> const&, TileHighlightGenerator::ClipPlane const&)
    /* TileHighlightGenerator::ClipTriangleDouble(std::array<jag::math::Vector3T<float>,
   2ul>, jag::math::Vector3T<float> const&, TileHighlightGenerator::ClipPlane
   const&) */

    OutputVertex* TileHighlightGenerator::ClipTriangleDouble(undefined8 param_1, undefined4 param_2,
                                                             OutputVertex* param_3, undefined8 param_4,
                                                             Vector3T* param_5, Vector3T* param_6, undefined8 param_7,
                                                             undefined8 param_8, TileHighlightGenerator param_9) {
        Vector3T* pVVar1;
        TileHighlightGenerator* pTVar2;
        undefined8 local_58;
        undefined4 local_50;
        undefined8 local_48;
        undefined4 local_40;
        Vector3T* local_38;

        pTVar2 = &param_9;
        pVVar1 = (Vector3T*)std::array<jag::math::Vector3T<float>, 2ul>::operator[](
            (array<jag::math::Vector3T<float>, 2ul>*)pTVar2, 0);
        local_58 = IntersectLinePlane(pTVar2, pVVar1, param_5, param_6 + 12);
        pTVar2 = &param_9;
        local_50 = param_2;
        local_38 = (Vector3T*)std::array<jag::math::Vector3T<float>, 2ul>::operator[](
            (array<jag::math::Vector3T<float>, 2ul>*)pTVar2, 1);
        local_48 = IntersectLinePlane(pTVar2, local_38, param_5, param_6 + 12);
        local_40 = param_2;
        jag::math::operator+(pVVar1, param_6);
        OutputVertex::OutputVertex(param_3);
        jag::math::operator+((Vector3T*)&local_48, param_6);
        OutputVertex::OutputVertex(param_3 + 1);
        jag::math::operator+((Vector3T*)&local_58, param_6);
        OutputVertex::OutputVertex(param_3 + 2);
        jag::math::operator+(local_38, param_6);
        OutputVertex::OutputVertex(param_3 + 3);
        jag::math::operator+((Vector3T*)&local_48, param_6);
        OutputVertex::OutputVertex(param_3 + 4);
        jag::math::operator+(pVVar1, param_6);
        OutputVertex::OutputVertex(param_3 + 5);
        return param_3;
    }

    // 0x100306800, 128 bytes, placed by class name
    // TileHighlightGenerator::IntersectLinePlane(jag::math::Vector3T<float> const&, jag::math::Vector3T<float> const&, jag::math::Vector3T<float> const&)
    undefined8 TileHighlightGenerator::IntersectLinePlane(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3) {
        float fVar1;
        undefined8 uVar2;
        undefined8 local_38;
        undefined4 local_30;
        undefined8 local_28;
        float local_1c;

        local_28 = jag::math::operator-(param_2, param_1);
        local_1c = jag::math::Vector3Dot<float>((Vector3T*)&local_28, param_3);
        local_30 = 0;
        if (local_1c == 0.0) {
            uVar2 = *(undefined8*)param_1;
        } else {
            fVar1 = jag::math::Vector3Dot<float>(param_1, param_3);
            local_38 = jag::math::operator*((Vector3T*)&local_28, fVar1 / local_1c);
            uVar2 = jag::math::operator-(param_1, (Vector3T*)&local_38);
        }
        return uVar2;
    }

} // namespace jag::oldscape::dash3d
