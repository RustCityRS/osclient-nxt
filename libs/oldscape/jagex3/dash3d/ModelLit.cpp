// libs/oldscape/jagex3/dash3d/ModelLit.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "ModelLit.h"

namespace jag::oldscape::dash3d {
    // 0x100f37e00, 16 bytes, __data
    ModelLit::m_useAABBMouseCheck = {1, 0, 0, 0};

    // 0x103936438, 16 bytes, __common; zero-initialised
    ModelLitImpl::m_tempModel;

    // 0x103936448, 24 bytes, __common; set at startup by ___cxx_global_var_init.76
    Array<signed char, eastl::allocator> ModelLitImpl::m_tempFTran = Array<signed char, eastl::allocator>();

    // 0x103936460, 16 bytes, __common; zero-initialised
    ModelLitImpl::m_tempModel2;

    // 0x103936470, 32 bytes, __common; set at startup by ___cxx_global_var_init.78
    Array<signed char, eastl::allocator> ModelLitImpl::m_tempFTran2 = Array<signed char, eastl::allocator>();

    // 0x103936490, 64 bytes, __common; zero-initialised
    ModelLitImpl::m_sumMatrix;

    // 0x1039364d0, 64 bytes, __common; zero-initialised
    ModelLitImpl::m_weightMatrix;

    // 0x103936510, 64 bytes, __common; zero-initialised
    ModelLitImpl::m_skinMatrix;

    // 0x103936550, 4 bytes, __common; zero-initialised
    ModelLitImpl::m_nextModelId;

    // 0x103936554, 4 bytes, __common; zero-initialised
    ModelLitImpl::m_oX;

    // 0x103936558, 4 bytes, __common; zero-initialised
    ModelLitImpl::m_oY;

    // 0x10393655c, 4 bytes, __common; zero-initialised
    ModelLitImpl::m_oZ;

    // 0x10002a770: the linker folded this into void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*), which has identical code
    ModelLit::~ModelLit();

    // 0x10034be50, 240 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)
    void ModelLitImpl::PrepareForAppend(shared_ptr* param_1, ModelAppendList* param_2) {
        ModelLitImpl* pMVar1;
        ModelLitImpl* pMVar2;
        shared_ptr local_40;

        pMVar2 = (ModelLitImpl*)param_1;
        pMVar1 = (ModelLitImpl*)m_tempModel.end();
        if ((pMVar1 == this) || (pMVar1 = (ModelLitImpl*)m_tempModel2.end(), pMVar1 == this)) {
            PrepareThisForAppend(this, param_2);
            return;
        }
        pMVar1 = (ModelLitImpl*)param_1->end();
        if (pMVar1 != this) {
            /* WARNING: Subroutine does not return */
            LogAssert("apendeeOut.get() == this",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      50, (char*)0);
        }
        Create<>(&local_40, pMVar2);
        shared_ptr<ModelLit>::operator=((shared_ptr<ModelLit>*)param_1, &local_40);
        local_40.~shared_ptr();
        pMVar2 = (ModelLitImpl*)shared_ptr<ModelLit>::operator*((shared_ptr<ModelLit>*)param_1);
  PrepareForAppend(shared_ptr<ModelLit>&,ModelAppendList_const&)::IterPlusMe::IterPlusMe(ModelAppendList_const&,ModelLitImpl__(&local_40,param_2,this);
  PrepareThisForAppend(pMVar2,(ModelAppendList *)&local_40);
  AppendModel(pMVar2,(ModelLit *)this);
    }

    // 0x10034bf40, 640 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::PrepareThisForAppend(ModelAppendList const&)
    void ModelLitImpl::PrepareThisForAppend(ModelAppendList* param_1) {
        bool bVar2;
        int iVar3;
        ulong uVar5;
        long* plVar6;
        Array<signed char, eastl::allocator>* pAVar7;
        Array<short, eastl::allocator>* this_00;
        ulong uVar8;
        int iVar9;
        int iVar10;

        iVar10 = field_20;
        iVar9 = field_96;
        iVar3 = field_316;
        if ((**(code**)param_1->field_0)(param_1) != 0) {
            uVar8 = 0;
            do {
                plVar6 = (long*)(**(code**)(param_1->field_0 + 8))(param_1, uVar8);
                if ((**(code**)(*plVar6 + 56))(plVar6) != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("secondary.IsForRSeven() == false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "dash3d/ModelLit.cpp",
                              105, (char*)0);
                }
                iVar10 = iVar10 + *(int*)((long)plVar6 + 20);
                iVar9 = iVar9 + (int)plVar6[12];
                iVar3 = iVar3 + *(int*)((long)plVar6 + 316);
                uVar8 = uVar8 + 1;
                uVar5 = (**(code**)param_1->field_0)(param_1);
            } while (uVar8 < uVar5);
        }
        if (iVar9 != field_96) {
            uVar8 = (ulong)iVar10;
            (&field_24, uVar8, 7)->set_max_size();
            (&field_48, uVar8, 7)->set_max_size();
            (&field_72, uVar8, 7)->set_max_size();
            uVar8 = (ulong)iVar9;
            (&field_104, uVar8, 7)->set_max_size();
            (&field_128, uVar8, 7)->set_max_size();
            (&field_152, uVar8, 7)->set_max_size();
            (&field_176, uVar8, 7)->set_max_size();
            (&field_200, uVar8, 7)->set_max_size();
            (&field_224, uVar8, 7)->set_max_size();
            bVar2 = operator!=((shared_ptr*)field_248, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pAVar7 =
                    (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                        (shared_ptr<Array<signed char, eastl::allocator>>*)field_248);
                pAVar7->set_max_size(uVar8, 7);
            }
            bVar2 = operator!=((shared_ptr*)field_264, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pAVar7 =
                    (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                        (shared_ptr<Array<signed char, eastl::allocator>>*)field_264);
                pAVar7->set_max_size(uVar8, 7);
            }
            bVar2 = operator!=((shared_ptr*)field_296, (_func_decltype_nullptr*)0);
            if (bVar2) {
                this_00 = (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator->(
                    (shared_ptr<Array<short, eastl::allocator>>*)field_296);
                this_00->set_max_size(uVar8, 7);
            }
            bVar2 = operator!=((shared_ptr*)field_280, (_func_decltype_nullptr*)0);
            if (bVar2) {
                pAVar7 =
                    (Array<signed char, eastl::allocator>*)shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                        (shared_ptr<Array<signed char, eastl::allocator>>*)field_280);
                pAVar7->set_max_size(uVar8, 7);
            }
            if (0 < iVar3) {
                uVar8 = (ulong)iVar3;
                (&field_320, uVar8, 7)->set_max_size();
                (&field_344, uVar8, 7)->set_max_size();
                (&field_368, uVar8, 7)->set_max_size();
            }
        }
    }

    // 0x10034c2b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>&, ModelAppendList const&)::IterPlusMe::IterPlusMe(ModelAppendList const&, ModelLitImpl&): jumps straight to the base-object constructor

    // 0x10034c2c0, 1696 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::AppendModel(ModelLit const*)
    void ModelLitImpl::AppendModel(ModelLit* param_1) {
        shared_ptr* this_00;
        shared_ptr* this_01;
        shared_ptr* this_02;
        undefined8* this_03;
        int iVar1;
        int iVar2;
        undefined4 uVar3;
        char cVar4;
        bool bVar5;
        bool bVar6;
        bool bVar7;
        bool bVar8;
        bool bVar9;
        int iVar10;
        ModelLit* pMVar11;
        int* piVar12;
        undefined4* puVar13;
        Array<signed char, eastl::allocator>* pAVar14;
        undefined1* puVar15;
        Array<short, eastl::allocator>* pAVar16;
        undefined2* puVar17;
        char* pcVar18;
        ulong uVar19;
        undefined1 uVar20;
        undefined2 uVar21;

        cVar4 = (**(code**)(param_1->field_0 + 56))(param_1);
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!modelb->IsForRSeven()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      161, (char*)0);
        }
        pMVar11 = (ModelLit*)m_tempModel.end();
        if (pMVar11 == param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("modelb != m_tempModel.get()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      164, (char*)0);
        }
        iVar1 = field_96;
        iVar2 = *(int*)((long)&param_1[5].field_8 + 3);
        iVar10 = (&field_104)->end();
        if (iVar10 < iVar1 + iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("model->m_numFaces + m_numFaces <= (int)m_point1.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      168, (char*)0);
        }
        iVar1 = field_20;
        iVar2 = *(int*)((long)&param_1[1].field_0 + 3);
        iVar10 = (&field_24)->end();
        if (iVar10 < iVar1 + iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("model->m_numPoints + m_numPoints <= (int)m_pointX.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      169, (char*)0);
        }
        iVar1 = field_316;
        iVar2 = *(int*)((long)&param_1[18].field_8 + 2);
        iVar10 = (&field_320)->end();
        if (iVar10 < iVar1 + iVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("model->m_numT + m_numT <= (int)m_t1.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      170, (char*)0);
        }
        if (param_1 != (ModelLit*)0) {
            AllocateFaceBuffersForModel(this, (ModelLitImpl*)param_1);
            bVar5 = operator!=((shared_ptr*)field_248, (_func_decltype_nullptr*)0);
            bVar6 = operator!=((shared_ptr*)field_264, (_func_decltype_nullptr*)0);
            bVar7 = operator!=((shared_ptr*)field_296, (_func_decltype_nullptr*)0);
            bVar8 = operator!=((shared_ptr*)field_280, (_func_decltype_nullptr*)0);
            if (0 < *(int*)((long)&param_1[5].field_8 + 3)) {
                this_00 = (shared_ptr*)((long)&param_1[14].field_8 + 2);
                this_01 = (shared_ptr*)((long)&param_1[15].field_8 + 1);
                this_02 = (shared_ptr*)((long)&param_1[17].field_0 + 7);
                this_03 = &param_1[16].field_8;
                uVar19 = 0;
                do {
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[6].field_0 + 2), uVar19);
                    iVar1 = field_20;
                    iVar2 = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_104,
                                                                             (long)field_96);
                    *piVar12 = iVar1 + iVar2;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[7].field_8 + 1), uVar19);
                    iVar1 = field_20;
                    iVar2 = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_128,
                                                                             (long)field_96);
                    *piVar12 = iVar1 + iVar2;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&param_1[8].field_16, uVar19);
                    iVar1 = field_20;
                    iVar2 = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_152,
                                                                             (long)field_96);
                    *piVar12 = iVar1 + iVar2;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[10].field_0 + 6), uVar19);
                    uVar3 = *puVar13;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_176, (long)field_96);
                    *puVar13 = uVar3;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[11].field_8 + 5), uVar19);
                    uVar3 = *puVar13;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_200, (long)field_96);
                    *puVar13 = uVar3;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[13].field_0 + 3), uVar19);
                    uVar3 = *puVar13;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_224, (long)field_96);
                    *puVar13 = uVar3;
                    if (bVar5) {
                        bVar9 = operator!=(this_00, (_func_decltype_nullptr*)0);
                        puVar15 = (undefined1*)((long)&param_1[18].field_0 + 6);
                        if (bVar9) {
                            pAVar14 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)this_00);
                            puVar15 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar14, uVar19);
                        }
                        uVar20 = *puVar15;
                        pAVar14 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)field_248);
                        puVar15 =
                            (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar14, (long)field_96);
                        *puVar15 = uVar20;
                    }
                    if (bVar6) {
                        uVar20 = 0;
                        bVar9 = operator!=(this_01, (_func_decltype_nullptr*)0);
                        if (bVar9) {
                            pAVar14 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)this_01);
                            puVar15 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar14, uVar19);
                            uVar20 = *puVar15;
                        }
                        pAVar14 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)field_264);
                        puVar15 =
                            (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar14, (long)field_96);
                        *puVar15 = uVar20;
                    }
                    if (bVar7) {
                        bVar9 = operator!=(this_02, (_func_decltype_nullptr*)0);
                        uVar21 = 65535;
                        if (bVar9) {
                            pAVar16 =
                                (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<short, eastl::allocator>>*)this_02);
                            puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar16, uVar19);
                            uVar21 = *puVar17;
                        }
                        pAVar16 =
                            (Array<short, eastl::allocator>*)shared_ptr<Array<short, eastl::allocator>>::operator*(
                                (shared_ptr<Array<short, eastl::allocator>>*)field_296);
                        puVar17 = (undefined2*)Array<short, eastl::allocator>::operator[](pAVar16, (long)field_96);
                        *puVar17 = uVar21;
                    }
                    if (bVar8) {
                        bVar9 = operator!=((shared_ptr*)this_03, (_func_decltype_nullptr*)0);
                        cVar4 = -1;
                        if (bVar9) {
                            pAVar14 = (Array<signed char, eastl::allocator>*)
                                shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<signed char, eastl::allocator>>*)this_03);
                            pcVar18 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar14, uVar19);
                            if (*pcVar18 != -1) {
                                pAVar14 = (Array<signed char, eastl::allocator>*)
                                    shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                        (shared_ptr<Array<signed char, eastl::allocator>>*)this_03);
                                pcVar18 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar14, uVar19);
                                cVar4 = *pcVar18 + (char)field_316;
                            }
                        }
                        pAVar14 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)field_280);
                        pcVar18 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar14, (long)field_96);
                        *pcVar18 = cVar4;
                    }
                    field_96 = field_96 + 1;
                    uVar19 = uVar19 + 1;
                } while ((long)uVar19 < (long)*(int*)((long)&param_1[5].field_8 + 3));
            }
            if (0 < *(int*)((long)&param_1[18].field_8 + 2)) {
                uVar19 = 0;
                do {
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[18].field_8 + 6), uVar19);
                    iVar1 = field_20;
                    iVar2 = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_320,
                                                                             (long)field_316);
                    *piVar12 = iVar1 + iVar2;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[20].field_0 + 4), uVar19);
                    iVar1 = field_20;
                    iVar2 = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_344,
                                                                             (long)field_316);
                    *piVar12 = iVar1 + iVar2;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[21].field_8 + 3), uVar19);
                    iVar1 = field_20;
                    iVar2 = *piVar12;
                    piVar12 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_368,
                                                                             (long)field_316);
                    *piVar12 = iVar1 + iVar2;
                    field_316 = field_316 + 1;
                    uVar19 = uVar19 + 1;
                } while ((long)uVar19 < (long)*(int*)((long)&param_1[18].field_8 + 2));
            }
            if (0 < *(int*)((long)&param_1[1].field_0 + 3)) {
                uVar19 = 0;
                do {
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[1].field_0 + 7), uVar19);
                    uVar3 = *puVar13;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_24, (long)field_20);
                    *puVar13 = uVar3;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[2].field_8 + 6), uVar19);
                    uVar3 = *puVar13;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_48, (long)field_20);
                    *puVar13 = uVar3;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), uVar19);
                    uVar3 = *puVar13;
                    puVar13 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_72, (long)field_20);
                    *puVar13 = uVar3;
                    field_20 = field_20 + 1;
                    uVar19 = uVar19 + 1;
                } while ((long)uVar19 < (long)*(int*)((long)&param_1[1].field_0 + 3));
            }
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034c960, 432 bytes, placed by neighbouring functions
    // ModelLitImpl::AllocateFaceBuffersForModel(ModelLitImpl const&)
    void ModelLitImpl::AllocateFaceBuffersForModel(ModelLitImpl* param_1) {
        bool bVar1;
        ulong local_48;
        shared_ptr local_40;
        ushort local_2a;

        local_48 = (&field_104)->end();
        bVar1 = field_248->operator_cast_to_bool();
        if (!bVar1) {
            bVar1 = param_1->field_248->operator_cast_to_bool();
            if ((bVar1) || (field_312[0] != param_1->field_312[0])) {
                make_shared<Array<signed char, eastl::allocator>, unsigned long&, signed char>(
                    (jag*)&local_40, &local_48, (signed*)field_312);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)field_248, &local_40);
                local_40.~shared_ptr();
            }
        }
        bVar1 = field_264->operator_cast_to_bool();
        if (!bVar1) {
            bVar1 = param_1->field_264->operator_cast_to_bool();
            if (bVar1) {
                local_2a = local_2a & 65280;
                make_shared<Array<signed char, eastl::allocator>, unsigned long&, signed char>(
                    (jag*)&local_40, &local_48, (signed*)&local_2a);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)field_264, &local_40);
                local_40.~shared_ptr();
            }
        }
        bVar1 = field_296->operator_cast_to_bool();
        if (!bVar1) {
            bVar1 = param_1->field_296->operator_cast_to_bool();
            if (bVar1) {
                local_2a = 65535;
                make_shared<Array<short, eastl::allocator>, unsigned long&, short>((jag*)&local_40, &local_48,
                                                                                   (short*)&local_2a);
                shared_ptr<Array<short, eastl::allocator>>::operator=(
                    (shared_ptr<Array<short, eastl::allocator>>*)field_296, &local_40);
                local_40.~shared_ptr();
            }
        }
        bVar1 = field_280->operator_cast_to_bool();
        if (!bVar1) {
            bVar1 = param_1->field_280->operator_cast_to_bool();
            if (bVar1) {
                local_2a = CONCAT11(local_2a._1_1_, 255);
                make_shared<Array<signed char, eastl::allocator>, unsigned long&, signed char>(
                    (jag*)&local_40, &local_48, (signed*)&local_2a);
                shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                    (shared_ptr<Array<signed char, eastl::allocator>>*)field_280, &local_40);
                local_40.~shared_ptr();
            }
        }
    }

    // 0x10034cb90, 48 bytes, placed by neighbouring functions
    // ModelLitImpl::ResetBoundingCalculations()
    void ModelLitImpl::ResetBoundingCalculations() {
        field_504 = 0;
        (&field_528, false)->clear();
        field_492 = 1;
    }

    // 0x10034cbc0, 1088 bytes, placed by neighbouring functions
    // ModelLitImpl::HillSkewCopy(int, int, int, int, int)
    ModelLitImpl* ModelLitImpl::HillSkewCopy(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined1 uVar1;
        undefined4 uVar2;
        bool bVar3;
        long lVar4;
        Array* pAVar5;
        long lVar6;
        void* pvVar7;
        void* pvVar8;
        ModelLitImpl* this_00;
        shared_ptr* extraout_RDX;
        undefined4 in_register_00000034;
        long lVar9;
        int in_stack_00000008;
        shared_ptr local_50;
        jag local_40[16];

        lVar9 = CONCAT44(in_register_00000034, param_1);
        make_shared<ModelLitImpl>(local_40);
        uVar2 = *(undefined4*)(lVar9 + 20);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        *(undefined4*)(lVar4 + 20) = uVar2;
        uVar2 = *(undefined4*)(lVar9 + 96);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        *(undefined4*)(lVar4 + 96) = uVar2;
        uVar2 = *(undefined4*)(lVar9 + 316);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        *(undefined4*)(lVar4 + 316) = uVar2;
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 24), (Array*)(lVar9 + 24));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 72), (Array*)(lVar9 + 72));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 104), (Array*)(lVar9 + 104));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 128), (Array*)(lVar9 + 128));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 152), (Array*)(lVar9 + 152));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 176), (Array*)(lVar9 + 176));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 200), (Array*)(lVar9 + 200));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 224), (Array*)(lVar9 + 224));
        bVar3 = ((lVar9 + 248))->operator_cast_to_bool();
        if (bVar3) {
            pAVar5 = (Array*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar9 + 248));
            make_shared<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>((jag*)&local_50,
                                                                                                     pAVar5);
        } else {
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 248), &local_50);
        local_50.~shared_ptr();
        bVar3 = ((lVar9 + 264))->operator_cast_to_bool();
        if (bVar3) {
            pAVar5 = (Array*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar9 + 264));
            make_shared<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>((jag*)&local_50,
                                                                                                     pAVar5);
        } else {
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 264), &local_50);
        local_50.~shared_ptr();
        bVar3 = ((lVar9 + 280))->operator_cast_to_bool();
        if (bVar3) {
            pAVar5 = (Array*)shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar9 + 280));
            make_shared<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>((jag*)&local_50,
                                                                                                     pAVar5);
        } else {
            new (&local_50) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)(lVar4 + 280), &local_50);
        local_50.~shared_ptr();
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<short, eastl::allocator>>::operator=(
            (shared_ptr<Array<short, eastl::allocator>>*)(lVar4 + 296), (shared_ptr*)(lVar9 + 296));
        uVar1 = *(undefined1*)(lVar9 + 312);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        *(undefined1*)(lVar4 + 312) = uVar1;
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 320), (Array*)(lVar9 + 320));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 344), (Array*)(lVar9 + 344));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)(lVar4 + 368), (Array*)(lVar9 + 368));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar4 + 392),
            (shared_ptr*)(lVar9 + 392));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(lVar4 + 408),
            (shared_ptr*)(lVar9 + 408));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)(lVar4 + 424),
                                                            (shared_ptr*)(lVar9 + 424));
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)(lVar4 + 440),
                                                            (shared_ptr*)(lVar9 + 440));
        uVar1 = *(undefined1*)(lVar9 + 16);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        *(undefined1*)(lVar4 + 16) = uVar1;
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        lVar6 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        ((lVar4 + 48))->set_max_size((long)*(int*)(lVar6 + 20), 5);
        lVar4 = shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        pvVar7 = (void*)((lVar4 + 48))->data();
        pvVar8 = (void*)((lVar9 + 48))->data();
        _memcpy(pvVar7, pvVar8, (long)*(int*)(lVar9 + 20) << 2);
        this_00 = (ModelLitImpl*)shared_ptr<ModelLitImpl>::operator->((shared_ptr<ModelLitImpl>*)local_40);
        HillSkew(this_00, param_2, param_3, param_4, param_5, in_stack_00000008);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr*)this, local_40, extraout_RDX);
        local_40->~shared_ptr();
        return this;
    }

    // 0x10034d200, 336 bytes, placed by neighbouring functions
    // ModelLitImpl::HillSkew(int, int, int, int, int)
    void ModelLitImpl::HillSkew(int param_1, int param_2, int param_3, int param_4, int param_5) {
        HillSkewBuildInput* pHVar1;
        undefined1 local_d8[20];
        Vector3T<int> local_c4[12];
        int local_b8;
        int local_b4;
        int local_b0;
        int local_ac;
        int local_a8;
        int local_a4;
        int local_a0;
        function<jag::math::Vector3T<int>(int)> local_98[48];
        function<void(int, int)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        CalcBoundingCylinder(this);
        new ((local_d8 + 16)) HillSkewBuildInput();
        local_d8._16_4_ = param_1;
        new (local_d8) rs2lib::worldmap::LocationData(param_2, param_3, param_4);
        jag::math::Vector3T<int>::operator=(local_c4, (Vector3T*)local_d8);
        local_b4 = m_radiusCylinder;
        local_a4 = field_8;
        local_a0 = field_20;
        local_d8._0_8_ = this;
        local_b8 = param_5;
        local_b0 = local_b4;
        local_ac = local_b4;
        local_a8 = local_b4;
        std::function<jag::math::Vector3T<int>(int)>::operator=(local_98, (__0*)local_d8);
        pHVar1 = (HillSkewBuildInput*)local_d8;
        local_d8._0_8_ = this;
        std::function<void(int, int)>::operator=(local_68, (__1*)pHVar1);
        ((local_d8 + 16))->PerformHillSkew(pHVar1);
        ResetBoundingCalculations(this);
        ((local_d8 + 16))->~HillSkewBuildInput();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10034d350, 336 bytes, placed by neighbouring functions
    // ModelLitImpl::CalcBoundingCylinder()
    void ModelLitImpl::CalcBoundingCylinder() {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        ulong uVar5;
        double dVar6;
        double dVar7;

        if (field_504 != 1) {
            field_504 = 1;
            field_508 = 0;
            field_8 = 0;
            m_radiusCylinder = 0;
            if (0 < field_20) {
                uVar5 = 0;
                do {
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar5);
                    iVar3 = *piVar4;
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar5);
                    iVar1 = *piVar4;
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar5);
                    iVar2 = *piVar4;
                    if (field_8 < -iVar1) {
                        field_8 = -iVar1;
                    }
                    if (field_508 < iVar1) {
                        field_508 = iVar1;
                    }
                    iVar3 = iVar2 * iVar2 + iVar3 * iVar3;
                    if (m_radiusCylinder < iVar3) {
                        m_radiusCylinder = iVar3;
                    }
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)field_20);
            }
            dVar6 = (double)sqrt<int>(m_radiusCylinder);
            iVar3 = (int)(dVar6 + 0.99);
            m_radiusCylinder = iVar3;
            dVar6 = (double)sqrt<int>(field_8 * field_8 + iVar3 * iVar3);
            field_520 = (int)(dVar6 + 0.99);
            dVar7 = (double)sqrt<int>(field_508 * field_508 + iVar3 * iVar3);
            field_516 = (int)(dVar7 + 0.99) + (int)(dVar6 + 0.99) + 1;
        }
    }

    // 0x10034d580, 192 bytes, placed by neighbouring functions
    // ModelLitImpl::CopyForAnim(bool, int)
    ModelLitImpl* ModelLitImpl::CopyForAnim(bool param_1, int param_2) {
        int iVar1;
        ModelLitImpl* pMVar2;
        int in_ECX;
        int iVar3;
        shared_ptr* this_00;
        undefined7 in_register_00000031;
        ModelLitImpl* this_01;
        bool bVar4;
        Array* this_02;

        this_01 = (ModelLitImpl*)CONCAT71(in_register_00000031, param_1);
        bVar4 = SUB41(param_2, 0);
        if (in_ECX == 1) {
            this_02 = (Array*)&m_tempFTran;
            if (bVar4 != false) {
                this_00 = (shared_ptr*)&m_tempModel;
                goto LAB_10034d609;
            }
            iVar1 = m_tempFTran.end();
            iVar3 = this_01->field_96;
            this_00 = (shared_ptr*)&m_tempModel;
            if (iVar3 <= iVar1)
                goto LAB_10034d609;
        } else {
            this_02 = (Array*)&m_tempFTran2;
            if (bVar4 != false) {
                this_00 = (shared_ptr*)&m_tempModel2;
                goto LAB_10034d609;
            }
            iVar1 = m_tempFTran2.end();
            iVar3 = this_01->field_96;
            this_00 = (shared_ptr*)&m_tempModel2;
            if (iVar3 <= iVar1)
                goto LAB_10034d609;
        }
        this_02->set_max_size((long)(iVar3 + 100), 1);
    LAB_10034d609:
        pMVar2 = (ModelLitImpl*)shared_ptr<ModelLitImpl>::operator*((shared_ptr<ModelLitImpl>*)this_00);
        CopyForAnim(this_01, bVar4, pMVar2, this_02);
        new (this) shared_ptr<Decor>(this_00);
        return this;
    }

    // 0x10034d640, 1024 bytes, placed by neighbouring functions
    // ModelLitImpl::CopyForAnim(bool, ModelLitImpl&, Array<signed char, eastl::allocator>&)
    void ModelLitImpl::CopyForAnim(bool param_1, ModelLitImpl* param_2, Array* param_3) {
        undefined1* puVar1;
        undefined1 uVar2;
        undefined4 uVar3;
        int iVar5;
        undefined4* puVar6;
        Array<signed char, eastl::allocator>* pAVar7;
        undefined1* puVar8;
        undefined1* puVar9;
        undefined7 in_register_00000031;
        ModelLitImpl* this_00;
        ulong uVar10;
        shared_ptr local_88;
        ulong local_78;
        Array<int, eastl::allocator>* local_70;
        Array<int, eastl::allocator>* local_68;
        Array<int, eastl::allocator>* local_60;
        Array<int, eastl::allocator>* local_58;
        undefined4 local_3c;
        ModelLitImpl* local_38;

        local_3c = (undefined4)CONCAT71(in_register_00000031, param_1);
        param_2->field_20 = field_20;
        param_2->field_96 = field_96;
        param_2->field_316 = field_316;
        puVar1 = &param_2->field_24;
        iVar5 = puVar1->end();
        if (iVar5 < field_20) {
            puVar1->set_max_size((long)field_20 + 100, 5);
            (&param_2->field_48, (long)field_20 + 100, 5)->set_max_size();
            (&param_2->field_72, (long)field_20 + 100, 5)->set_max_size();
        }
        local_38 = param_2;
        if (0 < field_20) {
            local_70 = (Array<int, eastl::allocator>*)&field_24;
            local_68 = (Array<int, eastl::allocator>*)&field_48;
            local_60 = (Array<int, eastl::allocator>*)&param_2->field_48;
            local_58 = (Array<int, eastl::allocator>*)&field_72;
            uVar10 = 0;
            do {
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_70, uVar10);
                uVar3 = *puVar6;
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar1,
                                                                               uVar10);
                this = (ModelLitImpl*)this;
                *puVar6 = uVar3;
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, uVar10);
                uVar3 = *puVar6;
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_60, uVar10);
                *puVar6 = uVar3;
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar10);
                uVar3 = *puVar6;
                puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&param_2->field_72, uVar10);
                *puVar6 = uVar3;
                uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)field_20);
        }
        this_00 = local_38;
        if ((char)local_3c == '\0') {
            local_78 = param_3->end();
            make_shared<Array<signed char, eastl::allocator>, unsigned long>((jag*)&local_88, &local_78);
            this_00 = local_38;
            puVar1 = local_38->field_264;
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar1, &local_88);
            local_88.~shared_ptr();
            puVar8 = field_264;
            if (operator==((shared_ptr*)puVar8, (_func_decltype_nullptr*)0)) {
                if (0 < field_96) {
                    uVar10 = 0;
                    do {
                        pAVar7 = (Array<signed char, eastl::allocator>*)
                            shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                (shared_ptr<Array<signed char, eastl::allocator>>*)puVar1);
                        puVar8 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar7, uVar10);
                        *puVar8 = 0;
                        uVar10 = uVar10 + 1;
                    } while ((long)uVar10 < (long)field_96);
                }
            } else if (0 < field_96) {
                uVar10 = 0;
                do {
                    pAVar7 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar8);
                    puVar9 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar7, uVar10);
                    uVar2 = *puVar9;
                    pAVar7 = (Array<signed char, eastl::allocator>*)
                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar1);
                    puVar9 = (undefined1*)Array<signed char, eastl::allocator>::operator[](pAVar7, uVar10);
                    *puVar9 = uVar2;
                    uVar10 = uVar10 + 1;
                    this = (ModelLitImpl*)this;
                } while ((long)uVar10 < (long)((ModelLitImpl*)this)->field_96);
            }
        } else {
            shared_ptr<Array<signed char, eastl::allocator>>::operator=(
                (shared_ptr<Array<signed char, eastl::allocator>>*)local_38->field_264, (shared_ptr*)field_264);
        }
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_104, (Array*)&field_104);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_128, (Array*)&field_128);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_152, (Array*)&field_152);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_176, (Array*)&field_176);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_200, (Array*)&field_200);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_224, (Array*)&field_224);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)this_00->field_248, (shared_ptr*)field_248);
        shared_ptr<Array<signed char, eastl::allocator>>::operator=(
            (shared_ptr<Array<signed char, eastl::allocator>>*)this_00->field_280, (shared_ptr*)field_280);
        shared_ptr<Array<short, eastl::allocator>>::operator=(
            (shared_ptr<Array<short, eastl::allocator>>*)this_00->field_296, (shared_ptr*)field_296);
        this_00->field_312[0] = field_312[0];
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_320, (Array*)&field_320);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_344, (Array*)&field_344);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&this_00->field_368, (Array*)&field_368);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)this_00->field_392,
            (shared_ptr*)field_392);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)this_00->field_408,
            (shared_ptr*)field_408);
        shared_ptr<Array<int, eastl::allocator>>::operator=(
            (shared_ptr<Array<int, eastl::allocator>>*)this_00->field_424, (shared_ptr*)field_424);
        shared_ptr<Array<int, eastl::allocator>>::operator=(
            (shared_ptr<Array<int, eastl::allocator>>*)this_00->field_440, (shared_ptr*)field_440);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)this_00->field_456,
            (shared_ptr*)field_456);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)this_00->field_472,
            (shared_ptr*)field_472);
        this_00->field_16[0] = field_16[0];
        iVar5 = AllocModelId();
        this_00->field_488 = iVar5 + 2;
        this_00->field_500 = 1;
        ResetBoundingCalculations(this_00);
        this_00->field_747 = 0;
    }

    // 0x10034db80, 800 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::CalcAABB(int)
    void ModelLitImpl::CalcAABB(int param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        uint uVar2;
        Array<int, eastl::allocator>* this_01;
        int iVar3;
        bool bVar4;
        uint uVar5;
        uint uVar6;
        ulong uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        int* piVar10;
        uint* puVar11;
        undefined8* puVar12;
        hashtable_iterator_base* extraout_RDX;
        int iVar13;
        ulong uVar14;
        ulong uVar15;
        ulong uVar16;
        eastl local_c0[16];
        ulong local_b0;
        ulong local_a8;
        ulong local_a0;
        ModelLitImpl* local_98;
        Array<int, eastl::allocator>* local_90;
        Array<int, eastl::allocator>* local_88;
        hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>, false>* local_80;
        Array<int, eastl::allocator>* local_78;
        int local_6c;
        AABB local_68;
        ulong local_50;
        ulong local_48;
        ulong local_40;
        int local_38;
        int local_34;

        this_00 = &field_528;
        local_34 = param_1;
        eastl::hashtable<int, eastl::pair<int const, ModelLit::AABB>,
                         eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<int const, ModelLit::AABB>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((int*)local_c0);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar4 = eastl::operator!=(local_c0, (hashtable_iterator_base*)&local_68, extraout_RDX);
        if (!bVar4) {
            uVar7 = this_00->size();
            if (8 < uVar7) {
                uVar8 = logger::default_logger();
                uVar1 = field_488;
                uVar9 = this_00->size();
                logger::Logger::Log(uVar8, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/dash3d/ModelLit.cpp",
                                    453, "Model with modelid: %d has an AABB cache with size: %d", uVar1, uVar9);
                this_00->clear();
            }
            uVar7 = (ulong)local_34;
            local_80 =
                (hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                          eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>, false>*)
                    this_00;
            piVar10 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, uVar7);
            iVar13 = *piVar10;
            piVar10 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, uVar7);
            if (field_20 < 1) {
                local_50 = 0;
                uVar14 = 0;
                local_40 = 0;
                uVar15 = 0;
                local_48 = 0;
                uVar7 = 0;
            } else {
                local_6c = *piVar10;
                local_90 = (Array<int, eastl::allocator>*)&field_24;
                local_78 = (Array<int, eastl::allocator>*)&field_72;
                local_88 = (Array<int, eastl::allocator>*)&field_48;
                uVar16 = 0;
                uVar7 = 0;
                local_48 = 0;
                uVar15 = 0;
                local_40 = 0;
                uVar14 = 0;
                local_50 = 0;
                local_98 = this;
                local_38 = iVar13;
                do {
                    this_01 = local_90;
                    local_b0 = uVar14;
                    local_a8 = uVar15;
                    local_a0 = uVar7;
                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_90, uVar16);
                    iVar13 = *piVar10;
                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_78, uVar16);
                    iVar3 = local_6c;
                    uVar5 = Pix3D::RotateXAroundY(iVar13, *piVar10, local_38, local_6c);
                    puVar11 = (uint*)Array<int, eastl::allocator>::operator[](local_88, uVar16);
                    uVar2 = *puVar11;
                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](this_01, uVar16);
                    iVar13 = *piVar10;
                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_78, uVar16);
                    uVar14 = local_a0;
                    uVar6 = Pix3D::RotateZAroundY(iVar13, *piVar10, local_38, iVar3);
                    uVar7 = uVar14 & 4294967295;
                    if ((int)uVar5 < (int)uVar14) {
                        uVar7 = (ulong)uVar5;
                    }
                    iVar13 = (int)local_40;
                    local_40 = local_40 & 4294967295;
                    if (iVar13 < (int)uVar5) {
                        local_40 = (ulong)uVar5;
                    }
                    iVar13 = (int)local_48;
                    local_48 = local_48 & 4294967295;
                    if ((int)uVar2 < iVar13) {
                        local_48 = (ulong)uVar2;
                    }
                    iVar13 = (int)local_50;
                    local_50 = local_50 & 4294967295;
                    if (iVar13 < (int)uVar2) {
                        local_50 = (ulong)uVar2;
                    }
                    uVar15 = local_a8 & 4294967295;
                    if ((int)uVar6 < (int)local_a8) {
                        uVar15 = (ulong)uVar6;
                    }
                    uVar14 = local_b0 & 4294967295;
                    if ((int)local_b0 < (int)uVar6) {
                        uVar14 = (ulong)uVar6;
                    }
                    uVar16 = uVar16 + 1;
                    this = local_98;
                } while ((long)uVar16 < (long)local_98->field_20);
            }
            new (&local_68) ModelLit::AABB();
            local_68.field_0 = ((int)uVar7 + (int)local_40) / 2;
            local_68.field_4 = ((int)local_48 + (int)local_50) / 2;
            local_68.field_8 = ((int)uVar15 + (int)uVar14) / 2;
            iVar13 = (int)local_40 - (int)uVar7;
            local_68.field_12 = (iVar13 - (iVar13 + 1 >> 31)) + 1 >> 1;
            iVar13 = (int)local_50 - (int)local_48;
            local_68.field_16 = (iVar13 - (iVar13 + 1 >> 31)) + 1 >> 1;
            iVar13 = (int)uVar14 - (int)uVar15;
            local_68.field_20 = (iVar13 - (iVar13 + 1 >> 31)) + 1 >> 1;
            MousePickingHelper::AdjustAABBRadiiForPicking(&local_68.field_12, &local_68.field_20, (bool)field_16[0]);
            puVar12 = (undefined8*)
                eastl::hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                                eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                                false>::operator[](local_80, &local_34);
            *puVar12 = CONCAT44(local_68.field_4, local_68.field_0);
            puVar12[1] = CONCAT44(local_68.field_12, local_68.field_8);
            puVar12[2] = CONCAT44(local_68.field_20, local_68.field_16);
        }
    }

    // 0x10034df60, 256 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::CalcBoundingSphere()
    void ModelLitImpl::CalcBoundingSphere() {
        int iVar1;
        int* piVar2;
        ulong uVar3;
        int iVar4;
        double dVar5;

        if (field_504 != 2) {
            field_504 = 2;
            m_radiusCylinder = 0;
            if (0 < field_20) {
                uVar3 = 0;
                do {
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, uVar3);
                    iVar4 = *piVar2;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar3);
                    iVar1 = *piVar2;
                    piVar2 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar3);
                    iVar4 = iVar1 * iVar1 + iVar4 * iVar4 + *piVar2 * *piVar2;
                    if (m_radiusCylinder < iVar4) {
                        m_radiusCylinder = iVar4;
                    }
                    uVar3 = uVar3 + 1;
                } while ((long)uVar3 < (long)field_20);
            }
            dVar5 = (double)sqrt<int>(m_radiusCylinder);
            iVar4 = (int)(dVar5 + 0.99);
            m_radiusCylinder = iVar4;
            field_520 = iVar4;
            field_516 = iVar4 * 2 + 1;
        }
    }

    // 0x10034e060, 32 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::GetRadiusCylinder()
    int ModelLitImpl::GetRadiusCylinder() {
        CalcBoundingCylinder(this);
        return m_radiusCylinder;
    }

    // 0x10034e080, 32 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::GetRadiusSphere()
    int ModelLitImpl::GetRadiusSphere() {
        CalcBoundingSphere(this);
        return m_radiusCylinder;
    }

    // 0x10034e0f0, 480 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Animate(shared_ptr<AnimFrameSet> const&, int)
    void ModelLitImpl::Animate(shared_ptr* param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        Array<AnimFrame, eastl::allocator>* this_00;
        shared_ptr* psVar5;
        long lVar6;
        int* piVar7;
        vector* pvVar8;
        ulong uVar9;
        shared_ptr<Decor> local_50[16];
        Array<int, eastl::allocator>* local_40;

        if ((!operator==((shared_ptr*)field_392, (_func_decltype_nullptr*)0)) && (param_2 != -1)) {
            this_00 = (Array<AnimFrame, eastl::allocator>*)shared_ptr<AnimFrameSet>::operator->(
                (shared_ptr<AnimFrameSet>*)param_1);
            psVar5 = (shared_ptr*)Array<AnimFrame, eastl::allocator>::operator[](this_00, (long)param_2);
            shared_ptr<Decor>::shared_ptr(local_50, psVar5);
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            local_40 = (Array<int, eastl::allocator>*)&psVar5[1].field_8;
            if (0 < *(int*)(psVar5 + 1)) {
                uVar9 = 0;
                do {
                    lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_50);
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar9);
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar6 + 8), (long)*piVar7);
                    if (*piVar7 == 5)
                        break;
                    uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)*(int*)(psVar5 + 1));
            }
            if (0 < *(int*)(psVar5 + 1)) {
                uVar9 = 0;
                do {
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar9);
                    iVar1 = *piVar7;
                    lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_50);
                    piVar7 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)(lVar6 + 8), (long)iVar1);
                    iVar2 = *piVar7;
                    lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_50);
                    pvVar8 = (vector*)eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar6 + 40), (long)iVar1);
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(psVar5 + 3),
                                                                            uVar9);
                    iVar1 = *piVar7;
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&psVar5[4].field_8, uVar9);
                    iVar3 = *piVar7;
                    piVar7 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(psVar5 + 6),
                                                                            uVar9);
                    Animate2((ModelLitImpl*)this, iVar2, pvVar8, iVar1, iVar3, *piVar7);
                    uVar9 = uVar9 + 1;
                } while ((long)uVar9 < (long)*(int*)(psVar5 + 1));
            }
            ResetBoundingCalculations((ModelLitImpl*)this);
            local_50->~shared_ptr();
        }
    }

    // 0x10034e2d0, 2512 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Animate2(int, eastl::vector<int, eastl::allocator> const&, int, int, int)
    void ModelLitImpl::Animate2(int param_1, vector* param_2, int param_3, int param_4, int param_5) {
        int iVar1;
        int iVar2;
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* psVar3;
        bool bVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* this_00;
        int* piVar10;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar12;
        Array* pAVar13;
        long lVar14;
        Array<signed char, eastl::allocator>* pAVar15;
        byte* pbVar16;
        undefined1* puVar17;
        ulong uVar18;
        ulong uVar19;
        Array<int, eastl::allocator>* this_01;
        Array<int, eastl::allocator>* pAVar20;
        Array<int, eastl::allocator>* pAVar21;
        undefined1* puVar22;
        Array<int, eastl::allocator> local_a8[24];
        ulong local_90;
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* local_80;
        ulong local_78;
        undefined1* local_70;
        vector<EntityHighlight*, BucketAllocatorEASTL>* local_68;
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* local_60;
        ulong local_58;
        undefined8 local_50;
        Array<int, eastl::allocator>* local_48;
        Array<int, eastl::allocator>* local_40;
        Array<int, eastl::allocator>* local_38;

        local_78 = CONCAT44(local_78._4_4_, param_5);
        local_68 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)CONCAT44(local_68._4_4_, param_4);
        local_58 = CONCAT44(local_58._4_4_, param_3);
        uVar5 = param_2->size();
        switch (param_1) {
        case 0:
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            iVar8 = (int)local_58;
            iVar9 = (int)local_68;
            if ((int)uVar5 < 1) {
                local_50 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)0;
            } else {
                local_60 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_392;
                local_38 = (Array<int, eastl::allocator>*)&field_48;
                local_48 = (Array<int, eastl::allocator>*)&field_72;
                local_70 = (undefined1*)(ulong)uVar5;
                local_40 = (Array<int, eastl::allocator>*)0;
                local_50 =
                    (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)((ulong)local_50._4_4_ << 32);
                local_80 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_24;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_2, (ulong)local_40);
                    psVar3 = local_60;
                    iVar7 = *piVar10;
                    pvVar11 =
                        (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(local_60);
                    iVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (iVar7 < iVar6) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(psVar3);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar7);
                        iVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        pAVar20 = local_48;
                        if (0 < iVar7) {
                            uVar19 = 0;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                uVar18 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_24, uVar18);
                                m_oX = m_oX + *piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                m_oY = m_oY + *piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar18);
                                m_oZ = m_oZ + *piVar10;
                                uVar19 = uVar19 + 1;
                                iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            } while ((long)uVar19 < (long)iVar8);
                            local_50 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)CONCAT44(
                                local_50._4_4_, (int)local_50 + (int)uVar19);
                            iVar8 = (int)local_58;
                            iVar9 = (int)local_68;
                        }
                    }
                    local_40 = (Array<int, eastl::allocator>*)((long)local_40 + 1);
                } while (local_40 != (Array<int, eastl::allocator>*)local_70);
            }
            if ((int)local_50 < 1) {
                m_oX = iVar8;
                m_oY = iVar9;
            } else {
                local_78._0_4_ = m_oZ / (int)local_50 + (int)local_78;
                m_oX = m_oX / (int)local_50 + iVar8;
                m_oY = m_oY / (int)local_50 + iVar9;
            }
            m_oZ = (int)local_78;
            break;
        case 1:
            if (0 < (int)uVar5) {
                local_60 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_392;
                local_38 = (Array<int, eastl::allocator>*)&field_24;
                local_48 = (Array<int, eastl::allocator>*)&field_72;
                local_50 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)(ulong)uVar5;
                local_40 = (Array<int, eastl::allocator>*)0;
                iVar8 = (int)local_78;
                local_70 = &field_48;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_2, (ulong)local_40);
                    iVar9 = *piVar10;
                    pvVar11 =
                        (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(local_60);
                    iVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    if (iVar9 < iVar7) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(local_60);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar9);
                        iVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (0 < iVar9) {
                            uVar19 = 0;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                uVar18 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                *piVar10 = *piVar10 + (int)local_58;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_48, uVar18);
                                *piVar10 = *piVar10 + (int)local_68;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar18);
                                *piVar10 = *piVar10 + iVar8;
                                uVar19 = uVar19 + 1;
                                iVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                            } while ((long)uVar19 < (long)iVar9);
                        }
                    }
                    local_40 = (Array<int, eastl::allocator>*)((long)local_40 + 1);
                } while (local_40 != (Array<int, eastl::allocator>*)local_50);
            }
            break;
        case 2:
            if (0 < (int)uVar5) {
                local_80 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_392;
                pAVar20 = (Array<int, eastl::allocator>*)&field_24;
                pAVar21 = (Array<int, eastl::allocator>*)&field_48;
                local_48 = (Array<int, eastl::allocator>*)&field_72;
                local_60 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)((local_58 & 255) << 3);
                local_70 = (undefined1*)(((ulong)local_68 & 255) << 3);
                local_78 = (local_78 & 255) << 3;
                local_90 = (ulong)uVar5;
                local_50 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)0;
                local_40 = pAVar20;
                local_38 = pAVar21;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_2, (ulong)local_50);
                    iVar8 = *piVar10;
                    pvVar11 =
                        (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(local_80);
                    iVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    this_01 = local_48;
                    if (iVar8 < iVar9) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(local_80);
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar8);
                        iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (0 < iVar8) {
                            uVar19 = 0;
                            local_68 = pvVar11;
                            do {
                                local_58 = uVar19;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)pvVar11, uVar19);
                                iVar8 = m_oX;
                                uVar18 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar18);
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar21, uVar18);
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](this_01, uVar18);
                                uVar19 = local_78;
                                *piVar10 = *piVar10 - iVar8;
                                if (local_78 != 0) {
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, local_78);
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, uVar19);
                                    iVar9 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar18);
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                    iVar1 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar18);
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                    pAVar20 = local_40;
                                    *piVar10 = iVar9 * iVar1 - iVar8 * iVar2 >> 16;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar18);
                                    *piVar10 = iVar6 * iVar9 + iVar7 * iVar8 >> 16;
                                }
                                psVar3 = local_60;
                                if (local_60 != (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)0) {
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, (ulong)local_60);
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, (ulong)psVar3);
                                    iVar9 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                    pAVar21 = local_48;
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar18);
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                    iVar1 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar21, uVar18);
                                    pAVar20 = local_40;
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar21, uVar18);
                                    *piVar10 = iVar9 * iVar2 + iVar8 * iVar1 >> 16;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                    *piVar10 = iVar7 * iVar9 - iVar6 * iVar8 >> 16;
                                }
                                pAVar21 = local_48;
                                puVar22 = local_70;
                                this_01 = local_48;
                                if (local_70 != (undefined1*)0) {
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_sinTable, (ulong)local_70);
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)std::array<int, 2048ul>::operator[](
                                        (array<int, 2048ul>*)&Pix3D::m_cosTable, (ulong)puVar22);
                                    iVar9 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar21, uVar18);
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar18);
                                    this_01 = local_48;
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar18);
                                    iVar1 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar18);
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](this_01, uVar18);
                                    pAVar20 = local_40;
                                    *piVar10 = iVar9 * iVar1 - iVar8 * iVar2 >> 16;
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_40, uVar18);
                                    *piVar10 = iVar6 * iVar9 + iVar7 * iVar8 >> 16;
                                }
                                iVar8 = m_oX;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar18);
                                pAVar21 = local_38;
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar18);
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](this_01, uVar18);
                                pvVar11 = local_68;
                                *piVar10 = *piVar10 + iVar8;
                                uVar19 = local_58 + 1;
                                iVar8 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
                            } while ((long)uVar19 < (long)iVar8);
                        }
                    }
                    local_50 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)((long)local_50 + 1);
                } while (local_50 != (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_90);
            }
            break;
        case 3:
            if (0 < (int)uVar5) {
                local_50 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_392;
                pAVar20 = (Array<int, eastl::allocator>*)&field_24;
                local_80 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)&field_48;
                local_48 = (Array<int, eastl::allocator>*)&field_72;
                local_90 = (ulong)uVar5;
                local_70 = (undefined1*)0;
                local_38 = pAVar20;
                do {
                    piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)param_2, (ulong)local_70);
                    iVar8 = *piVar10;
                    pvVar11 =
                        (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(local_50);
                    iVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                    psVar3 = local_80;
                    if (iVar8 < iVar9) {
                        pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(local_50);
                        this_00 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar12, (long)iVar8);
                        lVar14 = this_00->end();
                        if (lVar14 != 0) {
                            local_40 = (Array<int, eastl::allocator>*)0;
                            local_60 = this_00;
                            do {
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)this_00, (ulong)local_40);
                                iVar8 = m_oX;
                                uVar19 = (ulong)*piVar10;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar19);
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)psVar3, uVar19);
                                pAVar20 = local_48;
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_48, uVar19);
                                *piVar10 = *piVar10 - iVar8;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar19);
                                iVar9 = *piVar10 * (int)local_58;
                                iVar8 = iVar9 + 127;
                                if (-1 < iVar9) {
                                    iVar8 = iVar9;
                                }
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar19);
                                *piVar10 = iVar8 >> 7;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)psVar3, uVar19);
                                iVar9 = *piVar10 * (int)local_68;
                                iVar8 = iVar9 + 127;
                                if (-1 < iVar9) {
                                    iVar8 = iVar9;
                                }
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)psVar3, uVar19);
                                *piVar10 = iVar8 >> 7;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar19);
                                iVar9 = *piVar10 * (int)local_78;
                                iVar8 = iVar9 + 127;
                                if (-1 < iVar9) {
                                    iVar8 = iVar9;
                                }
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar19);
                                *piVar10 = iVar8 >> 7;
                                iVar8 = m_oX;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_38, uVar19);
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)psVar3, uVar19);
                                this_00 = local_60;
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)Array<int, eastl::allocator>::operator[](pAVar20, uVar19);
                                pAVar20 = local_38;
                                *piVar10 = *piVar10 + iVar8;
                                local_40 = (Array<int, eastl::allocator>*)((long)local_40 + 1);
                                uVar19 = this_00->end();
                            } while (local_40 < uVar19);
                        }
                    }
                    local_70 = (undefined1*)((long)local_70 + 1);
                } while (local_70 != (undefined1*)local_90);
            }
            break;
        case 5:
            local_48 = (Array<int, eastl::allocator>*)field_408;
            bVar4 = operator!=((shared_ptr*)local_48, (_func_decltype_nullptr*)0);
            if (bVar4) {
                puVar22 = field_264;
                bVar4 = operator!=((shared_ptr*)puVar22, (_func_decltype_nullptr*)0);
                if ((bVar4) && (0 < (int)uVar5)) {
                    local_58 = CONCAT44(local_58._4_4_, (int)local_58 << 3);
                    pAVar20 = (Array<int, eastl::allocator>*)(ulong)uVar5;
                    local_38 = (Array<int, eastl::allocator>*)0;
                    local_40 = pAVar20;
                    do {
                        piVar10 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)param_2, (ulong)local_38);
                        iVar8 = *piVar10;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)
                                      shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator->(
                                          (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_48);
                        iVar9 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11);
                        if (iVar8 < iVar9) {
                            pAVar12 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                                shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                                    (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)local_48);
                            pAVar13 = (Array*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                pAVar12, (long)iVar8);
                            Array<int, eastl::allocator>::Array(local_a8, pAVar13);
                            lVar14 = local_a8->end();
                            if (lVar14 != 0) {
                                uVar19 = 0;
                                do {
                                    piVar10 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar19);
                                    iVar8 = *piVar10;
                                    pAVar15 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar22);
                                    pbVar16 =
                                        (byte*)Array<signed char, eastl::allocator>::operator[](pAVar15, (long)iVar8);
                                    iVar9 = (uint)*pbVar16 + (int)local_58;
                                    if (254 < iVar9) {
                                        iVar9 = 255;
                                    }
                                    if (iVar9 < 1) {
                                        iVar9 = 0;
                                    }
                                    pAVar15 = (Array<signed char, eastl::allocator>*)
                                        shared_ptr<Array<signed char, eastl::allocator>>::operator*(
                                            (shared_ptr<Array<signed char, eastl::allocator>>*)puVar22);
                                    puVar17 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                                        pAVar15, (long)iVar8);
                                    *puVar17 = (char)iVar9;
                                    uVar19 = uVar19 + 1;
                                    uVar18 = local_a8->end();
                                } while (uVar19 < uVar18);
                            }
                            local_a8->~Array();
                            pAVar20 = local_40;
                        }
                        local_38 = (Array<int, eastl::allocator>*)((long)local_38 + 1);
                    } while (local_38 != pAVar20);
                }
            }
        }
    }

    // 0x10034eca0, 272 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Animate(shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int)
    void ModelLitImpl::Animate(shared_ptr* param_1, int param_2) {
        OldscapeAnimKeyFrameSet* pOVar1;
        shared_ptr<AnimBase>* this_00;
        Skeleton* this_01;
        bool bVar2;
        int iVar4;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];

        pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
            (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)param_1);
        this_00 = (shared_ptr<AnimBase>*)pOVar1->GetBase();
        shared_ptr<AnimBase>::operator*(this_00);
        local_40->GetSkeleton();
        bVar2 = operator!=((shared_ptr*)local_40, (_func_decltype_nullptr*)0);
        local_40->~shared_ptr();
        if (bVar2) {
            local_40->GetSkeleton();
            this_01 = (Skeleton*)shared_ptr<Skeleton>::operator*((shared_ptr<Skeleton>*)local_40);
            local_40->~shared_ptr();
            pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator*(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)param_1);
            this_01->Animate(pOVar1, param_2);
            pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)param_1);
            iVar4 = pOVar1->GetBind();
            Pose(this, this_01, iVar4);
        }
        pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
            (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)param_1);
        if (pOVar1->GetTransAnim() != '\0') {
            pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator*(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)param_1);
            AnimateKeyFramedTransparency(this, pOVar1, param_2);
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034ee90, 16 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Pose(Skeleton&, int)
    void ModelLitImpl::Pose(Skeleton* param_1, int param_2) {
        PoseSmooth(this, param_1, param_2);
    }

    // 0x10034eea0, 176 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet&, int)
    void ModelLitImpl::AnimateKeyFramedTransparency(OldscapeAnimKeyFrameSet* param_1, int param_2) {
        bool bVar1;
        function<void(int, float)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar1 = operator!=((shared_ptr*)field_408, (_func_decltype_nullptr*)0);
        if (bVar1) {
            bVar1 = operator!=((shared_ptr*)field_264, (_func_decltype_nullptr*)0);
            if (bVar1) {
                std::function<void(int, float)>::function<ModelLitImpl::AnimateKeyFramedTransparency(
                                                              graphics::animation::OldscapeAnimKeyFrameSet&, int)::__2,
                                                          void>(local_68, this);
                param_1->AnimateKeyFramedTransparency(param_2, local_68);
                std::function<void(int, float)>::~function(local_68);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10034ef70, 544 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::PoseSmooth(Skeleton&, int)
    void ModelLitImpl::PoseSmooth(Skeleton* param_1, int param_2) {
        bool bVar1;
        int iVar3;
        Array<Array<int, eastl::allocator>, eastl::allocator>* pAVar4;
        Array<game::VarValue, eastl::allocator>* this_00;
        long lVar5;
        int* piVar6;
        shared_ptr* psVar7;
        OldscapeJoint* this_01;
        Matrix44T* pMVar8;
        ulong uVar9;
        Matrix44T local_b8;
        shared_ptr local_78;
        Array<int, eastl::allocator>* local_60;
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* local_58;
        ulong local_50;
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>* local_48;

        local_58 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_456;
        bVar1 = operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0);
        if ((!bVar1) && (0 < field_20)) {
            local_48 = (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_472;
            uVar9 = 0;
            do {
                pAVar4 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(local_58);
                this_00 = (Array<game::VarValue, eastl::allocator>*)
                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar4, uVar9);
                if (this_00->empty() == '\0') {
                    lVar5 = this_00->end();
                    if (lVar5 != 0) {
                        pAVar4 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(local_48);
                        local_50 = uVar9;
                        local_60 = (Array<int, eastl::allocator>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](pAVar4, uVar9);
                        jag::math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_sumMatrix,
                                                               (Matrix44T*)PTR_ZERO_100ee6728);
                        iVar3 = this_00->end();
                        if (0 < iVar3) {
                            uVar9 = 0;
                            do {
                                piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)this_00, uVar9);
                                psVar7 = (shared_ptr*)param_1->GetJoint(*piVar6);
                                new (&local_78) shared_ptr<Decor>(psVar7);
                                bVar1 = operator==(&local_78, (_func_decltype_nullptr*)0);
                                if (!bVar1) {
                                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar9);
                                    new (&local_b8) jag::math::Vector3T<float>((float)*piVar6 * 0.003921569);
                                    m_weightMatrix.SetToDiagonal((Vector3T*)&local_b8);
                                    this_01 =
                                        (OldscapeJoint*)shared_ptr<graphics::animation::OldscapeJoint>::operator->(
                                            (shared_ptr<graphics::animation::OldscapeJoint>*)&local_78);
                                    pMVar8 = (Matrix44T*)this_01->GetSkinningMatrix(param_2);
                                    m_skinMatrix.Set(pMVar8);
                                    jag::math::Matrix44T<float>::operator*=((Matrix44T<float>*)&m_skinMatrix,
                                                                            (Matrix44T*)&m_weightMatrix);
                                    jag::math::operator+(&local_b8, (Matrix44T*)&m_sumMatrix,
                                                         (Matrix44T*)&m_skinMatrix);
                                    jag::math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_sumMatrix, &local_b8);
                                }
                                local_78.~shared_ptr();
                                uVar9 = uVar9 + 1;
                                iVar3 = this_00->end();
                            } while ((long)uVar9 < (long)iVar3);
                        }
                        this = (ModelLitImpl*)this;
                        uVar9 = local_50;
                        TransformPoint((ModelLitImpl*)this, (int)local_50, (Matrix44T*)&m_sumMatrix);
                    }
                }
                uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)field_20);
        }
    }

    // 0x10034f190, 944 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::SplitAnimate(shared_ptr<AnimFrameSet> const&, int, shared_ptr<AnimFrameSet> const&, int, int*)
    void ModelLitImpl::SplitAnimate(shared_ptr* param_1, int param_2, shared_ptr* param_3, int param_4, int* param_5) {
        int iVar1;
        int iVar2;
        Array<AnimFrame, eastl::allocator>* pAVar3;
        AnimFrame* pAVar4;
        int* piVar5;
        long lVar6;
        vector* pvVar7;
        int iVar8;
        int iVar9;
        ulong uVar10;
        undefined1 local_160[48];
        Array<int, eastl::allocator> local_130[24];
        Array<int, eastl::allocator> local_118[24];
        Array<int, eastl::allocator> local_100[32];
        undefined1 local_e0[48];
        Array<int, eastl::allocator> local_b0[24];
        Array<int, eastl::allocator> local_98[24];
        Array<int, eastl::allocator> local_80[32];
        shared_ptr<Decor> local_60[16];
        int local_3c;
        ulong local_38;

        if (param_2 != -1) {
            if ((param_5 == (int*)0) || (param_4 == -1)) {
                Animate(this, param_1, param_2);
            } else {
                pAVar3 = (Array<AnimFrame, eastl::allocator>*)shared_ptr<AnimFrameSet>::operator->(
                    (shared_ptr<AnimFrameSet>*)param_1);
                pAVar4 = (AnimFrame*)Array<AnimFrame, eastl::allocator>::operator[](pAVar3, (long)param_2);
                new (local_e0) AnimFrame(pAVar4);
                pAVar3 = (Array<AnimFrame, eastl::allocator>*)shared_ptr<AnimFrameSet>::operator->(
                    (shared_ptr<AnimFrameSet>*)param_3);
                pAVar4 = (AnimFrame*)Array<AnimFrame, eastl::allocator>::operator[](pAVar3, (long)param_4);
                new (local_160) AnimFrame(pAVar4);
                shared_ptr<Decor>::shared_ptr(local_60, (shared_ptr*)local_e0);
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                if (0 < (int)local_e0._16_4_) {
                    iVar8 = *param_5;
                    iVar9 = 1;
                    uVar10 = 0;
                    do {
                        local_38 = uVar10;
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(local_e0 + 24), uVar10);
                        iVar1 = *piVar5;
                        uVar10 = (ulong)iVar1;
                        if (iVar8 < iVar1) {
                            piVar5 = param_5 + iVar9;
                            do {
                                iVar8 = *piVar5;
                                piVar5 = piVar5 + 1;
                                iVar9 = iVar9 + 1;
                            } while (iVar8 < iVar1);
                        }
                        if (iVar1 == iVar8) {
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_60);
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                            if (*piVar5 == 0)
                                goto LAB_10034f2e2;
                        } else {
                        LAB_10034f2e2:
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_60);
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                            local_3c = *piVar5;
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_60);
                            pvVar7 = (vector*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar6 + 40),
                                    uVar10);
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_b0, local_38);
                            iVar1 = *piVar5;
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_98, local_38);
                            iVar2 = *piVar5;
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_80, local_38);
                            Animate2((ModelLitImpl*)this, local_3c, pvVar7, iVar1, iVar2, *piVar5);
                        }
                        uVar10 = local_38 + 1;
                    } while ((long)uVar10 < (long)(int)local_e0._16_4_);
                }
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                if (0 < (int)local_160._16_4_) {
                    iVar8 = *param_5;
                    iVar9 = 1;
                    uVar10 = 0;
                    do {
                        local_38 = uVar10;
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(local_160 + 24), uVar10);
                        iVar1 = *piVar5;
                        uVar10 = (ulong)iVar1;
                        if (iVar8 < iVar1) {
                            piVar5 = param_5 + iVar9;
                            do {
                                iVar8 = *piVar5;
                                piVar5 = piVar5 + 1;
                                iVar9 = iVar9 + 1;
                            } while (iVar8 < iVar1);
                        }
                        if (iVar1 == iVar8) {
                        LAB_10034f432:
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_60);
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                            local_3c = *piVar5;
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_60);
                            pvVar7 = (vector*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar6 + 40),
                                    uVar10);
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_130, local_38);
                            iVar1 = *piVar5;
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_118, local_38);
                            iVar2 = *piVar5;
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_100, local_38);
                            Animate2((ModelLitImpl*)this, local_3c, pvVar7, iVar1, iVar2, *piVar5);
                        } else {
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_60);
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                            if (*piVar5 == 0)
                                goto LAB_10034f432;
                        }
                        uVar10 = local_38 + 1;
                    } while ((long)uVar10 < (long)(int)local_160._16_4_);
                }
                ResetBoundingCalculations((ModelLitImpl*)this);
                local_60->~shared_ptr();
                local_160->~AnimFrame();
                local_e0->~AnimFrame();
            }
        }
    }

    // 0x10034f550, 288 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::MaskAnimate(shared_ptr<AnimBase> const&, shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> const&, int, Array<bool, eastl::allocator>, bool, bool)
    void ModelLitImpl::MaskAnimate(shared_ptr<AnimBase>* param_1,
                                   shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>* param_2, int param_3,
                                   Array* param_5, bool param_6, char param_7) {
        Skeleton* this_00;
        OldscapeAnimKeyFrameSet* pOVar1;
        bool bVar2;
        int iVar4;
        shared_ptr<RSevenDebugPresetProvider> local_50[16];

        shared_ptr<AnimBase>::operator->(param_1);
        local_50->GetSkeleton();
        bVar2 = operator!=((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
        local_50->~shared_ptr();
        if (bVar2) {
            shared_ptr<AnimBase>::operator->(param_1);
            local_50->GetSkeleton();
            this_00 = (Skeleton*)shared_ptr<Skeleton>::operator*((shared_ptr<Skeleton>*)local_50);
            local_50->~shared_ptr();
            pOVar1 =
                (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator*(param_2);
            this_00->Animate(pOVar1, param_3, param_5, param_6);
            if (param_7 != '\0') {
                pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                    param_2);
                iVar4 = pOVar1->GetBind();
                Pose((ModelLitImpl*)this, this_00, iVar4);
            }
        }
        if (param_6 == false) {
            pOVar1 =
                (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(param_2);
            if (pOVar1->GetTransAnim() != '\0') {
                pOVar1 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator*(
                    param_2);
                AnimateKeyFramedTransparency((ModelLitImpl*)this, pOVar1, param_3);
            }
        }
    }

    // 0x10034f670, 608 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::MaskAnimate(shared_ptr<AnimFrameSet> const&, int, Array<int, eastl::allocator> const&, bool)
    void ModelLitImpl::MaskAnimate(shared_ptr* param_1, int param_2, Array* param_3, bool param_4) {
        int iVar1;
        int iVar2;
        char cVar3;
        Array<AnimFrame, eastl::allocator>* this_00;
        shared_ptr* psVar4;
        int* piVar5;
        long lVar6;
        vector* pvVar7;
        undefined7 in_register_00000081;
        int iVar8;
        ulong uVar9;
        ulong uVar10;
        shared_ptr<Decor> local_58[20];
        int local_44;
        ulong local_40;
        undefined4 local_34;

        local_34 = (undefined4)CONCAT71(in_register_00000081, param_4);
        cVar3 = param_3->empty();
        if (cVar3 == '\0') {
            this_00 = (Array<AnimFrame, eastl::allocator>*)shared_ptr<AnimFrameSet>::operator->(
                (shared_ptr<AnimFrameSet>*)param_1);
            psVar4 = (shared_ptr*)Array<AnimFrame, eastl::allocator>::operator[](this_00, (long)param_2);
            shared_ptr<Decor>::shared_ptr(local_58, psVar4);
            piVar5 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_3, 0);
            iVar8 = *piVar5;
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            if (0 < *(int*)(psVar4 + 1)) {
                uVar9 = 1;
                uVar10 = 0;
                do {
                    local_40 = uVar10;
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&psVar4[1].field_8, uVar10);
                    iVar1 = *piVar5;
                    uVar10 = (ulong)iVar1;
                    if (iVar8 < iVar1) {
                        uVar9 = (ulong)(int)uVar9;
                        do {
                            piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)param_3, uVar9);
                            uVar9 = uVar9 + 1;
                            iVar8 = *piVar5;
                        } while (iVar8 < iVar1);
                    }
                    if ((char)local_34 == '\0') {
                    LAB_10034f7e0:
                        if (iVar1 != iVar8)
                            goto LAB_10034f810;
                        lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_58);
                        piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                        if (*piVar5 == 0)
                            goto LAB_10034f810;
                    } else {
                        if (iVar1 != iVar8) {
                            lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_58);
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                            if (*piVar5 != 0) {
                                if ((char)local_34 == '\0')
                                    goto LAB_10034f7e0;
                                goto LAB_10034f750;
                            }
                        }
                    LAB_10034f810:
                        lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_58);
                        piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)(lVar6 + 8), uVar10);
                        local_44 = *piVar5;
                        lVar6 = shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)local_58);
                        pvVar7 =
                            (vector*)eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar6 + 40), uVar10);
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(psVar4 + 3), local_40);
                        iVar1 = *piVar5;
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&psVar4[4].field_8, local_40);
                        iVar2 = *piVar5;
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(psVar4 + 6), local_40);
                        Animate2(this, local_44, pvVar7, iVar1, iVar2, *piVar5);
                    }
                LAB_10034f750:
                    uVar10 = local_40 + 1;
                } while ((long)uVar10 < (long)*(int*)(psVar4 + 1));
            }
            ResetBoundingCalculations(this);
            local_58->~shared_ptr();
        } else {
            Animate(this, param_1, param_2);
        }
    }

    // 0x10034fa80, 160 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Rotate90()
    void ModelLitImpl::Rotate90() {
        int iVar1;
        undefined4 uVar2;
        int* piVar3;
        undefined4* puVar4;
        ulong uVar5;

        if (0 < field_20) {
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
            } while ((long)uVar5 < (long)field_20);
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034fb20, 160 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Rotate180()
    void ModelLitImpl::Rotate180() {
        int iVar1;
        int* piVar2;
        ulong uVar3;

        if (0 < field_20) {
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
            } while ((long)uVar3 < (long)field_20);
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034fbc0, 160 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Rotate270()
    void ModelLitImpl::Rotate270() {
        int iVar1;
        undefined4 uVar2;
        int* piVar3;
        undefined4* puVar4;
        ulong uVar5;

        if (0 < field_20) {
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
            } while ((long)uVar5 < (long)field_20);
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034fc60, 304 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::RotateXAxis(int)
    void ModelLitImpl::RotateXAxis(int param_1) {
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

        if (param_1 != 0) {
            piVar7 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_sinTable, (long)param_1);
            iVar1 = *piVar7;
            piVar7 = (int*)std::array<int, 2048ul>::operator[]((array<int, 2048ul>*)&Pix3D::m_cosTable, (long)param_1);
            if (0 < field_20) {
                iVar2 = *piVar7;
                this_00 = &field_48;
                this_01 = &field_72;
                uVar8 = 0;
                do {
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                    iVar3 = *piVar7;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                    iVar4 = *piVar7;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                    iVar5 = *piVar7;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                    iVar6 = *piVar7;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar8);
                    *piVar7 = iVar6 * iVar2 + iVar5 * iVar1 >> 16;
                    piVar7 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar8);
                    *piVar7 = iVar3 * iVar2 - iVar4 * iVar1 >> 16;
                    uVar8 = uVar8 + 1;
                } while ((long)uVar8 < (long)field_20);
            }
            ResetBoundingCalculations(this);
        }
    }

    // 0x10034fd90, 160 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Translate(int, int, int)
    void ModelLitImpl::Translate(int param_1, int param_2, int param_3) {
        int* piVar1;
        ulong uVar2;

        if (0 < field_20) {
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
            } while ((long)uVar2 < (long)field_20);
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034fe30, 272 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Resize(int, int, int)
    void ModelLitImpl::Resize(int param_1, int param_2, int param_3) {
        int iVar1;
        int* piVar2;
        ulong uVar3;
        int iVar4;

        if (0 < field_20) {
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
            } while ((long)uVar3 < (long)field_20);
        }
        ResetBoundingCalculations(this);
    }

    // 0x10034ff40, 224 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::DiscardAnimLabels()
    void ModelLitImpl::DiscardAnimLabels() {
        shared_ptr local_28;

        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_392, &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_408, &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_424,
                                                            &local_28);
        local_28.~shared_ptr();
        new (&local_28) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<Array<int, eastl::allocator>>::operator=((shared_ptr<Array<int, eastl::allocator>>*)field_440,
                                                            &local_28);
        local_28.~shared_ptr();
    }

    // 0x1003500b0, 96 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::GetTempModel(int)
    ModelLitImpl* ModelLitImpl::GetTempModel(int param_1) {
        shared_ptr local_28;

        weak_ptr<rs2lib::IfType>::lock();
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x100350110, 336 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::TransformPoint(int, jag::math::Matrix44T<float> const&)
    void ModelLitImpl::TransformPoint(int param_1, Matrix44T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        int* piVar5;
        float fVar7;
        float fVar8;
        float fVar9;

        piVar5 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, (ulong)param_1);
        fVar7 = (float)*piVar5;
        piVar5 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, (ulong)param_1);
        fVar8 = (float)-*piVar5;
        piVar5 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, (ulong)param_1);
        fVar9 = (float)-*piVar5;
        fVar1 = *(float*)param_2;
        fVar2 = *(float*)&param_2->field_16;
        fVar3 = *(float*)&param_2->field_32;
        fVar4 = *(float*)&param_2->field_48;
        piVar5 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_24, (ulong)param_1);
        *piVar5 = (int)(fVar3 * fVar9 + fVar2 * fVar8 + fVar1 * fVar7 + fVar4);
        fVar1 = *(float*)&param_2->field_4;
        fVar2 = *(float*)&param_2->field_20;
        fVar3 = *(float*)&param_2->field_36;
        fVar4 = *(float*)&param_2->field_52;
        piVar5 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, (ulong)param_1);
        *piVar5 = -(int)(fVar3 * fVar9 + fVar2 * fVar8 + fVar1 * fVar7 + fVar4);
        fVar1 = *(float*)&param_2->field_8;
        fVar2 = *(float*)&param_2->field_24;
        fVar3 = *(float*)&param_2->field_40;
        fVar4 = *(float*)(param_2 + 1);
        piVar5 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, (ulong)param_1);
        *piVar5 = -(int)(fVar9 * fVar3 + fVar8 * fVar2 + fVar7 * fVar1 + fVar4);
    }

    // 0x100350420, 272 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::PoseRigid(Skeleton&, int)
    void ModelLitImpl::PoseRigid(Skeleton* param_1, int param_2) {
        bool bVar1;
        char cVar2;
        Array<Array<int, eastl::allocator>, eastl::allocator>* this_00;
        Array* pAVar3;
        long lVar4;
        int* piVar5;
        shared_ptr* this_01;
        OldscapeJoint* this_02;
        Matrix44T* pMVar6;
        ulong uVar7;
        Array<int, eastl::allocator> local_58[24];

        bVar1 = operator==((shared_ptr*)field_456, (_func_decltype_nullptr*)0);
        if ((!bVar1) && (0 < field_20)) {
            uVar7 = 0;
            do {
                this_00 = (Array<Array<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<Array<Array<int, eastl::allocator>, eastl::allocator>>*)field_456);
                pAVar3 = (Array*)Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](this_00, uVar7);
                Array<int, eastl::allocator>::Array(local_58, pAVar3);
                cVar2 = local_58->empty();
                if (cVar2 == '\0') {
                LAB_1003504c0:
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_58, 0);
                    this_01 = (shared_ptr*)param_1->GetJoint(*piVar5);
                    bVar1 = operator==(this_01, (_func_decltype_nullptr*)0);
                    if (!bVar1) {
                        this_02 = (OldscapeJoint*)shared_ptr<graphics::animation::OldscapeJoint>::operator->(
                            (shared_ptr<graphics::animation::OldscapeJoint>*)this_01);
                        pMVar6 = (Matrix44T*)this_02->GetSkinningMatrix(param_2);
                        TransformPoint(this, (int)uVar7, pMVar6);
                    }
                } else {
                    lVar4 = local_58->end();
                    if (lVar4 != 0)
                        goto LAB_1003504c0;
                }
                local_58->~Array();
                uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)field_20);
        }
    }

    // 0x100350530, 64 bytes, placed by debug map only (low confidence)
    // ModelLitImpl::Tint(signed char, signed char, signed char, unsigned char)
    void ModelLitImpl::Tint(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5) {
        field_744 = param_2;
        field_745 = param_3;
        field_746 = param_4;
        field_747 = param_5;
        field_748 = (short)field_96;
        field_492 = 1;
    }

    // 0x10038f700, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.76
    void ___cxx_global_var_init_76() {
        new (&ModelLitImpl::m_tempFTran) Array<signed char, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67d8, &ModelLitImpl::m_tempFTran, 4294967296);
    }

    // 0x10038f780, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        new (&ModelLitImpl::m_tempFTran2) Array<signed char, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67d8, &ModelLitImpl::m_tempFTran2, 4294967296);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelLit::~ModelLit();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelLit::~ModelLit();

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10034d040, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<signed char, eastl::allocator> >::type make_shared<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>(Array<signed char, eastl::allocator>&)
    jag* make_shared<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>(Array* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<Array<signed char, eastl::allocator>, Array<signed char, eastl::allocator>&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<signed char, eastl::allocator>>, int,
                                   Array<signed char, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10034dac0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<signed char, eastl::allocator> >::type make_shared<Array<signed char, eastl::allocator>, unsigned long>(unsigned long&&)
    jag* make_shared<Array<signed char, eastl::allocator>, unsigned long>(ulong* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        Array* local_30[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<Array<signed char, eastl::allocator>, unsigned long>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<Array<signed char, eastl::allocator>>, int,
                                   Array<signed char, eastl::allocator>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10034f8d0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<signed char, eastl::allocator> >::type make_shared<Array<signed char, eastl::allocator>, unsigned long&, signed char&>(unsigned long&, signed char&)
    /* shared_ptr_if_not_array<Array<signed char, eastl::allocator> >::type
   make_shared<Array<signed char, eastl::allocator>, unsigned long&, signed char>(unsigned
   long&, signed char&&) */

    jag* make_shared<Array<signed char, eastl::allocator>, unsigned long&, signed char>(ulong* param_1,
                                                                                        signed* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Array* local_38[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<Array<signed char, eastl::allocator>, unsigned long&, signed char>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<Array<signed char, eastl::allocator>>, int,
                                   Array<signed char, eastl::allocator>*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10034f980, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<Array<short, eastl::allocator> >::type make_shared<Array<short, eastl::allocator>, unsigned long&, short>(unsigned long&, short&&)
    jag* make_shared<Array<short, eastl::allocator>, unsigned long&, short>(ulong* param_1, short* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Array* local_38[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<Array<short, eastl::allocator>, unsigned long&, short>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<Array<short, eastl::allocator>>, int,
                                   Array<short, eastl::allocator>*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x100350390, 144 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float> operator+<float>(Matrix44T<float> const&, Matrix44T<float> const&)
    /* Matrix44T<float> TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float>
   const&, Matrix44T<float> const&) */

    Matrix44T* operator+(Matrix44T* __return_storage_ptr__, Matrix44T* param_1, Matrix44T* param_2) {
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];
        undefined8 local_38[3];

        local_68[0] = operator+((Vector4T*)param_1, (Vector4T*)param_2);
        local_58[0] = operator+((Vector4T*)&param_1->field_16, (Vector4T*)&param_2->field_16);
        local_48[0] = operator+((Vector4T*)&param_1->field_32, (Vector4T*)&param_2->field_32);
        local_38[0] = operator+((Vector4T*)&param_1->field_48, (Vector4T*)&param_2->field_48);
        new (__return_storage_ptr__) Matrix44T<float>(local_68, local_58, local_48, local_38);
        return __return_storage_ptr__;
    }

} // namespace jag::math
