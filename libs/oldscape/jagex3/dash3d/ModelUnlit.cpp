// libs/oldscape/jagex3/dash3d/ModelUnlit.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ModelUnlit.h"
#include "ModelRSeven.h"

namespace jag::oldscape::dash3d {
    // 0x100d429a0, 1 bytes, __const
    ModelUnlitImpl::m_debug = 1;

    // 0x103936580, 40040 bytes, __common; set at startup by ___cxx_global_var_init.101
    eastl::fixed_vector<int, 10000ul, true, eastl::allocator> ModelUnlitImpl::m_shareMap =
        fixed_vector<int, 10000ul, true, eastl::allocator>();

    // 0x1039401e8, 40040 bytes, __common; set at startup by ___cxx_global_var_init.102
    eastl::fixed_vector<int, 10000ul, true, eastl::allocator> ModelUnlitImpl::m_shareMap2 =
        fixed_vector<int, 10000ul, true, eastl::allocator>();

    // 0x103949e50, 4 bytes, __common; zero-initialised
    ModelUnlitImpl::m_shareTic;

    // 0x103949e54, 4 bytes, __common; zero-initialised
    ModelUnlitImpl::m_oX;

    // 0x103949e58, 4 bytes, __common; zero-initialised
    ModelUnlitImpl::m_oY;

    // 0x103949e5c, 4 bytes, __common; zero-initialised
    ModelUnlitImpl::m_oZ;

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    ModelUnlit::~ModelUnlit();

    // 0x100350700, 240 bytes, placed by debug map only (low confidence)
    // ModelUnlitImpl::Load(jagex3::Js5&, int, int)
    ModelUnlitImpl* ModelUnlitImpl::Load(Js5* param_1, int param_2, int param_3) {
        undefined* puVar1;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        TextureAtlasReference* this_01;
        uchar* local_58;
        ulong local_50;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48[20];
        uint local_34;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48, (_func_decltype_nullptr*)0);
        puVar1 = (undefined*)((shared_ptr*)param_1)->GetFile((int)local_48, param_2, (array*)(ulong)(uint)param_3);
        if (puVar1 == DataStatus::READY) {
            this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_48);
            local_58 = (uchar*)this_00->GetDataPtr();
            if (local_58 == (uchar*)0) {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                this_01 =
                    (TextureAtlasReference*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_48);
                local_50 = this_01->GetTextureAtlas();
                local_34 = param_2 << 16 | param_3;
                make_shared<ModelUnlitImpl, unsigned char*&, unsigned long, int>((jag*)this, &local_58, &local_50,
                                                                                 (int*)&local_34);
            }
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        local_48->~shared_ptr();
        return this;
    }

    // 0x100350830, 1136 bytes, placed by debug map only (low confidence)
    // ModelUnlitImpl::CalculateNormals()
    void ModelUnlitImpl::CalculateNormals() {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        bool bVar7;
        Array<FaceNormal, eastl::allocator>* this_03;
        int* piVar8;
        ulong uVar9;
        Array<signed char, eastl::allocator>* this_04;
        char* pcVar10;
        Array<PointNormal, eastl::allocator>* pAVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        undefined1* this_05;
        ulong uVar15;
        char cVar16;
        int iVar17;
        int iVar18;
        ulong uVar19;
        int iVar20;
        undefined1* this_06;
        ulong uVar21;
        double dVar22;
        shared_ptr local_40;

        this_05 = field_432;
        bVar7 = operator!=((shared_ptr*)this_05, (_func_decltype_nullptr*)0);
        if (!bVar7) {
            make_shared<Array<PointNormal, eastl::allocator>, int&>((jag*)&local_40, (int*)&field_20);
            shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
                (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_05, &local_40);
            local_40.~shared_ptr();
            if (0 < field_96) {
                this_00 = &field_24;
                this_01 = &field_48;
                this_02 = &field_72;
                this_06 = field_416;
                uVar15 = 0;
                do {
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_104,
                                                                            uVar15);
                    uVar21 = (ulong)*piVar8;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_128,
                                                                            uVar15);
                    uVar19 = (ulong)*piVar8;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_152,
                                                                            uVar15);
                    uVar9 = (ulong)*piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar19);
                    iVar20 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar21);
                    iVar12 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar19);
                    iVar14 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar21);
                    iVar18 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar19);
                    iVar17 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar21);
                    iVar1 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar9);
                    iVar2 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar21);
                    iVar3 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar9);
                    iVar4 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar21);
                    iVar5 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar9);
                    iVar6 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar21);
                    iVar13 = (iVar6 - *piVar8) * (iVar14 - iVar18) - (iVar4 - iVar5) * (iVar17 - iVar1);
                    iVar17 = (iVar17 - iVar1) * (iVar2 - iVar3) - (iVar6 - *piVar8) * (iVar20 - iVar12);
                    iVar20 = (iVar4 - iVar5) * (iVar20 - iVar12) - (iVar2 - iVar3) * (iVar14 - iVar18);
                    if (((((8192 < iVar13) || (8192 < iVar17)) || (8192 < iVar20)) ||
                         ((iVar13 < -8192 || (iVar17 < -8192)))) ||
                        (iVar20 < -8192)) {
                        do {
                            do {
                                iVar18 = iVar20;
                                iVar14 = iVar17;
                                iVar12 = iVar13;
                                iVar13 = iVar12 >> 1;
                                iVar17 = iVar14 >> 1;
                                iVar20 = iVar18 >> 1;
                            } while (16385 < iVar12);
                        } while (((16385 < iVar14) || (16385 < iVar18)) ||
                                 ((iVar12 < -16384 || ((iVar14 < -16384 || (iVar18 < -16384))))));
                    }
                    dVar22 = (double)sqrt<int>(iVar20 * iVar20 + iVar17 * iVar17 + iVar13 * iVar13);
                    iVar12 = (int)dVar22;
                    if (iVar12 < 1) {
                        iVar12 = 1;
                    }
                    iVar14 = (iVar13 << 8) / iVar12;
                    iVar18 = (iVar17 << 8) / iVar12;
                    iVar12 = (iVar20 << 8) / iVar12;
                    cVar16 = '\0';
                    bVar7 = operator==((shared_ptr*)field_176, (_func_decltype_nullptr*)0);
                    if (!bVar7) {
                        this_04 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)field_176);
                        pcVar10 = (char*)Array<signed char, eastl::allocator>::operator[](this_04, uVar15);
                        cVar16 = *pcVar10;
                    }
                    if (cVar16 == '\x01') {
                        bVar7 = operator==((shared_ptr*)this_06, (_func_decltype_nullptr*)0);
                        if (bVar7) {
                            make_shared<Array<FaceNormal, eastl::allocator>, int&>((jag*)&local_40, &field_96);
                            shared_ptr<Array<FaceNormal, eastl::allocator>>::operator=(
                                (shared_ptr<Array<FaceNormal, eastl::allocator>>*)this_06, &local_40);
                            local_40.~shared_ptr();
                        }
                        local_40.field_8._0_4_ = 0;
                        local_40._0_8_ = 0;
                        new (&local_40) jag::math::Vector3T<int>();
                        this_03 = (Array<FaceNormal, eastl::allocator>*)
                            shared_ptr<Array<FaceNormal, eastl::allocator>>::operator*(
                                (shared_ptr<Array<FaceNormal, eastl::allocator>>*)this_06);
                        piVar8 = (int*)Array<FaceNormal, eastl::allocator>::operator[](this_03, uVar15);
                        piVar8[0] = local_40._0_4_;
                        piVar8[1] = local_40._4_4_;
                        piVar8[2] = (int)local_40.field_8;
                        *piVar8 = iVar14;
                        piVar8[1] = iVar18;
                        piVar8[2] = iVar12;
                    } else if (cVar16 == '\0') {
                        pAVar11 = (Array<PointNormal, eastl::allocator>*)
                            shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_05);
                        piVar8 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar11, uVar21);
                        *piVar8 = *piVar8 + iVar14;
                        piVar8[1] = piVar8[1] + iVar18;
                        piVar8[2] = piVar8[2] + iVar12;
                        piVar8[3] = piVar8[3] + 1;
                        pAVar11 = (Array<PointNormal, eastl::allocator>*)
                            shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_05);
                        piVar8 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar11, uVar19);
                        *piVar8 = *piVar8 + iVar14;
                        piVar8[1] = piVar8[1] + iVar18;
                        piVar8[2] = piVar8[2] + iVar12;
                        piVar8[3] = piVar8[3] + 1;
                        pAVar11 = (Array<PointNormal, eastl::allocator>*)
                            shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_05);
                        piVar8 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar11, uVar9);
                        *piVar8 = *piVar8 + iVar14;
                        piVar8[1] = piVar8[1] + iVar18;
                        piVar8[2] = piVar8[2] + iVar12;
                        piVar8[3] = piVar8[3] + 1;
                    }
                    uVar15 = uVar15 + 1;
                } while ((long)uVar15 < (long)field_96);
            }
        }
    }

    // 0x100350e70, 32 bytes, placed by debug map only (low confidence)
    // ModelRSevenUnlit::BakedVertexLighting()
    void ModelRSevenUnlit::BakedVertexLighting() {
        OSRenderCore_LogicThread_RSeven* this_00;
        EffectList* pEVar1;

        this_00 = (OSRenderCore_LogicThread_RSeven*)Instance();
        pEVar1 = (EffectList*)this_00->GetEffectList();
        pEVar1->Contains(43);
    }

    // 0x100352e90, 160 bytes, placed by class name
    // ModelUnlit::Load(jagex3::Js5&, int, int, bool)
    ModelUnlit* ModelUnlit::Load(Js5* param_1, int param_2, int param_3, bool param_4) {
        shared_ptr<RSevenDebugPresetProvider> local_28[16];

        if (g_usingRSeven == '\0') {
            local_28->Load(param_1, param_2, param_3);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)local_28);
            local_28->~shared_ptr();
        } else {
            local_28->Load(param_1, param_2, param_3, param_4);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)local_28);
            local_28->~shared_ptr();
        }
        return this;
    }

    // 0x100352f30, 336 bytes, placed by class name
    // ModelUnlit::Combine(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&)
    ModelUnlit* ModelUnlit::Combine(vector* param_1) {
        shared_ptr* this_00;
        shared_ptr* psVar3;
        long* plVar4;
        ModelUnlit* pMVar5;
        int iVar6;
        int iVar7;
        shared_ptr local_48;

        this_00 = (shared_ptr*)param_1->HeapBeginPtr();
        psVar3 = (shared_ptr*)param_1->end();
        if (this_00 == psVar3) {
            iVar7 = 0;
            iVar6 = 0;
        } else {
            iVar6 = 0;
            iVar7 = 0;
            do {
                if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                    plVar4 = (long*)shared_ptr<ModelUnlit>::operator->((shared_ptr<ModelUnlit>*)this_00);
                    if ((**(code**)(*plVar4 + 56))(plVar4) == '\0') {
                        iVar7 = iVar7 + 1;
                    } else {
                        iVar6 = iVar6 + 1;
                    }
                }
                this_00 = this_00 + 1;
            } while (this_00 != psVar3);
        }
        if ((iVar6 != 0) && (iVar7 != 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("nR7 == 0 || nJ == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelUnlit.cpp",
                      48, (char*)0);
        }
        if ((iVar7 == 0) && ((iVar6 != 0 || (g_usingRSeven != '\0')))) {
            local_48.Combine(param_1);
            pMVar5 = (ModelUnlit*)this;
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)(ModelUnlit*)this, &local_48);
            local_48.~shared_ptr();
        } else {
            make_shared<ModelUnlitImpl, eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&>(
                (jag*)&local_48, param_1);
            pMVar5 = (ModelUnlit*)this;
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)(ModelUnlit*)this, &local_48);
            local_48.~shared_ptr();
        }
        return pMVar5;
    }

    // 0x100353120, 192 bytes, placed by class name
    // ModelUnlit::Copy(ModelUnlit const&, bool, bool, bool, bool)
    ModelUnlit* ModelUnlit::Copy(ModelUnlit* param_1, bool param_2, bool param_3, bool param_4, bool param_5) {
        shared_ptr<RSevenDebugPresetProvider> local_38[20];
        bool local_24;
        bool local_23;
        bool local_22;
        bool local_21;

        local_24 = param_2;
        local_23 = param_3;
        local_22 = param_4;
        local_21 = param_5;
        if ((**(code**)(param_1->field_0 + 56))(param_1) == '\0') {
            make_shared<ModelUnlitImpl, ModelUnlitImpl_const&, bool&, bool&, bool&, bool&>(
                (jag*)local_38, (ModelUnlitImpl*)param_1, &local_24, &local_23, &local_22, &local_21);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)local_38);
            local_38->~shared_ptr();
        } else {
            local_38->Copy(param_1);
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)local_38);
            local_38->~shared_ptr();
        }
        return this;
    }

    // 0x1003532a0, 192 bytes, placed by class name
    // ModelUnlit::ShareLight(ModelUnlit&, ModelUnlit&, int, int, int, bool)
    void ModelUnlit::ShareLight(ModelUnlit* param_1, ModelUnlit* param_2, int param_3, int param_4, int param_5,
                                bool param_6) {
        char cVar1;
        char cVar2;

        cVar1 = (**(code**)(param_1->field_0 + 56))();
        cVar2 = (**(code**)(param_2->field_0 + 56))(param_2);
        if (cVar1 == '\0') {
            if (cVar2 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m2.IsForRSeven()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/ModelUnlit.cpp",
                          79, (char*)0);
            }
            param_1->ShareLight(param_2, param_3, param_4, param_5, param_6);
        } else {
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m2.IsForRSeven()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                          "dash3d/ModelUnlit.cpp",
                          74, (char*)0);
            }
            param_1->ShareLight(param_2, param_3, param_4, param_5, param_6);
        }
    }

    // 0x100353360, 1632 bytes, placed by __FILE__ string
    // ModelUnlitImpl::ShareLight(ModelUnlitImpl&, ModelUnlitImpl&, int, int, int, bool)
    void ModelUnlitImpl::ShareLight(ModelUnlitImpl* param_1, ModelUnlitImpl* param_2, int param_3, int param_4,
                                    int param_5, bool param_6) {
        undefined1* puVar1;
        undefined1* this;
        undefined1* this_00;
        undefined1* this_01;
        int iVar2;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        bool bVar6;
        int iVar7;
        Array<PointNormal, eastl::allocator>* pAVar8;
        int* piVar9;
        int* piVar10;
        int* piVar11;
        int* piVar12;
        Array<signed char, eastl::allocator>* pAVar13;
        undefined1* puVar14;
        int iVar15;
        ulong uVar16;
        int iVar17;
        ulong uVar18;
        ModelUnlitImpl* pMVar19;
        Array<int, eastl::allocator>* pAVar20;
        shared_ptr local_68;
        Array<int, eastl::allocator>* local_58;
        Array<int, eastl::allocator>* local_50;
        ModelUnlitImpl* local_48;
        ModelUnlitImpl* local_40;
        uint local_34;

        CalcBoundingCube(param_1);
        CalculateNormals(param_1);
        CalcBoundingCube(param_2);
        CalculateNormals(param_2);
        m_shareTic = m_shareTic + 1;
        local_34 = param_2->field_20;
        local_48 = param_1;
        local_40 = param_2;
        if ((int)param_1->field_20 < 1) {
            iVar17 = 0;
        } else {
            local_50 = (Array<int, eastl::allocator>*)&param_2->field_24;
            this = param_2->field_432;
            puVar1 = &param_2->field_72;
            puVar14 = &param_2->field_48;
            this_00 = &param_1->field_560;
            this_01 = &param_2->field_560;
            uVar18 = 0;
            iVar17 = 0;
            do {
                pAVar8 =
                    (Array<PointNormal, eastl::allocator>*)shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                        (shared_ptr<Array<PointNormal, eastl::allocator>>*)param_1->field_432);
                piVar9 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar8, uVar18);
                if (piVar9[3] != 0) {
                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1->field_48, uVar18);
                    iVar2 = *piVar10;
                    if (iVar2 - param_4 <= param_2->field_580) {
                        piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&param_1->field_24, uVar18);
                        iVar15 = *piVar10 - param_3;
                        if ((param_2->field_584 <= iVar15) && (iVar15 <= param_2->field_588)) {
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&param_1->field_72, uVar18);
                            iVar7 = *piVar10 - param_5;
                            if ((param_2->field_596 <= iVar7) &&
                                ((iVar7 <= param_2->field_592 && (0 < (int)local_34)))) {
                                local_58 = (Array<int, eastl::allocator>*)CONCAT44(local_58._4_4_, iVar15);
                                uVar16 = 0;
                                do {
                                    pAVar8 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)this);
                                    piVar10 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar8, uVar16);
                                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](local_50, uVar16);
                                    if ((int)local_58 == *piVar11) {
                                        piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)puVar1, uVar16);
                                        if (iVar7 == *piVar11) {
                                            piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)puVar14, uVar16);
                                            if ((iVar2 - param_4 == *piVar11) && (piVar10[3] != 0)) {
                                                bVar6 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                                                if (bVar6) {
                                                    make_shared<Array<PointNormal, eastl::allocator>, int&>(
                                                        (jag*)&local_68, (int*)&param_1->field_20);
                                                    shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
                                                        (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_00,
                                                        &local_68);
                                                    local_68.~shared_ptr();
                                                }
                                                bVar6 = operator==((shared_ptr*)this_01, (_func_decltype_nullptr*)0);
                                                if (bVar6) {
                                                    make_shared<Array<PointNormal, eastl::allocator>, int&>(
                                                        (jag*)&local_68, (int*)&local_34);
                                                    shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
                                                        (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_01,
                                                        &local_68);
                                                    local_68.~shared_ptr();
                                                }
                                                pAVar8 = (Array<PointNormal, eastl::allocator>*)
                                                    shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                                        (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_00);
                                                piVar11 = (int*)Array<PointNormal, eastl::allocator>::operator[](
                                                    pAVar8, uVar18);
                                                if (piVar11[3] == 0) {
                                                    uVar5 = *(undefined8*)(piVar9 + 2);
                                                    *(undefined8*)piVar11 = *(undefined8*)piVar9;
                                                    *(undefined8*)(piVar11 + 2) = uVar5;
                                                }
                                                pAVar8 = (Array<PointNormal, eastl::allocator>*)
                                                    shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                                        (shared_ptr<Array<PointNormal, eastl::allocator>>*)this_01);
                                                piVar12 = (int*)Array<PointNormal, eastl::allocator>::operator[](
                                                    pAVar8, uVar16);
                                                if (piVar12[3] == 0) {
                                                    iVar15 = piVar10[1];
                                                    iVar3 = piVar10[2];
                                                    iVar4 = piVar10[3];
                                                    *piVar12 = *piVar10;
                                                    piVar12[1] = iVar15;
                                                    piVar12[2] = iVar3;
                                                    piVar12[3] = iVar4;
                                                }
                                                *piVar11 = *piVar11 + *piVar10;
                                                piVar11[1] = piVar11[1] + piVar10[1];
                                                piVar11[2] = piVar11[2] + piVar10[2];
                                                piVar11 = piVar11 + 3;
                                                *piVar11 = *piVar11 + piVar10[3];
                                                if (*piVar11 == 0) {
                                                    /* WARNING: Subroutine does not return */
                                                    LogAssert(
                                                        "p1.m_c != 0",
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                                        3026, (char*)0);
                                                }
                                                *piVar12 = *piVar12 + *piVar9;
                                                piVar12[1] = piVar12[1] + piVar9[1];
                                                piVar12[2] = piVar12[2] + piVar9[2];
                                                piVar12 = piVar12 + 3;
                                                *piVar12 = *piVar12 + piVar9[3];
                                                iVar15 = m_shareTic;
                                                if (*piVar12 == 0) {
                                                    /* WARNING: Subroutine does not return */
                                                    LogAssert(
                                                        "p2.m_c != 0",
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                                        3032, (char*)0);
                                                }
                                                iVar17 = iVar17 + 1;
                                                piVar10 = (int*)eastl::vector<
                                                    int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                                       eastl::allocator>>::
                                                operator[]((vector<int, eastl::fixed_vector_allocator<
                                                                            4ul, 10000ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>*)&m_shareMap,
                                                           uVar18);
                                                *piVar10 = iVar15;
                                                iVar15 = m_shareTic;
                                                piVar10 = (int*)eastl::vector<
                                                    int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                                       eastl::allocator>>::
                                                operator[]((vector<int, eastl::fixed_vector_allocator<
                                                                            4ul, 10000ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>*)&m_shareMap2,
                                                           uVar16);
                                                *piVar10 = iVar15;
                                                param_2 = local_40;
                                            }
                                        }
                                    }
                                    uVar16 = uVar16 + 1;
                                } while ((long)uVar16 < (long)(int)local_34);
                            }
                        }
                    }
                }
                uVar18 = uVar18 + 1;
            } while ((long)uVar18 < (long)(int)param_1->field_20);
        }
        if ((2 < iVar17) && (param_6)) {
            if (0 < local_48->field_96) {
                piVar9 = &local_48->field_96;
                puVar1 = &local_48->field_104;
                pAVar20 = (Array<int, eastl::allocator>*)&local_48->field_128;
                local_58 = (Array<int, eastl::allocator>*)&local_48->field_152;
                local_48 = (ModelUnlitImpl*)local_48->field_176;
                uVar18 = 0;
                local_50 = pAVar20;
                do {
                    piVar10 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1, uVar18);
                    piVar10 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&m_shareMap,
                               (long)*piVar10);
                    if (*piVar10 == m_shareTic) {
                        piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar18);
                        piVar10 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&m_shareMap,
                                   (long)*piVar10);
                        if (*piVar10 == m_shareTic) {
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar18);
                            piVar10 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                                  eastl::allocator>>*)&m_shareMap,
                                       (long)*piVar10);
                            pMVar19 = local_48;
                            if (*piVar10 == m_shareTic) {
                                bVar6 = operator==((shared_ptr*)local_48, (_func_decltype_nullptr*)0);
                                if (bVar6) {
                                    make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_68, piVar9);
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)pMVar19, &local_68);
                                    local_68.~shared_ptr();
                                    pMVar19 = local_48;
                                }
                                pAVar13 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)pMVar19);
                                puVar14 =
                                    (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar13, uVar18);
                                *puVar14 = 2;
                                pAVar20 = local_50;
                            }
                        }
                    }
                    uVar18 = uVar18 + 1;
                } while ((long)uVar18 < (long)*piVar9);
            }
            if (0 < local_40->field_96) {
                piVar9 = &local_40->field_96;
                puVar1 = &local_40->field_104;
                pAVar20 = (Array<int, eastl::allocator>*)&local_40->field_128;
                local_58 = (Array<int, eastl::allocator>*)&local_40->field_152;
                local_40 = (ModelUnlitImpl*)local_40->field_176;
                uVar18 = 0;
                local_50 = pAVar20;
                do {
                    piVar10 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1, uVar18);
                    piVar10 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>*)&m_shareMap2,
                               (long)*piVar10);
                    if (*piVar10 == m_shareTic) {
                        piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar18);
                        piVar10 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&m_shareMap2,
                                   (long)*piVar10);
                        if (*piVar10 == m_shareTic) {
                            piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar18);
                            piVar10 = (int*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true,
                                                                                  eastl::allocator>>*)&m_shareMap2,
                                       (long)*piVar10);
                            pMVar19 = local_40;
                            if (*piVar10 == m_shareTic) {
                                bVar6 = operator==((shared_ptr*)local_40, (_func_decltype_nullptr*)0);
                                if (bVar6) {
                                    make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_68, piVar9);
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)pMVar19, &local_68);
                                    local_68.~shared_ptr();
                                    pMVar19 = local_40;
                                }
                                pAVar13 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)pMVar19);
                                puVar14 =
                                    (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar13, uVar18);
                                *puVar14 = 2;
                                pAVar20 = local_50;
                            }
                        }
                    }
                    uVar18 = uVar18 + 1;
                } while ((long)uVar18 < (long)*piVar9);
            }
        }
    }

    // 0x1003539e0, 80 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Init()
    void ModelUnlitImpl::Init() {
        m_shareMap.capacity();
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            4354958720);
        m_shareMap2.capacity();
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 10000ul, 4ul, 0ul, true, eastl::allocator>>::resize(
            4354998760);
    }

    // 0x100353b30, 1312 bytes, base-object constructor, placed by neighbouring functions
    // ModelUnlitImpl::ModelUnlitImpl(unsigned char*, unsigned long, int)
    void ModelUnlitImpl::ModelUnlitImpl(uchar* param_1, ulong param_2, int param_3) {
        uchar uVar1;
        _func_decltype_nullptr* p_Var2;
        WindowSavedPosition local_128;
        undefined1* local_108;
        undefined1* local_100;
        undefined1* local_f8;
        undefined1* local_f0;
        undefined1* local_e8;
        undefined1* local_e0;
        undefined1* local_d8;
        undefined1* local_d0;
        undefined1* local_c8;
        undefined1* local_c0;
        undefined1* local_b8;
        undefined1* local_b0;
        undefined1* local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;

        p_Var2 = (_func_decltype_nullptr*)param_1;
        new (this) ModelUnlit();
        field_0 = &PTR__ModelUnlitImpl_100efbe18;
        field_20 = 0;
        new (&field_24) Array<int, eastl::allocator>();
        local_108 = &field_24;
        new (&field_48) Array<int, eastl::allocator>();
        local_f8 = &field_72;
        local_100 = &field_48;
        new (local_f8) Array<int, eastl::allocator>();
        field_96 = 0;
        local_f0 = &field_104;
        new (local_f0) Array<int, eastl::allocator>();
        local_e8 = &field_128;
        new (local_e8) Array<int, eastl::allocator>();
        local_e0 = &field_152;
        new (local_e0) Array<int, eastl::allocator>();
        local_d8 = field_176;
        new (local_d8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_d0 = &field_192;
        new (local_d0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_c8 = field_208;
        new (local_c8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_c0 = &field_224;
        new (local_c0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_b8 = &field_240;
        new (local_b8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_b0 = field_256;
        new (local_b0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_a8 = field_272;
        new (local_a8) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_a0 = &field_288;
        new (local_a0) SharedArray<unsigned int>();
        field_312 = 0;
        local_98 = &field_320;
        new (local_98) Array<signed char, eastl::allocator>();
        local_90 = &field_344;
        new (local_90) Array<short, eastl::allocator>();
        local_88 = &field_368;
        new (local_88) Array<short, eastl::allocator>();
        local_80 = &field_392;
        new (local_80) Array<short, eastl::allocator>();
        local_78 = field_416;
        new (local_78) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_70 = field_432;
        new (local_70) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_68 = field_448;
        new (local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_60 = field_464;
        new (local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_58 = field_480;
        new (local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_50 = field_496;
        new (local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_48 = &field_512;
        new (local_48) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        local_40 = &field_528;
        new (local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var2);
        p_Var2 = (_func_decltype_nullptr*)0;
        new (&field_544, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_560, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_576 = 0;
        field_12 = param_3;
        local_128.PacketT(10);
        PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&local_128, 4294967294);
        uVar1 = param_1[param_2 - 1];
        if (uVar1 == 255) {
            if (param_1[param_2 - 2] == 255) {
                LoadOb3Engine200(this, param_1, param_2);
                goto LAB_100353dd0;
            }
        } else if (uVar1 == 254) {
            if (param_1[param_2 - 2] == 255) {
                LoadOb2(this, param_1, param_2);
                goto LAB_100353dd0;
            }
        } else if ((uVar1 == 253) && (param_1[param_2 - 2] == 255)) {
            LoadOb3(this, param_1, param_2);
            goto LAB_100353dd0;
        }
        LoadOb2Engine200(this, param_1, param_2);
    LAB_100353dd0:
        local_128.~WindowSavedPosition();
    }

    // 0x100354080, 4640 bytes, placed by neighbouring functions
    // ModelUnlitImpl::LoadOb3(unsigned char*, unsigned long)
    void ModelUnlitImpl::LoadOb3(uchar* param_1, ulong param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        ModelUnlitImpl* pMVar1;
        uint uVar2;
        char cVar3;
        byte bVar4;
        undefined1 uVar5;
        ushort uVar7;
        undefined2 uVar8;
        ushort uVar9;
        short sVar10;
        short sVar11;
        short sVar12;
        int iVar13;
        int iVar14;
        uint uVar15;
        undefined4 uVar16;
        char* pcVar17;
        undefined1* puVar18;
        int* piVar19;
        undefined4* puVar20;
        uint* puVar21;
        Array<int, eastl::allocator>* pAVar22;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar23;
        Array<short, eastl::allocator>* pAVar24;
        undefined2* puVar25;
        Array<signed char, eastl::allocator>* pAVar26;
        undefined1* puVar27;
        short* psVar28;
        long lVar29;
        int iVar30;
        int iVar31;
        int iVar32;
        undefined1* puVar33;
        int iVar34;
        int iVar35;
        uint uVar36;
        int iVar37;
        ulong uVar38;
        ulong uVar39;
        int iVar40;
        ulong uVar41;
        uint uVar42;
        int iVar43;
        int iVar44;
        MultiCursorPacketHelper local_110;
        shared_ptr<Array<int, eastl::allocator>>* local_b8;
        shared_ptr<Array<signed char, eastl::allocator>>* local_b0;
        ushort local_a2;
        int local_a0;
        uint local_9c;
        int local_98;
        uint local_94;
        ulong local_90;
        uint local_84;
        ulong local_80;
        Array<int, eastl::allocator>* local_78;
        Array<int, eastl::allocator>* local_70;
        uint local_64;
        shared_ptr local_60;
        char local_4a;
        char local_49;
        ModelUnlitImpl* local_48;
        char local_3a;
        char local_39;
        char local_38;
        char local_37;
        char local_36;
        byte local_35;
        uint local_34;

        local_48 = this;
        new (&local_110) jagex3::MultiCursorPacketHelper(param_1, param_2);
        local_110.SetPos(1, param_2 - 26);
        uVar7 = local_110.g2(1);
        local_64 = (uint)uVar7;
        uVar7 = local_110.g2(1);
        local_34 = (uint)uVar7;
        local_35 = local_110.g1(1);
        local_3a = local_110.g1(1);
        local_39 = local_110.g1(1);
        local_38 = local_110.g1(1);
        local_37 = local_110.g1(1);
        local_36 = local_110.g1(1);
        local_4a = local_110.g1(1);
        local_49 = local_110.g1(1);
        uVar8 = local_110.g2(1);
        local_b8 = (shared_ptr<Array<int, eastl::allocator>>*)CONCAT62(local_b8._2_6_, uVar8);
        uVar8 = local_110.g2(1);
        local_b0 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT62(local_b0._2_6_, uVar8);
        local_a2 = local_110.g2(1);
        uVar8 = local_110.g2(1);
        uVar7 = local_110.g2(1);
        local_84 = CONCAT22(local_84._2_2_, uVar8);
        uVar9 = local_110.g2(1);
        local_80 = (ulong)local_35;
        local_a0 = 0;
        local_90 = 0;
        iVar30 = 0;
        if (local_35 != 0) {
            puVar33 = &local_48->field_320;
            puVar33->set_max_size(local_80, 5);
            iVar30 = 0;
            local_110.SetPos(1, 0);
            uVar38 = 0;
            local_90 = 0;
            local_a0 = 0;
            do {
                cVar3 = local_110.g1s(1);
                pcVar17 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)puVar33, uVar38);
                *pcVar17 = cVar3;
                iVar30 = iVar30 + (uint)(cVar3 == '\0');
                local_90 = (ulong)((int)local_90 + (uint)((byte)(cVar3 - 1U) < 3));
                local_a0 = local_a0 + (uint)(cVar3 == '\x02');
                uVar38 = uVar38 + 1;
            } while (local_80 != uVar38);
        }
        uVar2 = local_34;
        uVar15 = local_64;
        uVar36 = 0;
        if (local_3a == '\x01') {
            uVar36 = local_34;
        }
        local_9c = 0;
        if (local_39 == -1) {
            local_9c = local_34;
        }
        uVar42 = 0;
        if (local_37 == '\x01') {
            uVar42 = local_34;
        }
        local_94 = 0;
        if (local_38 == '\x01') {
            local_94 = local_34;
        }
        local_98 = local_34 * 2;
        if (local_36 != '\x01') {
            local_98 = 0;
        }
        local_48->field_20 = local_64;
        local_48->field_96 = local_34;
        local_48->field_316 = (int)local_80;
        local_78 = (Array<int, eastl::allocator>*)&local_48->field_24;
        local_78->set_max_size((long)(int)local_64, 5);
        local_70 = (Array<int, eastl::allocator>*)&local_48->field_48;
        local_70->set_max_size((long)(int)local_64, 5);
        puVar33 = &local_48->field_72;
        puVar33->set_max_size((long)(int)local_64, 5);
        this_00 = &local_48->field_104;
        this_00->set_max_size((long)(int)local_34, 5);
        this_01 = &local_48->field_128;
        this_01->set_max_size((long)(int)local_34, 5);
        this_02 = &local_48->field_152;
        this_02->set_max_size((long)(int)local_34, 5);
        if (local_4a == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_64);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_48->field_480, &local_60);
            local_60.~shared_ptr();
        }
        if (local_3a == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_48->field_176, &local_60);
            local_60.~shared_ptr();
        }
        if (local_39 == -1) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)&local_48->field_192, &local_60);
            local_60.~shared_ptr();
        } else {
            local_48->field_312 = local_39;
        }
        if (local_38 == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_48->field_208, &local_60);
            local_60.~shared_ptr();
        }
        if (local_37 == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_48->field_496, &local_60);
            local_60.~shared_ptr();
        }
        if (local_36 == '\x01') {
            make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
            shared_ptr<Array<short, eastl::allocator>>::operator=(
                (shared_ptr<Array<short, eastl::allocator>>*)local_48->field_256, &local_60);
            local_60.~shared_ptr();
            if (local_35 != 0) {
                make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)&local_48->field_224, &local_60);
                local_60.~shared_ptr();
            }
        }
        if (local_49 == '\x01') {
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_60, (int*)&local_64);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&local_48->field_512, &local_60);
            local_60.~shared_ptr();
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_60, (int*)&local_64);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&local_48->field_528, &local_60);
            local_60.~shared_ptr();
        }
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_60, (int*)&local_34);
        pMVar1 = local_48;
        this_03 = &local_48->field_240;
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_03,
                                                              &local_60);
        local_60.~shared_ptr();
        (&pMVar1->field_344, local_80, 1)->set_max_size();
        this_04 = &local_48->field_368;
        this_04->set_max_size(local_80, 1);
        this_05 = &local_48->field_392;
        this_05->set_max_size(local_80, 1);
        local_110.SetPos(1, local_80);
        iVar13 = (int)local_80 + uVar15;
        iVar37 = uVar36 + iVar13;
        iVar34 = iVar37 + uVar2;
        local_9c = local_9c + iVar34;
        iVar43 = uVar42 + local_9c;
        iVar32 = (uint)uVar9 + iVar43;
        local_94 = local_94 + iVar32;
        iVar31 = (local_84 & 65535) + local_94;
        local_98 = local_98 + iVar31;
        iVar35 = (uint)uVar7 + local_98;
        iVar14 = iVar35 + uVar2 * 2;
        local_110.SetPos(2, (long)iVar14);
        iVar14 = iVar14 + (uint)(ushort)local_b8;
        local_110.SetPos(3, (long)iVar14);
        iVar14 = iVar14 + (uint)(ushort)local_b0;
        local_110.SetPos(4, (long)iVar14);
        local_110.SetPos(5, (long)iVar43);
        if (0 < (int)local_64) {
            puVar18 = local_48->field_480;
            uVar38 = 0;
            local_84 = 0;
            local_b0 = (shared_ptr<Array<signed char, eastl::allocator>>*)((ulong)local_b0 & 18446744069414584320);
            local_b8 = (shared_ptr<Array<int, eastl::allocator>>*)((ulong)local_b8 & 18446744069414584320);
            do {
                uVar15 = local_110.g1(1);
                iVar40 = 0;
                iVar43 = 0;
                if ((uVar15 & 1) != 0) {
                    sVar10 = local_110.gSmart(2);
                    iVar43 = (int)sVar10;
                }
                if ((uVar15 & 2) != 0) {
                    sVar10 = local_110.gSmart(3);
                    iVar40 = (int)sVar10;
                }
                iVar44 = 0;
                if ((uVar15 & 4) != 0) {
                    sVar10 = local_110.gSmart(4);
                    iVar44 = (int)sVar10;
                }
                piVar19 = (int*)Array<int, eastl::allocator>::operator[](local_78, uVar38);
                *piVar19 = iVar43 + (int)local_b8;
                piVar19 = (int*)Array<int, eastl::allocator>::operator[](local_70, uVar38);
                *piVar19 = iVar40 + (int)local_b0;
                piVar19 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar33, uVar38);
                *piVar19 = iVar44 + local_84;
                puVar20 = (undefined4*)Array<int, eastl::allocator>::operator[](local_78, uVar38);
                local_b8 = (shared_ptr<Array<int, eastl::allocator>>*)CONCAT44(local_b8._4_4_, *puVar20);
                puVar20 = (undefined4*)Array<int, eastl::allocator>::operator[](local_70, uVar38);
                local_b0 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT44(local_b0._4_4_, *puVar20);
                puVar21 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar33, uVar38);
                local_84 = *puVar21;
                if (local_4a == '\x01') {
                    uVar15 = local_110.g1(5);
                    pAVar22 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)puVar18);
                    puVar21 = (uint*)Array<int, eastl::allocator>::operator[](pAVar22, uVar38);
                    *puVar21 = uVar15 & 255;
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_64);
        }
        if ((local_49 == '\x01') && (0 < (int)local_64)) {
            local_78 = (Array<int, eastl::allocator>*)&local_48->field_512;
            local_70 = (Array<int, eastl::allocator>*)&local_48->field_528;
            uVar38 = 0;
            do {
                bVar4 = local_110.g1(5);
                pAVar23 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_78);
                pAVar22 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        pAVar23, uVar38);
                uVar41 = (ulong)bVar4;
                pAVar22->set_max_size(uVar41, 7);
                pAVar23 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_70);
                pAVar22 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        pAVar23, uVar38);
                pAVar22->set_max_size(uVar41, 7);
                if (bVar4 != 0) {
                    uVar39 = 0;
                    do {
                        uVar15 = local_110.g1(5);
                        pAVar23 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_78);
                        pAVar22 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar23, uVar38);
                        puVar21 = (uint*)Array<int, eastl::allocator>::operator[](pAVar22, uVar39);
                        *puVar21 = uVar15 & 255;
                        uVar15 = local_110.g1(5);
                        pAVar23 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_70);
                        pAVar22 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar23, uVar38);
                        puVar21 = (uint*)Array<int, eastl::allocator>::operator[](pAVar22, uVar39);
                        *puVar21 = uVar15 & 255;
                        uVar39 = uVar39 + 1;
                    } while (uVar41 != uVar39);
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_64);
        }
        local_110.SetPos(1, (long)iVar35);
        local_110.SetPos(2, (long)iVar13);
        local_110.SetPos(3, (long)iVar34);
        local_110.SetPos(4, (long)iVar32);
        local_110.SetPos(5, (long)(int)local_9c);
        local_110.SetPos(6, (long)iVar31);
        local_110.SetPos(7, (long)local_98);
        if (0 < (int)local_34) {
            local_70 = (Array<int, eastl::allocator>*)local_48->field_176;
            local_b0 = (shared_ptr<Array<signed char, eastl::allocator>>*)&local_48->field_192;
            puVar33 = local_48->field_208;
            local_b8 = (shared_ptr<Array<int, eastl::allocator>>*)local_48->field_496;
            local_78 = (Array<int, eastl::allocator>*)local_48->field_256;
            puVar18 = &local_48->field_224;
            uVar38 = 0;
            do {
                uVar8 = local_110.g2(1);
                pAVar24 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)this_03);
                puVar25 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar24, uVar38);
                *puVar25 = uVar8;
                if (local_3a == '\x01') {
                    uVar5 = local_110.g1s(2);
                    pAVar26 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_70);
                    puVar27 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                    *puVar27 = uVar5;
                }
                if (local_39 == -1) {
                    uVar5 = local_110.g1s(3);
                    pAVar26 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_b0);
                    puVar27 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                    *puVar27 = uVar5;
                }
                if (local_38 == '\x01') {
                    uVar5 = local_110.g1s(4);
                    pAVar26 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar33);
                    puVar27 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                    *puVar27 = uVar5;
                }
                if (local_37 == '\x01') {
                    uVar15 = local_110.g1(5);
                    pAVar22 =
                        (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(local_b8);
                    puVar21 = (uint*)Array<int, eastl::allocator>::operator[](pAVar22, uVar38);
                    *puVar21 = uVar15 & 255;
                }
                if (local_36 == '\x01') {
                    sVar10 = local_110.g2(6);
                    pAVar24 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)local_78);
                    psVar28 = (short*)Array<short, eastl::allocator>::operator[](pAVar24, uVar38);
                    *psVar28 = sVar10 + -1;
                }
                if (operator!=((shared_ptr*)puVar18, (_func_decltype_nullptr*)0)) {
                    pAVar24 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)local_78);
                    psVar28 = (short*)Array<short, eastl::allocator>::operator[](pAVar24, uVar38);
                    if (*psVar28 != -1) {
                        cVar3 = local_110.g1(7);
                        pAVar26 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar18);
                        pcVar17 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar26, uVar38);
                        *pcVar17 = cVar3 + -1;
                    }
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_34);
        }
        local_110.SetPos(1, (long)(int)local_94);
        local_110.SetPos(2, (long)iVar37);
        if (0 < (int)local_34) {
            uVar38 = 0;
            iVar32 = 0;
            iVar31 = 0;
            iVar13 = 0;
            local_70 = (Array<int, eastl::allocator>*)((ulong)local_70 & 18446744069414584320);
            do {
                cVar3 = local_110.g1(2);
                local_78 = (Array<int, eastl::allocator>*)CONCAT71(local_78._1_7_, cVar3);
                if (cVar3 == '\x01') {
                    sVar10 = local_110.gSmart(1);
                    sVar11 = local_110.gSmart(1);
                    sVar12 = local_110.gSmart(1);
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar38);
                    iVar31 = iVar32 + sVar10;
                    *piVar19 = iVar31;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar38);
                    iVar13 = sVar11 + iVar31;
                    *piVar19 = iVar13;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar38);
                    iVar32 = sVar12 + iVar13;
                    *piVar19 = iVar32;
                    local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, iVar31);
                    iVar31 = iVar32;
                }
                iVar34 = iVar13;
                if ((char)local_78 == '\x02') {
                    sVar10 = local_110.gSmart(1);
                    puVar20 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar38);
                    *puVar20 = (int)local_70;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar38);
                    *piVar19 = iVar31;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar38);
                    iVar32 = iVar32 + sVar10;
                    *piVar19 = iVar32;
                    iVar34 = iVar31;
                    iVar31 = iVar32;
                }
                if ((char)local_78 == '\x03') {
                    sVar10 = local_110.gSmart(1);
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar38);
                    *piVar19 = iVar31;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar38);
                    *piVar19 = iVar34;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar38);
                    iVar32 = iVar32 + sVar10;
                    *piVar19 = iVar32;
                    local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, iVar31);
                    iVar31 = iVar32;
                }
                iVar13 = iVar34;
                if ((char)local_78 == '\x04') {
                    sVar10 = local_110.gSmart(1);
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar38);
                    *piVar19 = iVar34;
                    puVar20 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_01, uVar38);
                    *puVar20 = (int)local_70;
                    piVar19 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar38);
                    iVar32 = iVar32 + sVar10;
                    *piVar19 = iVar32;
                    iVar13 = (int)local_70;
                    local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, iVar34);
                    iVar31 = iVar32;
                }
                uVar38 = uVar38 + 1;
            } while ((long)uVar38 < (long)(int)local_34);
        }
        iVar14 = iVar14 + (uint)local_a2;
        local_110.SetPos(1, (long)iVar14);
        iVar14 = iVar14 + iVar30 * 6;
        local_110.SetPos(2, (long)iVar14);
        iVar30 = (int)local_90 * 6;
        iVar14 = iVar14 + iVar30;
        local_110.SetPos(3, (long)iVar14);
        iVar14 = iVar14 + iVar30;
        local_110.SetPos(4, (long)iVar14);
        iVar14 = iVar14 + (int)local_90 * 2;
        local_110.SetPos(5, (long)iVar14);
        iVar14 = iVar14 + (int)local_90;
        local_110.SetPos(6, (long)iVar14);
        if (local_35 != 0) {
            puVar33 = &local_48->field_320;
            uVar38 = 0;
            do {
                pcVar17 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)puVar33, uVar38);
                if (*pcVar17 == '\0') {
                    uVar8 = local_110.g2(1);
                    puVar25 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&pMVar1->field_344, uVar38);
                    *puVar25 = uVar8;
                    uVar8 = local_110.g2(1);
                    puVar25 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)this_04, uVar38);
                    *puVar25 = uVar8;
                    uVar8 = local_110.g2(1);
                    puVar25 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)this_05, uVar38);
                    *puVar25 = uVar8;
                }
                uVar38 = uVar38 + 1;
            } while (local_80 != uVar38);
        }
        local_110.SetPos(1, (long)(iVar14 + ((int)local_90 + local_a0) * 2));
        bVar4 = local_110.g1(1);
        if (bVar4 != 0) {
            make_shared<LightSource>((jag*)&local_60);
            puVar33 = &local_48->field_544;
            shared_ptr<LightSource>::operator=((shared_ptr<LightSource>*)puVar33, &local_60);
            local_60.~shared_ptr();
            puVar21 = (uint*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar33);
            *puVar21 = (uint)bVar4;
            uVar15 = local_110.g2(1);
            lVar29 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar33);
            *(uint*)(lVar29 + 4) = uVar15 & 65535;
            uVar15 = local_110.g2(1);
            lVar29 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar33);
            *(uint*)(lVar29 + 8) = uVar15 & 65535;
            uVar15 = local_110.g2(1);
            lVar29 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar33);
            *(uint*)(lVar29 + 12) = uVar15 & 65535;
            uVar16 = local_110.g4(1);
            lVar29 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar33);
            *(undefined4*)(lVar29 + 16) = uVar16;
        }
        local_110.~MultiCursorPacketHelper();
    }

    // 0x1003552a0, 4288 bytes, placed by neighbouring functions
    // ModelUnlitImpl::LoadOb2(unsigned char*, unsigned long)
    void ModelUnlitImpl::LoadOb2(uchar* param_1, ulong param_2) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        bool bVar5;
        ushort uVar6;
        undefined2 uVar7;
        short sVar8;
        short sVar9;
        short sVar10;
        undefined4 uVar11;
        int iVar12;
        uint uVar13;
        int* piVar14;
        undefined4* puVar15;
        uint* puVar16;
        Array<int, eastl::allocator>* pAVar17;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar18;
        Array<short, eastl::allocator>* pAVar19;
        undefined2* puVar20;
        Array<signed char, eastl::allocator>* pAVar21;
        undefined1* puVar22;
        byte* pbVar23;
        short* psVar24;
        uint* puVar25;
        undefined1* puVar26;
        ushort* puVar27;
        undefined1* puVar28;
        int iVar29;
        int iVar30;
        int iVar31;
        uint uVar32;
        int iVar33;
        int iVar34;
        ulong uVar35;
        ulong uVar36;
        uint uVar37;
        int iVar38;
        ulong uVar39;
        ulong uVar40;
        bool bVar41;
        int iVar42;
        uint uVar43;
        int iVar44;
        MultiCursorPacketHelper local_108;
        Array<int, eastl::allocator>* local_b0;
        Array<int, eastl::allocator>* local_a8;
        Array<int, eastl::allocator>* local_a0;
        ulong local_98;
        uint local_8c;
        shared_ptr<Array<signed char, eastl::allocator>>* local_88;
        shared_ptr* local_80;
        shared_ptr<Array<short, eastl::allocator>>* local_78;
        uint local_70;
        uint local_6c;
        Array<int, eastl::allocator>* local_68;
        Array<int, eastl::allocator>* local_60;
        uint local_58;
        char local_52;
        char local_51;
        shared_ptr local_50;
        uint local_40;
        char local_3c;
        char local_3b;
        char local_3a;
        byte local_39;
        ModelUnlitImpl* local_38;

        local_38 = this;
        new (&local_108) jagex3::MultiCursorPacketHelper(param_1, param_2);
        local_108.SetPos(1, param_2 - 23);
        uVar6 = local_108.g2(1);
        local_70 = (uint)uVar6;
        uVar6 = local_108.g2(1);
        local_40 = (uint)uVar6;
        local_39 = local_108.g1(1);
        local_3c = local_108.g1(1);
        cVar2 = local_108.g1(1);
        local_3b = local_108.g1(1);
        local_3a = local_108.g1(1);
        uVar3 = local_108.g1(1);
        local_6c = CONCAT31(local_6c._1_3_, uVar3);
        local_51 = local_108.g1(1);
        uVar7 = local_108.g2(1);
        uVar6 = local_108.g2(1);
        local_108.g2(1);
        uVar11 = local_108.g2(1);
        local_58 = CONCAT22(local_58._2_2_, uVar7);
        uVar7 = local_108.g2(1);
        uVar1 = local_40;
        uVar13 = local_70;
        local_78 = (shared_ptr<Array<short, eastl::allocator>>*)CONCAT62(local_78._2_6_, uVar7);
        local_98 = (ulong)local_39;
        if ((short)uVar11 == -1) {
            uVar11 = 0;
        }
        local_88 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT44(local_88._4_4_, uVar11);
        uVar37 = 0;
        if (cVar2 == -1) {
            uVar37 = local_40;
        }
        uVar32 = 0;
        if (local_3a == '\x01') {
            uVar32 = local_40;
        }
        uVar43 = 0;
        if (local_3c == '\x01') {
            uVar43 = local_40;
        }
        uVar35 = (ulong)(int)local_70;
        local_8c = 0;
        if (local_3b == '\x01') {
            local_8c = local_40;
        }
        local_38->field_20 = local_70;
        local_38->field_96 = local_40;
        local_38->field_316 = (uint)local_39;
        local_68 = (Array<int, eastl::allocator>*)&local_38->field_24;
        local_52 = cVar2;
        local_68->set_max_size(uVar35, 5);
        local_60 = (Array<int, eastl::allocator>*)&local_38->field_48;
        local_60->set_max_size((long)(int)local_70, 5);
        local_80 = (shared_ptr*)&local_38->field_72;
        local_80->set_max_size((long)(int)local_70, 5);
        local_b0 = (Array<int, eastl::allocator>*)&local_38->field_104;
        local_b0->set_max_size((long)(int)local_40, 5);
        local_a8 = (Array<int, eastl::allocator>*)&local_38->field_128;
        local_a8->set_max_size((long)(int)local_40, 5);
        local_a0 = (Array<int, eastl::allocator>*)&local_38->field_152;
        local_a0->set_max_size((long)(int)local_40, 5);
        if (local_39 != 0) {
            (&local_38->field_320, local_98, 5)->set_max_size();
            (&local_38->field_344, local_98, 1)->set_max_size();
            (&local_38->field_368, local_98, 1)->set_max_size();
            (&local_38->field_392, local_98, 1)->set_max_size();
        }
        if ((char)local_6c == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_50, (int*)&local_70);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_38->field_480, &local_50);
            local_50.~shared_ptr();
        }
        if (local_3c == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_50, (int*)&local_40);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_38->field_176, &local_50);
            local_50.~shared_ptr();
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_50, (int*)&local_40);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)&local_38->field_224, &local_50);
            local_50.~shared_ptr();
            make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_50, (int*)&local_40);
            shared_ptr<Array<short, eastl::allocator>>::operator=(
                (shared_ptr<Array<short, eastl::allocator>>*)local_38->field_256, &local_50);
            local_50.~shared_ptr();
        }
        piVar14 = &local_38->field_96;
        if (local_52 == -1) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_50, piVar14);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)&local_38->field_192, &local_50);
            local_50.~shared_ptr();
        } else {
            local_38->field_312 = local_52;
        }
        if (local_3b == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_50, piVar14);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_38->field_208, &local_50);
            local_50.~shared_ptr();
        }
        if (local_3a == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_50, piVar14);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_38->field_496, &local_50);
            local_50.~shared_ptr();
        }
        puVar25 = &local_38->field_20;
        if (local_51 == '\x01') {
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_50, (int*)puVar25);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&local_38->field_512, &local_50);
            local_50.~shared_ptr();
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_50, (int*)puVar25);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&local_38->field_528, &local_50);
            local_50.~shared_ptr();
        }
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_50, piVar14);
        puVar28 = &local_38->field_240;
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)puVar28,
                                                              &local_50);
        local_50.~shared_ptr();
        local_108.SetPos(1, 0);
        iVar12 = uVar13 + uVar1;
        iVar38 = uVar37 + iVar12;
        iVar33 = uVar32 + iVar38;
        iVar44 = uVar43 + iVar33;
        iVar29 = (uint)(ushort)local_78 + iVar44;
        local_8c = local_8c + iVar29;
        iVar31 = (ushort)local_88 + local_8c;
        iVar30 = iVar31 + uVar1 * 2;
        iVar34 = iVar30 + (int)local_98 * 6;
        local_108.SetPos(2, (long)iVar34);
        iVar34 = iVar34 + (local_58 & 65535);
        local_108.SetPos(3, (long)iVar34);
        local_108.SetPos(4, (long)(int)(iVar34 + (uint)uVar6));
        local_108.SetPos(5, (long)iVar44);
        if (0 < (int)local_70) {
            puVar26 = local_38->field_480;
            uVar39 = 0;
            local_88 = (shared_ptr<Array<signed char, eastl::allocator>>*)((ulong)local_88 & 18446744069414584320);
            local_58 = 0;
            local_78 = (shared_ptr<Array<short, eastl::allocator>>*)((ulong)local_78 & 18446744069414584320);
            do {
                uVar13 = local_108.g1(1);
                iVar34 = 0;
                iVar44 = 0;
                if ((uVar13 & 1) != 0) {
                    sVar8 = local_108.gSmart(2);
                    iVar44 = (int)sVar8;
                }
                if ((uVar13 & 2) != 0) {
                    sVar8 = local_108.gSmart(3);
                    iVar34 = (int)sVar8;
                }
                iVar42 = 0;
                if ((uVar13 & 4) != 0) {
                    sVar8 = local_108.gSmart(4);
                    iVar42 = (int)sVar8;
                }
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar39);
                *piVar14 = iVar44 + (int)local_78;
                piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar39);
                *piVar14 = iVar34 + local_58;
                piVar14 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_80, uVar39);
                *piVar14 = iVar42 + (int)local_88;
                puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, uVar39);
                local_78 = (shared_ptr<Array<short, eastl::allocator>>*)CONCAT44(local_78._4_4_, *puVar15);
                puVar16 = (uint*)Array<int, eastl::allocator>::operator[](local_60, uVar39);
                local_58 = *puVar16;
                puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_80,
                                                                                uVar39);
                local_88 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT44(local_88._4_4_, *puVar15);
                if ((char)local_6c == '\x01') {
                    uVar13 = local_108.g1(5);
                    pAVar17 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)puVar26);
                    puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar17, uVar39);
                    *puVar16 = uVar13 & 255;
                }
                uVar39 = uVar39 + 1;
            } while ((long)uVar39 < (long)(int)local_70);
        }
        if ((local_51 == '\x01') && (0 < (int)local_38->field_20)) {
            local_68 = (Array<int, eastl::allocator>*)&local_38->field_512;
            local_60 = (Array<int, eastl::allocator>*)&local_38->field_528;
            uVar39 = 0;
            do {
                bVar4 = local_108.g1(5);
                pAVar18 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_68);
                pAVar17 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        pAVar18, uVar39);
                uVar40 = (ulong)bVar4;
                pAVar17->set_max_size(uVar40, 7);
                pAVar18 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_60);
                pAVar17 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        pAVar18, uVar39);
                pAVar17->set_max_size(uVar40, 7);
                if (bVar4 != 0) {
                    uVar36 = 0;
                    do {
                        uVar13 = local_108.g1(5);
                        pAVar18 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_68);
                        pAVar17 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar18, uVar39);
                        puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar17, uVar36);
                        *puVar16 = uVar13 & 255;
                        uVar13 = local_108.g1(5);
                        pAVar18 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_60);
                        pAVar17 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar18, uVar39);
                        puVar16 = (uint*)Array<int, eastl::allocator>::operator[](pAVar17, uVar36);
                        *puVar16 = uVar13 & 255;
                        uVar36 = uVar36 + 1;
                    } while (uVar40 != uVar36);
                }
                uVar39 = uVar39 + 1;
            } while ((long)uVar39 < (long)(int)*puVar25);
        }
        local_108.SetPos(1, (long)iVar31);
        local_108.SetPos(2, (long)iVar33);
        local_108.SetPos(3, (long)iVar12);
        local_108.SetPos(4, (long)iVar29);
        local_108.SetPos(5, (long)iVar38);
        local_88 = (shared_ptr<Array<signed char, eastl::allocator>>*)local_38->field_176;
        local_80 = (shared_ptr*)&local_38->field_224;
        local_78 = (shared_ptr<Array<short, eastl::allocator>>*)local_38->field_256;
        if ((int)local_40 < 1) {
            local_58 = 0;
            local_6c = 0;
        } else {
            local_68 = (Array<int, eastl::allocator>*)&local_38->field_192;
            puVar26 = local_38->field_208;
            this_00 = local_38->field_496;
            uVar39 = 0;
            local_6c = 0;
            local_58 = 0;
            do {
                uVar7 = local_108.g2(1);
                pAVar19 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)puVar28);
                puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar19, uVar39);
                *puVar20 = uVar7;
                if (local_3c == '\x01') {
                    bVar4 = local_108.g1(2);
                    if ((bVar4 & 1) == 0) {
                        pAVar21 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_88);
                        puVar22 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar39);
                        *puVar22 = 0;
                    } else {
                        pAVar21 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_88);
                        puVar22 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar39);
                        *puVar22 = 1;
                        local_6c = (uint)CONCAT71((int7)((ulong)puVar22 >> 8), 1);
                    }
                    if ((bVar4 & 2) == 0) {
                        pAVar21 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)local_80);
                        puVar22 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar39);
                        *puVar22 = 255;
                        pAVar19 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_78);
                        puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar19, uVar39);
                        *puVar20 = 65535;
                    } else {
                        pAVar21 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)local_80);
                        pbVar23 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar39);
                        *pbVar23 = bVar4 >> 2;
                        pAVar19 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)puVar28);
                        puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar19, uVar39);
                        uVar7 = *puVar20;
                        pAVar19 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_78);
                        puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar19, uVar39);
                        *puVar20 = uVar7;
                        pAVar19 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)puVar28);
                        puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar19, uVar39);
                        *puVar20 = 127;
                        pAVar19 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_78);
                        psVar24 = (short*)Array<short, eastl::allocator>::operator[](pAVar19, uVar39);
                        local_58 = local_58 & 255;
                        if (*psVar24 != -1) {
                            local_58 = 1;
                        }
                    }
                }
                if (local_52 == -1) {
                    uVar3 = local_108.g1s(3);
                    pAVar21 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_68);
                    puVar22 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar39);
                    *puVar22 = uVar3;
                }
                if (local_3b == '\x01') {
                    uVar3 = local_108.g1s(4);
                    pAVar21 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar26);
                    puVar22 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar39);
                    *puVar22 = uVar3;
                }
                if (local_3a == '\x01') {
                    uVar13 = local_108.g1(5);
                    pAVar17 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)this_00);
                    puVar25 = (uint*)Array<int, eastl::allocator>::operator[](pAVar17, uVar39);
                    *puVar25 = uVar13 & 255;
                }
                uVar39 = uVar39 + 1;
            } while ((long)uVar39 < (long)(int)local_40);
        }
        local_108.SetPos(1, (long)(int)local_8c);
        local_108.SetPos(2, uVar35);
        if (0 < (int)local_40) {
            uVar35 = 0;
            iVar31 = 0;
            iVar29 = 0;
            iVar12 = 0;
            local_60 = (Array<int, eastl::allocator>*)((ulong)local_60 & 18446744069414584320);
            do {
                cVar2 = local_108.g1(2);
                local_68 = (Array<int, eastl::allocator>*)CONCAT71(local_68._1_7_, cVar2);
                if (cVar2 == '\x01') {
                    sVar8 = local_108.gSmart(1);
                    sVar9 = local_108.gSmart(1);
                    sVar10 = local_108.gSmart(1);
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_b0, uVar35);
                    iVar29 = iVar31 + sVar8;
                    *piVar14 = iVar29;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar35);
                    iVar12 = sVar9 + iVar29;
                    *piVar14 = iVar12;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a0, uVar35);
                    iVar31 = sVar10 + iVar12;
                    *piVar14 = iVar31;
                    local_60 = (Array<int, eastl::allocator>*)CONCAT44(local_60._4_4_, iVar29);
                    iVar29 = iVar31;
                }
                iVar33 = iVar29;
                iVar34 = iVar12;
                if ((char)local_68 == '\x02') {
                    sVar8 = local_108.gSmart(1);
                    puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, uVar35);
                    *puVar15 = (int)local_60;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar35);
                    *piVar14 = iVar29;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a0, uVar35);
                    iVar31 = iVar31 + sVar8;
                    *piVar14 = iVar31;
                    iVar33 = iVar31;
                    iVar34 = iVar29;
                }
                if ((char)local_68 == '\x03') {
                    sVar8 = local_108.gSmart(1);
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_b0, uVar35);
                    *piVar14 = iVar33;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar35);
                    *piVar14 = iVar34;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a0, uVar35);
                    iVar31 = iVar31 + sVar8;
                    *piVar14 = iVar31;
                    local_60 = (Array<int, eastl::allocator>*)CONCAT44(local_60._4_4_, iVar33);
                    iVar33 = iVar31;
                }
                iVar29 = iVar33;
                iVar12 = iVar34;
                if ((char)local_68 == '\x04') {
                    sVar8 = local_108.gSmart(1);
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_b0, uVar35);
                    *piVar14 = iVar34;
                    puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](local_a8, uVar35);
                    *puVar15 = (int)local_60;
                    piVar14 = (int*)Array<int, eastl::allocator>::operator[](local_a0, uVar35);
                    iVar31 = iVar31 + sVar8;
                    *piVar14 = iVar31;
                    iVar12 = (int)local_60;
                    local_60 = (Array<int, eastl::allocator>*)CONCAT44(local_60._4_4_, iVar34);
                    iVar29 = iVar31;
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_40);
        }
        local_108.SetPos(1, (long)iVar30);
        puVar28 = &local_38->field_344;
        local_68 = (Array<int, eastl::allocator>*)&local_38->field_368;
        local_60 = (Array<int, eastl::allocator>*)&local_38->field_392;
        if (local_39 != 0) {
            local_38 = (ModelUnlitImpl*)&local_38->field_320;
            uVar35 = 0;
            do {
                puVar26 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)local_38, uVar35);
                *puVar26 = 0;
                uVar7 = local_108.g2(1);
                puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)puVar28, uVar35);
                *puVar20 = uVar7;
                uVar7 = local_108.g2(1);
                puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)local_68, uVar35);
                *puVar20 = uVar7;
                uVar7 = local_108.g2(1);
                puVar20 = (undefined2*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)local_60, uVar35);
                *puVar20 = uVar7;
                uVar35 = uVar35 + 1;
            } while (local_98 != uVar35);
        }
        bVar5 = operator!=(local_80, (_func_decltype_nullptr*)0);
        if (bVar5) {
            if ((int)local_40 < 1) {
                bVar5 = false;
            } else {
                uVar35 = 0;
                local_38 = (ModelUnlitImpl*)puVar28;
                bVar41 = false;
                do {
                    pAVar21 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_80);
                    pbVar23 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar35);
                    uVar39 = (ulong)*pbVar23;
                    if (uVar39 == 255) {
                    LAB_100356130:
                        bVar5 = bVar41;
                    } else {
                        puVar27 = (ushort*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)local_38, uVar39);
                        uVar6 = *puVar27;
                        puVar25 = (uint*)Array<int, eastl::allocator>::operator[](local_b0, uVar35);
                        bVar5 = true;
                        if (*puVar25 == (uint)uVar6) {
                            puVar27 = (ushort*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)local_68, uVar39);
                            uVar6 = *puVar27;
                            puVar25 = (uint*)Array<int, eastl::allocator>::operator[](local_a8, uVar35);
                            if (*puVar25 == (uint)uVar6) {
                                puVar27 = (ushort*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)local_60, uVar39);
                                uVar6 = *puVar27;
                                puVar25 = (uint*)Array<int, eastl::allocator>::operator[](local_a0, uVar35);
                                if (*puVar25 == (uint)uVar6) {
                                    pAVar21 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_80);
                                    puVar28 =
                                        (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar21, uVar35);
                                    *puVar28 = 255;
                                    goto LAB_100356130;
                                }
                            }
                        }
                    }
                    uVar35 = uVar35 + 1;
                    bVar41 = bVar5;
                } while ((long)uVar35 < (long)(int)local_40);
            }
            if (!bVar5) {
                new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)local_80, &local_50);
                local_50.~shared_ptr();
            }
        }
        if ((local_58 & 1) == 0) {
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<Array<short, eastl::allocator>>::operator=(local_78, &local_50);
            local_50.~shared_ptr();
        }
        if ((local_6c & 1) == 0) {
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(local_88, &local_50);
            local_50.~shared_ptr();
        }
        local_108.~MultiCursorPacketHelper();
    }

    // 0x100356360, 4144 bytes, placed by neighbouring functions
    // ModelUnlitImpl::LoadOb3Engine200(unsigned char*, unsigned long)
    void ModelUnlitImpl::LoadOb3Engine200(uchar* param_1, ulong param_2) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        ModelUnlitImpl* pMVar1;
        uint uVar2;
        char cVar3;
        undefined1 uVar4;
        byte bVar6;
        ushort uVar7;
        undefined2 uVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        int iVar12;
        int iVar13;
        uint uVar14;
        undefined4 uVar15;
        char* pcVar16;
        undefined1* puVar17;
        int* piVar18;
        undefined4* puVar19;
        uint* puVar20;
        Array<int, eastl::allocator>* pAVar21;
        Array<short, eastl::allocator>* pAVar22;
        undefined2* puVar23;
        Array<signed char, eastl::allocator>* pAVar24;
        undefined1* puVar25;
        short* psVar26;
        long lVar27;
        int iVar28;
        int iVar29;
        int iVar30;
        undefined1* puVar31;
        int iVar32;
        uint uVar33;
        int iVar34;
        ulong uVar35;
        uint uVar36;
        int iVar37;
        int iVar38;
        int iVar39;
        MultiCursorPacketHelper local_108;
        shared_ptr<Array<int, eastl::allocator>>* local_b0;
        shared_ptr<Array<signed char, eastl::allocator>>* local_a8;
        ushort local_9e;
        int local_9c;
        uint local_98;
        uint local_94;
        int local_90;
        uint local_8c;
        ulong local_88;
        uint local_7c;
        ulong local_78;
        Array<int, eastl::allocator>* local_70;
        Array<int, eastl::allocator>* local_68;
        uint local_5c;
        shared_ptr local_58;
        ModelUnlitImpl* local_48;
        char local_3b;
        char local_3a;
        char local_39;
        char local_38;
        char local_37;
        char local_36;
        byte local_35;
        uint local_34;

        local_48 = this;
        new (&local_108) jagex3::MultiCursorPacketHelper(param_1, param_2);
        local_108.SetPos(1, param_2 - 23);
        uVar7 = local_108.g2(1);
        local_5c = (uint)uVar7;
        uVar7 = local_108.g2(1);
        local_34 = (uint)uVar7;
        local_35 = local_108.g1(1);
        local_3a = local_108.g1(1);
        local_39 = local_108.g1(1);
        local_38 = local_108.g1(1);
        local_37 = local_108.g1(1);
        local_36 = local_108.g1(1);
        local_3b = local_108.g1(1);
        uVar8 = local_108.g2(1);
        local_b0 = (shared_ptr<Array<int, eastl::allocator>>*)CONCAT62(local_b0._2_6_, uVar8);
        uVar8 = local_108.g2(1);
        local_a8 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT62(local_a8._2_6_, uVar8);
        local_9e = local_108.g2(1);
        uVar8 = local_108.g2(1);
        local_7c = CONCAT22(local_7c._2_2_, uVar8);
        uVar7 = local_108.g2(1);
        local_78 = (ulong)local_35;
        local_9c = 0;
        local_88 = 0;
        iVar28 = 0;
        if (local_35 != 0) {
            puVar31 = &local_48->field_320;
            puVar31->set_max_size(local_78, 7);
            iVar28 = 0;
            local_108.SetPos(1, 0);
            uVar35 = 0;
            local_88 = 0;
            local_9c = 0;
            do {
                cVar3 = local_108.g1s(1);
                pcVar16 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)puVar31, uVar35);
                *pcVar16 = cVar3;
                iVar28 = iVar28 + (uint)(cVar3 == '\0');
                local_88 = (ulong)((int)local_88 + (uint)((byte)(cVar3 - 1U) < 3));
                local_9c = local_9c + (uint)(cVar3 == '\x02');
                uVar35 = uVar35 + 1;
            } while (local_78 != uVar35);
        }
        uVar2 = local_34;
        uVar14 = local_5c;
        uVar33 = 0;
        if (local_3a == '\x01') {
            uVar33 = local_34;
        }
        local_94 = 0;
        if (local_39 == -1) {
            local_94 = local_34;
        }
        uVar36 = 0;
        if (local_37 == '\x01') {
            uVar36 = local_34;
        }
        local_98 = 0;
        if (local_3b == '\x01') {
            local_98 = local_5c;
        }
        local_8c = 0;
        if (local_38 == '\x01') {
            local_8c = local_34;
        }
        local_90 = local_34 * 2;
        if (local_36 != '\x01') {
            local_90 = 0;
        }
        local_48->field_20 = local_5c;
        local_48->field_96 = local_34;
        local_48->field_316 = (int)local_78;
        local_70 = (Array<int, eastl::allocator>*)&local_48->field_24;
        local_70->set_max_size((long)(int)local_5c, 7);
        local_68 = (Array<int, eastl::allocator>*)&local_48->field_48;
        local_68->set_max_size((long)(int)local_5c, 7);
        puVar31 = &local_48->field_72;
        puVar31->set_max_size((long)(int)local_5c, 7);
        this_00 = &local_48->field_104;
        this_00->set_max_size((long)(int)local_34, 7);
        this_01 = &local_48->field_128;
        this_01->set_max_size((long)(int)local_34, 7);
        this_02 = &local_48->field_152;
        this_02->set_max_size((long)(int)local_34, 7);
        if (local_3b == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_5c);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_48->field_480, &local_58);
            local_58.~shared_ptr();
        }
        if (local_3a == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_48->field_176, &local_58);
            local_58.~shared_ptr();
        }
        if (local_39 == -1) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)&local_48->field_192, &local_58);
            local_58.~shared_ptr();
        } else {
            local_48->field_312 = local_39;
        }
        if (local_38 == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_48->field_208, &local_58);
            local_58.~shared_ptr();
        }
        if (local_37 == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_48->field_496, &local_58);
            local_58.~shared_ptr();
        }
        if (local_36 == '\x01') {
            make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
            shared_ptr<Array<short, eastl::allocator>>::operator=(
                (shared_ptr<Array<short, eastl::allocator>>*)local_48->field_256, &local_58);
            local_58.~shared_ptr();
            if (local_35 != 0) {
                make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)&local_48->field_224, &local_58);
                local_58.~shared_ptr();
            }
        }
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_34);
        pMVar1 = local_48;
        this_03 = &local_48->field_240;
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_03,
                                                              &local_58);
        local_58.~shared_ptr();
        (&pMVar1->field_344, local_78, 1)->set_max_size();
        this_04 = &local_48->field_368;
        this_04->set_max_size(local_78, 1);
        this_05 = &local_48->field_392;
        this_05->set_max_size(local_78, 1);
        local_108.SetPos(1, local_78);
        iVar12 = (int)local_78 + uVar14;
        iVar34 = uVar33 + iVar12;
        iVar29 = iVar34 + uVar2;
        local_94 = local_94 + iVar29;
        iVar37 = uVar36 + local_94;
        local_98 = local_98 + iVar37;
        local_8c = local_8c + local_98;
        iVar30 = (local_7c & 65535) + local_8c;
        local_90 = local_90 + iVar30;
        iVar32 = (uint)uVar7 + local_90;
        iVar13 = iVar32 + uVar2 * 2;
        local_108.SetPos(2, (long)iVar13);
        iVar13 = iVar13 + (uint)(ushort)local_b0;
        local_108.SetPos(3, (long)iVar13);
        iVar13 = iVar13 + (uint)(ushort)local_a8;
        local_108.SetPos(4, (long)iVar13);
        local_108.SetPos(5, (long)iVar37);
        if (0 < (int)local_5c) {
            puVar17 = local_48->field_480;
            uVar35 = 0;
            local_7c = 0;
            local_a8 = (shared_ptr<Array<signed char, eastl::allocator>>*)((ulong)local_a8 & 18446744069414584320);
            local_b0 = (shared_ptr<Array<int, eastl::allocator>>*)((ulong)local_b0 & 18446744069414584320);
            do {
                uVar14 = local_108.g1(1);
                iVar39 = 0;
                iVar37 = 0;
                if ((uVar14 & 1) != 0) {
                    sVar9 = local_108.gSmart(2);
                    iVar37 = (int)sVar9;
                }
                if ((uVar14 & 2) != 0) {
                    sVar9 = local_108.gSmart(3);
                    iVar39 = (int)sVar9;
                }
                iVar38 = 0;
                if ((uVar14 & 4) != 0) {
                    sVar9 = local_108.gSmart(4);
                    iVar38 = (int)sVar9;
                }
                piVar18 = (int*)Array<int, eastl::allocator>::operator[](local_70, uVar35);
                *piVar18 = iVar37 + (int)local_b0;
                piVar18 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar35);
                *piVar18 = iVar39 + (int)local_a8;
                piVar18 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar31, uVar35);
                *piVar18 = iVar38 + local_7c;
                puVar19 = (undefined4*)Array<int, eastl::allocator>::operator[](local_70, uVar35);
                local_b0 = (shared_ptr<Array<int, eastl::allocator>>*)CONCAT44(local_b0._4_4_, *puVar19);
                puVar19 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, uVar35);
                local_a8 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT44(local_a8._4_4_, *puVar19);
                puVar20 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar31, uVar35);
                local_7c = *puVar20;
                if (local_3b == '\x01') {
                    uVar14 = local_108.g1(5);
                    pAVar21 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)puVar17);
                    puVar20 = (uint*)Array<int, eastl::allocator>::operator[](pAVar21, uVar35);
                    *puVar20 = uVar14 & 255;
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_5c);
        }
        local_108.SetPos(1, (long)iVar32);
        local_108.SetPos(2, (long)iVar12);
        local_108.SetPos(3, (long)iVar29);
        local_108.SetPos(4, (long)(int)local_98);
        local_108.SetPos(5, (long)(int)local_94);
        local_108.SetPos(6, (long)iVar30);
        local_108.SetPos(7, (long)local_90);
        if (0 < (int)local_34) {
            local_68 = (Array<int, eastl::allocator>*)local_48->field_176;
            local_a8 = (shared_ptr<Array<signed char, eastl::allocator>>*)&local_48->field_192;
            puVar31 = local_48->field_208;
            local_b0 = (shared_ptr<Array<int, eastl::allocator>>*)local_48->field_496;
            local_70 = (Array<int, eastl::allocator>*)local_48->field_256;
            puVar17 = &local_48->field_224;
            uVar35 = 0;
            do {
                uVar8 = local_108.g2(1);
                pAVar22 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)this_03);
                puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar22, uVar35);
                *puVar23 = uVar8;
                if (local_3a == '\x01') {
                    uVar4 = local_108.g1s(2);
                    pAVar24 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_68);
                    puVar25 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar24, uVar35);
                    *puVar25 = uVar4;
                }
                if (local_39 == -1) {
                    uVar4 = local_108.g1s(3);
                    pAVar24 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_a8);
                    puVar25 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar24, uVar35);
                    *puVar25 = uVar4;
                }
                if (local_38 == '\x01') {
                    uVar4 = local_108.g1s(4);
                    pAVar24 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar31);
                    puVar25 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar24, uVar35);
                    *puVar25 = uVar4;
                }
                if (local_37 == '\x01') {
                    uVar14 = local_108.g1(5);
                    pAVar21 =
                        (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(local_b0);
                    puVar20 = (uint*)Array<int, eastl::allocator>::operator[](pAVar21, uVar35);
                    *puVar20 = uVar14 & 255;
                }
                if (local_36 == '\x01') {
                    sVar9 = local_108.g2(6);
                    pAVar22 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)local_70);
                    psVar26 = (short*)Array<short, eastl::allocator>::operator[](pAVar22, uVar35);
                    *psVar26 = sVar9 + -1;
                }
                if (operator!=((shared_ptr*)puVar17, (_func_decltype_nullptr*)0)) {
                    pAVar22 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)local_70);
                    psVar26 = (short*)Array<short, eastl::allocator>::operator[](pAVar22, uVar35);
                    if (*psVar26 != -1) {
                        cVar3 = local_108.g1(7);
                        pAVar24 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar17);
                        pcVar16 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar24, uVar35);
                        *pcVar16 = cVar3 + -1;
                    }
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_34);
        }
        local_108.SetPos(1, (long)(int)local_8c);
        local_108.SetPos(2, (long)iVar34);
        if (0 < (int)local_34) {
            uVar35 = 0;
            iVar30 = 0;
            iVar29 = 0;
            iVar12 = 0;
            local_68 = (Array<int, eastl::allocator>*)((ulong)local_68 & 18446744069414584320);
            do {
                cVar3 = local_108.g1(2);
                local_70 = (Array<int, eastl::allocator>*)CONCAT71(local_70._1_7_, cVar3);
                if (cVar3 == '\x01') {
                    sVar9 = local_108.gSmart(1);
                    sVar10 = local_108.gSmart(1);
                    sVar11 = local_108.gSmart(1);
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar35);
                    iVar29 = iVar30 + sVar9;
                    *piVar18 = iVar29;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar35);
                    iVar12 = sVar10 + iVar29;
                    *piVar18 = iVar12;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar35);
                    iVar30 = sVar11 + iVar12;
                    *piVar18 = iVar30;
                    local_68 = (Array<int, eastl::allocator>*)CONCAT44(local_68._4_4_, iVar29);
                    iVar29 = iVar30;
                }
                iVar32 = iVar12;
                if ((char)local_70 == '\x02') {
                    sVar9 = local_108.gSmart(1);
                    puVar19 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar35);
                    *puVar19 = (int)local_68;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar35);
                    *piVar18 = iVar29;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar35);
                    iVar30 = iVar30 + sVar9;
                    *piVar18 = iVar30;
                    iVar32 = iVar29;
                    iVar29 = iVar30;
                }
                if ((char)local_70 == '\x03') {
                    sVar9 = local_108.gSmart(1);
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar35);
                    *piVar18 = iVar29;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar35);
                    *piVar18 = iVar32;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar35);
                    iVar30 = iVar30 + sVar9;
                    *piVar18 = iVar30;
                    local_68 = (Array<int, eastl::allocator>*)CONCAT44(local_68._4_4_, iVar29);
                    iVar29 = iVar30;
                }
                iVar12 = iVar32;
                if ((char)local_70 == '\x04') {
                    sVar9 = local_108.gSmart(1);
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar35);
                    *piVar18 = iVar32;
                    puVar19 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_01, uVar35);
                    *puVar19 = (int)local_68;
                    piVar18 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_02, uVar35);
                    iVar30 = iVar30 + sVar9;
                    *piVar18 = iVar30;
                    iVar12 = (int)local_68;
                    local_68 = (Array<int, eastl::allocator>*)CONCAT44(local_68._4_4_, iVar32);
                    iVar29 = iVar30;
                }
                uVar35 = uVar35 + 1;
            } while ((long)uVar35 < (long)(int)local_34);
        }
        iVar13 = iVar13 + (uint)local_9e;
        local_108.SetPos(1, (long)iVar13);
        iVar13 = iVar13 + iVar28 * 6;
        local_108.SetPos(2, (long)iVar13);
        iVar28 = (int)local_88 * 6;
        iVar13 = iVar13 + iVar28;
        local_108.SetPos(3, (long)iVar13);
        iVar13 = iVar13 + iVar28;
        local_108.SetPos(4, (long)iVar13);
        iVar13 = iVar13 + (int)local_88 * 2;
        local_108.SetPos(5, (long)iVar13);
        iVar13 = iVar13 + (int)local_88;
        local_108.SetPos(6, (long)iVar13);
        if (local_35 != 0) {
            puVar31 = &local_48->field_320;
            uVar35 = 0;
            do {
                pcVar16 = (char*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)puVar31, uVar35);
                if (*pcVar16 == '\0') {
                    uVar8 = local_108.g2(1);
                    puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)&pMVar1->field_344, uVar35);
                    *puVar23 = uVar8;
                    uVar8 = local_108.g2(1);
                    puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)this_04, uVar35);
                    *puVar23 = uVar8;
                    uVar8 = local_108.g2(1);
                    puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](
                        (Array<short, eastl::allocator>*)this_05, uVar35);
                    *puVar23 = uVar8;
                }
                uVar35 = uVar35 + 1;
            } while (local_78 != uVar35);
        }
        local_108.SetPos(1, (long)(iVar13 + ((int)local_88 + local_9c) * 2));
        bVar6 = local_108.g1(1);
        if (bVar6 != 0) {
            make_shared<LightSource>((jag*)&local_58);
            puVar31 = &local_48->field_544;
            shared_ptr<LightSource>::operator=((shared_ptr<LightSource>*)puVar31, &local_58);
            local_58.~shared_ptr();
            puVar20 = (uint*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar31);
            *puVar20 = (uint)bVar6;
            uVar14 = local_108.g2(1);
            lVar27 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar31);
            *(uint*)(lVar27 + 4) = uVar14 & 65535;
            uVar14 = local_108.g2(1);
            lVar27 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar31);
            *(uint*)(lVar27 + 8) = uVar14 & 65535;
            uVar14 = local_108.g2(1);
            lVar27 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar31);
            *(uint*)(lVar27 + 12) = uVar14 & 65535;
            uVar15 = local_108.g4(1);
            lVar27 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)puVar31);
            *(undefined4*)(lVar27 + 16) = uVar15;
        }
        local_108.~MultiCursorPacketHelper();
    }

    // 0x100357390, 3840 bytes, placed by neighbouring functions
    // ModelUnlitImpl::LoadOb2Engine200(unsigned char*, unsigned long)
    void ModelUnlitImpl::LoadOb2Engine200(uchar* param_1, ulong param_2) {
        uint uVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        bool bVar5;
        ushort uVar6;
        undefined2 uVar7;
        undefined2 uVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        uint uVar12;
        int* piVar13;
        undefined4* puVar14;
        uint* puVar15;
        Array<int, eastl::allocator>* pAVar16;
        Array<short, eastl::allocator>* pAVar17;
        undefined2* puVar18;
        Array<signed char, eastl::allocator>* pAVar19;
        undefined1* puVar20;
        byte* pbVar21;
        short* psVar22;
        undefined1* puVar23;
        ushort* puVar24;
        undefined1* puVar25;
        int iVar26;
        int iVar27;
        uint uVar28;
        int iVar29;
        ulong uVar30;
        uint uVar31;
        ulong uVar32;
        bool bVar33;
        int iVar34;
        int iVar35;
        uint uVar36;
        int iVar37;
        MultiCursorPacketHelper local_128;
        int local_cc;
        int local_c8;
        int local_c4;
        shared_ptr<Array<short, eastl::allocator>>* local_c0;
        Array<int, eastl::allocator>* local_b8;
        Array<int, eastl::allocator>* local_b0;
        Array<int, eastl::allocator>* local_a8;
        ulong local_a0;
        uint local_98;
        uint local_94;
        shared_ptr<Array<signed char, eastl::allocator>>* local_90;
        shared_ptr* local_88;
        shared_ptr<Array<short, eastl::allocator>>* local_80;
        Array<int, eastl::allocator>* local_78;
        Array<int, eastl::allocator>* local_70;
        uint local_64;
        uint local_60;
        uint local_5c;
        shared_ptr local_58;
        char local_41;
        ModelUnlitImpl* local_40;
        uint local_38;
        char local_34;
        char local_33;
        char local_32;
        byte local_31;

        local_40 = this;
        new (&local_128) jagex3::MultiCursorPacketHelper(param_1, param_2);
        local_128.SetPos(1, param_2 - 18);
        uVar6 = local_128.g2(1);
        local_64 = (uint)uVar6;
        uVar6 = local_128.g2(1);
        local_38 = (uint)uVar6;
        local_31 = local_128.g1(1);
        local_34 = local_128.g1(1);
        cVar2 = local_128.g1(1);
        local_33 = local_128.g1(1);
        local_32 = local_128.g1(1);
        uVar3 = local_128.g1(1);
        local_60 = CONCAT31(local_60._1_3_, uVar3);
        uVar7 = local_128.g2(1);
        uVar8 = local_128.g2(1);
        local_128.g2(1);
        local_80 = (shared_ptr<Array<short, eastl::allocator>>*)CONCAT62(local_80._2_6_, uVar7);
        local_90 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT62(local_90._2_6_, uVar8);
        local_5c = local_128.g2(1);
        uVar1 = local_38;
        uVar12 = local_64;
        if ((short)local_5c == -1) {
            local_5c = 0;
        }
        uVar30 = (ulong)(int)local_64;
        uVar31 = 0;
        if (cVar2 == -1) {
            uVar31 = local_38;
        }
        local_98 = 0;
        if (local_32 == '\x01') {
            local_98 = local_38;
        }
        uVar36 = 0;
        if (local_34 == '\x01') {
            uVar36 = local_38;
        }
        local_94 = 0;
        if ((char)local_60 == '\x01') {
            local_94 = local_64;
        }
        local_a0 = (ulong)local_31;
        uVar28 = 0;
        if (local_33 == '\x01') {
            uVar28 = local_38;
        }
        local_40->field_20 = local_64;
        local_40->field_96 = local_38;
        local_40->field_316 = (uint)local_31;
        local_78 = (Array<int, eastl::allocator>*)&local_40->field_24;
        local_41 = cVar2;
        local_78->set_max_size(uVar30, 5);
        local_70 = (Array<int, eastl::allocator>*)&local_40->field_48;
        local_70->set_max_size((long)(int)local_64, 5);
        local_88 = (shared_ptr*)&local_40->field_72;
        local_88->set_max_size((long)(int)local_64, 5);
        local_b8 = (Array<int, eastl::allocator>*)&local_40->field_104;
        local_b8->set_max_size((long)(int)local_38, 5);
        local_b0 = (Array<int, eastl::allocator>*)&local_40->field_128;
        local_b0->set_max_size((long)(int)local_38, 5);
        local_a8 = (Array<int, eastl::allocator>*)&local_40->field_152;
        local_a8->set_max_size((long)(int)local_38, 5);
        if (local_31 != 0) {
            (&local_40->field_320, local_a0, 5)->set_max_size();
            (&local_40->field_344, local_a0, 1)->set_max_size();
            (&local_40->field_368, local_a0, 1)->set_max_size();
            (&local_40->field_392, local_a0, 1)->set_max_size();
        }
        if ((char)local_60 == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_64);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_40->field_480, &local_58);
            local_58.~shared_ptr();
        }
        if (local_34 == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_38);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_40->field_176, &local_58);
            local_58.~shared_ptr();
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_38);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)&local_40->field_224, &local_58);
            local_58.~shared_ptr();
            make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_58, (int*)&local_38);
            shared_ptr<Array<short, eastl::allocator>>::operator=(
                (shared_ptr<Array<short, eastl::allocator>>*)local_40->field_256, &local_58);
            local_58.~shared_ptr();
        }
        piVar13 = &local_40->field_96;
        if (local_41 == -1) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, piVar13);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)&local_40->field_192, &local_58);
            local_58.~shared_ptr();
        } else {
            local_40->field_312 = local_41;
        }
        if (local_33 == '\x01') {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_58, piVar13);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_40->field_208, &local_58);
            local_58.~shared_ptr();
        }
        if (local_32 == '\x01') {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_58, piVar13);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)local_40->field_496, &local_58);
            local_58.~shared_ptr();
        }
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_58, piVar13);
        local_c0 = (shared_ptr<Array<short, eastl::allocator>>*)&local_40->field_240;
        shared_ptr<Array<short, eastl::allocator>>::operator=(local_c0, &local_58);
        local_58.~shared_ptr();
        local_128.SetPos(1, 0);
        local_cc = uVar12 + uVar1;
        local_c8 = uVar31 + local_cc;
        local_98 = local_98 + local_c8;
        iVar37 = uVar36 + local_98;
        local_94 = local_94 + iVar37;
        local_c4 = uVar28 + local_94;
        iVar26 = (local_5c & 65535) + local_c4;
        iVar27 = iVar26 + uVar1 * 2;
        iVar29 = iVar27 + (int)local_a0 * 6;
        local_128.SetPos(2, (long)iVar29);
        iVar29 = iVar29 + (uint)(ushort)local_80;
        local_128.SetPos(3, (long)iVar29);
        local_128.SetPos(4, (long)(int)(iVar29 + (uint)(ushort)local_90));
        local_128.SetPos(5, (long)iVar37);
        if (0 < (int)local_64) {
            puVar25 = local_40->field_480;
            uVar32 = 0;
            local_90 = (shared_ptr<Array<signed char, eastl::allocator>>*)((ulong)local_90 & 18446744069414584320);
            local_5c = 0;
            local_80 = (shared_ptr<Array<short, eastl::allocator>>*)((ulong)local_80 & 18446744069414584320);
            do {
                uVar12 = local_128.g1(1);
                iVar29 = 0;
                iVar37 = 0;
                if ((uVar12 & 1) != 0) {
                    sVar9 = local_128.gSmart(2);
                    iVar37 = (int)sVar9;
                }
                if ((uVar12 & 2) != 0) {
                    sVar9 = local_128.gSmart(3);
                    iVar29 = (int)sVar9;
                }
                iVar34 = 0;
                if ((uVar12 & 4) != 0) {
                    sVar9 = local_128.gSmart(4);
                    iVar34 = (int)sVar9;
                }
                piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_78, uVar32);
                *piVar13 = iVar37 + (int)local_80;
                piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_70, uVar32);
                *piVar13 = iVar29 + local_5c;
                piVar13 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_88, uVar32);
                *piVar13 = iVar34 + (int)local_90;
                puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](local_78, uVar32);
                local_80 = (shared_ptr<Array<short, eastl::allocator>>*)CONCAT44(local_80._4_4_, *puVar14);
                puVar15 = (uint*)Array<int, eastl::allocator>::operator[](local_70, uVar32);
                local_5c = *puVar15;
                puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_88,
                                                                                uVar32);
                local_90 = (shared_ptr<Array<signed char, eastl::allocator>>*)CONCAT44(local_90._4_4_, *puVar14);
                if ((char)local_60 == '\x01') {
                    uVar12 = local_128.g1(5);
                    pAVar16 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)puVar25);
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](pAVar16, uVar32);
                    *puVar15 = uVar12 & 255;
                }
                uVar32 = uVar32 + 1;
            } while ((long)uVar32 < (long)(int)local_64);
        }
        local_128.SetPos(1, (long)iVar26);
        local_128.SetPos(2, (long)(int)local_98);
        local_128.SetPos(3, (long)local_cc);
        local_128.SetPos(4, (long)(int)local_94);
        local_128.SetPos(5, (long)local_c8);
        local_90 = (shared_ptr<Array<signed char, eastl::allocator>>*)local_40->field_176;
        local_88 = (shared_ptr*)&local_40->field_224;
        local_80 = (shared_ptr<Array<short, eastl::allocator>>*)local_40->field_256;
        if ((int)local_38 < 1) {
            local_5c = 0;
            local_60 = 0;
        } else {
            local_78 = (Array<int, eastl::allocator>*)&local_40->field_192;
            puVar25 = local_40->field_208;
            puVar23 = local_40->field_496;
            uVar32 = 0;
            local_60 = 0;
            local_5c = 0;
            do {
                uVar7 = local_128.g2(1);
                pAVar17 =
                    (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(local_c0);
                puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar17, uVar32);
                *puVar18 = uVar7;
                if (local_34 == '\x01') {
                    bVar4 = local_128.g1(2);
                    if ((bVar4 & 1) == 0) {
                        pAVar19 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_90);
                        puVar20 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar32);
                        *puVar20 = 0;
                    } else {
                        pAVar19 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_90);
                        puVar20 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar32);
                        *puVar20 = 1;
                        local_60 = (uint)CONCAT71((int7)((ulong)puVar20 >> 8), 1);
                    }
                    if ((bVar4 & 2) == 0) {
                        pAVar19 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)local_88);
                        puVar20 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar32);
                        *puVar20 = 255;
                        pAVar17 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_80);
                        puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar17, uVar32);
                        *puVar18 = 65535;
                    } else {
                        pAVar19 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)local_88);
                        pbVar21 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar32);
                        *pbVar21 = bVar4 >> 2;
                        pAVar17 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_c0);
                        puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar17, uVar32);
                        uVar7 = *puVar18;
                        pAVar17 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_80);
                        puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar17, uVar32);
                        *puVar18 = uVar7;
                        pAVar17 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_c0);
                        puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar17, uVar32);
                        *puVar18 = 127;
                        pAVar17 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                local_80);
                        psVar22 = (short*)Array<short, eastl::allocator>::operator[](pAVar17, uVar32);
                        local_5c = local_5c & 255;
                        if (*psVar22 != -1) {
                            local_5c = 1;
                        }
                    }
                }
                if (local_41 == -1) {
                    uVar3 = local_128.g1s(3);
                    pAVar19 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_78);
                    puVar20 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar32);
                    *puVar20 = uVar3;
                }
                if (local_33 == '\x01') {
                    uVar3 = local_128.g1s(4);
                    pAVar19 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar25);
                    puVar20 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar32);
                    *puVar20 = uVar3;
                }
                if (local_32 == '\x01') {
                    uVar12 = local_128.g1(5);
                    pAVar16 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                        (shared_ptr<Array<int, eastl::allocator>>*)puVar23);
                    puVar15 = (uint*)Array<int, eastl::allocator>::operator[](pAVar16, uVar32);
                    *puVar15 = uVar12 & 255;
                }
                uVar32 = uVar32 + 1;
            } while ((long)uVar32 < (long)(int)local_38);
        }
        local_128.SetPos(1, (long)local_c4);
        local_128.SetPos(2, uVar30);
        if (0 < (int)local_38) {
            uVar30 = 0;
            iVar37 = 0;
            iVar29 = 0;
            iVar26 = 0;
            local_70 = (Array<int, eastl::allocator>*)((ulong)local_70 & 18446744069414584320);
            do {
                cVar2 = local_128.g1(2);
                local_78 = (Array<int, eastl::allocator>*)CONCAT71(local_78._1_7_, cVar2);
                if (cVar2 == '\x01') {
                    sVar9 = local_128.gSmart(1);
                    sVar10 = local_128.gSmart(1);
                    sVar11 = local_128.gSmart(1);
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_b8, uVar30);
                    iVar29 = iVar37 + sVar9;
                    *piVar13 = iVar29;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_b0, uVar30);
                    iVar26 = sVar10 + iVar29;
                    *piVar13 = iVar26;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar30);
                    iVar37 = sVar11 + iVar26;
                    *piVar13 = iVar37;
                    local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, iVar29);
                    iVar29 = iVar37;
                }
                iVar34 = iVar29;
                iVar35 = iVar26;
                if ((char)local_78 == '\x02') {
                    sVar9 = local_128.gSmart(1);
                    puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b8, uVar30);
                    *puVar14 = (int)local_70;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_b0, uVar30);
                    *piVar13 = iVar29;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar30);
                    iVar37 = iVar37 + sVar9;
                    *piVar13 = iVar37;
                    iVar34 = iVar37;
                    iVar35 = iVar29;
                }
                if ((char)local_78 == '\x03') {
                    sVar9 = local_128.gSmart(1);
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_b8, uVar30);
                    *piVar13 = iVar34;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_b0, uVar30);
                    *piVar13 = iVar35;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar30);
                    iVar37 = iVar37 + sVar9;
                    *piVar13 = iVar37;
                    local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, iVar34);
                    iVar34 = iVar37;
                }
                iVar29 = iVar34;
                iVar26 = iVar35;
                if ((char)local_78 == '\x04') {
                    sVar9 = local_128.gSmart(1);
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_b8, uVar30);
                    *piVar13 = iVar35;
                    puVar14 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, uVar30);
                    *puVar14 = (int)local_70;
                    piVar13 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar30);
                    iVar37 = iVar37 + sVar9;
                    *piVar13 = iVar37;
                    iVar26 = (int)local_70;
                    local_70 = (Array<int, eastl::allocator>*)CONCAT44(local_70._4_4_, iVar35);
                    iVar29 = iVar37;
                }
                uVar30 = uVar30 + 1;
            } while ((long)uVar30 < (long)(int)local_38);
        }
        local_128.SetPos(1, (long)iVar27);
        puVar25 = &local_40->field_344;
        local_78 = (Array<int, eastl::allocator>*)&local_40->field_368;
        local_70 = (Array<int, eastl::allocator>*)&local_40->field_392;
        if (local_31 != 0) {
            local_40 = (ModelUnlitImpl*)&local_40->field_320;
            uVar30 = 0;
            do {
                puVar23 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)local_40, uVar30);
                *puVar23 = 0;
                uVar7 = local_128.g2(1);
                puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)puVar25, uVar30);
                *puVar18 = uVar7;
                uVar7 = local_128.g2(1);
                puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)local_78, uVar30);
                *puVar18 = uVar7;
                uVar7 = local_128.g2(1);
                puVar18 = (undefined2*)Array<short, eastl::allocator>::operator[](
                    (Array<short, eastl::allocator>*)local_70, uVar30);
                *puVar18 = uVar7;
                uVar30 = uVar30 + 1;
            } while (local_a0 != uVar30);
        }
        bVar5 = operator!=(local_88, (_func_decltype_nullptr*)0);
        if (bVar5) {
            if ((int)local_38 < 1) {
                bVar5 = false;
            } else {
                uVar30 = 0;
                local_40 = (ModelUnlitImpl*)puVar25;
                bVar33 = false;
                do {
                    pAVar19 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_88);
                    pbVar21 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar30);
                    uVar32 = (ulong)*pbVar21;
                    if (uVar32 == 255) {
                    LAB_100358090:
                        bVar5 = bVar33;
                    } else {
                        puVar24 = (ushort*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)local_40, uVar32);
                        uVar6 = *puVar24;
                        puVar15 = (uint*)Array<int, eastl::allocator>::operator[](local_b8, uVar30);
                        bVar5 = true;
                        if (*puVar15 == (uint)uVar6) {
                            puVar24 = (ushort*)Array<short, eastl::allocator>::operator[](
                                (Array<short, eastl::allocator>*)local_78, uVar32);
                            uVar6 = *puVar24;
                            puVar15 = (uint*)Array<int, eastl::allocator>::operator[](local_b0, uVar30);
                            if (*puVar15 == (uint)uVar6) {
                                puVar24 = (ushort*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)local_70, uVar32);
                                uVar6 = *puVar24;
                                puVar15 = (uint*)Array<int, eastl::allocator>::operator[](local_a8, uVar30);
                                if (*puVar15 == (uint)uVar6) {
                                    pAVar19 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)local_88);
                                    puVar25 =
                                        (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar19, uVar30);
                                    *puVar25 = 255;
                                    goto LAB_100358090;
                                }
                            }
                        }
                    }
                    uVar30 = uVar30 + 1;
                    bVar33 = bVar5;
                } while ((long)uVar30 < (long)(int)local_38);
            }
            if (!bVar5) {
                new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)local_88, &local_58);
                local_58.~shared_ptr();
            }
        }
        if ((local_5c & 1) == 0) {
            new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<Array<short, eastl::allocator>>::operator=(local_80, &local_58);
            local_58.~shared_ptr();
        }
        if ((local_60 & 1) == 0) {
            new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(local_90, &local_58);
            local_58.~shared_ptr();
        }
        local_128.~MultiCursorPacketHelper();
    }

    // 0x100358290, 16 bytes, complete-object constructor, placed by neighbouring functions
    // ModelUnlitImpl::ModelUnlitImpl(unsigned char*, unsigned long, int): jumps straight to the base-object constructor

    // 0x1003588b0, 1776 bytes, base-object constructor, placed by neighbouring functions
    // ModelUnlitImpl::ModelUnlitImpl(int, int, int)
    void ModelUnlitImpl::ModelUnlitImpl(int param_1, int param_2, int param_3) {
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var2;
        int local_4c;
        shared_ptr local_48;
        int local_34;

        p_Var2 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        local_4c = param_1;
        local_34 = param_2;
        new (this) ModelUnlit();
        field_0 = &PTR__ModelUnlitImpl_100efbe18;
        field_20 = 0;
        new (&field_24) Array<int, eastl::allocator>();
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        field_96 = 0;
        new (&field_104) Array<int, eastl::allocator>();
        new (&field_128) Array<int, eastl::allocator>();
        new (&field_152) Array<int, eastl::allocator>();
        new (field_176, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_192, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_208, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_224, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_240, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_256, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_272, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_288) SharedArray<unsigned int>();
        field_312 = 0;
        new (&field_320) Array<signed char, eastl::allocator>();
        new (&field_344) Array<short, eastl::allocator>();
        new (&field_368) Array<short, eastl::allocator>();
        new (&field_392) Array<short, eastl::allocator>();
        new (field_416, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_432, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_448, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_464, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_480, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_496, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_512, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_528, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        p_Var2 = (_func_decltype_nullptr*)0;
        new (&field_544, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_560, p_Var2) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_576 = 0;
        (&field_24, (long)local_4c, 5)->set_max_size();
        (&field_48, (long)local_4c, 5)->set_max_size();
        (&field_72, (long)local_4c, 5)->set_max_size();
        make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_48, &local_4c);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_480,
                                                            &local_48);
        local_48.~shared_ptr();
        (&field_104, (long)local_34, 5)->set_max_size();
        (&field_128, (long)local_34, 5)->set_max_size();
        (&field_152, (long)local_34, 5)->set_max_size();
        make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)field_176, &local_48);
        local_48.~shared_ptr();
        make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)&field_192, &local_48);
        local_48.~shared_ptr();
        make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)field_208, &local_48);
        local_48.~shared_ptr();
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)&field_240,
                                                              &local_48);
        local_48.~shared_ptr();
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)field_256,
                                                              &local_48);
        local_48.~shared_ptr();
        make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)&field_224, &local_48);
        local_48.~shared_ptr();
        make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_48, &local_34);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_496,
                                                            &local_48);
        local_48.~shared_ptr();
        if (0 < param_3) {
            (&field_320, (ulong)param_3, 5)->set_max_size();
            (&field_344, (ulong)param_3, 1)->set_max_size();
            (&field_368, (ulong)param_3, 1)->set_max_size();
            (&field_392, (ulong)param_3, 1)->set_max_size();
        }
    }

    // 0x100358fa0, 16 bytes, complete-object constructor, placed by neighbouring functions
    // ModelUnlitImpl::ModelUnlitImpl(int, int, int): jumps straight to the base-object constructor

    // 0x100358fb0, 4160 bytes, base-object constructor, placed by __FILE__ string
    // ModelUnlitImpl::ModelUnlitImpl(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&)
    void ModelUnlitImpl::ModelUnlitImpl(vector* param_1) {
        undefined1* this_00;
        uint* puVar1;
        int* piVar2;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        undefined1* this_06;
        undefined1* this_07;
        undefined1* this_08;
        undefined1* this_09;
        undefined1* this_10;
        undefined1* this_11;
        undefined1* this_12;
        undefined1* this_13;
        undefined1* this_14;
        int iVar3;
        bool bVar4;
        bool bVar5;
        char cVar6;
        bool bVar7;
        bool bVar8;
        bool bVar9;
        bool bVar10;
        undefined2 uVar11;
        undefined4 uVar12;
        long lVar13;
        shared_ptr* psVar14;
        shared_ptr<ModelUnlit>* this_15;
        ulong uVar15;
        long* plVar16;
        ModelUnlitImpl* pMVar17;
        Array<signed char, eastl::allocator>* pAVar18;
        undefined1* puVar19;
        Array<int, eastl::allocator>* pAVar20;
        undefined4* puVar21;
        Array<short, eastl::allocator>* pAVar22;
        undefined2* puVar23;
        char* pcVar24;
        int* piVar25;
        short* psVar26;
        byte bVar27;
        byte bVar28;
        byte bVar29;
        byte bVar30;
        byte bVar31;
        byte bVar32;
        undefined1 uVar33;
        ulong uVar36;
        shared_ptr local_48;
        undefined1* local_38;

        new (this) ModelUnlit();
        field_0 = &PTR__ModelUnlitImpl_100efbe18;
        field_20 = 0;
        new (&field_24) Array<int, eastl::allocator>();
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        field_96 = 0;
        this_00 = &field_104;
        new (this_00) Array<int, eastl::allocator>();
        this_01 = &field_128;
        new (this_01) Array<int, eastl::allocator>();
        this_02 = &field_152;
        new (this_02) Array<int, eastl::allocator>();
        this_03 = field_176;
        new (this_03) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_04 = &field_192;
        new (this_04) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_05 = field_208;
        new (this_05) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_06 = &field_224;
        new (this_06) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_07 = &field_240;
        new (this_07) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        this_08 = field_256;
        new (this_08) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (field_272, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_288) SharedArray<unsigned int>();
        field_312 = 0;
        this_09 = &field_320;
        new (this_09) Array<signed char, eastl::allocator>();
        this_10 = &field_344;
        new (this_10) Array<short, eastl::allocator>();
        this_11 = &field_368;
        new (this_11) Array<short, eastl::allocator>();
        this_12 = &field_392;
        new (this_12) Array<short, eastl::allocator>();
        new (field_416, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_432, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_448, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_464, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_480, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        this_13 = field_496;
        new (this_13) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        new (&field_512, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_528, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        local_38 = &field_544;
        new (local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        new (&field_560, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_576 = 0;
        field_12 = -2;
        lVar13 = param_1->size();
        if (lVar13 == 1) {
            psVar14 = (shared_ptr*)eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::operator[](
                (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)param_1, 0);
            bVar4 = operator!=(psVar14, (_func_decltype_nullptr*)0);
            if (bVar4) {
                this_15 =
                    (shared_ptr<ModelUnlit>*)eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::operator[](
                        (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)param_1, 0);
                lVar13 = shared_ptr<ModelUnlit>::operator->(this_15);
                field_12 = *(int*)(lVar13 + 12);
            }
        }
        field_20 = 0;
        field_96 = 0;
        field_316 = 0;
        field_312 = 255;
        lVar13 = param_1->size();
        if (lVar13 == 0) {
            bVar29 = 0;
            bVar30 = 0;
            bVar31 = 0;
            bVar32 = 0;
            bVar28 = 0;
            bVar4 = false;
            bVar27 = 0;
        } else {
            bVar27 = 0;
            bVar4 = false;
            bVar28 = 0;
            uVar36 = 0;
            bVar32 = 0;
            bVar31 = 0;
            bVar30 = 0;
            bVar29 = 0;
            do {
                psVar14 = (shared_ptr*)eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::operator[](
                    (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)param_1, uVar36);
                bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    plVar16 = (long*)shared_ptr<ModelUnlit>::operator->((shared_ptr<ModelUnlit>*)psVar14);
                    cVar6 = (**(code**)(*plVar16 + 56))(plVar16);
                    if (cVar6 != '\0') {
                        /* WARNING: Subroutine does not return */
                        LogAssert("mptr->IsForRSeven() == false",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                  "jagex3/dash3d/ModelUnlit.cpp",
                                  1704, (char*)0);
                    }
                    lVar13 = psVar14->end();
                    field_20 = field_20 + *(int*)(lVar13 + 20);
                    field_96 = field_96 + *(int*)(lVar13 + 96);
                    field_316 = field_316 + *(int*)(lVar13 + 316);
                    bVar7 = operator!=((shared_ptr*)(lVar13 + 192), (_func_decltype_nullptr*)0);
                    bVar5 = true;
                    if (!bVar7) {
                        if (field_312 == -1) {
                            field_312 = *(undefined1*)(lVar13 + 312);
                        }
                        bVar5 = bVar4;
                        if (field_312 != *(char*)(lVar13 + 312)) {
                            bVar5 = true;
                        }
                    }
                    bVar4 = bVar5;
                    bVar5 = operator!=((shared_ptr*)(lVar13 + 176), (_func_decltype_nullptr*)0);
                    bVar7 = operator!=((shared_ptr*)(lVar13 + 208), (_func_decltype_nullptr*)0);
                    bVar8 = operator!=((shared_ptr*)(lVar13 + 496), (_func_decltype_nullptr*)0);
                    bVar9 = operator!=((shared_ptr*)(lVar13 + 256), (_func_decltype_nullptr*)0);
                    bVar10 = operator!=((shared_ptr*)(lVar13 + 224), (_func_decltype_nullptr*)0);
                    bVar27 = bVar27 | bVar5;
                    bVar28 = bVar28 | bVar7;
                    bVar29 = bVar29 | bVar8;
                    bVar30 = bVar30 | bVar9;
                    bVar31 = bVar31 | bVar10;
                    bVar5 = operator!=((shared_ptr*)(lVar13 + 512), (_func_decltype_nullptr*)0);
                    bVar32 = bVar32 | bVar5;
                }
                uVar36 = uVar36 + 1;
                uVar15 = param_1->size();
            } while (uVar36 < uVar15);
        }
        puVar1 = &field_20;
        (&field_24, (long)(int)*puVar1, 5)->set_max_size();
        (&field_48, (long)(int)*puVar1, 5)->set_max_size();
        (&field_72, (long)(int)*puVar1, 5)->set_max_size();
        make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_48, (int*)puVar1);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_480,
                                                            &local_48);
        piVar2 = &field_96;
        local_48.~shared_ptr();
        this_00->set_max_size((long)*piVar2, 5);
        this_01->set_max_size((long)*piVar2, 5);
        this_02->set_max_size((long)*piVar2, 5);
        if (bVar27 != 0) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, piVar2);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)this_03, &local_48);
            local_48.~shared_ptr();
        }
        if (bVar4) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, piVar2);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)this_04, &local_48);
            local_48.~shared_ptr();
        }
        if (bVar28 != 0) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, piVar2);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)this_05, &local_48);
            local_48.~shared_ptr();
        }
        if (bVar29 != 0) {
            make_shared<Array<int, eastl::allocator>, int&>((jag*)&local_48, piVar2);
            shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)this_13,
                                                                &local_48);
            local_48.~shared_ptr();
        }
        if (bVar30 != 0) {
            make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_48, piVar2);
            shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_08,
                                                                  &local_48);
            local_48.~shared_ptr();
        }
        if (bVar31 != 0) {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_48, piVar2);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)this_06, &local_48);
            local_48.~shared_ptr();
        }
        if (bVar32 != 0) {
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_48, (int*)puVar1);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_512, &local_48);
            local_48.~shared_ptr();
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_48, (int*)puVar1);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_528, &local_48);
            local_48.~shared_ptr();
        }
        make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_48, piVar2);
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_07,
                                                              &local_48);
        local_48.~shared_ptr();
        if (0 < (long)field_316) {
            this_09->set_max_size((long)field_316, 5);
            this_10->set_max_size((long)field_316, 1);
            this_11->set_max_size((long)field_316, 1);
            this_12->set_max_size((long)field_316, 1);
        }
        field_20 = 0;
        field_96 = 0;
        field_316 = 0;
        lVar13 = param_1->size();
        if (lVar13 != 0) {
            uVar36 = 0;
            do {
                psVar14 = (shared_ptr*)eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::operator[](
                    (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)param_1, uVar36);
                bVar5 = operator!=(psVar14, (_func_decltype_nullptr*)0);
                if (bVar5) {
                    pMVar17 = (ModelUnlitImpl*)psVar14->end();
                    if (0 < pMVar17->field_96) {
                        this_14 = &pMVar17->field_224;
                        uVar15 = 0;
                        do {
                            if ((bVar27 != 0) &&
                                (bVar5 = operator!=((shared_ptr*)pMVar17->field_176, (_func_decltype_nullptr*)0),
                                 bVar5)) {
                                pAVar18 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)pMVar17->field_176);
                                puVar19 =
                                    (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar18, uVar15);
                                uVar33 = *puVar19;
                                pAVar18 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)this_03);
                                puVar19 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar18,
                                                                                                        (long)*piVar2);
                                *puVar19 = uVar33;
                            }
                            if (bVar4) {
                                bVar5 = operator!=((shared_ptr*)&pMVar17->field_192, (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    pAVar18 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)&pMVar17->field_192);
                                    puVar19 =
                                        (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar18, uVar15);
                                    uVar33 = *puVar19;
                                    pAVar18 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)this_04);
                                    puVar19 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                                        pAVar18, (long)*piVar2);
                                } else {
                                    uVar33 = pMVar17->field_312;
                                    pAVar18 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)this_04);
                                    puVar19 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                                        pAVar18, (long)*piVar2);
                                }
                                *puVar19 = uVar33;
                            }
                            if ((bVar28 != 0) &&
                                (bVar5 = operator!=((shared_ptr*)pMVar17->field_208, (_func_decltype_nullptr*)0),
                                 bVar5)) {
                                pAVar18 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)pMVar17->field_208);
                                puVar19 =
                                    (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar18, uVar15);
                                uVar33 = *puVar19;
                                pAVar18 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)this_05);
                                puVar19 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar18,
                                                                                                        (long)*piVar2);
                                *puVar19 = uVar33;
                            }
                            if ((bVar29 != 0) &&
                                (bVar5 = operator!=((shared_ptr*)pMVar17->field_496, (_func_decltype_nullptr*)0),
                                 bVar5)) {
                                pAVar20 =
                                    (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<int, eastl::allocator>>*)pMVar17->field_496);
                                puVar21 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar20, uVar15);
                                uVar12 = *puVar21;
                                pAVar20 =
                                    (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<int, eastl::allocator>>*)this_13);
                                puVar21 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar20, (long)*piVar2);
                                *puVar21 = uVar12;
                            }
                            if (bVar30 != 0) {
                                bVar5 = operator!=((shared_ptr*)pMVar17->field_256, (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    pAVar22 = (Array<short, eastl::allocator>*)
                                        shared_ptr<Array<short, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<short, eastl::allocator>>*)pMVar17->field_256);
                                    puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar22, uVar15);
                                    uVar11 = *puVar23;
                                    pAVar22 = (Array<short, eastl::allocator>*)
                                        shared_ptr<Array<short, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<short, eastl::allocator>>*)this_08);
                                    puVar23 =
                                        (undefined2*)Array<short, eastl::allocator>::operator[](pAVar22, (long)*piVar2);
                                    *puVar23 = uVar11;
                                } else {
                                    pAVar22 = (Array<short, eastl::allocator>*)
                                        shared_ptr<Array<short, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<short, eastl::allocator>>*)this_08);
                                    puVar23 =
                                        (undefined2*)Array<short, eastl::allocator>::operator[](pAVar22, (long)*piVar2);
                                    *puVar23 = 65535;
                                }
                            }
                            if (bVar31 != 0) {
                                bVar5 = operator!=((shared_ptr*)this_14, (_func_decltype_nullptr*)0);
                                if (bVar5) {
                                    pAVar18 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)this_14);
                                    pcVar24 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar18, uVar15);
                                    if (*pcVar24 != -1) {
                                        pAVar18 = (Array<signed char, eastl::allocator>*)
                                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                                (shared_ptr<Array<signed char, eastl::allocator>>*)this_14);
                                        pcVar24 =
                                            (char*)Array<signed char, eastl::allocator>::operator[](pAVar18, uVar15);
                                        cVar6 = *pcVar24;
                                        iVar3 = field_316;
                                        pAVar18 = (Array<signed char, eastl::allocator>*)
                                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                                (shared_ptr<Array<signed char, eastl::allocator>>*)this_06);
                                        pcVar24 = (char*)Array<signed char, eastl::allocator>::operator[](
                                            pAVar18, (long)*piVar2);
                                        *pcVar24 = cVar6 + (char)iVar3;
                                        goto LAB_100359ac0;
                                    }
                                }
                                pAVar18 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)this_06);
                                puVar19 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar18,
                                                                                                        (long)*piVar2);
                                *puVar19 = 255;
                            }
                        LAB_100359ac0:
                            pAVar22 =
                                (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<short, eastl::allocator>>*)&pMVar17->field_240);
                            puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar22, uVar15);
                            uVar11 = *puVar23;
                            pAVar22 =
                                (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<short, eastl::allocator>>*)this_07);
                            puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar22, (long)*piVar2);
                            *puVar23 = uVar11;
                            piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&pMVar17->field_104, uVar15);
                            uVar12 = AddPoint(this, pMVar17, *piVar25);
                            puVar21 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, (long)*piVar2);
                            *puVar21 = uVar12;
                            piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&pMVar17->field_128, uVar15);
                            uVar12 = AddPoint(this, pMVar17, *piVar25);
                            puVar21 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_01, (long)*piVar2);
                            *puVar21 = uVar12;
                            piVar25 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&pMVar17->field_152, uVar15);
                            uVar12 = AddPoint(this, pMVar17, *piVar25);
                            puVar21 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_02, (long)*piVar2);
                            *puVar21 = uVar12;
                            *piVar2 = *piVar2 + 1;
                            uVar15 = uVar15 + 1;
                        } while ((long)uVar15 < (long)pMVar17->field_96);
                    }
                    if (0 < pMVar17->field_316) {
                        uVar15 = 0;
                        do {
                            pcVar24 = (char*)Array<signed char, eastl::allocator>::operator[](
                                (Array<signed char, eastl::allocator>*)&pMVar17->field_320, uVar15);
                            cVar6 = *pcVar24;
                            pcVar24 = (char*)Array<signed char, eastl::allocator>::operator[](
                                (Array<signed char, eastl::allocator>*)this_09, (long)field_316);
                            *pcVar24 = cVar6;
                            if (cVar6 == '\0') {
                                psVar26 = (short*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)&pMVar17->field_344, uVar15);
                                uVar11 = AddPoint(this, pMVar17, (int)*psVar26);
                                puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)this_10, (long)field_316);
                                *puVar23 = uVar11;
                                psVar26 = (short*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)&pMVar17->field_368, uVar15);
                                uVar11 = AddPoint(this, pMVar17, (int)*psVar26);
                                puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)this_11, (long)field_316);
                                *puVar23 = uVar11;
                                psVar26 = (short*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)&pMVar17->field_392, uVar15);
                                uVar11 = AddPoint(this, pMVar17, (int)*psVar26);
                                puVar23 = (undefined2*)Array<short, eastl::allocator>::operator[](
                                    (Array<short, eastl::allocator>*)this_12, (long)field_316);
                                *puVar23 = uVar11;
                            }
                            field_316 = field_316 + 1;
                            uVar15 = uVar15 + 1;
                        } while ((long)uVar15 < (long)pMVar17->field_316);
                    }
                }
                uVar36 = uVar36 + 1;
                uVar15 = param_1->size();
            } while (uVar36 < uVar15);
        }
    }

    // 0x10035a030, 512 bytes, placed by neighbouring functions
    // ModelUnlitImpl::AddPoint(ModelUnlitImpl&, int)
    void ModelUnlitImpl::AddPoint(ModelUnlitImpl* param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        bool bVar5;
        int iVar6;
        int* piVar7;
        Array<int, eastl::allocator>* pAVar8;
        undefined4* puVar9;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar10;
        Array* pAVar11;
        ulong uVar13;

        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_24,
                                                                (ulong)param_2);
        iVar1 = *piVar7;
        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_48,
                                                                (ulong)param_2);
        iVar2 = *piVar7;
        piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&param_1->field_72,
                                                                (ulong)param_2);
        iVar3 = *piVar7;
        iVar6 = -1;
        if (0 < (int)field_20) {
            uVar13 = 0;
            do {
                piVar7 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar13);
                if (iVar1 == *piVar7) {
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48,
                                                                            uVar13);
                    if (iVar2 == *piVar7) {
                        piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_72, uVar13);
                        if (iVar3 == *piVar7) {
                            iVar6 = (int)uVar13;
                            goto LAB_10035a104;
                        }
                    }
                }
                uVar13 = uVar13 + 1;
            } while ((long)uVar13 < (long)(int)field_20);
            iVar6 = -1;
        }
    LAB_10035a104:
        if (iVar6 == -1) {
            piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24,
                                                                    (long)(int)field_20);
            *piVar7 = iVar1;
            piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48,
                                                                    (long)(int)field_20);
            *piVar7 = iVar2;
            piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72,
                                                                    (long)(int)field_20);
            *piVar7 = iVar3;
            bVar5 = operator!=((shared_ptr*)param_1->field_480, (_func_decltype_nullptr*)0);
            if (bVar5) {
                pAVar8 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                    (shared_ptr<Array<int, eastl::allocator>>*)param_1->field_480);
                puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar8, (ulong)param_2);
                uVar4 = *puVar9;
                pAVar8 = (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(
                    (shared_ptr<Array<int, eastl::allocator>>*)field_480);
                puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar8, (long)(int)field_20);
                *puVar9 = uVar4;
            }
            bVar5 = operator!=((shared_ptr*)&param_1->field_512, (_func_decltype_nullptr*)0);
            if (bVar5) {
                pAVar10 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&param_1->field_512);
                pAVar11 =
                    (Array*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar10, (ulong)param_2);
                pAVar10 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_512);
                pAVar8 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        pAVar10, (long)(int)field_20);
                Array<int, eastl::allocator>::operator=(pAVar8, pAVar11);
                pAVar10 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&param_1->field_528);
                pAVar11 =
                    (Array*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar10, (ulong)param_2);
                pAVar10 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_528);
                pAVar8 =
                    (Array<int, eastl::allocator>*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                        pAVar10, (long)(int)field_20);
                Array<int, eastl::allocator>::operator=(pAVar8, pAVar11);
            }
            field_20 = field_20 + 1;
        }
    }

    // 0x10035a230, 16 bytes, complete-object constructor, placed by neighbouring functions
    // ModelUnlitImpl::ModelUnlitImpl(eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x10035a240, 2768 bytes, base-object constructor, placed by __FILE__ string
    // ModelUnlitImpl::ModelUnlitImpl(ModelUnlit const&, bool, bool, bool, bool)
    void ModelUnlitImpl::ModelUnlitImpl(ModelUnlit* param_1, bool param_2, bool param_3, bool param_4, bool param_5) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        int* piVar1;
        undefined1* this_03;
        undefined1* this_04;
        undefined1 uVar2;
        undefined2 uVar3;
        int iVar4;
        uint uVar5;
        undefined4 uVar6;
        ModelUnlit* pMVar7;
        bool bVar9;
        undefined4* puVar10;
        Array<signed char, eastl::allocator>* pAVar11;
        undefined1* puVar12;
        Array<short, eastl::allocator>* pAVar13;
        undefined2* puVar14;
        int iVar15;
        ulong uVar16;
        ModelUnlit* pMVar17;
        shared_ptr local_60;
        shared_ptr<Array<signed char, eastl::allocator>>* local_50;
        undefined1* local_48;
        ModelUnlit* local_40;
        undefined1* local_38;

        pMVar17 = param_1;
        new (this) ModelUnlit();
        field_0 = &PTR__ModelUnlitImpl_100efbe18;
        field_20 = 0;
        puVar12 = &field_24;
        new (puVar12) Array<int, eastl::allocator>();
        this_00 = &field_48;
        new (this_00) Array<int, eastl::allocator>();
        this_01 = &field_72;
        new (this_01) Array<int, eastl::allocator>();
        field_96 = 0;
        new (&field_104) Array<int, eastl::allocator>();
        new (&field_128) Array<int, eastl::allocator>();
        new (&field_152) Array<int, eastl::allocator>();
        new (field_176, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_192, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        local_50 = (shared_ptr<Array<signed char, eastl::allocator>>*)field_208;
        new (local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pMVar17);
        new (&field_224, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        this_03 = &field_240;
        new (this_03) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pMVar17);
        this_04 = field_256;
        new (this_04) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pMVar17);
        local_38 = field_272;
        new (local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pMVar17);
        local_48 = &field_288;
        new (local_48) SharedArray<unsigned int>();
        field_312 = 0;
        new (&field_320) Array<signed char, eastl::allocator>();
        new (&field_344) Array<short, eastl::allocator>();
        new (&field_368) Array<short, eastl::allocator>();
        new (&field_392) Array<short, eastl::allocator>();
        new (field_416, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_432, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_448, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_464, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_480, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_496, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_512, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_528, (_func_decltype_nullptr*)pMVar17) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_544, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_560, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_576 = 0;
        if ((**(code**)(param_1->field_0 + 56))(param_1) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("mu.IsForRSeven() == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelUnlit.cpp",
                      1918, (char*)0);
        }
        iVar4 = *(int*)((long)&param_1->field_8 + 4);
        iVar15 = iVar4 + -2;
        if (-1 < iVar4) {
            iVar15 = iVar4;
        }
        field_12 = iVar15;
        uVar5 = *(uint*)&param_1->field_20;
        field_20 = uVar5;
        field_96 = *(int*)&param_1[3].field_18;
        field_316 = *(int*)((long)&param_1[12].field_0 + 4);
        local_40 = param_1;
        if (param_2) {
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)puVar12, (Array*)&param_1->field_24);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_00,
                                                    (Array*)&local_40[1].field_22);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_01,
                                                    (Array*)&local_40[2].field_20);
        } else {
            puVar12->set_max_size((long)(int)uVar5, 5);
            this_00->set_max_size((long)(int)field_20, 5);
            this_01->set_max_size((long)(int)field_20, 5);
            if (0 < (int)field_20) {
                this_02 = &local_40->field_24;
                pMVar17 = local_40 + 1;
                pMVar7 = local_40 + 2;
                uVar16 = 0;
                do {
                    puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_02, uVar16);
                    uVar6 = *puVar10;
                    puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar12, uVar16);
                    *puVar10 = uVar6;
                    puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&pMVar17->field_22, uVar16);
                    uVar6 = *puVar10;
                    puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_00, uVar16);
                    *puVar10 = uVar6;
                    puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&pMVar7->field_20, uVar16);
                    uVar6 = *puVar10;
                    puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)this_01, uVar16);
                    *puVar10 = uVar6;
                    uVar16 = uVar16 + 1;
                } while ((long)uVar16 < (long)(int)field_20);
            }
        }
        piVar1 = &field_96;
        if (param_3) {
            shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_03,
                                                                  (shared_ptr*)((long)&local_40[9].field_0 + 6));
        } else {
            make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_60, piVar1);
            shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_03,
                                                                  &local_60);
            local_60.~shared_ptr();
            if (0 < *piVar1) {
                pMVar17 = local_40 + 9;
                uVar16 = 0;
                do {
                    pAVar13 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)((long)&pMVar17->field_0 + 6));
                    puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar13, uVar16);
                    uVar3 = *puVar14;
                    pAVar13 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)this_03);
                    puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar13, uVar16);
                    *puVar14 = uVar3;
                    uVar16 = uVar16 + 1;
                } while ((long)uVar16 < (long)*piVar1);
            }
        }
        pMVar17 = local_40;
        if (!param_4) {
            pMVar7 = local_40 + 9;
            bVar9 = operator==((shared_ptr*)&pMVar7->field_22, (_func_decltype_nullptr*)0);
            if (!bVar9) {
                make_shared<Array<short, eastl::allocator>, int&>((jag*)&local_60, piVar1);
                shared_ptr<Array<short, eastl::allocator>>::operator=(
                    (shared_ptr<Array<short, eastl::allocator>>*)this_04, &local_60);
                local_60.~shared_ptr();
                if (0 < *piVar1) {
                    uVar16 = 0;
                    do {
                        pAVar13 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)&pMVar7->field_22);
                        puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar13, uVar16);
                        uVar3 = *puVar14;
                        pAVar13 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)this_04);
                        puVar14 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar13, uVar16);
                        *puVar14 = uVar3;
                        uVar16 = uVar16 + 1;
                    } while ((long)uVar16 < (long)*piVar1);
                }
                goto LAB_10035a6d2;
            }
        }
        shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)this_04,
                                                              (shared_ptr*)&pMVar17[9].field_22);
    LAB_10035a6d2:
        if (param_5) {
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(local_50, (shared_ptr*)(local_40 + 8));
        } else {
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_60, piVar1);
            pMVar17 = local_40;
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(local_50, &local_60);
            local_60.~shared_ptr();
            bVar9 = operator==((shared_ptr*)(pMVar17 + 8), (_func_decltype_nullptr*)0);
            if (bVar9) {
                if (0 < *piVar1) {
                    uVar16 = 0;
                    do {
                        pAVar11 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_50);
                        puVar12 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar16);
                        *puVar12 = 0;
                        uVar16 = uVar16 + 1;
                    } while ((long)uVar16 < (long)*piVar1);
                }
            } else if (0 < *piVar1) {
                uVar16 = 0;
                do {
                    pAVar11 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)(pMVar17 + 8));
                    puVar12 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar16);
                    uVar2 = *puVar12;
                    pAVar11 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(local_50);
                    puVar12 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar16);
                    *puVar12 = uVar2;
                    uVar16 = uVar16 + 1;
                } while ((long)uVar16 < (long)*piVar1);
            }
        }
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_104, (Array*)(local_40 + 4));
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_128,
                                                (Array*)&local_40[4].field_24);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_152,
                                                (Array*)&local_40[5].field_22);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)field_176, (shared_ptr*)&local_40[6].field_20);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)&field_192,
            (shared_ptr*)((long)&local_40[7].field_8 + 2));
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)&field_224, (shared_ptr*)&local_40[8].field_16);
        field_312 = *(undefined1*)&local_40[12].field_0;
        Array<signed char, eastl::allocator>::operator=((Array<signed char, eastl::allocator>*)&field_320,
                                                        (Array*)&local_40[12].field_8);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_344,
                                                  (Array*)((long)&local_40[13].field_0 + 6));
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_368,
                                                  (Array*)((long)&local_40[14].field_0 + 4));
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)&field_392,
                                                  (Array*)((long)&local_40[15].field_0 + 2));
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_480,
                                                            (shared_ptr*)((long)&local_40[18].field_8 + 4));
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_496,
                                                            (shared_ptr*)((long)&local_40[19].field_0 + 2));
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448,
            (shared_ptr*)((long)&local_40[17].field_0 + 6));
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_464,
            (shared_ptr*)&local_40[17].field_22);
        shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<PointNormal, eastl::allocator>>*)field_432, (shared_ptr*)&local_40[16].field_16);
        shared_ptr<Array<FaceNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<FaceNormal, eastl::allocator>>*)field_416, (shared_ptr*)(local_40 + 16));
        shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<PointNormal, eastl::allocator>>*)&field_560,
            (shared_ptr*)((long)&local_40[21].field_8 + 6));
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_512,
            (shared_ptr*)&local_40[19].field_18);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_528,
            (shared_ptr*)&local_40[20].field_8);
        field_16 = local_40->field_16;
        field_18 = local_40->field_18;
    }

    // 0x10035ae60, 16 bytes, complete-object constructor, placed by neighbouring functions
    // ModelUnlitImpl::ModelUnlitImpl(ModelUnlit const&, bool, bool, bool, bool): jumps straight to the base-object constructor

    // 0x10035ae70, 1136 bytes, placed by neighbouring functions
    // ModelUnlitImpl::CopyForShareLight()
    ModelUnlitImpl* ModelUnlitImpl::CopyForShareLight() {
        int* piVar1;
        shared_ptr* this_00;
        undefined1 uVar2;
        undefined2 uVar3;
        undefined4 uVar4;
        long lVar6;
        Array<signed char, eastl::allocator>* pAVar7;
        undefined1* puVar8;
        ulong uVar9;
        long in_RSI;
        shared_ptr local_60;
        shared_ptr local_48;
        long local_38;

        make_shared<ModelUnlitImpl>((jag*)&local_48);
        uVar4 = *(undefined4*)(in_RSI + 12);
        local_38 = in_RSI;
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined4*)(lVar6 + 12) = uVar4;
        this_00 = (shared_ptr*)(local_38 + 176);
        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
            piVar1 = (int*)(local_38 + 96);
            make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_60, piVar1);
            lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar6 + 176), &local_60);
            local_60.~shared_ptr();
            if (0 < *piVar1) {
                uVar9 = 0;
                do {
                    pAVar7 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)this_00);
                    puVar8 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar7, uVar9);
                    uVar2 = *puVar8;
                    lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
                    pAVar7 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar6 + 176));
                    puVar8 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar7, uVar9);
                    *puVar8 = uVar2;
                    uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)*piVar1);
            }
        }
        uVar4 = *(undefined4*)(local_38 + 20);
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined4*)(lVar6 + 20) = uVar4;
        uVar4 = *(undefined4*)(local_38 + 96);
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined4*)(lVar6 + 96) = uVar4;
        uVar4 = *(undefined4*)(local_38 + 316);
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined4*)(lVar6 + 316) = uVar4;
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar6 + 24), (Array*)(local_38 + 24));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar6 + 48), (Array*)(local_38 + 48));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar6 + 72), (Array*)(local_38 + 72));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar6 + 104), (Array*)(local_38 + 104));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar6 + 128), (Array*)(local_38 + 128));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar6 + 152), (Array*)(local_38 + 152));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar6 + 192), (shared_ptr*)(local_38 + 192));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar6 + 208), (shared_ptr*)(local_38 + 208));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar6 + 224), (shared_ptr*)(local_38 + 224));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<short, eastl::allocator>>::operator=(
            (shared_ptr<Array<short, eastl::allocator>>*)(lVar6 + 240), (shared_ptr*)(local_38 + 240));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<short, eastl::allocator>>::operator=(
            (shared_ptr<Array<short, eastl::allocator>>*)(lVar6 + 256), (shared_ptr*)(local_38 + 256));
        uVar2 = *(undefined1*)(local_38 + 312);
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined1*)(lVar6 + 312) = uVar2;
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<signed char, eastl::allocator>::operator=((Array<signed char, eastl::allocator>*)(lVar6 + 320),
                                                        (Array*)(local_38 + 320));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)(lVar6 + 344),
                                                  (Array*)(local_38 + 344));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)(lVar6 + 368),
                                                  (Array*)(local_38 + 368));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)(lVar6 + 392),
                                                  (Array*)(local_38 + 392));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)(lVar6 + 480),
                                                            (shared_ptr*)(local_38 + 480));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)(lVar6 + 496),
                                                            (shared_ptr*)(local_38 + 496));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar6 + 448),
            (shared_ptr*)(local_38 + 448));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar6 + 464),
            (shared_ptr*)(local_38 + 464));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<PointNormal, eastl::allocator>>*)(lVar6 + 432), (shared_ptr*)(local_38 + 432));
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        shared_ptr<Array<FaceNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<FaceNormal, eastl::allocator>>*)(lVar6 + 416), (shared_ptr*)(local_38 + 416));
        uVar3 = *(undefined2*)(local_38 + 16);
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined2*)(lVar6 + 16) = uVar3;
        uVar3 = *(undefined2*)(local_38 + 18);
        lVar6 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_48);
        *(undefined2*)(lVar6 + 18) = uVar3;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)(ModelUnlitImpl*)this, &local_48);
        local_48.~shared_ptr();
        return (ModelUnlitImpl*)this;
    }

    // 0x10035b370, 928 bytes, placed by neighbouring functions
    // ModelUnlitImpl::HillSkewCopy(int, int, int, int, int)
    ModelUnlitImpl* ModelUnlitImpl::HillSkewCopy(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1 uVar1;
        undefined2 uVar2;
        undefined4 uVar3;
        long lVar4;
        long lVar5;
        void* pvVar6;
        void* pvVar7;
        ModelUnlitImpl* this_00;
        undefined4 in_register_00000034;
        long lVar8;
        int in_stack_00000008;
        shared_ptr local_40;

        lVar8 = CONCAT44(in_register_00000034, param_1);
        make_shared<ModelUnlitImpl>((jag*)&local_40);
        uVar3 = *(undefined4*)(lVar8 + 12);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined4*)(lVar4 + 12) = uVar3;
        uVar3 = *(undefined4*)(lVar8 + 20);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined4*)(lVar4 + 20) = uVar3;
        uVar3 = *(undefined4*)(lVar8 + 96);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined4*)(lVar4 + 96) = uVar3;
        uVar3 = *(undefined4*)(lVar8 + 316);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined4*)(lVar4 + 316) = uVar3;
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 24), (Array*)(lVar8 + 24));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 72), (Array*)(lVar8 + 72));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 104), (Array*)(lVar8 + 104));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 128), (Array*)(lVar8 + 128));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 152), (Array*)(lVar8 + 152));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 176), (shared_ptr*)(lVar8 + 176));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 192), (shared_ptr*)(lVar8 + 192));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 208), (shared_ptr*)(lVar8 + 208));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 224), (shared_ptr*)(lVar8 + 224));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<short, eastl::allocator>>::operator=(
            (shared_ptr<Array<short, eastl::allocator>>*)(lVar4 + 240), (shared_ptr*)(lVar8 + 240));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<short, eastl::allocator>>::operator=(
            (shared_ptr<Array<short, eastl::allocator>>*)(lVar4 + 256), (shared_ptr*)(lVar8 + 256));
        uVar1 = *(undefined1*)(lVar8 + 312);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined1*)(lVar4 + 312) = uVar1;
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<signed char, eastl::allocator>::operator=((Array<signed char, eastl::allocator>*)(lVar4 + 320),
                                                        (Array*)(lVar8 + 320));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)(lVar4 + 344),
                                                  (Array*)(lVar8 + 344));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)(lVar4 + 368),
                                                  (Array*)(lVar8 + 368));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)(lVar4 + 392),
                                                  (Array*)(lVar8 + 392));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)(lVar4 + 480),
                                                            (shared_ptr*)(lVar8 + 480));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)(lVar4 + 496),
                                                            (shared_ptr*)(lVar8 + 496));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar4 + 448),
            (shared_ptr*)(lVar8 + 448));
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar4 + 464),
            (shared_ptr*)(lVar8 + 464));
        uVar2 = *(undefined2*)(lVar8 + 16);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined2*)(lVar4 + 16) = uVar2;
        uVar2 = *(undefined2*)(lVar8 + 18);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        *(undefined2*)(lVar4 + 18) = uVar2;
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        lVar5 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        ((lVar4 + 48))->set_max_size((long)*(int*)(lVar5 + 20), 3);
        lVar4 = shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        pvVar6 = (void*)((lVar4 + 48))->data();
        pvVar7 = (void*)((lVar8 + 48))->data();
        _memcpy(pvVar6, pvVar7, (long)*(int*)(lVar8 + 20) << 2);
        this_00 = (ModelUnlitImpl*)shared_ptr<ModelUnlitImpl>::operator->((shared_ptr<ModelUnlitImpl>*)&local_40);
        HillSkew(this_00, param_2, param_3, param_4, param_5, in_stack_00000008);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
        local_40.~shared_ptr();
        return this;
    }

    // 0x10035b710, 336 bytes, placed by neighbouring functions
    // ModelUnlitImpl::HillSkew(int, int, int, int, int)
    void ModelUnlitImpl::HillSkew(int param_1, int param_2, int param_3, int param_4, int param_5) {
        ulong uVar1;
        HillSkewBuildInput* pHVar2;
        undefined1 local_d8[20];
        Vector3T<int> local_c4[12];
        int local_b8;
        undefined8 local_b4;
        ulong local_ac;
        int local_a4;
        uint local_a0;
        function<jag::math::Vector3T<int>(int)> local_98[48];
        function<void(int, int)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        CalcBoundingCube(this);
        new ((local_d8 + 16)) HillSkewBuildInput();
        local_d8._16_4_ = param_1;
        new (local_d8) rs2lib::worldmap::LocationData(param_2, param_3, param_4);
        jag::math::Vector3T<int>::operator=(local_c4, (Vector3T*)local_d8);
        local_b4._0_4_ = field_584;
        local_b4._4_4_ = field_588;
        uVar1._0_4_ = field_592;
        uVar1._4_4_ = field_596;
        local_ac = uVar1 << 32 | uVar1 >> 32;
        local_a4 = field_8;
        local_a0 = field_20;
        local_d8._0_8_ = this;
        local_b8 = param_5;
        std::function<jag::math::Vector3T<int>(int)>::operator=(local_98, (__3*)local_d8);
        pHVar2 = (HillSkewBuildInput*)local_d8;
        local_d8._0_8_ = this;
        std::function<void(int, int)>::operator=(local_68, (__4*)pHVar2);
        ((local_d8 + 16))->PerformHillSkew(pHVar2);
        GeometryChanged(this);
        ((local_d8 + 16))->~HillSkewBuildInput();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10035b860, 336 bytes, placed by neighbouring functions
    // ModelUnlitImpl::CalcBoundingCube()
    void ModelUnlitImpl::CalcBoundingCube() {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        ulong uVar5;

        if (field_576 == '\0') {
            field_8 = 0;
            field_580 = 0;
            field_584 = 999999;
            field_588 = -999999;
            field_592 = -99999;
            field_596 = 99999;
            if (0 < (int)field_20) {
                uVar5 = 0;
                do {
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar5);
                    iVar1 = *piVar4;
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar5);
                    iVar2 = *piVar4;
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar5);
                    iVar3 = *piVar4;
                    if (iVar1 < field_584) {
                        field_584 = iVar1;
                        if (field_588 < iVar1)
                            goto LAB_10035b970;
                    LAB_10035b91e:
                        if (field_596 <= iVar3)
                            goto LAB_10035b927;
                    LAB_10035b980:
                        field_596 = iVar3;
                        iVar1 = field_592;
                    } else {
                        if (iVar1 <= field_588)
                            goto LAB_10035b91e;
                    LAB_10035b970:
                        field_588 = iVar1;
                        if (iVar3 < field_596)
                            goto LAB_10035b980;
                    LAB_10035b927:
                        iVar1 = field_592;
                    }
                    if (iVar1 < iVar3) {
                        field_592 = iVar3;
                    }
                    if (field_8 < -iVar2) {
                        field_8 = -iVar2;
                    }
                    if (field_580 < iVar2) {
                        field_580 = iVar2;
                    }
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)(int)field_20);
            }
            field_576 = 1;
        }
    }

    // 0x10035ba70, 192 bytes, placed by neighbouring functions
    // ModelUnlitImpl::GeometryChanged()
    void ModelUnlitImpl::GeometryChanged() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<PointNormal, eastl::allocator>>*)field_432, &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<PointNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<PointNormal, eastl::allocator>>*)&field_560, &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<FaceNormal, eastl::allocator>>::operator=(
            (shared_ptr<Array<FaceNormal, eastl::allocator>>*)field_416, &local_28);
        local_28.~shared_ptr();
        field_576 = 0;
    }

    // 0x10035bb30, 224 bytes, placed by neighbouring functions
    // ModelUnlitImpl::AddPoint(int, int, int)
    ulong ModelUnlitImpl::AddPoint(int param_1, int param_2, int param_3) {
        int* piVar1;
        ulong uVar2;

        if (0 < (int)field_20) {
            uVar2 = 0;
            do {
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar2);
                if (((*piVar1 == param_1) && (piVar1 = (int*)Array<int, eastl::allocator>::operator[](
                                                  (Array<int, eastl::allocator>*)&field_48, uVar2),
                                              *piVar1 == param_2)) &&
                    (piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72,
                                                                             uVar2),
                     *piVar1 == param_3))
                    goto LAB_10035bbf2;
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)field_20);
        }
        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24,
                                                                (long)(int)field_20);
        *piVar1 = param_1;
        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48,
                                                                (long)(int)field_20);
        *piVar1 = param_2;
        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72,
                                                                (long)(int)field_20);
        *piVar1 = param_3;
        uVar2 = (ulong)field_20;
        field_20 = field_20 + 1;
    LAB_10035bbf2:
        return uVar2 & 4294967295;
    }

    // 0x10035bc10, 192 bytes, placed by __FILE__ string
    // ModelUnlitImpl::AddAxisTemplate(short, short, short)
    int ModelUnlitImpl::AddAxisTemplate(short param_1, short param_2, short param_3) {
        int iVar1;
        undefined1* puVar2;
        short* psVar3;

        if (254 < field_316) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "dash3d/ModelUnlit.cpp",
                            2183, "Maximum number of texture axes per model exceeded: %i");
        }
        puVar2 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
            (Array<signed char, eastl::allocator>*)&field_320, (long)field_316);
        *puVar2 = 0;
        psVar3 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)&field_344,
                                                                    (long)field_316);
        *psVar3 = param_1;
        psVar3 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)&field_368,
                                                                    (long)field_316);
        *psVar3 = param_2;
        psVar3 = (short*)Array<short, eastl::allocator>::operator[]((Array<short, eastl::allocator>*)&field_392,
                                                                    (long)field_316);
        *psVar3 = param_3;
        iVar1 = field_316;
        field_316 = iVar1 + 1;
        return (int)(char)iVar1;
    }

    // 0x10035bcd0, 240 bytes, placed by neighbouring functions
    // ModelUnlitImpl::AddFace(int, int, int, signed char, signed char, short, short)
    void ModelUnlitImpl::AddFace(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined1 param_5,
                                 undefined1 param_6, undefined2 param_7, undefined2 param_8) {
        undefined4* puVar1;
        Array<signed char, eastl::allocator>* pAVar2;
        undefined1* puVar3;
        Array<short, eastl::allocator>* pAVar4;
        undefined2* puVar5;

        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_104,
                                                                       (long)field_96);
        *puVar1 = param_1;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_128,
                                                                       (long)field_96);
        *puVar1 = param_2;
        puVar1 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_152,
                                                                       (long)field_96);
        *puVar1 = param_3;
        pAVar2 = (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
            (shared_ptr<Array<signed char, eastl::allocator>>*)field_176);
        puVar3 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar2, (long)field_96);
        *puVar3 = param_5;
        pAVar2 = (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
            (shared_ptr<Array<signed char, eastl::allocator>>*)&field_224);
        puVar3 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar2, (long)field_96);
        *puVar3 = param_6;
        pAVar4 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
            (shared_ptr<Array<short, eastl::allocator>>*)&field_240);
        puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar4, (long)field_96);
        *puVar5 = param_7;
        pAVar4 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
            (shared_ptr<Array<short, eastl::allocator>>*)field_256);
        puVar5 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar4, (long)field_96);
        *puVar5 = param_8;
        field_96 = field_96 + 1;
    }

    // 0x10035bdc0, 1088 bytes, placed by neighbouring functions
    // ModelUnlitImpl::PrepareAnim()
    void ModelUnlitImpl::PrepareAnim() {
        undefined1* puVar1;
        int iVar2;
        bool bVar4;
        Array<int, eastl::allocator>* pAVar5;
        int* piVar6;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar7;
        undefined4* puVar8;
        int iVar9;
        ulong uVar10;
        ulong uVar11;
        shared_ptr local_488;
        shared_ptr<Array<int, eastl::allocator>>* local_478;
        uint local_46c;
        fixed_vector<int, 256ul, true, eastl::allocator> local_460[1064];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_478 = (shared_ptr<Array<int, eastl::allocator>>*)field_480;
        bVar4 = operator!=((shared_ptr*)local_478, (_func_decltype_nullptr*)0);
        if (bVar4) {
            eastl::fixed_vector<int, 256ul, true, eastl::allocator>::fixed_vector(local_460);
            local_460->capacity();
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                (ulong)local_460);
            if ((int)field_20 < 1) {
                iVar9 = 0;
            } else {
                uVar11 = 0;
                iVar9 = 0;
                do {
                    pAVar5 =
                        (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(local_478);
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](pAVar5, uVar11);
                    iVar2 = *piVar6;
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        (long)iVar2);
                    *piVar6 = *piVar6 + 1;
                    if (iVar9 < iVar2) {
                        iVar9 = iVar2;
                    }
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)((ModelUnlitImpl*)this)->field_20);
            }
            local_46c = iVar9 + 1U;
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_488, (int*)&local_46c);
            puVar1 = ((ModelUnlitImpl*)this)->field_448;
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1, &local_488);
            local_488.~shared_ptr();
            if (-1 < iVar9) {
                uVar11 = 0;
                do {
                    pAVar7 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1);
                    pAVar5 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar7, uVar11);
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        uVar11);
                    pAVar5->set_max_size((long)*piVar6, 1);
                    puVar8 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        uVar11);
                    *puVar8 = 0;
                    uVar11 = uVar11 + 1;
                } while (iVar9 + 1U != uVar11);
            }
            if (0 < (int)((ModelUnlitImpl*)this)->field_20) {
                uVar11 = 0;
                do {
                    pAVar5 =
                        (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(local_478);
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](pAVar5, uVar11);
                    iVar9 = *piVar6;
                    pAVar7 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1);
                    pAVar5 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar7, (long)iVar9);
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        (long)iVar9);
                    iVar9 = *piVar6;
                    *piVar6 = iVar9 + 1;
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar5, (long)iVar9);
                    *puVar8 = (int)uVar11;
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)(int)((ModelUnlitImpl*)this)->field_20);
            }
            eastl::fixed_vector<int, 256ul, true, eastl::allocator>::~fixed_vector(local_460);
        }
        local_478 = (shared_ptr<Array<int, eastl::allocator>>*)((ModelUnlitImpl*)this)->field_496;
        iVar9 = 0;
        bVar4 = operator!=((shared_ptr*)local_478, (_func_decltype_nullptr*)0);
        if (bVar4) {
            eastl::fixed_vector<int, 256ul, true, eastl::allocator>::fixed_vector((ulong)local_460);
            if (0 < ((ModelUnlitImpl*)this)->field_96) {
                uVar11 = 0;
                iVar9 = 0;
                do {
                    pAVar5 =
                        (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(local_478);
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](pAVar5, uVar11);
                    iVar2 = *piVar6;
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        (long)iVar2);
                    *piVar6 = *piVar6 + 1;
                    if (iVar9 < iVar2) {
                        iVar9 = iVar2;
                    }
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)((ModelUnlitImpl*)this)->field_96);
            }
            local_46c = iVar9 + 1U;
            make_shared<Array<Array<int, eastl::allocator>, eastl::allocator>, int>((jag*)&local_488, (int*)&local_46c);
            puVar1 = ((ModelUnlitImpl*)this)->field_464;
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1, &local_488);
            local_488.~shared_ptr();
            if (-1 < iVar9) {
                uVar11 = 0;
                do {
                    pAVar7 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1);
                    pAVar5 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar7, uVar11);
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        uVar11);
                    pAVar5->set_max_size((long)*piVar6, 1);
                    puVar8 = (undefined4*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        uVar11);
                    *puVar8 = 0;
                    uVar11 = uVar11 + 1;
                } while (iVar9 + 1U != uVar11);
            }
            if (0 < ((ModelUnlitImpl*)this)->field_96) {
                uVar11 = 0;
                do {
                    pAVar5 =
                        (Array<int, eastl::allocator>*)shared_ptr<Array<int, eastl::allocator>>::operator*(local_478);
                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](pAVar5, uVar11);
                    uVar10 = (ulong)*piVar6;
                    pAVar7 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1);
                    pAVar5 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar7, uVar10);
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        uVar10);
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar5, (long)*piVar6);
                    *puVar8 = (int)uVar11;
                    piVar6 = (int*)eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                            local_460,
                        uVar10);
                    *piVar6 = *piVar6 + 1;
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)((ModelUnlitImpl*)this)->field_96);
            }
            eastl::fixed_vector<int, 256ul, true, eastl::allocator>::~fixed_vector(local_460);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10035c260, 448 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Animate(AnimFrameSet const&, int)
    void ModelUnlitImpl::Animate(AnimFrameSet* param_1, int param_2) {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        shared_ptr* psVar6;
        int* piVar7;
        long lVar8;
        undefined4* puVar9;
        vector* pvVar10;
        ulong uVar11;
        vector<int, eastl::allocator> local_90[32];
        shared_ptr<Decor> local_70[16];
        Array<int, eastl::allocator>* local_60;
        shared_ptr* local_58;
        Array<int, eastl::allocator>* local_50;
        shared_ptr* local_48;
        shared_ptr* local_38;

        PrepareAnim(this);
        if ((!operator==((shared_ptr*)field_448, (_func_decltype_nullptr*)0)) && (param_2 != -1)) {
            psVar6 = (shared_ptr*)Array<AnimFrame, eastl::allocator>::operator[](
                (Array<AnimFrame, eastl::allocator>*)param_1, (long)param_2);
            shared_ptr<Decor>::shared_ptr(local_70, psVar6);
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            local_38 = psVar6;
            if (0 < *(int*)(psVar6 + 1)) {
                local_60 = (Array<int, eastl::allocator>*)&psVar6[1].field_8;
                local_58 = psVar6 + 3;
                local_50 = (Array<int, eastl::allocator>*)&psVar6[4].field_8;
                local_48 = psVar6 + 6;
                uVar11 = 0;
                do {
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar11);
                    iVar1 = *piVar7;
                    lVar8 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_70);
                    puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar8 + 8), (long)iVar1);
                    uVar2 = *puVar9;
                    lVar8 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_70);
                    pvVar10 =
                        (vector*)eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar8 + 40), (long)iVar1);
                    eastl::vector<int, eastl::allocator>::vector(local_90, pvVar10);
                    puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)local_58, uVar11);
                    uVar3 = *puVar9;
                    puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](local_50, uVar11);
                    uVar4 = *puVar9;
                    puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)local_48, uVar11);
                    Animate2((ModelUnlitImpl*)this, uVar2, local_90, uVar3, uVar4, *puVar9);
                    eastl::vector<int, eastl::allocator>::~vector(local_90);
                    uVar11 = uVar11 + 1;
                } while ((long)uVar11 < (long)*(int*)(local_38 + 1));
            }
            GeometryChanged((ModelUnlitImpl*)this);
            local_70->~shared_ptr();
        }
    }

    // 0x10035c4a0, 2416 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Animate2(int, eastl::vector<int, eastl::allocator>, int, int, int)
    void ModelUnlitImpl::Animate2(undefined4 param_1, vector<unsigned int, eastl::allocator>* param_3, int param_4,
                                  int param_5, int param_6) {
        undefined1* puVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        ulong uVar9;
        int* piVar10;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar12;
        long lVar13;
        Array<signed char, eastl::allocator>* pAVar14;
        byte* pbVar15;
        undefined1* puVar16;
        ulong uVar17;
        ulong uVar18;
        ulong uVar19;
        ulong uVar20;
        ulong uVar21;
        undefined1* puVar22;
        ulong uVar23;
        byte local_70;

        uVar9 = eastl::vector<unsigned int, eastl::allocator>::size(param_3);
        switch (param_1) {
        case 0:
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            if (uVar9 == 0) {
                iVar7 = 0;
            } else {
                iVar7 = 0;
                uVar21 = 0;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_3, uVar21);
                    iVar8 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                  shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                                      (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                    iVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (iVar8 < iVar6) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar8);
                        lVar13 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (lVar13 != 0) {
                            uVar19 = 0;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                uVar17 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_24, uVar17);
                                m_oX = m_oX + *piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_48, uVar17);
                                m_oY = m_oY + *piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_72, uVar17);
                                m_oZ = m_oZ + *piVar10;
                                uVar19 = uVar19 + 1;
                                uVar17 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            } while (uVar19 < uVar17);
                            iVar7 = iVar7 + (int)uVar19;
                        }
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 != uVar9);
            }
            if (iVar7 < 1) {
                m_oX = param_4;
                m_oY = param_5;
            } else {
                m_oX = m_oX / iVar7 + param_4;
                m_oY = m_oY / iVar7 + param_5;
                param_6 = m_oZ / iVar7 + param_6;
            }
            m_oZ = param_6;
            break;
        case 1:
            if (uVar9 != 0) {
                uVar21 = 0;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_3, uVar21);
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                  shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                                      (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                    iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (iVar7 < iVar8) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar7);
                        lVar13 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (lVar13 != 0) {
                            uVar19 = 0;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                uVar17 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_24, uVar17);
                                *piVar10 = *piVar10 + param_4;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_48, uVar17);
                                *piVar10 = *piVar10 + param_5;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_72, uVar17);
                                *piVar10 = *piVar10 + param_6;
                                uVar19 = uVar19 + 1;
                                uVar17 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            } while (uVar19 < uVar17);
                        }
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 != uVar9);
            }
            break;
        case 2:
            if (uVar9 != 0) {
                puVar1 = &field_24;
                puVar22 = &field_48;
                puVar16 = &field_72;
                uVar17 = (ulong)(byte)param_4 << 3;
                uVar21 = (ulong)(byte)param_5 << 3;
                local_70 = (byte)param_6;
                uVar19 = (ulong)local_70 << 3;
                uVar20 = 0;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_3, uVar20);
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                  shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                                      (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                    iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (iVar7 < iVar8) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar7);
                        lVar13 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (lVar13 != 0) {
                            uVar18 = 0;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar18);
                                iVar7 = m_oX;
                                uVar23 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar1, uVar23);
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar22, uVar23);
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar16, uVar23);
                                *piVar10 = *piVar10 - iVar7;
                                if ((ulong)local_70 != 0) {
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, uVar19);
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, uVar19);
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar23);
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar1, uVar23);
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar23);
                                    iVar3 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar1, uVar23);
                                    iVar4 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar23);
                                    *piVar10 = iVar8 * iVar3 - iVar7 * iVar4 >> 16;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar1, uVar23);
                                    *piVar10 = iVar2 * iVar8 + iVar6 * iVar7 >> 16;
                                }
                                if ((ulong)(byte)param_4 != 0) {
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, uVar17);
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, uVar17);
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar23);
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar16, uVar23);
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar23);
                                    iVar3 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar16, uVar23);
                                    iVar4 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar16, uVar23);
                                    *piVar10 = iVar8 * iVar4 + iVar7 * iVar3 >> 16;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar23);
                                    *piVar10 = iVar6 * iVar8 - iVar2 * iVar7 >> 16;
                                }
                                if ((ulong)(byte)param_5 != 0) {
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, uVar21);
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, uVar21);
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar16, uVar23);
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar1, uVar23);
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar16, uVar23);
                                    iVar3 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar1, uVar23);
                                    iVar4 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar16, uVar23);
                                    *piVar10 = iVar8 * iVar3 - iVar7 * iVar4 >> 16;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar1, uVar23);
                                    *piVar10 = iVar2 * iVar8 + iVar6 * iVar7 >> 16;
                                }
                                iVar7 = m_oX;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar1, uVar23);
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar22, uVar23);
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar16, uVar23);
                                *piVar10 = *piVar10 + iVar7;
                                uVar18 = uVar18 + 1;
                                uVar23 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            } while (uVar18 < uVar23);
                        }
                    }
                    uVar20 = uVar20 + 1;
                } while (uVar20 != uVar9);
            }
            break;
        case 3:
            if (uVar9 != 0) {
                puVar1 = &field_24;
                puVar22 = &field_48;
                puVar16 = &field_72;
                uVar21 = 0;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_3, uVar21);
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                  shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                                      (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                    iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (iVar7 < iVar8) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar7);
                        lVar13 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (lVar13 != 0) {
                            uVar19 = 0;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                iVar7 = m_oX;
                                uVar17 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar1, uVar17);
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar22, uVar17);
                                *piVar10 = *piVar10 - iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar16, uVar17);
                                *piVar10 = *piVar10 - iVar7;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar1, uVar17);
                                iVar8 = *piVar10 * param_4;
                                iVar7 = iVar8 + 127;
                                if (-1 < iVar8) {
                                    iVar7 = iVar8;
                                }
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar1, uVar17);
                                *piVar10 = iVar7 >> 7;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar22, uVar17);
                                iVar8 = *piVar10 * param_5;
                                iVar7 = iVar8 + 127;
                                if (-1 < iVar8) {
                                    iVar7 = iVar8;
                                }
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar22, uVar17);
                                *piVar10 = iVar7 >> 7;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar16, uVar17);
                                iVar8 = *piVar10 * param_6;
                                iVar7 = iVar8 + 127;
                                if (-1 < iVar8) {
                                    iVar7 = iVar8;
                                }
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar16, uVar17);
                                *piVar10 = iVar7 >> 7;
                                iVar7 = m_oX;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar1, uVar17);
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar22, uVar17);
                                *piVar10 = *piVar10 + iVar7;
                                iVar7 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)puVar16, uVar17);
                                *piVar10 = *piVar10 + iVar7;
                                uVar19 = uVar19 + 1;
                                uVar17 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            } while (uVar19 < uVar17);
                        }
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 != uVar9);
            }
            break;
        case 5:
            puVar1 = field_464;
            bVar5 = operator!=((shared_ptr*)puVar1, (_func_decltype_nullptr*)0);
            if (bVar5) {
                puVar22 = field_208;
                bVar5 = operator!=((shared_ptr*)puVar22, (_func_decltype_nullptr*)0);
                if ((bVar5) && (uVar9 != 0)) {
                    uVar21 = 0;
                    do {
                        piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)param_3, uVar21);
                        iVar7 = *piVar10;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                      shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                                          (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1);
                        iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (iVar7 < iVar8) {
                            pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                                shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)puVar1);
                            pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar7);
                            lVar13 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            if (lVar13 != 0) {
                                uVar19 = 0;
                                do {
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                    iVar7 = *piVar10;
                                    pAVar14 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar22);
                                    pbVar15 =
                                        (byte*)Array<signed char, eastl::allocator>::operator[](pAVar14, (long)iVar7);
                                    iVar8 = (uint)*pbVar15 + param_4 * 8;
                                    if (254 < iVar8) {
                                        iVar8 = 255;
                                    }
                                    if (iVar8 < 1) {
                                        iVar8 = 0;
                                    }
                                    pAVar14 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar22);
                                    puVar16 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                                        pAVar14, (long)iVar7);
                                    *puVar16 = (char)iVar8;
                                    uVar19 = uVar19 + 1;
                                    uVar17 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                                } while (uVar19 < uVar17);
                            }
                        }
                        uVar21 = uVar21 + 1;
                    } while (uVar21 != uVar9);
                }
            }
        }
    }

    // 0x10035ce10, 1024 bytes, placed by neighbouring functions
    // ModelUnlitImpl::SplitAnimate(AnimFrameSet const&, int, AnimFrameSet const&, int, int*)
    void ModelUnlitImpl::SplitAnimate(AnimFrameSet* param_1, int param_2, AnimFrameSet* param_3, int param_4,
                                      int* param_5) {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        shared_ptr* psVar5;
        int* piVar6;
        long lVar7;
        undefined4* puVar8;
        vector* pvVar9;
        int iVar10;
        int iVar11;
        ulong uVar12;
        ulong uVar13;
        vector<int, eastl::allocator> local_c8[32];
        vector<int, eastl::allocator> local_a8[32];
        shared_ptr* local_88;
        shared_ptr<Decor> local_80[16];
        long local_70;
        Array<int, eastl::allocator>* local_68;
        shared_ptr* local_60;
        Array<int, eastl::allocator>* local_58;
        shared_ptr* local_48;
        undefined4 local_34;

        PrepareAnim(this);
        if ((!operator==((shared_ptr*)field_448, (_func_decltype_nullptr*)0)) && (param_2 != -1)) {
            if ((param_5 == (int*)0) || (param_4 == -1)) {
                Animate((ModelUnlitImpl*)this, param_1, param_2);
            } else {
                psVar5 = (shared_ptr*)Array<AnimFrame, eastl::allocator>::operator[](
                    (Array<AnimFrame, eastl::allocator>*)param_1, (long)param_2);
                local_70 = Array<AnimFrame, eastl::allocator>::operator[]((Array<AnimFrame, eastl::allocator>*)param_3,
                                                                          (long)param_4);
                shared_ptr<Decor>::shared_ptr(local_80, psVar5);
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                local_48 = psVar5;
                if (0 < *(int*)(psVar5 + 1)) {
                    local_68 = (Array<int, eastl::allocator>*)&psVar5[1].field_8;
                    local_60 = psVar5 + 3;
                    local_58 = (Array<int, eastl::allocator>*)&psVar5[4].field_8;
                    local_88 = psVar5 + 6;
                    iVar11 = *param_5;
                    iVar10 = 1;
                    uVar12 = 0;
                    do {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar12);
                        iVar1 = *piVar6;
                        uVar13 = (ulong)iVar1;
                        if (iVar11 < iVar1) {
                            piVar6 = param_5 + iVar10;
                            do {
                                iVar11 = *piVar6;
                                piVar6 = piVar6 + 1;
                                iVar10 = iVar10 + 1;
                            } while (iVar11 < iVar1);
                        }
                        if (iVar1 == iVar11) {
                            lVar7 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_80);
                            piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar7 + 8), uVar13);
                            if (*piVar6 == 0)
                                goto LAB_10035cf10;
                        } else {
                        LAB_10035cf10:
                            lVar7 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_80);
                            puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar7 + 8), uVar13);
                            local_34 = *puVar8;
                            lVar7 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_80);
                            pvVar9 = (vector*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar7 + 40),
                                    uVar13);
                            eastl::vector<int, eastl::allocator>::vector(local_c8, pvVar9);
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_60, uVar12);
                            uVar2 = *puVar8;
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar12);
                            uVar3 = *puVar8;
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_88, uVar12);
                            Animate2((ModelUnlitImpl*)this, local_34, local_c8, uVar2, uVar3, *puVar8);
                            eastl::vector<int, eastl::allocator>::~vector(local_c8);
                        }
                        uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)*(int*)(local_48 + 1));
                }
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                if (0 < *(int*)(local_70 + 16)) {
                    local_48 = (shared_ptr*)(local_70 + 24);
                    local_68 = (Array<int, eastl::allocator>*)(local_70 + 48);
                    local_60 = (shared_ptr*)(local_70 + 72);
                    local_58 = (Array<int, eastl::allocator>*)(local_70 + 96);
                    iVar11 = *param_5;
                    iVar10 = 1;
                    uVar12 = 0;
                    do {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_48,
                                                                                uVar12);
                        iVar1 = *piVar6;
                        uVar13 = (ulong)iVar1;
                        if (iVar11 < iVar1) {
                            piVar6 = param_5 + iVar10;
                            do {
                                iVar11 = *piVar6;
                                piVar6 = piVar6 + 1;
                                iVar10 = iVar10 + 1;
                            } while (iVar11 < iVar1);
                        }
                        if (iVar1 == iVar11) {
                        LAB_10035d111:
                            lVar7 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_80);
                            puVar8 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar7 + 8), uVar13);
                            local_34 = *puVar8;
                            lVar7 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_80);
                            pvVar9 = (vector*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar7 + 40),
                                    uVar13);
                            eastl::vector<int, eastl::allocator>::vector(local_a8, pvVar9);
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, uVar12);
                            uVar2 = *puVar8;
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_60, uVar12);
                            uVar3 = *puVar8;
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar12);
                            Animate2((ModelUnlitImpl*)this, local_34, local_a8, uVar2, uVar3, *puVar8);
                            eastl::vector<int, eastl::allocator>::~vector(local_a8);
                        } else {
                            lVar7 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_80);
                            piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar7 + 8), uVar13);
                            if (*piVar6 == 0)
                                goto LAB_10035d111;
                        }
                        uVar12 = uVar12 + 1;
                    } while ((long)uVar12 < (long)*(int*)(local_70 + 16));
                }
                GeometryChanged((ModelUnlitImpl*)this);
                local_80->~shared_ptr();
            }
        }
    }

    // 0x10035d210, 224 bytes, placed by neighbouring functions
    // ModelUnlitImpl::DiscardAnimLabels()
    void ModelUnlitImpl::DiscardAnimLabels() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_480,
                                                            &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_496,
                                                            &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_448, &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_464, &local_28);
        local_28.~shared_ptr();
    }

    // 0x10035d2f0, 160 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Rotate90()
    void ModelUnlitImpl::Rotate90() {
        int iVar1;
        undefined4 uVar2;
        int* piVar3;
        undefined4* puVar4;
        ulong uVar5;

        if (0 < (int)field_20) {
            uVar5 = 0;
            do {
                piVar3 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar5);
                iVar1 = *piVar3;
                puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72,
                                                                               uVar5);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24,
                                                                               uVar5);
                *puVar4 = uVar2;
                piVar3 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar5);
                *piVar3 = -iVar1;
                uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035d390, 160 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Rotate180()
    void ModelUnlitImpl::Rotate180() {
        int iVar1;
        int* piVar2;
        ulong uVar3;

        if (0 < (int)field_20) {
            uVar3 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                iVar1 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                *piVar2 = -iVar1;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                iVar1 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                *piVar2 = -iVar1;
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035d430, 160 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Rotate270()
    void ModelUnlitImpl::Rotate270() {
        int iVar1;
        undefined4 uVar2;
        int* piVar3;
        undefined4* puVar4;
        ulong uVar5;

        if (0 < (int)field_20) {
            uVar5 = 0;
            do {
                piVar3 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar5);
                iVar1 = *piVar3;
                puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24,
                                                                               uVar5);
                uVar2 = *puVar4;
                puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72,
                                                                               uVar5);
                *puVar4 = uVar2;
                piVar3 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar5);
                *piVar3 = -iVar1;
                uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035d4d0, 288 bytes, placed by neighbouring functions
    // ModelUnlitImpl::RotateYAxis(int)
    void ModelUnlitImpl::RotateYAxis(int param_1) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        undefined1* this_01;
        ulong uVar8;

        piVar7 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_1);
        iVar1 = *piVar7;
        piVar7 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_1);
        if (0 < (int)field_20) {
            iVar2 = *piVar7;
            this_00 = &field_72;
            this_01 = &field_24;
            uVar8 = 0;
            do {
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                iVar3 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                iVar4 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                iVar5 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                iVar6 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                *piVar7 = iVar5 * iVar2 - iVar6 * iVar1 >> 16;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                *piVar7 = iVar4 * iVar2 + iVar3 * iVar1 >> 16;
                uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035d5f0, 288 bytes, placed by neighbouring functions
    // ModelUnlitImpl::RotateXAxis(int)
    void ModelUnlitImpl::RotateXAxis(int param_1) {
        undefined1* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        undefined1* this_01;
        ulong uVar8;

        piVar7 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_1);
        iVar1 = *piVar7;
        piVar7 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_1);
        if (0 < (int)field_20) {
            iVar2 = *piVar7;
            this_00 = &field_48;
            this_01 = &field_72;
            uVar8 = 0;
            do {
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                iVar3 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                iVar4 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                iVar5 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                iVar6 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                *piVar7 = iVar6 * iVar2 + iVar5 * iVar1 >> 16;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                *piVar7 = iVar3 * iVar2 - iVar4 * iVar1 >> 16;
                uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035d710, 160 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Translate(int, int, int)
    void ModelUnlitImpl::Translate(int param_1, int param_2, int param_3) {
        int* piVar1;
        ulong uVar2;

        if (0 < (int)field_20) {
            uVar2 = 0;
            do {
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar2);
                *piVar1 = *piVar1 + param_1;
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar2);
                *piVar1 = *piVar1 + param_2;
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar2);
                *piVar1 = *piVar1 + param_3;
                uVar2 = uVar2 + 1;
            } while ((long)uVar2 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035d7b0, 128 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Recolour(short, short)
    void ModelUnlitImpl::Recolour(short param_1, short param_2) {
        Array<short, eastl::allocator>* pAVar1;
        short* psVar2;
        ulong uVar3;

        if (0 < field_96) {
            uVar3 = 0;
            do {
                pAVar1 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)&field_240);
                psVar2 = (short*)Array<short, eastl::allocator>::operator[](pAVar1, uVar3);
                if (*psVar2 == param_1) {
                    pAVar1 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)&field_240);
                    psVar2 = (short*)Array<short, eastl::allocator>::operator[](pAVar1, uVar3);
                    *psVar2 = param_2;
                }
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)field_96);
        }
    }

    // 0x10035d830, 144 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Retexture(short, short)
    void ModelUnlitImpl::Retexture(short param_1, short param_2) {
        undefined1* this_00;
        Array<short, eastl::allocator>* pAVar2;
        short* psVar3;
        ulong uVar4;

        this_00 = field_256;
        if ((!operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) && (0 < field_96)) {
            uVar4 = 0;
            do {
                pAVar2 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                    (shared_ptr<Array<short, eastl::allocator>>*)this_00);
                psVar3 = (short*)Array<short, eastl::allocator>::operator[](pAVar2, uVar4);
                if (*psVar3 == param_1) {
                    pAVar2 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                        (shared_ptr<Array<short, eastl::allocator>>*)this_00);
                    psVar3 = (short*)Array<short, eastl::allocator>::operator[](pAVar2, uVar4);
                    *psVar3 = param_2;
                }
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)field_96);
        }
    }

    // 0x10035d8c0, 224 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Mirror()
    void ModelUnlitImpl::Mirror() {
        int iVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        int* piVar4;
        undefined4* puVar5;
        ulong uVar6;

        if (0 < (int)field_20) {
            uVar6 = 0;
            do {
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar6);
                iVar1 = *piVar4;
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar6);
                *piVar4 = -iVar1;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)field_20);
        }
        if (0 < field_96) {
            uVar6 = 0;
            do {
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_104, uVar6);
                uVar2 = *puVar5;
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_152, uVar6);
                uVar3 = *puVar5;
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_104, uVar6);
                *puVar5 = uVar3;
                puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&field_152, uVar6);
                *puVar5 = uVar2;
                uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)field_96);
        }
        GeometryChanged(this);
    }

    // 0x10035d9a0, 272 bytes, placed by neighbouring functions
    // ModelUnlitImpl::Resize(int, int, int)
    void ModelUnlitImpl::Resize(int param_1, int param_2, int param_3) {
        int iVar1;
        int* piVar2;
        ulong uVar3;
        int iVar4;

        if (0 < (int)field_20) {
            uVar3 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                iVar1 = *piVar2 * param_1;
                iVar4 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar4 = iVar1;
                }
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                *piVar2 = iVar4 >> 7;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar3);
                iVar1 = *piVar2 * param_2;
                iVar4 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar4 = iVar1;
                }
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar3);
                *piVar2 = iVar4 >> 7;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                iVar1 = *piVar2 * param_3;
                iVar4 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar4 = iVar1;
                }
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                *piVar2 = iVar4 >> 7;
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035dab0, 272 bytes, placed by neighbouring functions
    // ModelUnlitImpl::ResizePrecise(int, int, int, int)
    void ModelUnlitImpl::ResizePrecise(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        int* piVar2;
        ulong uVar3;

        if (0 < (int)field_20) {
            uVar3 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                iVar1 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                *piVar2 = (iVar1 * param_1) / param_4;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar3);
                iVar1 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar3);
                *piVar2 = (iVar1 * param_2) / param_4;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                iVar1 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                *piVar2 = (iVar1 * param_3) / param_4;
                uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)field_20);
        }
        GeometryChanged(this);
    }

    // 0x10035dbc0, 224 bytes, placed by neighbouring functions
    // ModelUnlitImpl::ResizeToSphere(int)
    int ModelUnlitImpl::ResizeToSphere(int param_1) {
        int iVar1;
        int* piVar2;
        int iVar3;
        ulong uVar4;
        int iVar5;
        double dVar6;

        if ((int)field_20 < 1) {
            iVar3 = 0;
        } else {
            uVar4 = 0;
            iVar3 = 0;
            do {
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar4);
                iVar5 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar4);
                iVar1 = *piVar2;
                piVar2 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar4);
                iVar5 = iVar1 * iVar1 + iVar5 * iVar5 + *piVar2 * *piVar2;
                if (iVar5 <= iVar3) {
                    iVar5 = iVar3;
                }
                iVar3 = iVar5;
                uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)field_20);
        }
        dVar6 = (double)sqrt<int>(iVar3);
        ResizePrecise(this, param_1, param_1, param_1, (int)(dVar6 + 0.99));
        return (int)(dVar6 + 0.99);
    }

    // 0x10035dfe0, 48 bytes, placed by neighbouring functions
    // ModelUnlitImpl::CalculateTextureSet()
    void ModelUnlitImpl::CalculateTextureSet() {
        Array* pAVar1;

        pAVar1 = (Array*)field_256->end();
        CalculateTexturesForFaces((shared_ptr*)field_272, pAVar1);
    }

    // 0x10035e010, 448 bytes, placed by neighbouring functions
    // ModelUnlitImpl::CalculateTexturesForFaces(shared_ptr<Array<short, eastl::allocator> >&, Array<short, eastl::allocator>*)
    void ModelUnlitImpl::CalculateTexturesForFaces(shared_ptr* param_1, Array* param_2) {
        short sVar1;
        shared_ptr* this;
        bool bVar2;
        uint uVar3;
        long lVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        undefined2* puVar5;
        undefined2* puVar6;
        undefined8 extraout_RDX;
        ulong uVar7;
        undefined1 auVar8[16];
        hash_set<short, eastl::hash<short>, eastl::equal_to<short>, eastl::allocator, false> local_98[56];
        shared_ptr* local_60;
        shared_ptr local_58;
        ulong local_40;
        undefined8 local_38;

        bVar2 = operator==(param_1, (_func_decltype_nullptr*)0);
        if ((bVar2) && (param_2 != (Array*)0)) {
            local_60 = param_1;
            uVar3 = param_2->end();
            lVar4 = param_2->data();
            new (&local_58) eastl::allocator("EASTL hash_set");
            eastl::hash_set<short, eastl::hash<short>, eastl::equal_to<short>, eastl::allocator, false>::hash_set(
                local_98, (allocator*)&local_58);
            if (0 < (int)uVar3) {
                uVar7 = 0;
                do {
                    sVar1 = *(short*)(lVar4 + uVar7 * 2);
                    local_40 = CONCAT62(local_40._2_6_, sVar1);
                    if (sVar1 != -1) {
                        eastl::hashtable<short, short, eastl::allocator, eastl::use_self<short>, eastl::equal_to<short>,
                                         eastl::hash<short>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, false,
                                         true>::emplace<short&>((short*)&local_58);
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar3 != uVar7);
            }
            local_40 = local_98->size();
            make_shared<Array<short, eastl::allocator>, unsigned long>((jag*)&local_58, &local_40);
            this = local_60;
            shared_ptr<Array<short, eastl::allocator>>::operator=((shared_ptr<Array<short, eastl::allocator>>*)local_60,
                                                                  &local_58);
            local_58.~shared_ptr();
            this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<short, eastl::allocator>>::operator->(
                              (shared_ptr<Array<short, eastl::allocator>>*)this);
            puVar5 = (undefined2*)this_00->data();
            local_58 = (shared_ptr)
                eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>::begin();
            auVar8 = local_98->end();
            local_38 = auVar8._8_8_;
            while (true) {
                local_40 = auVar8._0_8_;
                bVar2 = eastl::operator!=((eastl*)&local_58, (hashtable_iterator_base*)&local_40, auVar8._8_8_);
                if (!bVar2)
                    break;
                puVar6 = (undefined2*)local_58.HeapBeginPtr();
                *puVar5 = *puVar6;
                puVar5 = puVar5 + 1;
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)&local_58);
                auVar8._8_8_ = extraout_RDX;
                auVar8._0_8_ = local_40;
            }
            local_98->~hash_map();
        }
    }

    // 0x10035e1d0, 352 bytes, placed by neighbouring functions
    // ModelUnlitImpl::CalculateBoundingCuboid()
    void ModelUnlitImpl::CalculateBoundingCuboid() {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        ulong uVar5;

        field_8 = 999999;
        field_580 = -999999;
        field_584 = 999999;
        field_588 = -999999;
        field_592 = -999999;
        field_596 = 99999;
        if (0 < (int)field_20) {
            uVar5 = 0;
            do {
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar5);
                iVar1 = *piVar4;
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar5);
                iVar2 = *piVar4;
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar5);
                iVar3 = *piVar4;
                if (iVar1 < field_584) {
                    field_584 = iVar1;
                    if (field_588 < iVar1)
                        goto LAB_10035e2c0;
                LAB_10035e27e:
                    if (field_596 <= iVar3)
                        goto LAB_10035e287;
                LAB_10035e2d0:
                    field_596 = iVar3;
                    if (field_592 < iVar3)
                        goto LAB_10035e2e0;
                LAB_10035e290:
                    if (field_8 <= iVar2)
                        goto LAB_10035e296;
                LAB_10035e2ed:
                    field_8 = iVar2;
                    iVar1 = field_580;
                } else {
                    if (iVar1 <= field_588)
                        goto LAB_10035e27e;
                LAB_10035e2c0:
                    field_588 = iVar1;
                    if (iVar3 < field_596)
                        goto LAB_10035e2d0;
                LAB_10035e287:
                    if (iVar3 <= field_592)
                        goto LAB_10035e290;
                LAB_10035e2e0:
                    field_592 = iVar3;
                    if (iVar2 < field_8)
                        goto LAB_10035e2ed;
                LAB_10035e296:
                    iVar1 = field_580;
                }
                if (iVar1 < iVar2) {
                    field_580 = iVar2;
                }
                uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)field_20);
        }
        field_576 = 1;
    }

    // 0x10035e370, 4192 bytes, placed by __FILE__ string
    // ModelUnlitImpl::Light(int, int, int, int, int)
    ModelUnlitImpl* ModelUnlitImpl::Light(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1* this_00;
        shared_ptr<Array<signed char, eastl::allocator>>* this_01;
        undefined1 uVar1;
        ushort uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        _func_decltype_nullptr* p_Var6;
        bool bVar7;
        char cVar8;
        undefined4 uVar9;
        long lVar10;
        Array<signed char, eastl::allocator>* pAVar11;
        char* pcVar12;
        byte* pbVar13;
        int* piVar14;
        int* piVar15;
        ushort* puVar16;
        uint* puVar17;
        undefined1* puVar18;
        Array<short, eastl::allocator>* pAVar19;
        short* psVar20;
        Array<PointNormal, eastl::allocator>* pAVar21;
        Array<FaceNormal, eastl::allocator>* pAVar22;
        undefined4* puVar23;
        short sVar24;
        undefined4 in_register_00000014;
        shared_ptr* extraout_RDX;
        char cVar25;
        ulong uVar26;
        _func_decltype_nullptr* p_Var27;
        undefined4 in_register_00000034;
        ModelUnlitImpl* pMVar28;
        int iVar29;
        ulong uVar30;
        shared_ptr* this_02;
        int in_stack_00000008;
        jag local_128[16];
        shared_ptr local_118;
        Array<int, eastl::allocator>* local_108;
        shared_ptr<Array<FaceNormal, eastl::allocator>>* local_100;
        shared_ptr<Array<short, eastl::allocator>>* local_f8;
        int local_e4;
        shared_ptr* local_e0;
        shared_ptr* local_d8;
        Array<int, eastl::allocator>* local_d0;
        shared_ptr* local_c8;
        double local_c0;
        int* local_b8;
        Array<int, eastl::allocator>* local_b0;
        Array<int, eastl::allocator>* local_a8;
        long local_a0;
        undefined8 local_98;
        Array<int, eastl::allocator>* local_90;
        Array<short, eastl::allocator>* local_88;
        ModelUnlitImpl* local_80;
        Array<short, eastl::allocator>* local_78;
        Array<short, eastl::allocator>* local_70;
        int local_68;
        int iStack_64;
        int iStack_60;
        int iStack_5c;
        shared_ptr* local_40;
        _func_decltype_nullptr* local_38;

        pMVar28 = (ModelUnlitImpl*)CONCAT44(in_register_00000034, param_1);
        local_98 = CONCAT44(in_register_00000014, param_2);
        if (g_usingRSeven == '\0') {
            local_c8 = (shared_ptr*)CONCAT44(local_c8._4_4_, param_3);
            CalculateNormals(pMVar28);
            local_c0 = (double)sqrt<int>(in_stack_00000008 * in_stack_00000008 + param_5 * param_5 + param_4 * param_4);
            make_shared<ModelLitImpl>(local_128);
            lVar10 = local_128->end();
            local_d0 = (Array<int, eastl::allocator>*)(lVar10 + 176);
            local_d0->set_max_size((long)pMVar28->field_96, 1);
            piVar15 = &pMVar28->field_96;
            local_108 = (Array<int, eastl::allocator>*)(lVar10 + 200);
            local_108->set_max_size((long)*piVar15, 1);
            local_b0 = (Array<int, eastl::allocator>*)(lVar10 + 224);
            local_b0->set_max_size((long)*piVar15, 1);
            local_b8 = piVar15;
            local_a0 = lVar10;
            local_80 = pMVar28;
            if (0 < pMVar28->field_316) {
                this_00 = &pMVar28->field_224;
                bVar7 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
                if (bVar7) {
                    new (&local_68) eastl::vector<int, eastl::allocator>();
                    eastl::vector<int, eastl::allocator>::resize((ulong)&local_68);
                    if (0 < *piVar15) {
                        uVar26 = 0;
                        do {
                            pAVar11 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)this_00);
                            pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar26);
                            if (*pcVar12 != -1) {
                                pAVar11 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)this_00);
                                pbVar13 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar26);
                                piVar14 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_68, (ulong)*pbVar13);
                                *piVar14 = *piVar14 + 1;
                            }
                            uVar26 = uVar26 + 1;
                        } while ((long)uVar26 < (long)*piVar15);
                    }
                    *(undefined4*)(local_a0 + 316) = 0;
                    puVar18 = &local_80->field_320;
                    if (0 < local_80->field_316) {
                        uVar26 = 0;
                        do {
                            piVar15 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&local_68, uVar26);
                            if (0 < *piVar15) {
                                pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)puVar18, uVar26);
                                if (*pcVar12 == '\0') {
                                    *(int*)(local_a0 + 316) = *(int*)(local_a0 + 316) + 1;
                                }
                            }
                            uVar26 = uVar26 + 1;
                        } while ((long)uVar26 < (long)local_80->field_316);
                    }
                    local_e0 = (shared_ptr*)(local_a0 + 320);
                    local_40 = (shared_ptr*)puVar18;
                    local_e0->set_max_size((long)*(int*)(local_a0 + 316), 1);
                    local_d8 = (shared_ptr*)(local_a0 + 344);
                    local_d8->set_max_size((long)*(int*)(local_a0 + 316), 1);
                    local_90 = (Array<int, eastl::allocator>*)(local_a0 + 368);
                    local_90->set_max_size((long)*(int*)(local_a0 + 316), 1);
                    if (0 < local_80->field_316) {
                        local_88 = (Array<short, eastl::allocator>*)&local_80->field_344;
                        local_78 = (Array<short, eastl::allocator>*)&local_80->field_368;
                        local_70 = (Array<short, eastl::allocator>*)&local_80->field_392;
                        uVar26 = 0;
                        local_38 = (_func_decltype_nullptr*)((ulong)local_38 & 18446744069414584320);
                        do {
                            piVar15 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)&local_68, uVar26);
                            if (*piVar15 < 1) {
                            LAB_10035e650:
                                puVar23 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_68, uVar26);
                                *puVar23 = 4294967295;
                            } else {
                                pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)local_40, uVar26);
                                if (*pcVar12 != '\0')
                                    goto LAB_10035e650;
                                puVar16 = (ushort*)Array<short, eastl::allocator>::operator[](local_88, uVar26);
                                uVar2 = *puVar16;
                                uVar30 = (ulong)(int)local_38;
                                puVar17 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)local_e0, uVar30);
                                *puVar17 = (uint)uVar2;
                                puVar16 = (ushort*)Array<short, eastl::allocator>::operator[](local_78, uVar26);
                                uVar2 = *puVar16;
                                puVar17 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)local_d8, uVar30);
                                *puVar17 = (uint)uVar2;
                                puVar16 = (ushort*)Array<short, eastl::allocator>::operator[](local_70, uVar26);
                                uVar2 = *puVar16;
                                puVar17 = (uint*)Array<int, eastl::allocator>::operator[](local_90, uVar30);
                                *puVar17 = (uint)uVar2;
                                piVar15 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_68, uVar26);
                                *piVar15 = (int)local_38;
                                local_38 = (_func_decltype_nullptr*)CONCAT44(local_38._4_4_, (int)local_38 + 1);
                            }
                            uVar26 = uVar26 + 1;
                        } while ((long)uVar26 < (long)local_80->field_316);
                    }
                    piVar15 = local_b8;
                    make_shared<Array<signed char, eastl::allocator>, int&>((jag*)&local_118, local_b8);
                    this_01 = (shared_ptr<Array<signed char, eastl::allocator>>*)(local_a0 + 280);
                    shared_ptr<Array<signed char, eastl::allocator>>::operator=(this_01, &local_118);
                    local_118.~shared_ptr();
                    if (0 < *piVar15) {
                        uVar26 = 0;
                        do {
                            pAVar11 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)this_00);
                            pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar26);
                            if (*pcVar12 == -1) {
                                pAVar11 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(this_01);
                                puVar18 =
                                    (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar26);
                                *puVar18 = 255;
                            } else {
                                pAVar11 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)this_00);
                                pbVar13 = (byte*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar26);
                                puVar18 = (undefined1*)eastl::vector<int, eastl::allocator>::operator[](
                                    (vector<int, eastl::allocator>*)&local_68, (ulong)*pbVar13);
                                uVar1 = *puVar18;
                                pAVar11 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(this_01);
                                puVar18 =
                                    (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar11, uVar26);
                                *puVar18 = uVar1;
                            }
                            uVar26 = uVar26 + 1;
                            piVar15 = local_b8;
                        } while ((long)uVar26 < (long)*local_b8);
                    }
                    local_68.~vector();
                    pMVar28 = local_80;
                }
            }
            local_e0 = (shared_ptr*)pMVar28->field_208;
            local_d8 = (shared_ptr*)pMVar28->field_256;
            local_78 = (Array<short, eastl::allocator>*)&pMVar28->field_104;
            local_70 = (Array<short, eastl::allocator>*)&pMVar28->field_128;
            local_a8 = (Array<int, eastl::allocator>*)&pMVar28->field_152;
            if (0 < pMVar28->field_96) {
                local_e4 = (int)local_c0 * (int)local_c8 >> 8;
                this_02 = (shared_ptr*)local_80->field_176;
                local_100 = (shared_ptr<Array<FaceNormal, eastl::allocator>>*)local_80->field_416;
                local_90 = (Array<int, eastl::allocator>*)CONCAT44(local_90._4_4_, local_e4);
                local_e4 = (local_e4 - ((int)local_c0 * (int)local_c8 >> 31) >> 1) + local_e4;
                local_40 = (shared_ptr*)&local_80->field_560;
                local_88 = (Array<short, eastl::allocator>*)local_80->field_432;
                local_f8 = (shared_ptr<Array<short, eastl::allocator>>*)&local_80->field_240;
                p_Var27 = (_func_decltype_nullptr*)0;
                local_c8 = this_02;
                do {
                    cVar8 = '\0';
                    bVar7 = operator==(this_02, (_func_decltype_nullptr*)0);
                    if (!bVar7) {
                        pAVar11 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)this_02);
                        pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar11, (ulong)p_Var27);
                        cVar8 = *pcVar12;
                    }
                    cVar25 = '\0';
                    local_38 = p_Var27;
                    bVar7 = operator==(local_e0, (_func_decltype_nullptr*)0);
                    if (!bVar7) {
                        pAVar11 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)local_e0);
                        pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar11, (ulong)local_38);
                        cVar25 = *pcVar12;
                    }
                    p_Var27 = (_func_decltype_nullptr*)0;
                    bVar7 = operator==(local_d8, (_func_decltype_nullptr*)0);
                    sVar24 = -1;
                    if (!bVar7) {
                        pAVar19 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)local_d8);
                        p_Var27 = local_38;
                        psVar20 = (short*)Array<short, eastl::allocator>::operator[](pAVar19, (ulong)local_38);
                        sVar24 = *psVar20;
                    }
                    p_Var6 = local_38;
                    if (cVar25 == -2) {
                        cVar8 = '\x03';
                    }
                    if (cVar25 == -1) {
                        cVar8 = '\x02';
                    }
                    if (sVar24 == -1) {
                        if (cVar8 == '\x03') {
                            puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_d0, (ulong)local_38);
                            *puVar23 = 128;
                            puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)local_38);
                            *puVar23 = 4294967295;
                        } else {
                            if (cVar8 != '\x01') {
                                if (cVar8 != '\0') {
                                    puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0,
                                                                                                    (ulong)local_38);
                                    goto LAB_10035e8ef;
                                }
                                new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var27);
                                pAVar19 = (Array<short, eastl::allocator>*)
                                    shared_ptr<Array<short, eastl::allocator>>::operator*(local_f8);
                                puVar16 = (ushort*)Array<short, eastl::allocator>::operator[](pAVar19, (ulong)local_38);
                                local_c0 = (double)CONCAT44(local_c0._4_4_, (uint)*puVar16);
                                bVar7 = operator!=(local_40, (_func_decltype_nullptr*)0);
                                if (bVar7) {
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)local_78, (ulong)local_38);
                                    lVar10 = Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                    if (*(int*)(lVar10 + 12) == 0)
                                        goto LAB_10035ef19;
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)local_78, (ulong)local_38);
                                    piVar15 =
                                        (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                } else {
                                LAB_10035ef19:
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_88);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)local_78, (ulong)local_38);
                                    piVar15 =
                                        (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                }
                                iVar29 = *piVar15;
                                iVar3 = piVar15[1];
                                iVar4 = piVar15[2];
                                iVar5 = piVar15[3];
                                local_68 = iVar29;
                                iStack_64 = iVar3;
                                iStack_60 = iVar4;
                                iStack_5c = iVar5;
                                if (iVar5 == 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("p.m_c != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                              3222, (char*)0);
                                }
                                puVar23 =
                                    (undefined4*)Array<int, eastl::allocator>::operator[](local_d0, (ulong)local_38);
                                uVar9 = ModelUnlit::GetColour(
                                    local_c0._0_4_, (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                                *puVar23 = uVar9;
                                bVar7 = operator!=(local_40, (_func_decltype_nullptr*)0);
                                if (bVar7) {
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)local_70, (ulong)local_38);
                                    lVar10 = Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                    if (*(int*)(lVar10 + 12) == 0)
                                        goto LAB_10035f025;
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)local_70, (ulong)local_38);
                                    piVar15 =
                                        (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                } else {
                                LAB_10035f025:
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_88);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)local_70, (ulong)local_38);
                                    piVar15 =
                                        (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                }
                                iVar29 = *piVar15;
                                iVar3 = piVar15[1];
                                iVar4 = piVar15[2];
                                iVar5 = piVar15[3];
                                local_68 = iVar29;
                                iStack_64 = iVar3;
                                iStack_60 = iVar4;
                                iStack_5c = iVar5;
                                if (iVar5 == 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("p.m_c != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                              3235, (char*)0);
                                }
                                puVar23 =
                                    (undefined4*)Array<int, eastl::allocator>::operator[](local_108, (ulong)local_38);
                                uVar9 = ModelUnlit::GetColour(
                                    local_c0._0_4_, (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                                *puVar23 = uVar9;
                                bVar7 = operator!=(local_40, (_func_decltype_nullptr*)0);
                                if (bVar7) {
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)local_38);
                                    lVar10 = Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                    if (*(int*)(lVar10 + 12) == 0)
                                        goto LAB_10035f137;
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)local_38);
                                    piVar15 =
                                        (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                } else {
                                LAB_10035f137:
                                    pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                        shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_88);
                                    piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)local_38);
                                    piVar15 =
                                        (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                                }
                                iVar29 = *piVar15;
                                iVar3 = piVar15[1];
                                iVar4 = piVar15[2];
                                iVar5 = piVar15[3];
                                local_68 = iVar29;
                                iStack_64 = iVar3;
                                iStack_60 = iVar4;
                                iStack_5c = iVar5;
                                if (iVar5 == 0) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("p.m_c != 0",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "oldscape/jagex3/dash3d/ModelUnlit.cpp",
                                              3248, (char*)0);
                                }
                                puVar23 =
                                    (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)local_38);
                                uVar9 = ModelUnlit::GetColour(
                                    local_c0._0_4_, (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) /
                                                            (iVar5 * (int)local_90) +
                                                        (int)local_98);
                                goto LAB_10035f1e3;
                            }
                            pAVar22 = (Array<FaceNormal, eastl::allocator>*)
                                shared_ptr<Array<FaceNormal, eastl::allocator>>::operator*(local_100);
                            piVar15 = (int*)Array<FaceNormal, eastl::allocator>::operator[](pAVar22, (ulong)p_Var6);
                            iVar29 =
                                (piVar15[2] * in_stack_00000008 + piVar15[1] * param_5 + *piVar15 * param_4) / local_e4;
                            pAVar19 =
                                (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                    local_f8);
                            puVar16 = (ushort*)Array<short, eastl::allocator>::operator[](pAVar19, (ulong)p_Var6);
                            uVar2 = *puVar16;
                            puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_d0, (ulong)p_Var6);
                            uVar9 = ModelUnlit::GetColour((uint)uVar2, iVar29 + (int)local_98);
                            *puVar23 = uVar9;
                            puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)p_Var6);
                            *puVar23 = 4294967295;
                            piVar15 = local_b8;
                        }
                    } else if (cVar8 == '\x01') {
                        pAVar22 = (Array<FaceNormal, eastl::allocator>*)
                            shared_ptr<Array<FaceNormal, eastl::allocator>>::operator*(local_100);
                        piVar15 = (int*)Array<FaceNormal, eastl::allocator>::operator[](pAVar22, (ulong)p_Var6);
                        iVar29 = *piVar15;
                        iVar3 = piVar15[1];
                        iVar4 = piVar15[2];
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_d0, (ulong)p_Var6);
                        uVar9 = ModelUnlit::GetTexLight(
                            (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) / local_e4 +
                            (int)local_98);
                        *puVar23 = uVar9;
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)p_Var6);
                        *puVar23 = 4294967295;
                        this_02 = local_c8;
                        piVar15 = local_b8;
                    } else if (cVar8 == '\0') {
                        new (&local_68) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var27);
                        bVar7 = operator!=(local_40, (_func_decltype_nullptr*)0);
                        if (bVar7) {
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_78, (ulong)local_38);
                            lVar10 = Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                            if (*(int*)(lVar10 + 12) == 0)
                                goto LAB_10035eb7b;
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_78, (ulong)local_38);
                            piVar15 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                        } else {
                        LAB_10035eb7b:
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_88);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_78, (ulong)local_38);
                            piVar15 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                        }
                        iVar29 = *piVar15;
                        iVar3 = piVar15[1];
                        iVar4 = piVar15[2];
                        iVar5 = piVar15[3];
                        local_68 = iVar29;
                        iStack_64 = iVar3;
                        iStack_60 = iVar4;
                        iStack_5c = iVar5;
                        if (iVar5 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("p.m_c != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/ModelUnlit.cpp",
                                      3291, (char*)0);
                        }
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_d0, (ulong)local_38);
                        uVar9 = ModelUnlit::GetTexLight(
                            (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) / (iVar5 * (int)local_90) +
                            (int)local_98);
                        *puVar23 = uVar9;
                        bVar7 = operator!=(local_40, (_func_decltype_nullptr*)0);
                        if (bVar7) {
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_70, (ulong)local_38);
                            lVar10 = Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                            if (*(int*)(lVar10 + 12) == 0)
                                goto LAB_10035ec80;
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_70, (ulong)local_38);
                            piVar15 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                        } else {
                        LAB_10035ec80:
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_88);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)local_70, (ulong)local_38);
                            piVar15 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                        }
                        iVar29 = *piVar15;
                        iVar3 = piVar15[1];
                        iVar4 = piVar15[2];
                        iVar5 = piVar15[3];
                        local_68 = iVar29;
                        iStack_64 = iVar3;
                        iStack_60 = iVar4;
                        iStack_5c = iVar5;
                        if (iVar5 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("p.m_c != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/ModelUnlit.cpp",
                                      3304, (char*)0);
                        }
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_108, (ulong)local_38);
                        uVar9 = ModelUnlit::GetTexLight(
                            (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) / (iVar5 * (int)local_90) +
                            (int)local_98);
                        *puVar23 = uVar9;
                        bVar7 = operator!=(local_40, (_func_decltype_nullptr*)0);
                        if (bVar7) {
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)local_38);
                            lVar10 = Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                            if (*(int*)(lVar10 + 12) == 0)
                                goto LAB_10035ed8c;
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_40);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)local_38);
                            piVar15 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                        } else {
                        LAB_10035ed8c:
                            pAVar21 = (Array<PointNormal, eastl::allocator>*)
                                shared_ptr<Array<PointNormal, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<PointNormal, eastl::allocator>>*)local_88);
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, (ulong)local_38);
                            piVar15 = (int*)Array<PointNormal, eastl::allocator>::operator[](pAVar21, (long)*piVar15);
                        }
                        iVar29 = *piVar15;
                        iVar3 = piVar15[1];
                        iVar4 = piVar15[2];
                        iVar5 = piVar15[3];
                        local_68 = iVar29;
                        iStack_64 = iVar3;
                        iStack_60 = iVar4;
                        iStack_5c = iVar5;
                        if (iVar5 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("p.m_c != 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "jagex3/dash3d/ModelUnlit.cpp",
                                      3317, (char*)0);
                        }
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)local_38);
                        uVar9 = ModelUnlit::GetTexLight(
                            (iVar4 * in_stack_00000008 + iVar3 * param_5 + iVar29 * param_4) / (iVar5 * (int)local_90) +
                            (int)local_98);
                    LAB_10035f1e3:
                        *puVar23 = uVar9;
                        this_02 = local_c8;
                        piVar15 = local_b8;
                    } else {
                        puVar23 = (undefined4*)Array<int, eastl::allocator>::operator[](local_b0, (ulong)local_38);
                    LAB_10035e8ef:
                        *puVar23 = 4294967294;
                    }
                    p_Var27 = local_38 + 1;
                } while ((long)p_Var27 < (long)*piVar15);
            }
            pMVar28 = local_80;
            PrepareAnim(local_80);
            lVar10 = local_a0;
            *(uint*)(local_a0 + 20) = pMVar28->field_20;
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(local_a0 + 24),
                                                    (Array*)&pMVar28->field_24);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar10 + 48),
                                                    (Array*)&pMVar28->field_48);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar10 + 72),
                                                    (Array*)&pMVar28->field_72);
            *(int*)(lVar10 + 96) = *piVar15;
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar10 + 104), (Array*)local_78);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar10 + 128), (Array*)local_70);
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar10 + 152), (Array*)local_a8);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar10 + 248), (shared_ptr*)&pMVar28->field_192);
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar10 + 264), local_e0);
            *(undefined1*)(lVar10 + 312) = pMVar28->field_312;
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar10 + 392),
                (shared_ptr*)pMVar28->field_448);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar10 + 408),
                (shared_ptr*)pMVar28->field_464);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)(lVar10 + 424), (shared_ptr*)pMVar28->field_480);
            shared_ptr<Array<int, eastl::allocator>>::operator=(
                (shared_ptr<Array<int, eastl::allocator>>*)(lVar10 + 440), (shared_ptr*)pMVar28->field_496);
            shared_ptr<Array<short, eastl::allocator>>::operator=(
                (shared_ptr<Array<short, eastl::allocator>>*)(lVar10 + 296), local_d8);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar10 + 456),
                (shared_ptr*)&pMVar28->field_512);
            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
                (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar10 + 472),
                (shared_ptr*)&pMVar28->field_528);
            *(int*)(lVar10 + 12) = pMVar28->field_12;
            static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr*)(ModelUnlitImpl*)this, local_128,
                                                                     extraout_RDX);
            local_128->~shared_ptr();
            this = (ModelUnlitImpl*)this;
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

    // 0x10035f3d0, 64 bytes, placed by class name
    // ModelUnlit::GetColour(int, int)
    int ModelUnlit::GetColour(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;

        iVar1 = (param_1 & 127U) * param_2;
        iVar2 = iVar1 >> 7;
        iVar3 = 126;
        if (iVar2 < 126) {
            iVar3 = iVar2;
        }
        iVar2 = 2;
        if (255 < iVar1) {
            iVar2 = iVar3;
        }
        return iVar2 + (param_1 & 65408U);
    }

    // 0x10035f410, 32 bytes, placed by class name
    // ModelUnlit::GetTexLight(int)
    int ModelUnlit::GetTexLight(int param_1) {
        int iVar1;
        int iVar2;

        iVar2 = 126;
        if (param_1 < 126) {
            iVar2 = param_1;
        }
        iVar1 = 2;
        if (2 < iVar2) {
            iVar1 = iVar2;
        }
        return iVar1;
    }

    // 0x10038f880, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.101
    void ___cxx_global_var_init_101() {
        new (&ModelUnlitImpl::m_shareMap) eastl::fixed_vector<int, 10000ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cd0, &ModelUnlitImpl::m_shareMap, 4294967296);
    }

    // 0x10038f8c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102() {
        new (&ModelUnlitImpl::m_shareMap2) eastl::fixed_vector<int, 10000ul, true, eastl::allocator>();
        ___cxa_atexit(PTR__fixed_vector_100ee6cd0, &ModelUnlitImpl::m_shareMap2, 4294967296);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelUnlit::~ModelUnlit();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelUnlit::~ModelUnlit();

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x100350ce0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::Model>::type make_shared<graphics::Model>()
    jag* make_shared<graphics::Model>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        Model* local_28[2];

        pvVar1 = (void*)aligned_alloc(976, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<graphics::Model>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100350d90, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type make_shared<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model> >(shared_ptr<graphics::Model>&&)
    jag* make_shared<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>>(shared_ptr* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ModelRSevenUnlit* local_30[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                                   oldscape::dash3d::ModelRSevenUnlit*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1003510c0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type make_shared<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit&>(oldscape::dash3d::ModelRSevenUnlit&)
    /* shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type
   make_shared<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit
   const&>(oldscape::dash3d::ModelRSevenUnlit const&) */

    jag* jag::make_shared<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit_const&>(
        ModelRSevenUnlit* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ModelRSevenUnlit* local_30[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ModelRSevenUnlit, oldscape::dash3d::ModelRSevenUnlit_const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                                   oldscape::dash3d::ModelRSevenUnlit*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100351380, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit const&>(oldscape::dash3d::ModelRSevenLit const&)
    /* shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type
   make_shared<oldscape::dash3d::ModelRSevenLit,
   oldscape::dash3d::ModelRSevenLit&>(oldscape::dash3d::ModelRSevenLit&) */

    jag* make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit&>(ModelRSevenLit* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        ModelRSevenLit* local_30[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit_const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int,
                                   oldscape::dash3d::ModelRSevenLit*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100351c70, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall, oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(oldscape::dash3d::ModelRSevenLit::LightCall&&, oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&)
    jag* jag::make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                          oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(LightCall* param_1,
                                                                                             ModelRSevenUnlit* param_2,
                                                                                             int* param_3, int* param_4,
                                                                                             int* param_5, int* param_6,
                                                                                             int* param_7) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        ModelRSevenLit* local_40[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                                        oldscape::dash3d::ModelRSevenUnlit&, int&, int&, int&, int&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6, param_7);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int,
                                   oldscape::dash3d::ModelRSevenLit*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100351d40, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenLit>::type make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall, oldscape::dash3d::ModelRSevenUnlit&>(oldscape::dash3d::ModelRSevenLit::LightCall&&, oldscape::dash3d::ModelRSevenUnlit&)
    jag* jag::make_shared<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                          oldscape::dash3d::ModelRSevenUnlit&>(LightCall* param_1, ModelRSevenUnlit* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ModelRSevenLit* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit::LightCall,
                              oldscape::dash3d::ModelRSevenUnlit&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int,
                                   oldscape::dash3d::ModelRSevenLit*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x100351660, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<int> operator-<int>(Vector3T<int> const&)
    /* Vector3T<int> TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&) */

    undefined1[16] operator-(Vector3T * param_1) {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(-(int)field_0, -(int)field_4, -(int)field_8);
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

} // namespace jag::math
