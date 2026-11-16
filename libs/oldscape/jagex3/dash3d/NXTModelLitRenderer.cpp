// libs/oldscape/jagex3/dash3d/NXTModelLitRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class NXTModelLitRenderer : public SoftwareModelLitRenderer // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual void ObjRender(ModelLit&, int, int, int, int, int, int, int);
        virtual void ObjRenderOrthog(ModelLit&, int, int, int, int, int, int, int, int);
        virtual void WorldRender(ModelSource&, int, int, int, int, int, int, int, int, long long, int,
                                 RenderableOverlay&&, bool);
        virtual void UploadModel(ModelLit&);
        virtual void DestroyModel(ModelLit&);
        virtual void OSRenderCore_ModelLitWorldRender(int, long long, int, int, int, int, int, int, int, int, int, int,
                                                      int, int, bool, bool, RenderableOverlay const&);
        NXTModelLitRenderer(NXTPix3D*);
        void PrepareRender(int);
        void ExpireOldCachedUploadedModels();
        void Render2(ModelLitImpl const&, bool, bool, long long);
        IsMousePointingInsideModel(ModelLitImpl const&, int, int, int, int, int, int, int, int);
        void Render3(ModelLitImpl const&, int);
        void Render3ZClip(ModelLitImpl const&, int);
        bool FastInsideTriangle(int, int, int, int, int, int, int, int);
        static /* 3 bytes */ m_debug; // = { 1, 0, 0 }

        // data members, from how the methods use this: 6515368 bytes, the first 6437232 are SoftwareModelLitRenderer
        char _unknown_6437232[78120];
        int field_6515352; // offset 6515352
        char _unknown_6515356[12];
    };

    // 0x100d429a1, 3 bytes, __const
    NXTModelLitRenderer::m_debug = {1, 0, 0};

    // 0x100360a70, 144 bytes, base-object constructor, placed by class name and debug map
    // NXTModelLitRenderer::NXTModelLitRenderer(NXTPix3D*)
    void NXTModelLitRenderer::NXTModelLitRenderer(NXTPix3D* param_1) {
        new (this) ModelLitRenderer<NXTPix3D>(param_1);
        field_0 = &PTR_ObjRender_100efbef0;
        new (&field_6437232) eastl::fixed_vector<int, 6500ul, true, eastl::allocator>();
        new (&field_6463272) eastl::fixed_vector<int, 6500ul, true, eastl::allocator>();
        new (&field_6489312) eastl::fixed_vector<int, 6500ul, true, eastl::allocator>();
        new (&field_6515360) eastl::vector<shared_ptr<ModelLitImpl>, eastl::allocator>();
    }

    // 0x100360d70, 16 bytes, complete-object constructor, placed by class name and debug map
    // NXTModelLitRenderer::NXTModelLitRenderer(NXTPix3D*): jumps straight to the base-object constructor

    // 0x100360d80, 64 bytes, placed by class name and debug map
    // NXTModelLitRenderer::PrepareRender(int)
    void NXTModelLitRenderer::PrepareRender(int param_1) {
        field_6515352 = param_1;
        ModelLitRenderer_lastCachedModelsTotal = (&field_6515360)->size();
        ExpireOldCachedUploadedModels(this);
    }

    // 0x100360dc0, 112 bytes, placed by class name and debug map
    // NXTModelLitRenderer::ExpireOldCachedUploadedModels()
    void NXTModelLitRenderer::ExpireOldCachedUploadedModels() {
        undefined1* this_00;
        int iVar1;
        eastl* peVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        shared_ptr* psVar5;

        iVar1 = field_6515352;
        this_00 = &field_6515360;
        peVar2 = (eastl*)this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        psVar4 = eastl::remove_if<shared_ptr<ModelLitImpl>*, NXTModelLitRenderer::ExpireOldCachedUploadedModels()::__5>(
            peVar2, uVar3, this, iVar1 + -100);
        psVar5 = (shared_ptr*)this_00->end();
        this_00->erase(psVar4, psVar5);
    }

    // 0x100360ef0, 944 bytes, placed by class name and debug map
    // NXTModelLitRenderer::ObjRender(ModelLit&, int, int, int, int, int, int, int)
    void NXTModelLitRenderer::ObjRender(ModelLit* param_1, int param_2, int param_3, int param_4, int param_5,
                                        int param_6, int param_7, int param_8) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        NXTPix3D* pNVar11;
        int iVar13;
        int* piVar14;
        int iVar15;
        int iVar16;
        uint uVar17;
        ulong uVar18;
        int iVar19;

        if ((**(code**)(param_1->field_0 + 56))(param_1) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTModelLitRenderer.cpp",
                      45, (char*)0);
        }
        if (1 < *(int*)((long)&param_1[29].field_8 + 3) - 1U) {
            param_1->CalcBoundingSphere();
        }
        iVar1 = field_6437224->field_20;
        iVar2 = field_6437224->field_24;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_2);
        iVar3 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_2);
        iVar4 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_3);
        iVar5 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_3);
        iVar6 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_4);
        iVar7 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_4);
        iVar8 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_5);
        iVar9 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_5);
        if (0 < *(int*)((long)&param_1[1].field_0 + 3)) {
            iVar10 = *piVar14;
            uVar18 = 0;
            do {
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[1].field_0 + 7), uVar18);
                iVar16 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[2].field_8 + 6), uVar18);
                iVar19 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), uVar18);
                iVar15 = iVar16;
                if (param_4 != 0) {
                    iVar15 = iVar16 * iVar8 + iVar19 * iVar7 >> 16;
                    iVar19 = iVar19 * iVar8 - iVar16 * iVar7 >> 16;
                }
                iVar16 = *piVar14;
                iVar13 = iVar19;
                if (param_2 != 0) {
                    iVar13 = iVar19 * iVar4 - iVar16 * iVar3 >> 16;
                    iVar16 = iVar16 * iVar4 + iVar19 * iVar3 >> 16;
                }
                iVar19 = iVar15;
                if (param_3 != 0) {
                    iVar19 = iVar15 * iVar6 + iVar16 * iVar5 >> 16;
                    iVar16 = iVar16 * iVar6 - iVar15 * iVar5 >> 16;
                }
                iVar15 = (iVar13 + param_7) * iVar10 - (iVar16 + param_8) * iVar9 >> 16;
                uVar17 = (iVar16 + param_8) * iVar10 + (iVar13 + param_7) * iVar9;
                iVar16 = (int)uVar17 >> 16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_65008, uVar18);
                *piVar14 = iVar16 - (iVar10 * param_8 + iVar9 * param_7 >> 16);
                if (uVar17 < 65536) {
                    iVar16 = 1;
                }
                pNVar11 = field_6437224;
                iVar13 = pNVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar18);
                *piVar14 = (iVar13 * (iVar19 + param_6)) / iVar16 + iVar1;
                iVar13 = pNVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar18);
                *piVar14 = (iVar13 * iVar15) / iVar16 + iVar2;
                if (0 < *(int*)((long)&param_1[18].field_8 + 2)) {
                    piVar14 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_6437232,
                               uVar18);
                    *piVar14 = iVar19 + param_6;
                    piVar14 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_6463272,
                               uVar18);
                    *piVar14 = iVar15;
                    piVar14 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_6489312,
                               uVar18);
                    *piVar14 = iVar16;
                }
                uVar18 = uVar18 + 1;
            } while ((long)uVar18 < (long)*(int*)((long)&param_1[1].field_0 + 3));
        }
        Render2(this, (ModelLitImpl*)param_1, false, false, 0);
    }

    // 0x1003612f0, 3520 bytes, placed by class name and debug map
    // NXTModelLitRenderer::Render2(ModelLitImpl const&, bool, bool, long long)
    void NXTModelLitRenderer::Render2(ModelLitImpl* param_1, bool param_2, bool param_3, longlong param_4) {
        shared_ptr<Array<signed char, eastl::allocator>>* psVar1;
        undefined1* this_00;
        byte bVar2;
        ushort uVar3;
        int iVar4;
        array<int, 6500ul>* paVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>* pvVar6;
        ModelLitImpl* pMVar7;
        char cVar8;
        undefined2* puVar9;
        int* piVar10;
        undefined4* puVar11;
        undefined1* puVar12;
        undefined8 uVar13;
        array<unsigned short, 512ul>* this_01;
        ushort* puVar14;
        void* pvVar15;
        Array<signed char, eastl::allocator>* this_02;
        byte* pbVar16;
        array<int, 2000ul>* paVar17;
        uint* puVar18;
        array* paVar19;
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;
        int iVar20;
        ulong uVar21;
        array<bool, 6500ul>* paVar22;
        int iVar23;
        array<unsigned short, 6000ul>* this_03;
        array<int, 12ul>* paVar24;
        uint uVar25;
        int iVar26;
        ulong uVar27;
        NXTModelLitRenderer* pNVar28;
        bool bVar29;
        undefined4 uVar30;
        ulong uVar31;
        array<std::array<unsigned short, 512ul>, 6000ul>* paVar32;
        array<unsigned short, 512ul> local_2050[8000];
        Array<int, eastl::allocator>* local_110;
        Array<int, eastl::allocator>* local_108;
        Array<int, eastl::allocator>* local_100;
        array<int, 6500ul>* local_f8;
        array<int, 6500ul>* local_f0;
        array<std::array<unsigned short, 512ul>, 6000ul>* local_e8;
        vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>* local_d8;
        vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>* local_d0;
        vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>* local_c8;
        array<int, 6500ul>* local_c0;
        array<bool, 6500ul>* local_b8;
        undefined4 local_ac;
        int local_a8;
        int local_a4;
        array<bool, 6500ul>* local_a0;
        int local_94;
        ulong local_90;
        Array<int, eastl::allocator>* local_88;
        array<std::array<unsigned short, 512ul>, 6000ul>* local_80;
        array<int, 12ul>* local_78;
        NXTModelLitRenderer* local_70;
        array<unsigned short, 6000ul>* local_68;
        array<int, 2000ul>* local_60;
        ModelLitImpl* local_58;
        shared_ptr<Array<signed char, eastl::allocator>>* local_50;
        array<int, 2000ul>* local_48;
        array<std::array<unsigned short, 512ul>, 6000ul>* local_40;
        ulong local_38;

        uVar25 = param_1->field_516;
        if ((int)uVar25 < 6000) {
            local_90 = CONCAT44(local_90._4_4_, (int)CONCAT71(in_register_00000009, param_3));
            local_ac = (undefined4)CONCAT71(in_register_00000011, param_2);
            this_03 = (array<unsigned short, 6000ul>*)&field_169008;
            local_70 = this;
            local_58 = param_1;
            if (0 < (int)uVar25) {
                uVar21 = 0;
                do {
                    puVar9 = (undefined2*)std::array<unsigned short, 6000ul>::operator[](this_03, uVar21);
                    *puVar9 = 0;
                    uVar21 = uVar21 + 1;
                } while (uVar25 != uVar21);
            }
            pNVar28 = local_70;
            local_68 = this_03;
            if (0 < local_58->field_96) {
                if (6500 < local_58->field_96) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m.m_numFaces <= Model::MAX_VERTS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "dash3d/NXTModelLitRenderer.cpp",
                              521, (char*)0);
                }
                if ((short)local_58->field_96 != 0) {
                    local_88 = (Array<int, eastl::allocator>*)&local_58->field_224;
                    local_110 = (Array<int, eastl::allocator>*)&local_58->field_104;
                    local_108 = (Array<int, eastl::allocator>*)&local_58->field_128;
                    local_100 = (Array<int, eastl::allocator>*)&local_58->field_152;
                    local_f8 = (array<int, 6500ul>*)&local_70->field_13008;
                    local_c0 = (array<int, 6500ul>*)&local_70->field_39008;
                    local_b8 = (array<bool, 6500ul>*)&local_70->field_6508;
                    local_a0 = (array<bool, 6500ul>*)&local_70->field_8;
                    local_f0 = (array<int, 6500ul>*)&local_70->field_65008;
                    local_e8 = (array<std::array<unsigned short, 512ul>, 6000ul>*)&local_70->field_181008;
                    local_d8 =
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)&local_70
                            ->field_6437232;
                    local_d0 =
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)&local_70
                            ->field_6463272;
                    local_c8 =
                        (vector<int,
                                eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)&local_70
                            ->field_6489312;
                    uVar25 = 0;
                    do {
                        uVar21 = (ulong)(uVar25 & 65535);
                        piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_88, uVar21);
                        if (*piVar10 != -2) {
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_110, uVar21);
                            iVar20 = *piVar10;
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_108, uVar21);
                            iVar26 = *piVar10;
                            local_48 = (array<int, 2000ul>*)uVar21;
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_100, uVar21);
                            paVar5 = local_f8;
                            iVar23 = *piVar10;
                            local_50 = (shared_ptr<Array<signed char, eastl::allocator>>*)(long)iVar20;
                            piVar10 = (int*)std::array<int, 6500ul>::operator[](local_f8, (long)iVar20);
                            iVar20 = *piVar10;
                            local_40 = (array<std::array<unsigned short, 512ul>, 6000ul>*)(long)iVar26;
                            piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, (long)iVar26);
                            iVar26 = *piVar10;
                            local_38 = (long)iVar23;
                            piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, (long)iVar23);
                            psVar1 = local_50;
                            paVar5 = local_c0;
                            pvVar6 = local_d8;
                            iVar23 = *piVar10;
                            if (((char)local_ac == '\0') ||
                                (((iVar20 != -5000 && (iVar26 != -5000)) && (iVar23 != -5000)))) {
                                uVar30 = (int)local_90;
                                local_78 = (array<int, 12ul>*)CONCAT44(local_78._4_4_, iVar23);
                                local_80 =
                                    (array<std::array<unsigned short, 512ul>, 6000ul>*)CONCAT44(local_80._4_4_, uVar25);
                                if ((local_90 & 1) != 0) {
                                    puVar11 =
                                        (undefined4*)std::array<int, 6500ul>::operator[](local_c0, (ulong)local_50);
                                    local_60 = (array<int, 2000ul>*)CONCAT44(local_60._4_4_, *puVar11);
                                    piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, (ulong)local_40);
                                    local_94 = *piVar10;
                                    piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, local_38);
                                    cVar8 = MousePickingHelper::IsMouseRoughlyInsideTriangle(
                                        (int)local_60, local_94, *piVar10, iVar20, iVar26, iVar23, 0);
                                    if (cVar8 != '\0') {
                                        MousePickingHelper::AddPickingEntity(param_4);
                                        uVar30 = 0;
                                    }
                                }
                                paVar5 = local_c0;
                                local_90 = CONCAT44(local_90._4_4_, uVar30);
                                local_60 = (array<int, 2000ul>*)CONCAT44(local_60._4_4_, iVar20);
                                piVar10 = (int*)std::array<int, 6500ul>::operator[](local_c0, local_38);
                                iVar23 = *piVar10;
                                piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, (ulong)local_40);
                                iVar4 = *piVar10;
                                piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, (ulong)local_50);
                                if (0 < (iVar26 - (int)local_78) * (*piVar10 - iVar4) +
                                            (iVar23 - iVar4) * (iVar20 - iVar26)) {
                                    puVar12 =
                                        (undefined1*)std::array<bool, 6500ul>::operator[](local_b8, (ulong)local_48);
                                    *puVar12 = 0;
                                    bVar29 = true;
                                    paVar22 = local_a0;
                                    uVar25 = (uint)local_80;
                                    if (((-1 < (int)local_60) && (-1 < iVar26)) && (-1 < (int)local_78)) {
                                        iVar20 = local_70->field_6437224->field_28;
                                        bVar29 = iVar20 < (int)local_78 || (iVar20 < iVar26 || iVar20 < (int)local_60);
                                    }
                                    goto LAB_1003617f0;
                                }
                                this_03 = local_68;
                                pNVar28 = local_70;
                                uVar25 = (uint)local_80;
                            } else {
                                puVar11 = (undefined4*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](local_d8, (ulong)local_50);
                                paVar32 = local_40;
                                local_78 = (array<int, 12ul>*)CONCAT44(local_78._4_4_, *puVar11);
                                puVar11 = (undefined4*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](pvVar6, (ulong)local_40);
                                uVar21 = local_38;
                                local_60 = (array<int, 2000ul>*)CONCAT44(local_60._4_4_, *puVar11);
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                       eastl::allocator>>::operator[](pvVar6, local_38);
                                pvVar6 = local_d0;
                                local_94 = *piVar10;
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](local_d0, (ulong)psVar1);
                                iVar20 = *piVar10;
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](pvVar6, (ulong)paVar32);
                                local_a8 = *piVar10;
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                       eastl::allocator>>::operator[](pvVar6, uVar21);
                                pvVar6 = local_c8;
                                iVar26 = *piVar10;
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](local_c8, (ulong)local_50);
                                iVar23 = *piVar10;
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                                operator[](pvVar6, (ulong)local_40);
                                local_a4 = *piVar10;
                                piVar10 = (int*)eastl::vector<
                                    int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                       eastl::allocator>>::operator[](pvVar6, local_38);
                                bVar29 = true;
                                paVar22 = local_b8;
                                this_03 = local_68;
                                pNVar28 = local_70;
                                if (0 < ((iVar26 - local_a8) * ((int)local_78 - (int)local_60) -
                                         (iVar20 - local_a8) * (local_94 - (int)local_60)) *
                                                local_a4 +
                                            ((iVar23 - local_a4) * (local_94 - (int)local_60) -
                                             (*piVar10 - local_a4) * ((int)local_78 - (int)local_60)) *
                                                local_a8 +
                                            ((*piVar10 - local_a4) * (iVar20 - local_a8) -
                                             (iVar23 - local_a4) * (iVar26 - local_a8)) *
                                                (int)local_60) {
                                LAB_1003617f0:
                                    this_03 = local_68;
                                    uVar13 = std::array<bool, 6500ul>::operator[](paVar22, (ulong)local_48);
                                    paVar5 = local_f0;
                                    *(bool*)uVar13 = bVar29;
                                    piVar10 = (int*)std::array<int, 6500ul>::operator[](local_f0, (ulong)local_50);
                                    iVar20 = *piVar10;
                                    piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, (ulong)local_40);
                                    iVar26 = *piVar10;
                                    piVar10 = (int*)std::array<int, 6500ul>::operator[](paVar5, local_38);
                                    uVar21 = (long)((iVar20 + iVar26 + *piVar10) / 3) + (long)local_58->field_520;
                                    this_01 = (array<unsigned short, 512ul>*)
                                        std::array<std::array<unsigned short, 512ul>, 6000ul>::operator[](local_e8,
                                                                                                          uVar21);
                                    puVar14 = (ushort*)std::array<unsigned short, 6000ul>::operator[](this_03, uVar21);
                                    pNVar28 = local_70;
                                    uVar3 = *puVar14;
                                    *puVar14 = uVar3 + 1;
                                    puVar9 = (undefined2*)std::array<unsigned short, 512ul>::operator[](this_01,
                                                                                                        (ulong)uVar3);
                                    *puVar9 = (short)uVar25;
                                }
                            }
                        }
                        uVar25 = uVar25 + 1;
                    } while ((uVar25 & 65535) < (uint)(ushort)local_58->field_96);
                }
            }
            puVar12 = local_58->field_248;
            bVar29 = operator==((shared_ptr*)puVar12, (_func_decltype_nullptr*)0);
            if (bVar29) {
                uVar21 = (ulong)local_58->field_516;
                if (0 < (long)uVar21) {
                    local_40 = (array<std::array<unsigned short, 512ul>, 6000ul>*)&local_70->field_181008;
                    do {
                        psVar1 = (shared_ptr<Array<signed char, eastl::allocator>>*)(uVar21 - 1);
                        puVar14 = (ushort*)std::array<unsigned short, 6000ul>::operator[](this_03, (ulong)psVar1);
                        uVar3 = *puVar14;
                        uVar31 = uVar21;
                        if ((ulong)uVar3 != 0) {
                            local_50 = psVar1;
                            local_38 = uVar21;
                            pvVar15 = (void*)std::array<std::array<unsigned short, 512ul>, 6000ul>::operator[](
                                local_40, (ulong)psVar1);
                            _memcpy(local_2050, pvVar15, 1024);
                            pMVar7 = local_58;
                            pNVar28 = local_70;
                            uVar21 = 0;
                            do {
                                puVar14 = (ushort*)std::array<unsigned short, 512ul>::operator[](local_2050, uVar21);
                                Render3(pNVar28, pMVar7, (uint)*puVar14);
                                uVar21 = uVar21 + 1;
                            } while (uVar3 != uVar21);
                            uVar31 = local_38;
                            this_03 = local_68;
                            psVar1 = local_50;
                        }
                        uVar21 = (ulong)psVar1;
                    } while (1 < (long)uVar31);
                }
            } else {
                paVar24 = (array<int, 12ul>*)&pNVar28->field_6325008;
                this_00 = &pNVar28->field_6437056;
                uVar21 = 0;
                local_50 = (shared_ptr<Array<signed char, eastl::allocator>>*)puVar12;
                do {
                    puVar11 = (undefined4*)std::array<int, 12ul>::operator[](paVar24, uVar21);
                    *puVar11 = 0;
                    puVar11 = (undefined4*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)this_00, uVar21);
                    *puVar11 = 0;
                    uVar21 = uVar21 + 1;
                } while (uVar21 != 12);
                local_88 = (Array<int, eastl::allocator>*)&pNVar28->field_6325056;
                local_60 = (array<int, 2000ul>*)&pNVar28->field_6429056;
                local_48 = (array<int, 2000ul>*)&pNVar28->field_6421056;
                local_78 = paVar24;
                local_40 = (array<std::array<unsigned short, 512ul>, 6000ul>*)this_00;
                if (0 < (long)local_58->field_516) {
                    local_80 = (array<std::array<unsigned short, 512ul>, 6000ul>*)&pNVar28->field_181008;
                    uVar21 = (long)local_58->field_516;
                    do {
                        uVar31 = uVar21 - 1;
                        local_90 = uVar21;
                        puVar14 = (ushort*)std::array<unsigned short, 6000ul>::operator[](local_68, uVar31);
                        local_38 = (ulong)*puVar14;
                        if (local_38 != 0) {
                            pvVar15 = (void*)std::array<std::array<unsigned short, 512ul>, 6000ul>::operator[](local_80,
                                                                                                               uVar31);
                            _memcpy(local_2050, pvVar15, 1024);
                            uVar21 = 0;
                            do {
                                puVar14 = (ushort*)std::array<unsigned short, 512ul>::operator[](local_2050, uVar21);
                                uVar3 = *puVar14;
                                this_02 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_50);
                                pbVar16 =
                                    (byte*)Array<signed char, eastl::allocator>::operator[](this_02, (ulong)uVar3);
                                bVar2 = *pbVar16;
                                uVar27 = (ulong)bVar2;
                                piVar10 = (int*)std::array<int, 12ul>::operator[](local_78, uVar27);
                                iVar20 = *piVar10;
                                *piVar10 = iVar20 + 1;
                                paVar17 = (array<int, 2000ul>*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                                    (array<std::array<int, 2000ul>, 12ul>*)local_88, uVar27);
                                puVar18 = (uint*)std::array<int, 2000ul>::operator[](paVar17, (long)iVar20);
                                *puVar18 = (uint)uVar3;
                                if (uVar27 < 10) {
                                    piVar10 =
                                        (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)local_40, uVar27);
                                    *piVar10 = *piVar10 + (int)uVar31;
                                } else {
                                    if (bVar2 == 10) {
                                        paVar17 = local_48;
                                    } else {
                                        paVar17 = local_60;
                                    }
                                    piVar10 = (int*)std::array<int, 2000ul>::operator[](paVar17, (long)iVar20);
                                    *piVar10 = (int)uVar31;
                                }
                                uVar21 = uVar21 + 1;
                            } while (local_38 != uVar21);
                            paVar24 = local_78;
                        }
                        uVar21 = uVar31;
                    } while (1 < (long)local_90);
                }
                piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 1);
                iVar20 = *piVar10;
                if ((iVar20 < 1) && (piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 2), *piVar10 < 1)) {
                    local_68 = (array<unsigned short, 6000ul>*)((ulong)local_68 & 18446744069414584320);
                    paVar32 = local_40;
                } else {
                    paVar32 = local_40;
                    piVar10 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)local_40, 1);
                    iVar26 = *piVar10;
                    piVar10 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)paVar32, 2);
                    iVar23 = *piVar10;
                    piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 2);
                    local_68 = (array<unsigned short, 6000ul>*)CONCAT44(local_68._4_4_,
                                                                        (iVar26 + iVar23) / (iVar20 + *piVar10));
                }
                piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 3);
                iVar20 = *piVar10;
                if ((iVar20 < 1) && (piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 4), *piVar10 < 1)) {
                    local_90 = local_90 & 18446744069414584320;
                } else {
                    piVar10 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)paVar32, 3);
                    iVar26 = *piVar10;
                    piVar10 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)paVar32, 4);
                    iVar23 = *piVar10;
                    piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 4);
                    local_90 = CONCAT44(local_90._4_4_, (iVar26 + iVar23) / (iVar20 + *piVar10));
                }
                piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 6);
                iVar20 = *piVar10;
                if ((iVar20 < 1) && (piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 8), *piVar10 < 1)) {
                    local_80 =
                        (array<std::array<unsigned short, 512ul>, 6000ul>*)((ulong)local_80 & 18446744069414584320);
                } else {
                    piVar10 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)paVar32, 6);
                    iVar26 = *piVar10;
                    piVar10 = (int*)std::array<int, 12ul>::operator[]((array<int, 12ul>*)paVar32, 8);
                    iVar23 = *piVar10;
                    piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 8);
                    local_80 = (array<std::array<unsigned short, 512ul>, 6000ul>*)CONCAT44(
                        local_80._4_4_, (iVar26 + iVar23) / (iVar20 + *piVar10));
                }
                piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 10);
                iVar20 = *piVar10;
                local_40 = (array<std::array<unsigned short, 512ul>, 6000ul>*)
                    std::array<std::array<int, 2000ul>, 12ul>::operator[](
                        (array<std::array<int, 2000ul>, 12ul>*)local_88, 10);
                if (iVar20 == 0) {
                    piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 11);
                    iVar20 = *piVar10;
                    pvVar15 = (void*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                        (array<std::array<int, 2000ul>, 12ul>*)local_88, 11);
                    _memcpy(local_40, pvVar15, 8000);
                    _memcpy(local_48, local_60, 8000);
                }
                local_38 = CONCAT44(local_38._4_4_, iVar20);
                if (iVar20 < 1) {
                    iVar20 = -1000;
                } else {
                    piVar10 = (int*)std::array<int, 2000ul>::operator[](local_48, 0);
                    iVar20 = *piVar10;
                }
                uVar21 = 0;
                iVar26 = 0;
                do {
                    pMVar7 = local_58;
                    pNVar28 = local_70;
                    local_50 = (shared_ptr<Array<signed char, eastl::allocator>>*)uVar21;
                    if ((uVar21 == 0) && ((int)local_68 < iVar20)) {
                        do {
                            paVar32 = local_40;
                            uVar21 = (ulong)iVar26;
                            iVar26 = iVar26 + 1;
                            piVar10 = (int*)std::array<int, 2000ul>::operator[]((array<int, 2000ul>*)local_40, uVar21);
                            Render3(pNVar28, pMVar7, *piVar10);
                            if (iVar26 == (int)local_38) {
                                paVar19 = (array*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                                    (array<std::array<int, 2000ul>, 12ul>*)local_88, 11);
                                bVar29 = std::operator!=((array*)paVar32, paVar19);
                                if (bVar29) {
                                    puVar11 = (undefined4*)std::array<int, 12ul>::operator[](local_78, 11);
                                    local_38 = CONCAT44(local_38._4_4_, *puVar11);
                                    _memcpy(paVar32, paVar19, 8000);
                                    _memcpy(local_48, local_60, 8000);
                                    iVar26 = 0;
                                }
                            }
                            iVar20 = -1000;
                            if (iVar26 < (int)local_38) {
                                piVar10 = (int*)std::array<int, 2000ul>::operator[](local_48, (long)iVar26);
                                iVar20 = *piVar10;
                            }
                            if (local_50 != (shared_ptr<Array<signed char, eastl::allocator>>*)0)
                                break;
                        } while ((int)local_68 < iVar20);
                    }
                    while ((paVar32 = local_40, local_50 == (shared_ptr<Array<signed char, eastl::allocator>>*)3 &&
                                                    ((int)local_90 < iVar20))) {
                        uVar21 = (ulong)iVar26;
                        iVar26 = iVar26 + 1;
                        piVar10 = (int*)std::array<int, 2000ul>::operator[]((array<int, 2000ul>*)local_40, uVar21);
                        Render3(pNVar28, pMVar7, *piVar10);
                        if (iVar26 == (int)local_38) {
                            paVar19 = (array*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                                (array<std::array<int, 2000ul>, 12ul>*)local_88, 11);
                            bVar29 = std::operator!=((array*)paVar32, paVar19);
                            if (bVar29) {
                                puVar11 = (undefined4*)std::array<int, 12ul>::operator[](local_78, 11);
                                local_38 = CONCAT44(local_38._4_4_, *puVar11);
                                _memcpy(paVar32, paVar19, 8000);
                                _memcpy(local_48, local_60, 8000);
                                iVar26 = 0;
                            }
                        }
                        iVar20 = -1000;
                        if (iVar26 < (int)local_38) {
                            piVar10 = (int*)std::array<int, 2000ul>::operator[](local_48, (long)iVar26);
                            iVar20 = *piVar10;
                        }
                    }
                    while (true) {
                        paVar32 = local_40;
                        psVar1 = local_50;
                        if ((local_50 != (shared_ptr<Array<signed char, eastl::allocator>>*)5) ||
                            (iVar20 <= (int)(uint)local_80))
                            break;
                        uVar21 = (ulong)iVar26;
                        iVar26 = iVar26 + 1;
                        piVar10 = (int*)std::array<int, 2000ul>::operator[]((array<int, 2000ul>*)local_40, uVar21);
                        Render3(pNVar28, pMVar7, *piVar10);
                        if (iVar26 == (int)local_38) {
                            paVar19 = (array*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                                (array<std::array<int, 2000ul>, 12ul>*)local_88, 11);
                            bVar29 = std::operator!=((array*)paVar32, paVar19);
                            if (bVar29) {
                                puVar11 = (undefined4*)std::array<int, 12ul>::operator[](local_78, 11);
                                local_38 = CONCAT44(local_38._4_4_, *puVar11);
                                _memcpy(paVar32, paVar19, 8000);
                                _memcpy(local_48, local_60, 8000);
                                iVar26 = 0;
                            }
                        }
                        iVar20 = -1000;
                        if (iVar26 < (int)local_38) {
                            piVar10 = (int*)std::array<int, 2000ul>::operator[](local_48, (long)iVar26);
                            iVar20 = *piVar10;
                        }
                    }
                    puVar18 = (uint*)std::array<int, 12ul>::operator[](local_78, (ulong)local_50);
                    uVar25 = *puVar18;
                    pvVar15 = (void*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                        (array<std::array<int, 2000ul>, 12ul>*)local_88, (ulong)psVar1);
                    _memcpy((array<int, 2000ul>*)local_2050, pvVar15, 8000);
                    if (0 < (int)uVar25) {
                        uVar21 = 0;
                        do {
                            piVar10 =
                                (int*)std::array<int, 2000ul>::operator[]((array<int, 2000ul>*)local_2050, uVar21);
                            Render3(local_70, local_58, *piVar10);
                            uVar21 = uVar21 + 1;
                        } while (uVar25 != uVar21);
                    }
                    paVar32 = local_40;
                    paVar24 = local_78;
                    uVar21 = (long)local_50 + 1;
                } while (uVar21 != 10);
                iVar23 = (int)local_38;
                while (iVar20 != -1000) {
                    uVar21 = (ulong)iVar26;
                    iVar26 = iVar26 + 1;
                    piVar10 = (int*)std::array<int, 2000ul>::operator[]((array<int, 2000ul>*)paVar32, uVar21);
                    Render3(local_70, local_58, *piVar10);
                    if (iVar26 == iVar23) {
                        paVar19 = (array*)std::array<std::array<int, 2000ul>, 12ul>::operator[](
                            (array<std::array<int, 2000ul>, 12ul>*)local_88, 11);
                        bVar29 = std::operator!=((array*)paVar32, paVar19);
                        if (bVar29) {
                            _memcpy(paVar32, paVar19, 8000);
                            piVar10 = (int*)std::array<int, 12ul>::operator[](paVar24, 11);
                            iVar23 = *piVar10;
                            _memcpy(local_48, local_60, 8000);
                            iVar26 = 0;
                        }
                    }
                    iVar20 = -1000;
                    if (iVar26 < iVar23) {
                        piVar10 = (int*)std::array<int, 2000ul>::operator[](local_48, (long)iVar26);
                        iVar20 = *piVar10;
                    }
                }
            }
        }
    }

    // 0x1003620b0, 928 bytes, placed by class name and debug map
    // NXTModelLitRenderer::ObjRenderOrthog(ModelLit&, int, int, int, int, int, int, int, int)
    void NXTModelLitRenderer::ObjRenderOrthog(ModelLit* param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6, int param_7, int param_8, int param_9) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        NXTPix3D* pNVar11;
        int iVar13;
        int* piVar14;
        int iVar15;
        int iVar16;
        ulong uVar17;
        int iVar18;

        if ((**(code**)(param_1->field_0 + 56))(param_1) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTModelLitRenderer.cpp",
                      133, (char*)0);
        }
        if (1 < *(int*)((long)&param_1[29].field_8 + 3) - 1U) {
            param_1->CalcBoundingSphere();
        }
        iVar1 = field_6437224->field_20;
        iVar2 = field_6437224->field_24;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_2);
        iVar3 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_2);
        iVar4 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_3);
        iVar5 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_3);
        iVar6 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_4);
        iVar7 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_4);
        iVar8 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_5);
        iVar9 = *piVar14;
        piVar14 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_5);
        if (0 < *(int*)((long)&param_1[1].field_0 + 3)) {
            iVar10 = *piVar14;
            uVar17 = 0;
            do {
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[1].field_0 + 7), uVar17);
                iVar18 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[2].field_8 + 6), uVar17);
                iVar16 = *piVar14;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), uVar17);
                iVar15 = iVar18;
                if (param_4 != 0) {
                    iVar15 = iVar18 * iVar8 + iVar16 * iVar7 >> 16;
                    iVar16 = iVar16 * iVar8 - iVar18 * iVar7 >> 16;
                }
                iVar18 = *piVar14;
                iVar13 = iVar16;
                if (param_2 != 0) {
                    iVar13 = iVar16 * iVar4 - iVar18 * iVar3 >> 16;
                    iVar18 = iVar18 * iVar4 + iVar16 * iVar3 >> 16;
                }
                iVar16 = iVar15;
                if (param_3 != 0) {
                    iVar16 = iVar15 * iVar6 + iVar18 * iVar5 >> 16;
                    iVar18 = iVar18 * iVar6 - iVar15 * iVar5 >> 16;
                }
                iVar15 = (iVar13 + param_7) * iVar10 - (iVar18 + param_8) * iVar9 >> 16;
                iVar13 = (iVar18 + param_8) * iVar10 + (iVar13 + param_7) * iVar9 >> 16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_65008, uVar17);
                *piVar14 = iVar13 - (iVar10 * param_8 + iVar9 * param_7 >> 16);
                pNVar11 = field_6437224;
                iVar18 = pNVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar17);
                *piVar14 = (iVar18 * (iVar16 + param_6)) / param_9 + iVar1;
                iVar18 = pNVar11->field_16;
                piVar14 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar17);
                *piVar14 = (iVar18 * iVar15) / param_9 + iVar2;
                if (0 < *(int*)((long)&param_1[18].field_8 + 2)) {
                    piVar14 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_6437232,
                               uVar17);
                    *piVar14 = iVar16 + param_6;
                    piVar14 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_6463272,
                               uVar17);
                    *piVar14 = iVar15;
                    piVar14 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&field_6489312,
                               uVar17);
                    *piVar14 = iVar13;
                }
                uVar17 = uVar17 + 1;
            } while ((long)uVar17 < (long)*(int*)((long)&param_1[1].field_0 + 3));
        }
        Render2(this, (ModelLitImpl*)param_1, false, false, 0);
    }

    // 0x100362450, 1392 bytes, placed by class name and debug map
    // NXTModelLitRenderer::WorldRender(ModelSource&, int, int, int, int, int, int, int, int, long long, int, RenderableOverlay&&, bool)
    void NXTModelLitRenderer::WorldRender(ModelSource* param_1, int param_2, int param_3, int param_4, int param_5,
                                          int param_6, int param_7, int param_8, int param_9, longlong param_10,
                                          int param_11, RenderableOverlay* param_12, bool param_13) {
        undefined4 uVar1;
        undefined4 uVar2;
        NXTPix3D* this_00;
        ModelLitImpl* pMVar3;
        NXTModelLitRenderer* pNVar4;
        bool bVar5;
        char cVar6;
        undefined1 uVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        long* plVar11;
        ModelLitImpl* pMVar12;
        AABB* pAVar13;
        undefined4* puVar14;
        ulonglong uVar15;
        int iVar16;
        shared_ptr* extraout_RDX;
        int iVar17;
        int iVar18;
        int iVar19;
        int iVar20;
        NXTModelLitRenderer* this_01;
        uint uVar21;
        int iVar22;
        bool bVar23;
        int iVar24;
        ulong uVar25;
        shared_ptr local_b8;
        ulonglong local_a8;
        shared_ptr local_a0;
        NXTPix3D* local_90;
        ulong local_88;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        int local_70;
        int local_6c;
        ModelLitImpl* local_68;
        int local_5c;
        int local_58;
        int local_54;
        ulong local_48;
        int local_38;

        if (ModelLitRenderer_drawModels == '\0') {
            return;
        }
        local_38 = param_2;
        local_a8 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this);
        (**(code**)(param_1->field_0 + 16))(&local_a0, param_1, param_11);
        bVar5 = operator==(&local_a0, (_func_decltype_nullptr*)0);
        if (!bVar5) {
            plVar11 = (long*)shared_ptr<ModelLit>::operator->((shared_ptr<ModelLit>*)&local_a0);
            cVar6 = (**(code**)(*plVar11 + 56))(plVar11);
            if (cVar6 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!tm->IsForRSeven()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/NXTModelLitRenderer.cpp",
                          227, (char*)0);
            }
            pMVar12 = (ModelLitImpl*)shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)&local_a0);
            pMVar12->CalcBoundingCylinder();
            pMVar12->CalcAABB(local_38);
            *(int*)&param_1->field_8 = pMVar12->field_8;
            local_48 = (ulong)(uint)pMVar12->m_radiusCylinder;
            iVar22 = pMVar12->m_radiusCylinder * param_4 >> 16;
            iVar24 = param_9 * param_6 - param_7 * param_5 >> 16;
            iVar17 = iVar24 * param_4 + param_8 * param_3 >> 16;
            iVar10 = iVar17 + iVar22;
            local_68 = pMVar12;
            if (50 < iVar10) {
                this_00 = ((NXTModelLitRenderer*)this)->field_6437224;
                iVar8 = this_00->GetRenderDepth();
                if (iVar17 < iVar8) {
                    iVar20 = param_7 * param_6 + param_9 * param_5;
                    iVar18 = iVar20 >> 16;
                    iVar8 = this_00->field_16;
                    iVar16 = (iVar18 - (int)local_48) * iVar8;
                    iVar9 = iVar16 / iVar10;
                    if (iVar9 < this_00->field_40) {
                        iVar19 = (iVar18 + (int)local_48) * iVar8;
                        iVar18 = iVar19 / iVar10;
                        if (this_00->field_36 < iVar18) {
                            uVar21 = (int)local_48 * param_3 >> 16;
                            local_48 = (ulong)uVar21;
                            local_5c = param_8 * param_4 - iVar24 * param_3;
                            local_7c = ((local_68->field_508 * param_4 >> 16) + uVar21 + (local_5c >> 16)) * iVar8;
                            local_80 = iVar18;
                            if (this_00->field_44 < local_7c / iVar10) {
                                uVar21 = ((local_5c >> 16) - (uVar21 + (local_68->field_8 * param_4 >> 16))) * iVar8;
                                iVar24 = (int)uVar21 / iVar10;
                                if (iVar24 < (int)this_00->field_48) {
                                    local_90 = this_00;
                                    local_88 = (ulong)uVar21;
                                    local_78 = iVar9;
                                    local_74 = iVar16;
                                    local_70 = iVar19;
                                    local_6c = iVar24;
                                    local_58 = local_7c / iVar10;
                                    local_54 = MousePickingHelper::GetMouseScreenX();
                                    iVar10 = MousePickingHelper::GetMouseScreenY();
                                    uVar7 = MousePickingHelper::IsMousePickingEnabled();
                                    local_48 = CONCAT71(local_48._1_7_, uVar7);
                                    cVar6 = MousePickingHelper::IsActiveEntityTypecode(param_10);
                                    pMVar12 = local_68;
                                    if (((cVar6 != '\0') && ((char)local_48 != '\0')) && (!param_13)) {
                                        if (MousePickingHelper::m_useAABBMouseCheck == '\0') {
                                            iVar22 = iVar17 - iVar22;
                                            iVar24 = 50;
                                            if (50 < iVar22) {
                                                iVar24 = iVar22;
                                            }
                                            if (iVar20 < 65536) {
                                                iVar22 = local_74 / iVar24;
                                                iVar8 = local_80;
                                            } else {
                                                iVar22 = local_78;
                                                iVar8 = local_70 / iVar24;
                                            }
                                            if (local_5c < 65536) {
                                                iVar9 = (int)((long)((ulong)(uint)((int)local_88 >> 31) << 32 |
                                                                     local_88 & 4294967295) /
                                                              (long)iVar24);
                                                iVar24 = local_58;
                                            } else {
                                                iVar24 = local_7c / iVar24;
                                                iVar9 = local_6c;
                                            }
                                            iVar16 = local_54 - local_90->field_20;
                                            iVar10 = iVar10 - local_90->field_24;
                                            bVar5 = iVar10 < iVar24 &&
                                                    (iVar9 < iVar10 && (iVar16 < iVar8 && iVar22 < iVar16));
                                        } else {
                                            bVar5 = MousePickingHelper::IsMouseIntersectingModelAABB<NXTPix3D>(
                                                local_68, local_38, param_7, param_8, param_9,
                                                (ModelLitRenderer*)(NXTModelLitRenderer*)this);
                                        }
                                        bVar23 = bVar5;
                                        if (bVar5 != false) {
                                            pAVar13 = (AABB*)eastl::hash_map<
                                                int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                                                eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>,
                                                false>::
                                            operator[](
                                                (hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                                                          eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul,
                                                                                           true, eastl::allocator>,
                                                          false>*)&pMVar12->field_528,
                                                &local_38);
                                            cVar6 = MousePickingHelper::IsAABBWithinMaxViewDistance(pAVar13, param_7,
                                                                                                    param_9);
                                            bVar23 = false;
                                            if (cVar6 != '\0') {
                                                bVar23 = bVar5;
                                            }
                                        }
                                        if ((bVar23 != false) &&
                                            ((pMVar12->field_16[0] != '\0' ||
                                              (cVar6 = IsMousePointingInsideModel((NXTModelLitRenderer*)this, pMVar12,
                                                                                  local_38, param_3, param_4, param_5,
                                                                                  param_6, param_7, param_8, param_9),
                                               cVar6 != '\0')))) {
                                            MousePickingHelper::AddPickingEntity(param_10);
                                        }
                                    }
                                    uVar25 = (ulong)local_38;
                                    puVar14 = (undefined4*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, uVar25);
                                    uVar1 = *puVar14;
                                    puVar14 = (undefined4*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, uVar25);
                                    pMVar3 = local_68;
                                    if (pMVar12->field_516 < 6000) {
                                        uVar2 = *puVar14;
                                        if (local_68->field_492 != '\0') {
                                            (*(code*)((NXTModelLitRenderer*)this)->field_0[3])(
                                                (NXTModelLitRenderer*)this, local_68);
                                        }
                                        this_01 = (NXTModelLitRenderer*)this;
                                        (*(code*)((NXTModelLitRenderer*)this)->field_0[5])(
                                            (NXTModelLitRenderer*)this, pMVar3->field_488, param_10, pMVar3->field_516,
                                            pMVar3->field_520, param_3, param_4, param_5, param_6, uVar1, uVar2,
                                            param_7, param_8, param_9, iVar17, 0, param_13, param_12);
                                        pNVar4 = (NXTModelLitRenderer*)this;
                                        if (pMVar3->field_500 == '\0') {
                                            if (pMVar3->field_496 == -1) {
                                                static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                                                    &local_b8, (jag*)&local_a0, extraout_RDX);
                                                (&pNVar4->field_6515360, &local_b8)->push_back();
                                                this_01 = (NXTModelLitRenderer*)&local_b8;
                                                this_01->~shared_ptr();
                                            }
                                            pMVar3->field_496 = pNVar4->field_6515352;
                                        }
                                        uVar15 =
                                            SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)this_01);
                                        ModelLitRenderer_lastModelLitWorldRenderTotalNanos =
                                            ModelLitRenderer_lastModelLitWorldRenderTotalNanos + (uVar15 - local_a8);
                                        ModelLitRenderer_lastModelLitWorldRenderTotal =
                                            ModelLitRenderer_lastModelLitWorldRenderTotal + 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        local_a0.~shared_ptr();
    }

    // 0x1003629c0, 608 bytes, placed by class name and debug map
    // NXTModelLitRenderer::IsMousePointingInsideModel(ModelLitImpl const&, int, int, int, int, int, int, int, int)
    undefined8 NXTModelLitRenderer::IsMousePointingInsideModel(ModelLitImpl* param_1, int param_2, int param_3,
                                                               int param_4, int param_5, int param_6, int param_7,
                                                               int param_8, int param_9) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        NXTPix3D* pNVar7;
        int iVar8;
        int* piVar9;
        undefined4* puVar10;
        int* piVar11;
        undefined8 uVar12;
        int iVar13;
        int iVar14;
        array<int, 6500ul>* this_02;
        int iVar15;
        ulong uVar16;

        if (param_1->field_516 < 6000) {
            iVar1 = field_6437224->field_20;
            iVar2 = field_6437224->field_24;
            piVar9 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_2);
            iVar3 = *piVar9;
            piVar9 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_2);
            this_00 = &field_39008;
            this_01 = &field_13008;
            if (0 < param_1->field_20) {
                iVar4 = *piVar9;
                uVar16 = 0;
                do {
                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_24, uVar16);
                    iVar13 = *piVar9;
                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_48, uVar16);
                    iVar5 = *piVar9;
                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_72, uVar16);
                    iVar8 = *piVar9;
                    iVar14 = iVar13;
                    if (param_2 != 0) {
                        iVar14 = iVar13 * iVar4 + iVar8 * iVar3 >> 16;
                        iVar8 = iVar8 * iVar4 - iVar13 * iVar3 >> 16;
                    }
                    iVar13 = (iVar8 + param_9) * param_6 - (iVar14 + param_7) * param_5 >> 16;
                    iVar15 = iVar13 * param_4 + (iVar5 + param_8) * param_3;
                    if (iVar15 < 3276800) {
                        puVar10 =
                            (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_00, uVar16);
                        *puVar10 = 4294967295;
                        iVar13 = -1;
                        this_02 = (array<int, 6500ul>*)this_01;
                    } else {
                        iVar15 = iVar15 >> 16;
                        pNVar7 = field_6437224;
                        iVar6 = pNVar7->field_16;
                        piVar9 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)this_01, uVar16);
                        *piVar9 =
                            (((iVar14 + param_7) * param_6 + (iVar8 + param_9) * param_5 >> 16) * iVar6) / iVar15 +
                            iVar1;
                        iVar13 = (((iVar5 + param_8) * param_4 - iVar13 * param_3 >> 16) * pNVar7->field_16) / iVar15 +
                                 iVar2;
                        this_02 = (array<int, 6500ul>*)this_00;
                    }
                    piVar9 = (int*)std::array<int, 6500ul>::operator[](this_02, uVar16);
                    *piVar9 = iVar13;
                    uVar16 = uVar16 + 1;
                } while ((long)uVar16 < (long)param_1->field_20);
            }
            piVar9 = (int*)this_01->data();
            piVar11 = (int*)this_00->data();
            uVar12 = MousePickingHelper::DoesMouseIntersectModelPoints((ModelLit*)param_1, piVar9, piVar11, 5);
        } else {
            uVar12 = 0;
        }
        return uVar12;
    }

    // 0x100362cd0, 2768 bytes, placed by class name and debug map
    // NXTModelLitRenderer::Render3(ModelLitImpl const&, int)
    void NXTModelLitRenderer::Render3(ModelLitImpl* param_1, int param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* puVar1;
        short sVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        bool bVar10;
        int* piVar11;
        undefined4* puVar12;
        undefined1* puVar13;
        Array<signed char, eastl::allocator>* pAVar14;
        byte* pbVar15;
        ulong uVar16;
        ulong uVar17;
        Array<short, eastl::allocator>* pAVar18;
        short* psVar19;
        char* pcVar20;
        uint* puVar21;
        ulong uVar23;
        uint uVar24;
        float fVar25;
        float fVar26;
        float fVar27;
        float fVar28;
        float fVar29;
        float fVar30;
        float fVar31;
        float fVar32;
        float fVar33;
        float fVar34;
        float fVar35;
        float fVar36;
        float local_7c;
        float local_78;
        float local_74;
        ulong local_70;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        float local_58;
        float local_54;
        NXTPix3D* local_50;
        NXTPix3D* local_48;
        float local_3c;
        float local_38;
        float local_34;

        piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_104,
                                                                 (ulong)param_2);
        local_38 = (float)*piVar11;
        puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
            (Array<int, eastl::allocator>*)&param_1->field_128, (ulong)param_2);
        local_50 = (NXTPix3D*)CONCAT44(local_50._4_4_, *puVar12);
        piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_152,
                                                                 (ulong)param_2);
        iVar3 = *piVar11;
        puVar13 = (undefined1*)std::array<bool, 6500ul>::operator[]((array<bool, 6500ul>*)&field_8, (ulong)param_2);
        field_6437224->field_8 = (bool)*puVar13;
        uVar24 = 0;
        bVar10 = operator==((shared_ptr*)param_1->field_264, (_func_decltype_nullptr*)0);
        if (!bVar10) {
            pAVar14 =
                (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_264);
            pbVar15 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar14, (ulong)param_2);
            uVar24 = (uint)*pbVar15;
        }
        local_70 = (ulong)(int)local_38;
        uVar16 = (ulong)(int)local_50._0_4_;
        uVar17 = (ulong)iVar3;
        field_6437224->field_12 = uVar24;
        puVar13 = param_1->field_296;
        local_3c = (float)iVar3;
        bVar10 = operator==((shared_ptr*)puVar13, (_func_decltype_nullptr*)0);
        if (!bVar10) {
            pAVar18 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)puVar13);
            psVar19 = (short*)Array<short, eastl::allocator>::operator[](pAVar18, (ulong)param_2);
            if (*psVar19 != -1) {
                puVar1 = param_1->field_280;
                bVar10 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
                if (bVar10) {
                    pAVar14 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar1);
                    pcVar20 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar14, (ulong)param_2);
                    fVar25 = local_38;
                    if (*pcVar20 != -1) {
                        pAVar14 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar1);
                        pbVar15 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar14, (ulong)param_2);
                        uVar23 = (ulong)*pbVar15;
                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_320, uVar23);
                        fVar25 = (float)*piVar11;
                        puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_344, uVar23);
                        local_50 = (NXTPix3D*)CONCAT44(local_50._4_4_, *puVar12);
                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_368, uVar23);
                        local_3c = (float)*piVar11;
                    }
                } else {
                    fVar25 = local_38;
                }
                puVar1 = &field_6437232;
                uVar23 = (ulong)(int)fVar25;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar23);
                local_48._0_4_ = (float)*piVar11;
                this_00 = &field_6463272;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar23);
                local_34 = (float)*piVar11;
                this_01 = &field_6489312;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar23);
                local_38 = (float)*piVar11;
                uVar23 = (ulong)(int)local_50._0_4_;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar23);
                local_54 = (float)*piVar11 - local_48._0_4_;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar23);
                fVar25 = (float)*piVar11 - local_34;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar23);
                fVar26 = (float)*piVar11 - local_38;
                uVar23 = (ulong)(int)local_3c;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar23);
                fVar27 = (float)*piVar11 - local_48._0_4_;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar23);
                fVar28 = (float)*piVar11 - local_34;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar23);
                uVar23 = local_70;
                fVar29 = (float)*piVar11 - local_38;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        local_70);
                fVar30 = (float)*piVar11 - local_48._0_4_;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar23);
                local_60 = (float)*piVar11 - local_34;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar23);
                local_50._0_4_ = (float)*piVar11 - local_38;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar16);
                local_5c = (float)*piVar11 - local_48._0_4_;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar16);
                local_58 = (float)*piVar11 - local_34;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar16);
                local_3c = (float)*piVar11 - local_38;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar17);
                local_48 = (NXTPix3D*)CONCAT44(local_48._4_4_, (float)*piVar11 - local_48._0_4_);
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar17);
                local_34 = (float)*piVar11 - local_34;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar17);
                fVar31 = (float)*piVar11 - local_38;
                fVar35 = fVar29 * fVar25 - fVar28 * fVar26;
                local_38 = fVar27 * fVar26 - fVar29 * local_54;
                fVar36 = fVar28 * local_54 - fVar27 * fVar25;
                fVar32 = fVar36 * fVar28 - local_38 * fVar29;
                fVar33 = fVar35 * fVar29 - fVar36 * fVar27;
                fVar34 = local_38 * fVar27 - fVar35 * fVar28;
                local_74 = 1.0 / (fVar34 * fVar26 + fVar33 * fVar25 + fVar32 * local_54);
                local_7c = (local_50._0_4_ * fVar34 + fVar33 * local_60 + fVar32 * fVar30) * local_74;
                local_78 = (local_3c * fVar34 + local_58 * fVar33 + local_5c * fVar32) * local_74;
                local_74 = (fVar34 * fVar31 + fVar33 * local_34 + fVar32 * local_48._0_4_) * local_74;
                local_68 = 0.0;
                local_64 = 1.0;
                local_7c = jag::math::Clamp<float>(&local_7c, &local_68, &local_64);
                local_68 = 0.0;
                local_64 = 1.0;
                local_78 = jag::math::Clamp<float>(&local_78, &local_68, &local_64);
                local_68 = 0.0;
                local_64 = 1.0;
                local_74 = jag::math::Clamp<float>(&local_74, &local_68, &local_64);
                fVar32 = fVar36 * fVar25 - local_38 * fVar26;
                fVar26 = fVar26 * fVar35 - fVar36 * local_54;
                fVar25 = local_38 * local_54 - fVar35 * fVar25;
                local_38 = 1.0 / (fVar29 * fVar25 + fVar28 * fVar26 + fVar27 * fVar32);
                local_50 = (NXTPix3D*)CONCAT44(
                    local_50._4_4_, (local_50._0_4_ * fVar25 + local_60 * fVar26 + fVar30 * fVar32) * local_38);
                local_3c = (local_3c * fVar25 + local_58 * fVar26 + local_5c * fVar32) * local_38;
                local_38 = (fVar25 * fVar31 + fVar26 * local_34 + fVar32 * local_48._0_4_) * local_38;
                piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, (ulong)param_2);
                uVar23 = local_70;
                local_34 = (float)*piVar11;
                local_48 = field_6437224;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        local_70);
                iVar3 = *piVar11;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar16);
                local_60 = (float)*piVar11;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_00,
                        uVar17);
                local_5c = (float)*piVar11;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar23);
                local_58 = (float)*piVar11;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar16);
                local_54 = (float)*piVar11;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar17);
                iVar4 = *piVar11;
                puVar21 = (uint*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar23);
                local_70 = (ulong)*puVar21;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar16);
                iVar5 = *piVar11;
                piVar11 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            this_01,
                        uVar17);
                iVar6 = *piVar11;
                puVar1 = &param_1->field_176;
                piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1,
                                                                         (ulong)param_2);
                iVar7 = *piVar11;
                if (local_34 == -NAN) {
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1,
                                                                             (ulong)param_2);
                    iVar8 = *piVar11;
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1,
                                                                             (ulong)param_2);
                    fVar26 = local_74;
                    fVar25 = local_7c;
                    iVar9 = *piVar11;
                    local_34 = local_78;
                    pAVar18 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)puVar13);
                    psVar19 = (short*)Array<short, eastl::allocator>::operator[](pAVar18, (ulong)param_2);
                    sVar2 = *psVar19;
                } else {
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_200, (ulong)param_2);
                    iVar8 = *piVar11;
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_224, (ulong)param_2);
                    fVar26 = local_74;
                    fVar25 = local_7c;
                    iVar9 = *piVar11;
                    local_34 = local_78;
                    pAVar18 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)puVar13);
                    psVar19 = (short*)Array<short, eastl::allocator>::operator[](pAVar18, (ulong)param_2);
                    sVar2 = *psVar19;
                }
                local_48->TextureTriangleOpenGL(iVar3, (int)local_60, (int)local_5c, (int)local_58, (int)local_54,
                                                iVar4, (int)local_70, iVar5, iVar6, iVar7, iVar8, iVar9, fVar25,
                                                local_34, fVar26, local_50._0_4_, local_3c, local_38, (int)sVar2);
                return;
            }
        }
        piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                 (ulong)param_2);
        uVar23 = local_70;
        local_3c = (float)*piVar11;
        local_50 = field_6437224;
        puVar13 = &field_39008;
        piVar11 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar13, local_70);
        local_38 = (float)*piVar11;
        piVar11 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar13, uVar16);
        local_34 = (float)*piVar11;
        puVar12 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar13, uVar17);
        local_48 = (NXTPix3D*)CONCAT44(local_48._4_4_, *puVar12);
        puVar13 = &field_13008;
        puVar12 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar13, uVar23);
        local_70 = CONCAT44(local_70._4_4_, *puVar12);
        piVar11 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar13, uVar16);
        iVar3 = *piVar11;
        piVar11 = (int*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)puVar13, uVar17);
        iVar4 = *piVar11;
        piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_176,
                                                                 (ulong)param_2);
        iVar5 = *piVar11;
        if (local_3c == -NAN) {
            piVar11 = (int*)std::array<int, 65536ul>::operator[]((long)iVar5);
            local_50->FlatTriangle((int)local_38, (int)local_34, (int)local_48._0_4_, (int)local_70, iVar3, iVar4,
                                   *piVar11);
        } else {
            piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     (ulong)param_2);
            iVar6 = *piVar11;
            piVar11 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     (ulong)param_2);
            local_50->GouraudTriangle((int)local_38, (int)local_34, (int)local_48._0_4_, (int)local_70, iVar3, iVar4,
                                      iVar5, iVar6, *piVar11);
        }
    }

    // 0x100363c50, 6672 bytes, placed by class name
    // NXTModelLitRenderer::Render3ZClip(ModelLitImpl const&, int)
    void NXTModelLitRenderer::Render3ZClip(ModelLitImpl* param_1, int param_2) {
        undefined1* puVar1;
        undefined1* puVar2;
        undefined1* puVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        int iVar9;
        int iVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        undefined4 uVar15;
        undefined4 uVar16;
        undefined4 uVar17;
        undefined4 uVar18;
        undefined4 uVar19;
        undefined4 uVar20;
        undefined4 uVar21;
        undefined4 uVar22;
        NXTPix3D* pNVar23;
        bool bVar24;
        int* piVar25;
        Array<signed char, eastl::allocator>* pAVar26;
        byte* pbVar27;
        undefined4* puVar28;
        Array<short, eastl::allocator>* pAVar29;
        short* psVar30;
        char* pcVar31;
        int* piVar32;
        int* piVar33;
        undefined4* puVar34;
        undefined4* puVar35;
        int iVar36;
        int iVar37;
        ulong uVar38;
        ulong uVar39;
        ulong uVar40;
        undefined1* puVar41;
        ulong uVar42;
        int iVar43;
        int iVar44;
        ulong uVar45;
        uint uVar46;
        int iVar47;
        int iVar48;
        undefined1* puVar49;
        undefined1* puVar50;
        int iVar51;
        int iVar52;

        iVar4 = field_6437224->field_20;
        iVar5 = field_6437224->field_24;
        uVar38 = (ulong)param_2;
        piVar25 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_104, uVar38);
        iVar44 = *piVar25;
        piVar25 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_128, uVar38);
        iVar48 = *piVar25;
        piVar25 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_152, uVar38);
        iVar36 = *piVar25;
        puVar1 = &field_6489312;
        uVar45 = (ulong)iVar44;
        piVar25 = (int*)eastl::
            vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar1,
                uVar45);
        iVar6 = *piVar25;
        uVar39 = (ulong)iVar48;
        piVar25 = (int*)eastl::
            vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar1,
                uVar39);
        iVar7 = *piVar25;
        uVar40 = (ulong)iVar36;
        piVar25 = (int*)eastl::
            vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar1,
                uVar40);
        iVar51 = *piVar25;
        uVar46 = 0;
        bVar24 = operator==((shared_ptr*)param_1->field_264, (_func_decltype_nullptr*)0);
        if (!bVar24) {
            pAVar26 =
                (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_264);
            pbVar27 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
            uVar46 = (uint)*pbVar27;
        }
        field_6437224->field_12 = uVar46;
        if (iVar6 < 50) {
            puVar2 = &field_6437232;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar2,
                    uVar45);
            iVar10 = *piVar25;
            puVar41 = &field_6463272;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar41,
                    uVar45);
            iVar52 = *piVar25;
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_176,
                                                                     uVar38);
            iVar37 = *piVar25;
            bVar24 = 49 < iVar51;
            if (bVar24) {
                piVar25 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_divTable2,
                                                                    (long)(iVar51 - iVar6));
                iVar43 = (50 - iVar6) * *piVar25;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar2,
                        uVar40);
                iVar9 = *piVar25;
                iVar47 = field_6437224->field_16;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, 0);
                *piVar25 = ((((iVar9 - iVar10) * iVar43 >> 16) + iVar10) * iVar47) / 50 + iVar4;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        uVar40);
                iVar9 = *piVar25;
                iVar47 = field_6437224->field_16;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, 0);
                *piVar25 = ((((iVar9 - iVar52) * iVar43 >> 16) + iVar52) * iVar47) / 50 + iVar5;
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, uVar38);
                iVar9 = *piVar25;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, 0);
                *piVar25 = ((iVar9 - iVar37) * iVar43 >> 16) + iVar37;
            }
            uVar46 = (uint)bVar24;
            if (iVar7 < 50)
                goto joined_r0x000100364417;
            piVar25 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_divTable2,
                                                                (long)(iVar7 - iVar6));
            iVar43 = (50 - iVar6) * *piVar25;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar2,
                    uVar39);
            iVar9 = *piVar25;
            iVar47 = field_6437224->field_16;
            uVar42 = (ulong)(uint)bVar24;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar42);
            *piVar25 = ((((iVar9 - iVar10) * iVar43 >> 16) + iVar10) * iVar47) / 50 + iVar4;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar41,
                    uVar39);
            iVar10 = *piVar25;
            iVar9 = field_6437224->field_16;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar42);
            *piVar25 = ((((iVar10 - iVar52) * iVar43 >> 16) + iVar52) * iVar9) / 50 + iVar5;
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     uVar38);
            iVar10 = *piVar25;
            uVar46 = bVar24 + 1;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar42);
            *piVar25 = ((iVar10 - iVar37) * iVar43 >> 16) + iVar37;
            if (49 < iVar7)
                goto LAB_10036441d;
        LAB_1003640b8:
            puVar2 = &field_6437232;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar2,
                    uVar39);
            iVar10 = *piVar25;
            puVar41 = &field_6463272;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar41,
                    uVar39);
            iVar52 = *piVar25;
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     uVar38);
            iVar37 = *piVar25;
            if (49 < iVar6) {
                piVar25 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_divTable2,
                                                                    (long)(iVar6 - iVar7));
                iVar43 = (50 - iVar7) * *piVar25;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar2,
                        uVar45);
                iVar9 = *piVar25;
                iVar47 = field_6437224->field_16;
                uVar42 = (ulong)uVar46;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar42);
                *piVar25 = ((((iVar9 - iVar10) * iVar43 >> 16) + iVar10) * iVar47) / 50 + iVar4;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        uVar45);
                iVar9 = *piVar25;
                iVar47 = field_6437224->field_16;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar42);
                *piVar25 = ((((iVar9 - iVar52) * iVar43 >> 16) + iVar52) * iVar47) / 50 + iVar5;
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, uVar38);
                iVar9 = *piVar25;
                uVar46 = uVar46 + 1;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar42);
                *piVar25 = ((iVar9 - iVar37) * iVar43 >> 16) + iVar37;
            }
            if (49 < iVar51) {
                piVar25 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_divTable2,
                                                                    (long)(iVar51 - iVar7));
                iVar43 = (50 - iVar7) * *piVar25;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar2,
                        uVar40);
                iVar9 = *piVar25;
                iVar47 = field_6437224->field_16;
                uVar42 = (ulong)uVar46;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar42);
                *piVar25 = ((((iVar9 - iVar10) * iVar43 >> 16) + iVar10) * iVar47) / 50 + iVar4;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        uVar40);
                iVar10 = *piVar25;
                iVar9 = field_6437224->field_16;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar42);
                *piVar25 = ((((iVar10 - iVar52) * iVar43 >> 16) + iVar52) * iVar9) / 50 + iVar5;
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, uVar38);
                iVar37 = ((*piVar25 - iVar37) * iVar43 >> 16) + iVar37;
                goto LAB_1003645c9;
            }
            if (iVar51 < 50)
                goto LAB_10036426c;
        LAB_1003645f0:
            puVar28 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar40);
            uVar8 = *puVar28;
            uVar39 = (ulong)uVar46;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar39);
            *puVar28 = uVar8;
            puVar28 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar40);
            uVar8 = *puVar28;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar39);
            *puVar28 = uVar8;
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     uVar38);
            iVar37 = *piVar25;
        LAB_100364789:
            uVar46 = uVar46 + 1;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar39);
            *piVar25 = iVar37;
        } else {
            puVar28 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar45);
            uVar8 = *puVar28;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, 0);
            *puVar28 = uVar8;
            puVar28 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar45);
            uVar8 = *puVar28;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, 0);
            *puVar28 = uVar8;
            puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)&param_1->field_176, uVar38);
            uVar8 = *puVar28;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, 0);
            *puVar28 = uVar8;
            uVar46 = 1;
        joined_r0x000100364417:
            if (iVar7 < 50)
                goto LAB_1003640b8;
        LAB_10036441d:
            uVar42 = (ulong)uVar46;
            puVar28 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_13008, uVar39);
            uVar8 = *puVar28;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar42);
            *puVar28 = uVar8;
            puVar28 = (undefined4*)std::array<int, 6500ul>::operator[]((array<int, 6500ul>*)&field_39008, uVar39);
            uVar8 = *puVar28;
            puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar42);
            *puVar28 = uVar8;
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_200,
                                                                     uVar38);
            iVar37 = *piVar25;
        LAB_1003645c9:
            uVar46 = uVar46 + 1;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar42);
            *piVar25 = iVar37;
            if (49 < iVar51)
                goto LAB_1003645f0;
        LAB_10036426c:
            puVar2 = &field_6437232;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar2,
                    uVar40);
            iVar10 = *piVar25;
            puVar41 = &field_6463272;
            piVar25 = (int*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)puVar41,
                    uVar40);
            iVar52 = *piVar25;
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     uVar38);
            iVar37 = *piVar25;
            if (49 < iVar7) {
                piVar25 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_divTable2,
                                                                    (long)(iVar7 - iVar51));
                iVar47 = (50 - iVar51) * *piVar25;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar2,
                        uVar39);
                iVar7 = *piVar25;
                iVar9 = field_6437224->field_16;
                uVar40 = (ulong)uVar46;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar40);
                *piVar25 = ((((iVar7 - iVar10) * iVar47 >> 16) + iVar10) * iVar9) / 50 + iVar4;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        uVar39);
                iVar7 = *piVar25;
                iVar9 = field_6437224->field_16;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar40);
                *piVar25 = ((((iVar7 - iVar52) * iVar47 >> 16) + iVar52) * iVar9) / 50 + iVar5;
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_200, uVar38);
                iVar7 = *piVar25;
                uVar46 = uVar46 + 1;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437184, uVar40);
                *piVar25 = ((iVar7 - iVar37) * iVar47 >> 16) + iVar37;
            }
            if (49 < iVar6) {
                piVar25 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_divTable2,
                                                                    (long)(iVar6 - iVar51));
                iVar51 = (50 - iVar51) * *piVar25;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar2,
                        uVar45);
                iVar6 = *piVar25;
                iVar7 = field_6437224->field_16;
                uVar39 = (ulong)uVar46;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437104, uVar39);
                *piVar25 = ((((iVar6 - iVar10) * iVar51 >> 16) + iVar10) * iVar7) / 50 + iVar4;
                piVar25 = (int*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        uVar45);
                iVar4 = *piVar25;
                iVar6 = field_6437224->field_16;
                piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)&field_6437144, uVar39);
                *piVar25 = ((((iVar4 - iVar52) * iVar51 >> 16) + iVar52) * iVar6) / 50 + iVar5;
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, uVar38);
                iVar37 = ((*piVar25 - iVar37) * iVar51 >> 16) + iVar37;
                goto LAB_100364789;
            }
        }
        puVar2 = &field_6437104;
        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 0);
        iVar4 = *piVar25;
        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 1);
        iVar5 = *piVar25;
        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 2);
        iVar6 = *piVar25;
        puVar41 = &field_6437144;
        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 0);
        iVar7 = *piVar25;
        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 1);
        iVar51 = *piVar25;
        piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 2);
        iVar10 = *piVar25;
        pNVar23 = field_6437224;
        pNVar23->field_8 = false;
        if (uVar46 != 4) {
            if (uVar46 != 3) {
                return;
            }
            if ((((iVar4 < 0) || (iVar5 < 0)) || (iVar6 < 0)) ||
                (((iVar52 = pNVar23->field_28, iVar52 < iVar4 || (iVar52 < iVar5)) || (iVar52 < iVar6)))) {
                pNVar23->field_8 = true;
            }
            puVar2 = param_1->field_296;
            bVar24 = operator==((shared_ptr*)puVar2, (_func_decltype_nullptr*)0);
            if (!bVar24) {
                pAVar29 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)puVar2);
                psVar30 = (short*)Array<short, eastl::allocator>::operator[](pAVar29, uVar38);
                if (*psVar30 != -1) {
                    puVar41 = param_1->field_280;
                    bVar24 = operator!=((shared_ptr*)puVar41, (_func_decltype_nullptr*)0);
                    if (bVar24) {
                        pAVar26 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar41);
                        pcVar31 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                        if (*pcVar31 != -1) {
                            pAVar26 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)puVar41);
                            pbVar27 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                            uVar39 = (ulong)*pbVar27;
                            piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_320, uVar39);
                            iVar44 = *piVar25;
                            piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_344, uVar39);
                            iVar48 = *piVar25;
                            piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_368, uVar39);
                            iVar36 = *piVar25;
                        }
                    }
                    piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_224, uVar38);
                    pNVar23 = field_6437224;
                    if (*piVar25 == -1) {
                        puVar41 = &param_1->field_176;
                        Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar41, uVar38);
                        Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar41, uVar38);
                        Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar41, uVar38);
                        puVar41 = &field_6437232;
                        eastl::vector<int,
                                      eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar41,
                            (long)iVar44);
                        eastl::vector<int,
                                      eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar41,
                            (long)iVar48);
                        eastl::vector<int,
                                      eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar41,
                            (long)iVar36);
                    } else {
                        puVar41 = &field_6437184;
                        std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 0);
                        std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 1);
                        std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 2);
                        puVar41 = &field_6437232;
                        eastl::vector<int,
                                      eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar41,
                            (long)iVar44);
                        eastl::vector<int,
                                      eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar41,
                            (long)iVar48);
                        eastl::vector<int,
                                      eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                                puVar41,
                            (long)iVar36);
                    }
                    puVar41 = &field_6463272;
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        (long)iVar44);
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        (long)iVar48);
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar41,
                        (long)iVar36);
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        (long)iVar44);
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        (long)iVar48);
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        (long)iVar36);
                    pAVar29 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)puVar2);
                    Array<short, eastl::allocator>::operator[](pAVar29, uVar38);
                    (*(code*)pNVar23->field_0[10])();
                    return;
                }
            }
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224,
                                                                     uVar38);
            pNVar23 = field_6437224;
            if (*piVar25 == -1) {
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_176, uVar38);
                piVar25 = (int*)std::array<int, 65536ul>::operator[]((long)*piVar25);
                pNVar23->FlatTriangle(iVar7, iVar51, iVar10, iVar4, iVar5, iVar6, *piVar25);
                return;
            }
            puVar1 = &field_6437184;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 0);
            iVar44 = *piVar25;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 1);
            iVar48 = *piVar25;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 2);
            pNVar23->GouraudTriangle(iVar7, iVar51, iVar10, iVar4, iVar5, iVar6, iVar44, iVar48, *piVar25);
            return;
        }
        if (((-1 < iVar4) && (-1 < iVar5)) &&
            ((-1 < iVar6 &&
              (((iVar52 = field_6437224->field_28, iVar4 <= iVar52 && (iVar5 <= iVar52)) && (iVar6 <= iVar52)))))) {
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
            if ((-1 < *piVar25) && (*piVar25 <= iVar52))
                goto LAB_100364d20;
        }
        field_6437224->field_8 = true;
    LAB_100364d20:
        puVar3 = param_1->field_296;
        bVar24 = operator==((shared_ptr*)puVar3, (_func_decltype_nullptr*)0);
        if (!bVar24) {
            pAVar29 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                (shared_ptr<Array<short, eastl::allocator>>*)puVar3);
            psVar30 = (short*)Array<short, eastl::allocator>::operator[](pAVar29, uVar38);
            if (*psVar30 != -1) {
                puVar49 = param_1->field_280;
                bVar24 = operator!=((shared_ptr*)puVar49, (_func_decltype_nullptr*)0);
                if (bVar24) {
                    pAVar26 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar49);
                    pcVar31 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                    if (*pcVar31 != -1) {
                        pAVar26 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar49);
                        pbVar27 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                        uVar39 = (ulong)*pbVar27;
                        piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_320, uVar39);
                        iVar44 = *piVar25;
                        piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_344, uVar39);
                        iVar48 = *piVar25;
                        piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_368, uVar39);
                        iVar36 = *piVar25;
                    }
                }
                pAVar29 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)puVar3);
                psVar30 = (short*)Array<short, eastl::allocator>::operator[](pAVar29, uVar38);
                iVar52 = (int)*psVar30;
                piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_1->field_224, uVar38);
                pNVar23 = field_6437224;
                if (*piVar25 == -1) {
                    puVar50 = &param_1->field_176;
                    puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar50, uVar38);
                    uVar8 = *puVar28;
                    puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar50, uVar38);
                    uVar11 = *puVar28;
                    puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar50, uVar38);
                    uVar12 = *puVar28;
                    puVar3 = &field_6437232;
                    uVar45 = (ulong)iVar44;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar3,
                        uVar45);
                    uVar13 = *puVar28;
                    uVar39 = (ulong)iVar48;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar3,
                        uVar39);
                    uVar14 = *puVar28;
                    uVar40 = (ulong)iVar36;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar3,
                        uVar40);
                    uVar15 = *puVar28;
                    puVar49 = &field_6463272;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar45);
                    uVar16 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar39);
                    uVar17 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar40);
                    uVar18 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar45);
                    uVar19 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar39);
                    uVar20 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar40);
                    (*(code*)pNVar23->field_0[10])(pNVar23, iVar7, iVar51, iVar10, iVar4, iVar5, iVar6, uVar8, uVar11,
                                                   uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19,
                                                   uVar20, *puVar28, iVar52);
                    pNVar23 = field_6437224;
                    puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 3);
                    uVar8 = *puVar28;
                    puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
                    uVar11 = *puVar28;
                    puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar50, uVar38);
                    uVar12 = *puVar28;
                    puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar50, uVar38);
                    uVar13 = *puVar28;
                    puVar28 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar50, uVar38);
                    uVar14 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar3,
                        uVar45);
                    uVar15 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar3,
                        uVar39);
                    uVar16 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar3,
                        uVar40);
                    uVar17 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar45);
                    uVar18 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar39);
                    uVar19 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar40);
                    uVar20 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar45);
                    uVar21 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar39);
                    uVar22 = *puVar28;
                    puVar28 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar40);
                    (*(code*)pNVar23->field_0[10])(pNVar23, iVar7, iVar10, uVar8, iVar4, iVar6, uVar11, uVar12, uVar13,
                                                   uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, uVar20, uVar21,
                                                   uVar22, *puVar28, iVar52);
                    return;
                }
                puVar3 = &field_6437184;
                puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 0);
                uVar8 = *puVar28;
                puVar34 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 1);
                uVar11 = *puVar34;
                puVar34 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 2);
                uVar12 = *puVar34;
                puVar49 = &field_6437232;
                uVar39 = (ulong)iVar44;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar39);
                uVar13 = *puVar35;
                uVar40 = (ulong)iVar48;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar40);
                uVar14 = *puVar35;
                uVar38 = (ulong)iVar36;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar38);
                uVar15 = *puVar35;
                puVar50 = &field_6463272;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar50,
                        uVar39);
                uVar16 = *puVar35;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar50,
                        uVar40);
                uVar17 = *puVar35;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar50,
                        uVar38);
                uVar18 = *puVar35;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar39);
                uVar19 = *puVar35;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar40);
                uVar20 = *puVar35;
                puVar35 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar38);
                (*(code*)pNVar23->field_0[10])(pNVar23, iVar7, iVar51, iVar10, iVar4, iVar5, iVar6, uVar8, uVar11,
                                               uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, uVar20,
                                               *puVar35, iVar52);
                pNVar23 = field_6437224;
                puVar35 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 3);
                uVar8 = *puVar35;
                puVar35 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
                uVar11 = *puVar35;
                uVar12 = *puVar28;
                uVar13 = *puVar34;
                puVar28 = (undefined4*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar3, 3);
                uVar14 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar39);
                uVar15 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar40);
                uVar16 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar49,
                        uVar38);
                uVar17 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar50,
                        uVar39);
                uVar18 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar50,
                        uVar40);
                uVar19 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar50,
                        uVar38);
                uVar20 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar39);
                uVar21 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar40);
                uVar22 = *puVar28;
                puVar28 = (undefined4*)
                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 6500ul, 4ul, 0ul, true, eastl::allocator>>*)
                            puVar1,
                        uVar38);
                (*(code*)pNVar23->field_0[10])(pNVar23, iVar7, iVar10, uVar8, iVar4, iVar6, uVar11, uVar12, uVar13,
                                               uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, uVar20, uVar21, uVar22,
                                               *puVar28, iVar52);
                return;
            }
        }
        piVar25 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_224, uVar38);
        if (*piVar25 == -1) {
            piVar25 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_176,
                                                                     uVar38);
            piVar25 = (int*)std::array<int, 65536ul>::operator[]((long)*piVar25);
            iVar44 = *piVar25;
            (field_6437224, iVar7, iVar51, iVar10, iVar4, iVar5, iVar6, iVar44)->FlatTriangle();
            pNVar23 = field_6437224;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 3);
            iVar5 = *piVar25;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
            pNVar23->FlatTriangle(iVar7, iVar10, iVar5, iVar4, iVar6, *piVar25, iVar44);
        } else {
            pNVar23 = field_6437224;
            puVar1 = &field_6437184;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 0);
            iVar44 = *piVar25;
            piVar32 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 1);
            iVar48 = *piVar32;
            piVar32 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 2);
            pNVar23->GouraudTriangle(iVar7, iVar51, iVar10, iVar4, iVar5, iVar6, iVar44, iVar48, *piVar32);
            pNVar23 = field_6437224;
            piVar33 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar41, 3);
            iVar5 = *piVar33;
            piVar33 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar2, 3);
            iVar44 = *piVar33;
            iVar48 = *piVar25;
            iVar36 = *piVar32;
            piVar25 = (int*)std::array<int, 10ul>::operator[]((array<int, 10ul>*)puVar1, 3);
            pNVar23->GouraudTriangle(iVar7, iVar10, iVar5, iVar4, iVar6, iVar44, iVar48, iVar36, *piVar25);
        }
    }

    // 0x100365680, 80 bytes, placed by class name
    // NXTModelLitRenderer::FastInsideTriangle(int, int, int, int, int, int, int, int)
    bool NXTModelLitRenderer::FastInsideTriangle(int param_1, int param_2, int param_3, int param_4, int param_5,
                                                 int param_6, int param_7, int param_8) {
        if ((((param_3 <= param_2) || (param_4 <= param_2)) || (param_5 <= param_2)) &&
            (((param_2 <= param_3 || (param_2 <= param_4)) || (param_2 <= param_5)))) {
            if (((param_6 <= param_1) || (param_7 <= param_1)) || (param_8 <= param_1)) {
                return param_1 <= param_8 || (param_1 <= param_7 || param_1 <= param_6);
            }
        }
        return false;
    }

    // 0x1003656d0, 784 bytes, placed by class name
    // NXTModelLitRenderer::UploadModel(ModelLit&)
    void NXTModelLitRenderer::UploadModel(ModelLit* param_1) {
        shared_ptr* psVar1;
        undefined1 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        char cVar7;
        bool bVar8;
        OSRenderCore_LogicThread_JavaStyle* pOVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        undefined8 uVar16;
        undefined8 uVar17;
        undefined8 uVar18;
        undefined8 uVar19;
        undefined8 uVar20;
        undefined8 uVar21;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar22;
        undefined8 uVar23;
        undefined8 uVar24;
        undefined8 uVar25;
        undefined8 uVar26;
        undefined8 uVar27;
        undefined8 uVar28;

        pOVar9 = (OSRenderCore_LogicThread_JavaStyle*)param_1;
        cVar7 = (**(code**)(param_1->field_0 + 56))();
        if (cVar7 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTModelLitRenderer.cpp",
                      1192, (char*)0);
        }
        ModelLitRenderer_lastModelLitUploadTotal = ModelLitRenderer_lastModelLitUploadTotal + 1;
        pOVar9 = (OSRenderCore_LogicThread_JavaStyle*)pOVar9->Instance();
        uVar3 = *(undefined4*)((long)&param_1[28].field_8 + 4);
        uVar4 = *(undefined4*)((long)&param_1[1].field_0 + 3);
        uVar5 = *(undefined4*)((long)&param_1[5].field_8 + 3);
        uVar6 = *(undefined4*)((long)&param_1[18].field_8 + 2);
        uVar2 = *(undefined1*)((long)&param_1[29].field_0 + 7);
        uVar10 = (((long)&param_1[1].field_0 + 7))->data();
        uVar11 = (((long)&param_1[2].field_8 + 6))->data();
        uVar12 = (((long)&param_1[4].field_0 + 4))->data();
        uVar13 = (((long)&param_1[6].field_0 + 2))->data();
        uVar14 = (((long)&param_1[7].field_8 + 1))->data();
        uVar15 = param_1[8].field_16.data();
        uVar16 = (((long)&param_1[10].field_0 + 6))->data();
        uVar17 = (((long)&param_1[11].field_8 + 5))->data();
        uVar18 = (((long)&param_1[13].field_0 + 3))->data();
        uVar19 = (((long)&param_1[18].field_8 + 6))->data();
        uVar20 = (((long)&param_1[20].field_0 + 4))->data();
        uVar21 = (((long)&param_1[21].field_8 + 3))->data();
        psVar1 = (shared_ptr*)((long)&param_1[15].field_8 + 1);
        bVar8 = shared_ptr::operator_cast_to_bool(psVar1);
        if (bVar8) {
            pAVar22 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                              (shared_ptr<Array<signed char, eastl::allocator>>*)psVar1);
            uVar23 = pAVar22->data();
        } else {
            uVar23 = 0;
        }
        psVar1 = (shared_ptr*)((long)&param_1[17].field_0 + 7);
        bVar8 = shared_ptr::operator_cast_to_bool(psVar1);
        if (bVar8) {
            pAVar22 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<short, eastl::allocator>>::operator->(
                              (shared_ptr<Array<short, eastl::allocator>>*)psVar1);
            uVar24 = pAVar22->data();
        } else {
            uVar24 = 0;
        }
        bVar8 = param_1[16].field_8.operator_cast_to_bool();
        if (bVar8) {
            pAVar22 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                              (shared_ptr<Array<signed char, eastl::allocator>>*)&param_1[16].field_8);
            uVar25 = pAVar22->data();
        } else {
            uVar25 = 0;
        }
        psVar1 = (shared_ptr*)((long)&param_1[14].field_8 + 2);
        bVar8 = shared_ptr::operator_cast_to_bool(psVar1);
        if (bVar8) {
            pAVar22 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                              (shared_ptr<Array<signed char, eastl::allocator>>*)psVar1);
            uVar26 = pAVar22->data();
        } else {
            uVar26 = 0;
        }
        bVar8 = param_1[24].field_16.operator_cast_to_bool();
        if (bVar8) {
            pAVar22 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<int, eastl::allocator>>::operator->(
                              (shared_ptr<Array<int, eastl::allocator>>*)&param_1[24].field_16);
            uVar27 = pAVar22->data();
        } else {
            uVar27 = 0;
        }
        psVar1 = (shared_ptr*)((long)&param_1[25].field_8 + 7);
        bVar8 = shared_ptr::operator_cast_to_bool(psVar1);
        if (bVar8) {
            pAVar22 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<int, eastl::allocator>>::operator->(
                              (shared_ptr<Array<int, eastl::allocator>>*)psVar1);
            uVar28 = pAVar22->data();
        } else {
            uVar28 = 0;
        }
        pOVar9->UploadModel(
            uVar3, uVar4, uVar5, uVar6, uVar2, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18,
            uVar19, uVar20, uVar21, uVar23, uVar24, uVar25, uVar26, uVar27, uVar28,
            (int)*(char*)((long)&param_1[43].field_8 + 5), (int)*(char*)((long)&param_1[43].field_8 + 6),
            (int)*(char*)((long)&param_1[43].field_8 + 7), param_1[43].field_16, *(undefined2*)&param_1[44].field_0);
        param_1[28].field_16 = 0;
    }

    // 0x100365ba0, 80 bytes, placed by class name
    // NXTModelLitRenderer::DestroyModel(ModelLit&)
    void NXTModelLitRenderer::DestroyModel(ModelLit* param_1) {
        OSRenderCore_LogicThread_JavaStyle* pOVar2;

        pOVar2 = (OSRenderCore_LogicThread_JavaStyle*)param_1;
        if ((**(code**)(param_1->field_0 + 56))() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("ml.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "NXTModelLitRenderer.cpp",
                      1232, (char*)0);
        }
        pOVar2 = (OSRenderCore_LogicThread_JavaStyle*)pOVar2->Instance();
        pOVar2->DestroyModel(*(int*)((long)&param_1[28].field_8 + 4));
    }

    // 0x100365c20, 128 bytes, placed by class name
    // NXTModelLitRenderer::OSRenderCore_ModelLitWorldRender(int, long long, int, int, int, int, int, int, int, int, int, int, int, int, bool, bool, RenderableOverlay const&)
    void NXTModelLitRenderer::OSRenderCore_ModelLitWorldRender(int param_1, longlong param_2, int param_3, int param_4,
                                                               int param_5, int param_6, int param_7, int param_8,
                                                               int param_9, int param_10, int param_11, int param_12,
                                                               int param_13, int param_14, bool param_15, bool param_16,
                                                               RenderableOverlay* param_17) {
        OSRenderCore_LogicThread_JavaStyle* this_00;

        this_00 = (OSRenderCore_LogicThread_JavaStyle*)Instance();
        this_00->ModelLitWorldRender(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                                     param_10, param_11, param_12, param_13, param_14, param_15, param_16, param_17);
    }

    // 0x100380620, 112 bytes, inline, placed by class name
    // NXTModelLitRenderer::ExpireOldCachedUploadedModels()::$_5::operator()(shared_ptr<ModelLitImpl>&) const
    /* NXTModelLitRenderer::ExpireOldCachedUploadedModels()::$_5::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<ModelLitImpl>&)
   const */

    bool NXTModelLitRenderer::ExpireOldCachedUploadedModels()::$_5::operator()(shared_ptr* param_1) {
        int iVar1;
        int iVar2;
        long* plVar3;
        long lVar4;
        undefined8 uVar5;

        plVar3 = *(long**)this;
        iVar1 = *(int*)(this + 8);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)param_1);
        iVar2 = *(int*)(lVar4 + 496);
        if (iVar2 <= iVar1) {
            uVar5 = shared_ptr<ModelLitImpl>::operator*((shared_ptr<ModelLitImpl>*)param_1);
            (**(code**)(*plVar3 + 32))(plVar3, uVar5);
            lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)param_1);
            *(undefined4*)(lVar4 + 496) = 4294967295;
            lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)param_1);
            *(undefined1*)(lVar4 + 492) = 1;
        }
        return iVar2 <= iVar1;
    }

} // namespace jag::oldscape::dash3d
