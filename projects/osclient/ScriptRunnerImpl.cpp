// projects/osclient/ScriptRunnerImpl.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100f8aca0, 16 bytes, __common; zero-initialised
    ScriptRunnerImpl::LOG_E_2;

    // 0x100168460, 16 bytes, complete-object destructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand5300To5399(ScriptOp, ClientScript const&, bool)::$_0::~$_0(): jumps straight to the base-object destructor

    // 0x10018eaf0, 976 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteScript(HookReq const&, int, int)
    void ScriptRunnerImpl::ExecuteScript(HookReq* param_1, int param_2, int param_3) {
        undefined1* this_00;
        undefined1* this_01;
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        ScriptRunnerImpl* pSVar4;
        char cVar5;
        bool bVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        HookArg* pHVar10;
        undefined8* puVar11;
        undefined4* puVar12;
        shared_ptr* psVar13;
        long lVar14;
        CoordMapSquare* pCVar15;
        basic_string* pbVar16;
        eastl::string* this_02;
        int* piVar17;
        int iVar18;
        ulong uVar19;
        shared_ptr local_60;
        shared_ptr* local_50;
        shared_ptr* local_48;
        ScriptRunnerImpl* local_40;
        int local_34;

        local_40 = this;
        new (&local_60) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        cVar5 = rs2lib::ClientTriggerType::IsMelTypeSubjectTriggerType(*(undefined4*)((long)&param_1->field_120 + 4));
        if (cVar5 == '\0') {
            pHVar10 =
                (HookArg*)Array<HookArg, eastl::allocator>::operator[]((Array<HookArg, eastl::allocator>*)param_1, 0);
            iVar7 = pHVar10->IntValue();
            psVar13 = (shared_ptr*)ClientScript::Get(iVar7);
            shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)&local_60, psVar13);
        } else {
            pHVar10 =
                (HookArg*)Array<HookArg, eastl::allocator>::operator[]((Array<HookArg, eastl::allocator>*)param_1, 0);
            puVar11 = (undefined8*)pHVar10->MapPos();
            uVar1 = puVar11[1];
            uVar2 = *(undefined8*)((long)puVar11 + 12);
            uVar3 = *(undefined8*)((long)puVar11 + 20);
            *(undefined8*)local_40->field_140856 = *puVar11;
            *(undefined8*)(local_40->field_140856 + 8) = uVar1;
            *(undefined8*)(local_40->field_140856 + 12) = uVar2;
            *(undefined8*)(local_40->field_140856 + 20) = uVar3;
            puVar12 = (undefined4*)configdecoder::MapElementType::List(*(int*)local_40->field_140856);
            psVar13 =
                (shared_ptr*)ClientScript::Get(*(undefined4*)((long)&param_1->field_120 + 4), *puVar12, puVar12[110]);
            shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)&local_60, psVar13);
        }
        bVar6 = operator==(&local_60, (_func_decltype_nullptr*)0);
        pSVar4 = local_40;
        if (!bVar6) {
            ResetStackFrame(local_40);
            pSVar4->field_140996 = *(int*)&param_1->field_120;
            this_00 = &pSVar4->field_8;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_60);
            eastl::vector<int, eastl::allocator>::resize((ulong)this_00);
            this_01 = &local_40->field_40;
            this_01->clear();
            lVar14 = shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_60);
            this_01->resize((long)*(int*)(lVar14 + 116));
            iVar7 = param_1->end();
            if (1 < iVar7) {
                local_50 = (shared_ptr*)&param_1->field_32;
                local_48 = (shared_ptr*)&param_1->field_64;
                uVar19 = 1;
                local_34 = 0;
                iVar7 = 0;
                do {
                    pCVar15 = (CoordMapSquare*)Array<HookArg, eastl::allocator>::operator[](
                        (Array<HookArg, eastl::allocator>*)param_1, uVar19);
                    iVar8 = pCVar15->GetX();
                    if (iVar8 == 2) {
                        pHVar10 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)param_1, uVar19);
                        pbVar16 = (basic_string*)pHVar10->StrValue();
                        bVar6 = eastl::operator==(pbVar16, (value_type*)"event_opbase");
                        this_02 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                            (vector<eastl::string, eastl::allocator>*)this_01, (long)local_34);
                        if (bVar6) {
                            pbVar16 = (basic_string*)&param_1->field_88;
                        }
                        eastl::string::operator=(this_02, pbVar16);
                        local_34 = local_34 + 1;
                    } else {
                        if (iVar8 != 1) {
                            pCVar15 = (CoordMapSquare*)Array<HookArg, eastl::allocator>::operator[](
                                (Array<HookArg, eastl::allocator>*)param_1, uVar19);
                            uVar9 = pCVar15->GetX();
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/ScriptRunnerImpl.cpp",
                                            145, "args[%d] of unexpected type %d", uVar19 & 4294967295, (ulong)uVar9);
                        }
                        pHVar10 = (HookArg*)Array<HookArg, eastl::allocator>::operator[](
                            (Array<HookArg, eastl::allocator>*)param_1, uVar19);
                        iVar8 = pHVar10->IntValue();
                        if (iVar8 == -2147483647) {
                            iVar8 = *(int*)&param_1->field_48;
                        }
                        if (iVar8 == -2147483646) {
                            iVar8 = *(int*)((long)&param_1->field_48 + 4);
                        }
                        if (iVar8 == -2147483645) {
                            bVar6 = operator!=(local_50, (_func_decltype_nullptr*)0);
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_50);
                                iVar8 = *(int*)(lVar14 + 4);
                            }
                        }
                        if (iVar8 == -2147483644) {
                            iVar8 = param_1->field_56;
                        }
                        if (iVar8 == -2147483643) {
                            bVar6 = operator!=(local_50, (_func_decltype_nullptr*)0);
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_50);
                                iVar8 = *(int*)(lVar14 + 8);
                            }
                        }
                        if (iVar8 == -2147483642) {
                            bVar6 = operator!=(local_48, (_func_decltype_nullptr*)0);
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_48);
                                iVar8 = *(int*)(lVar14 + 4);
                            }
                        }
                        if (iVar8 == -2147483641) {
                            bVar6 = operator!=(local_48, (_func_decltype_nullptr*)0);
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_48);
                                iVar8 = *(int*)(lVar14 + 8);
                            }
                        }
                        if (iVar8 == -2147483640) {
                            iVar8 = *(int*)&param_1->field_80;
                        }
                        iVar18 = *(int*)((long)&param_1->field_80 + 4);
                        piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                            (vector<int, eastl::allocator>*)this_00, (long)iVar7);
                        if (iVar8 != -2147483639) {
                            iVar18 = iVar8;
                        }
                        iVar7 = iVar7 + 1;
                        *piVar17 = iVar18;
                    }
                    uVar19 = uVar19 + 1;
                    iVar8 = param_1->end();
                } while ((long)uVar19 < (long)iVar8);
            }
            ExecuteScriptInner(local_40, &local_60, param_2, param_3);
        }
        local_60.~shared_ptr();
    }

    // 0x10018eec0, 256 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteScript(rs2lib::ClientTriggerType::ID, int, int, int, int)
    ulong ScriptRunnerImpl::ExecuteScript(_func_decltype_nullptr* param_2, undefined4 param_3, undefined4 param_4,
                                          int param_5, int param_6) {
        bool bVar1;
        shared_ptr* psVar2;
        undefined7 extraout_var;
        long lVar3;
        shared_ptr local_40;

        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        psVar2 = (shared_ptr*)ClientScript::Get((ulong)param_2 & 4294967295, param_3, param_4);
        shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)&local_40, psVar2);
        bVar1 = operator==(&local_40, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            ResetStackFrame(this);
            field_140996 = 0;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_40);
            eastl::vector<int, eastl::allocator>::resize((ulong)&field_8);
            (&field_40)->clear();
            lVar3 = shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_40);
            (&field_40, (long)*(int*)(lVar3 + 116))->resize();
            ExecuteScriptInner(this, &local_40, param_5, param_6);
        }
        local_40.~shared_ptr();
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x10018eff0, 144 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteStringScriptTrigger(eastl::string&, rs2lib::ClientTriggerType::ID, int, int, int, int)
    ulong ScriptRunnerImpl::ExecuteStringScriptTrigger(eastl::string* param_1, undefined4 param_3, undefined4 param_4,
                                                       undefined4 param_5, undefined4 param_6, undefined4 param_7) {
        char cVar1;
        uint uVar2;
        basic_string* pbVar3;
        uint uVar4;

        uVar2 = ExecuteScript(this, param_3, param_4, param_5, param_6, param_7);
        if ((((char)uVar2 == '\0') || (cVar1 = (&field_141000)->IsRaised(), cVar1 != '\0')) ||
            ((int)field_136096 < 1)) {
            eastl::string::assign(param_1, "");
            return (ulong)uVar2;
        }
        uVar4 = field_136096 - 1;
        field_136096 = uVar4;
        pbVar3 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
            (array<eastl::string, 1000ul>*)&field_104096, (ulong)uVar4);
        eastl::string::operator=(param_1, pbVar3);
        return CONCAT71((uint7)(uint3)(uVar2 >> 8), 1);
    }

    // 0x10018f0a0, 416 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteHeldObjOverlayTrigger(shared_ptr<rs2lib::IfType> const&, int, int)
    ulong ScriptRunnerImpl::ExecuteHeldObjOverlayTrigger(shared_ptr* param_1, int param_2, int param_3) {
        undefined4 uVar1;
        bool bVar2;
        long lVar3;
        shared_ptr* psVar4;
        undefined7 extraout_var;
        undefined4* puVar5;
        _func_decltype_nullptr* p_Var6;
        shared_ptr<configdecoder::ObjType> local_58[16];
        shared_ptr local_40;

        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (*(int*)(lVar3 + 680) == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("graphic->m_overlayId != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ScriptRunnerImpl.cpp",
                      168, (char*)0);
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        p_Var6 = (_func_decltype_nullptr*)(ulong) * (uint*)(lVar3 + 1984);
        local_58->List(*(uint*)(lVar3 + 1984));
        new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var6);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        uVar1 = *(undefined4*)(lVar3 + 1984);
        lVar3 = shared_ptr<configdecoder::ObjType>::operator->(local_58);
        psVar4 = (shared_ptr*)ClientScript::Get(77, uVar1, *(undefined4*)(lVar3 + 672));
        shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)&local_40, psVar4);
        bVar2 = operator==(&local_40, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            ResetStackFrame(this);
            field_140996 = 0;
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_40);
            eastl::vector<int, eastl::allocator>::resize((ulong)&field_8);
            (&field_40)->clear();
            lVar3 = shared_ptr<ClientScript>::operator->((shared_ptr<ClientScript>*)&local_40);
            (&field_40, (long)*(int*)(lVar3 + 116))->resize();
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            uVar1 = *(undefined4*)(lVar3 + 680);
            puVar5 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&field_8, 0);
            *puVar5 = uVar1;
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)field_140504, param_1);
            ExecuteScriptInner(this, &local_40, param_2, param_3);
        }
        local_40.~shared_ptr();
        local_58->~shared_ptr();
        return CONCAT71(extraout_var, bVar2) & 4294967295 ^ 1;
    }

    // 0x10018f260, 272 bytes, placed by class name and debug map
    // ScriptRunnerImpl::OnLoad(int)
    void ScriptRunnerImpl::OnLoad(int param_1) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar2;
        ulong uVar3;
        shared_ptr* this_01;
        ulong uVar4;
        undefined1 local_b0[128];

        if (param_1 != -1) {
            if (((ulong)(uint)param_1)->OpenInterface(param_1) != '\0') {
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>,
                               eastl::allocator>*)&rs2lib::IfType::m_list,
                        (long)param_1);
                lVar2 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (lVar2 != 0) {
                    uVar4 = 0;
                    do {
                        this_01 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                            (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)this_00, uVar4);
                        lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                        lVar2 = ((lVar2 + 832))->end();
                        if (lVar2 != 0) {
                            new (local_b0) HookReq();
                            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_b0 + 32),
                                                                  this_01);
                            lVar2 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_01);
                            Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_b0,
                                                                        (Array*)(lVar2 + 832));
                            ExecuteScript(this, (HookReq*)local_b0, 5000000, 0);
                            local_b0->~HookReq();
                        }
                        uVar4 = uVar4 + 1;
                        uVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                    } while (uVar4 < uVar3);
                }
            }
        }
    }

    // 0x10018f570, 48 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ResetStackFrame()
    void ScriptRunnerImpl::ResetStackFrame() {
        field_104092 = 0;
        field_136096 = 0;
        field_136100 = 0;
        field_140992 = 0;
    }

    // 0x10018f620, 5136 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteScriptInner(shared_ptr<ClientScript>&, int, int)
    /* WARNING: Removing unreachable block (ram,4296604381) */
    /* ScriptRunnerImpl::ExecuteScriptInner(shared_ptr<ClientScript>&,
   int, int) */

    void ScriptRunnerImpl::ExecuteScriptInner(shared_ptr* param_1, int param_2, int param_3) {
        Array<int, eastl::allocator>* this_00;
        short sVar1;
        int iVar2;
        int iVar3;
        array<eastl::string, 1000ul>* this_01;
        array<int, 1000ul>* paVar4;
        char cVar5;
        bool bVar6;
        int iVar7;
        undefined4 uVar8;
        basic_string* pbVar9;
        undefined8 uVar10;
        int* piVar11;
        undefined8 uVar12;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        long lVar13;
        shared_ptr* psVar14;
        short* psVar15;
        uint* puVar16;
        int* piVar17;
        ClientVarValues* pCVar18;
        hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_03;
        type* ptVar19;
        vector* pvVar20;
        undefined4* puVar21;
        ClientGosubFrame* this_04;
        array<int, 5000ul>* paVar22;
        eastl::string* pbVar23;
        Client* pCVar24;
        Callstack* pCVar25;
        char* pcVar26;
        uint uVar27;
        undefined1* puVar28;
        ulong uVar29;
        ulong uVar30;
        ScriptRunnerImpl* pSVar31;
        VarContainerSparse VVar32;
        undefined1 auVar33[16];
        basic_string local_168[32];
        allocator local_148[8];
        shared_ptr<rs2lib::social::ClanSettings>* local_140;
        undefined1 local_138[2][16];
        ClientVarValues* local_118;
        long local_110;
        int local_108[9];
        int local_e4;
        array<ClientGosubFrame, 50ul>* local_e0;
        vector<int, eastl::allocator>* local_d8;
        array<int, 5ul>* local_d0;
        array<std::array<int, 5000ul>, 5ul>* local_c8;
        VarContainerSparse local_c0[2];
        int local_9c;
        ulong local_98;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_90;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        ScriptRunnerImpl* local_80;
        array<eastl::string, 1000ul>* local_78;
        ErrorCapture* local_70;
        uint* local_68;
        shared_ptr* local_60;
        char local_51;
        array<int, 1000ul>* local_50;
        int* local_48;
        ClientVarValues* local_40;
        int local_34;

        local_e4 = param_3;
        local_9c = param_2;
        if (field_0 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_executingScript == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ScriptRunnerImpl.cpp",
                      205, "Cannot execute a script while another is already running!");
        }
        field_0 = 1;
        puVar28 = &field_141000;
        puVar28->Reset();
        local_e0 = (array<ClientGosubFrame, 50ul>*)&field_136104;
        local_90 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_8;
        local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_40;
        local_80 = this;
        local_70 = (ErrorCapture*)puVar28;
        cVar5 = puVar28->IsRaised();
        if (cVar5 == '\0') {
            local_140 = (shared_ptr<rs2lib::social::ClanSettings>*)&local_80->field_140536;
            local_48 = &local_80->field_104092;
            local_50 = (array<int, 1000ul>*)&local_80->field_100092;
            local_78 = (array<eastl::string, 1000ul>*)&local_80->field_104096;
            local_68 = &local_80->field_136096;
            local_d0 = (array<int, 5ul>*)&local_80->field_72;
            local_c8 = (array<std::array<int, 5000ul>, 5ul>*)&local_80->field_92;
            local_34 = -1;
            iVar7 = 0;
            local_60 = param_1;
            do {
                lVar13 = shared_ptr<ClientScript>::operator*((shared_ptr<ClientScript>*)param_1);
                local_98 = CONCAT44(local_98._4_4_, iVar7 + 1);
                if (local_9c <= iVar7) {
                    local_70->Raise(1);
                    lVar13 = 0;
                    goto LAB_100190450;
                }
                this_00 = (Array<int, eastl::allocator>*)(lVar13 + 64);
                local_34 = local_34 + 1;
                uVar30 = (ulong)local_34;
                piVar11 = (int*)Array<ScriptOp, eastl::allocator>::operator[](
                    (Array<ScriptOp, eastl::allocator>*)(lVar13 + 40), uVar30);
                paVar4 = local_50;
                iVar7 = *piVar11;
                if (99 < iVar7) {
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pSVar31 = local_80;
                    iVar7 = ExecuteOtherCommand(local_80, iVar7, lVar13, *piVar11 == 1);
                    if (iVar7 != 2) {
                        if (iVar7 == 1) {
                            lVar13 = 0;
                        } else {
                            if (iVar7 != 0)
                                goto LAB_10018fad0;
                            RunDeferredEvents(pSVar31);
                            lVar13 = 1;
                        }
                        goto LAB_100190450;
                    }
                    local_70->Raise(2);
                LAB_10018fad0:
                    goto switchD_10018fa4a_caseD_4;
                }
                switch (iVar7) {
                case 0:
                    pvVar20 = (vector*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    goto LAB_10019024d;
                case 1:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pvVar20 = (vector*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)*piVar11);
                    goto LAB_10019024d;
                case 2:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    iVar2 = *local_48;
                    *local_48 = (int)((long)iVar2 - 1U);
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, (long)iVar2 - 1U);
                    uVar8 = *puVar21;
                    puVar21 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&ClientVarCache::m_var, (long)iVar7);
                    *puVar21 = uVar8;
                    pCVar24 = (Client*)Client::Instance();
                    pCVar24->ClientVar(iVar7);
                    break;
                case 3:
                    pbVar9 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)(lVar13 + 88), uVar30);
                    goto LAB_1001903b8;
                case 6:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    local_34 = local_34 + *piVar11;
                    break;
                case 7:
                    iVar7 = *local_48;
                    uVar29 = (long)iVar7 - 2;
                    *local_48 = (int)uVar29;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, uVar29);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *puVar21);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7 - 1);
                    if ((int)local_40 != *piVar11)
                        goto LAB_10018fc02;
                LAB_10018fbc5:
                    param_1 = local_60;
                    break;
                case 8:
                    iVar7 = *local_48;
                    uVar29 = (long)iVar7 - 2;
                    *local_48 = (int)uVar29;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, uVar29);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *puVar21);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7 - 1);
                    if ((int)local_40 != *piVar11)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 9:
                    iVar7 = *local_48;
                    uVar29 = (long)iVar7 - 2;
                    *local_48 = (int)uVar29;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, uVar29);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *puVar21);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7 - 1);
                    if (*piVar11 <= (int)local_40)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 10:
                    iVar7 = *local_48;
                    uVar29 = (long)iVar7 - 2;
                    *local_48 = (int)uVar29;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, uVar29);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *puVar21);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7 - 1);
                    if ((int)local_40 <= *piVar11)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 21:
                    if ((long)(int)local_80->field_136100 != 0) {
                        uVar30 = (long)(int)local_80->field_136100 - 1;
                        local_80->field_136100 = (int)uVar30;
                        this_04 = (ClientGosubFrame*)std::array<ClientGosubFrame, 50ul>::operator[](local_e0, uVar30);
                        shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)param_1, (shared_ptr*)this_04);
                        local_34 = this_04->field_16;
                        this_04->SwapLocals(local_90, local_88);
                        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                        (&this_04->field_56)->clear();
                        break;
                    }
                    local_80->field_0 = 0;
                    RunDeferredEvents(local_80);
                    lVar13 = 1;
                    goto LAB_100190450;
                case 25:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    uVar8 = ClientVarCache::GetVarbit(*piVar11);
                    goto LAB_10019024f;
                case 27:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    iVar2 = *local_48;
                    *local_48 = (int)((long)iVar2 - 1U);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](local_50, (long)iVar2 - 1U);
                    ClientVarCache::SetVarbit(iVar7, *piVar11);
                    break;
                case 31:
                    iVar7 = *local_48;
                    uVar29 = (long)iVar7 - 2;
                    *local_48 = (int)uVar29;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, uVar29);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *puVar21);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7 - 1);
                    if (*piVar11 < (int)local_40)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 32:
                    iVar7 = *local_48;
                    uVar29 = (long)iVar7 - 2;
                    *local_48 = (int)uVar29;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, uVar29);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *puVar21);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7 - 1);
                    if ((int)local_40 < *piVar11)
                        goto LAB_10018fbc5;
                LAB_10018fc02:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    local_34 = local_34 + *piVar11;
                    param_1 = local_60;
                    break;
                case 33:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pvVar20 = (vector*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_90, (long)*piVar11);
                LAB_10019024d:
                    uVar8 = *(undefined4*)pvVar20;
                    goto LAB_10019024f;
                case 34:
                    iVar7 = *local_48;
                    *local_48 = (int)((long)iVar7 - 1U);
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, (long)iVar7 - 1U);
                    uVar8 = *puVar21;
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    puVar21 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_90, (long)*piVar11);
                    *puVar21 = uVar8;
                    break;
                case 35:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pbVar9 = (basic_string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)local_88, (long)*piVar11);
                    goto LAB_1001903b8;
                case 36:
                    uVar27 = *local_68;
                    *local_68 = (uint)((long)(int)uVar27 - 1U);
                    pbVar9 =
                        (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_78, (long)(int)uVar27 - 1U);
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pbVar23 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                        (vector<eastl::string, eastl::allocator>*)local_88, (long)*piVar11);
                    eastl::string::operator=(pbVar23, pbVar9);
                    break;
                case 37:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    puVar16 = local_68;
                    this_01 = local_78;
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *piVar11);
                    uVar27 = *local_68 - *piVar11;
                    *local_68 = uVar27;
                    pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::data(local_78);
                    local_c0->Join(pbVar9, uVar27, (int)local_40);
                    pbVar23 =
                        (eastl::string*)std::array<eastl::string, 1000ul>::operator[](this_01, (long)(int)*puVar16);
                    eastl::string::operator=(pbVar23, (basic_string*)local_c0);
                    local_c0->~basic_string();
                    *puVar16 = *puVar16 + 1;
                    break;
                case 38:
                    *local_48 = *local_48 + -1;
                    break;
                case 39:
                    *local_68 = *local_68 - 1;
                    break;
                case 40:
                    local_118 = (ClientVarValues*)std::array<ClientGosubFrame, 50ul>::operator[](
                        local_e0, (long)(int)local_80->field_136100);
                    local_40 = local_118;
                    shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)local_118, param_1);
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    psVar14 = (shared_ptr*)ClientScript::Get(iVar7);
                    shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)param_1, psVar14);
                    cVar5 = operator==(param_1, (_func_decltype_nullptr*)0);
                    if ((bool)cVar5) {
                        shared_ptr<ClientScript>::operator=((shared_ptr<ClientScript>*)param_1, (shared_ptr*)local_118);
                        local_70->Raise(1, "non-existant gosub script-num: %d", iVar7);
                        lVar13 = 0;
                    } else {
                        local_110 = lVar13;
                        local_51 = cVar5;
                        lVar13 = shared_ptr<ClientScript>::operator*((shared_ptr<ClientScript>*)param_1);
                        puVar28 = &local_40->field_24;
                        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                        puVar28->reserve((long)*(int*)(lVar13 + 112));
                        local_d8 = (vector<int, eastl::allocator>*)puVar28;
                        eastl::vector<int, eastl::allocator>::resize((ulong)puVar28);
                        piVar11 = local_48;
                        paVar4 = local_50;
                        uVar30 = (ulong) * (uint*)(lVar13 + 120);
                        if (0 < (int)*(uint*)(lVar13 + 120)) {
                            uVar29 = 0;
                            do {
                                puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](
                                    paVar4, (long)((*piVar11 - (int)uVar30) + (int)uVar29));
                                uVar8 = *puVar21;
                                puVar21 =
                                    (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_d8, uVar29);
                                *puVar21 = uVar8;
                                uVar29 = uVar29 + 1;
                                uVar30 = (ulong) * (int*)(lVar13 + 120);
                            } while ((long)uVar29 < (long)uVar30);
                        }
                        puVar28 = &local_40->field_56;
                        puVar28->clear();
                        puVar28->reserve((long)*(int*)(lVar13 + 116));
                        puVar28->resize((long)*(int*)(lVar13 + 116));
                        puVar16 = local_68;
                        uVar27 = *(uint*)(lVar13 + 124);
                        uVar30 = (ulong)uVar27;
                        if (0 < (int)uVar27) {
                            uVar29 = 0;
                            local_40 = (ClientVarValues*)puVar28;
                            do {
                                pbVar9 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                                    local_78, (long)(int)((*puVar16 - (int)uVar30) + (int)uVar29));
                                pbVar23 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                                    (vector<eastl::string, eastl::allocator>*)local_40, uVar29);
                                eastl::string::operator=(pbVar23, pbVar9);
                                uVar29 = uVar29 + 1;
                                uVar27 = *(uint*)(lVar13 + 124);
                                uVar30 = (ulong)(int)uVar27;
                            } while ((long)uVar29 < (long)uVar30);
                        }
                        pSVar31 = local_80;
                        local_80->field_104092 = local_80->field_104092 - *(int*)(lVar13 + 120);
                        local_80->field_136096 = local_80->field_136096 - uVar27;
                        *(int*)&local_118->field_16 = local_34;
                        local_118->SwapLocals(local_90, local_88);
                        pSVar31->field_136100 = pSVar31->field_136100 + 1;
                        local_34 = -1;
                        lVar13 = 4;
                        param_1 = local_60;
                        cVar5 = local_51;
                    }
                    if (cVar5 != '\0')
                        goto LAB_100190450;
                    break;
                case 42:
                    lVar13 = Client::Instance();
                    pCVar18 =
                        (ClientVarValues*)
                            std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(lVar13 + 52488));
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    uVar8 = pCVar18->GetVarValueInt(*piVar11);
                    goto LAB_10019024f;
                case 43:
                    lVar13 = Client::Instance();
                    local_40 =
                        (ClientVarValues*)
                            std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(lVar13 + 52488));
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    iVar2 = *local_48;
                    *local_48 = (int)((long)iVar2 - 1U);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](local_50, (long)iVar2 - 1U);
                    local_40->SetVarValueInt(iVar7, *piVar11);
                    break;
                case 44:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, *piVar11 >> 16);
                    psVar15 = (short*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    sVar1 = *psVar15;
                    iVar7 = *local_48;
                    *local_48 = (int)((long)iVar7 - 1U);
                    puVar16 = (uint*)std::array<int, 1000ul>::operator[](local_50, (long)iVar7 - 1U);
                    uVar27 = *puVar16;
                    if (uVar27 < 5001) {
                        uVar30 = (ulong)(int)local_40;
                        puVar16 = (uint*)std::array<int, 5ul>::operator[](local_d0, uVar30);
                        *puVar16 = uVar27;
                        lVar13 = 4;
                        if (uVar27 != 0) {
                            local_40 = (ClientVarValues*)CONCAT44(local_40._4_4_, -(uint)(sVar1 != 105));
                            paVar22 = (array<int, 5000ul>*)std::array<std::array<int, 5000ul>, 5ul>::operator[](
                                local_c8, uVar30);
                            local_d8 = (vector<int, eastl::allocator>*)CONCAT44(local_d8._4_4_, uVar27);
                            uVar30 = 1;
                            if (1 < (int)uVar27) {
                                uVar30 = (ulong)uVar27;
                            }
                            uVar29 = 0;
                            do {
                                puVar21 = (undefined4*)std::array<int, 5000ul>::operator[](paVar22, uVar29);
                                *puVar21 = (int)local_40;
                                uVar29 = uVar29 + 1;
                            } while (uVar30 != uVar29);
                            param_1 = local_60;
                            uVar27 = (uint)local_d8;
                        }
                    } else {
                        local_70->Raise(1, "Invalid array size: %d Local array: %d", uVar27,
                                        (ulong)local_40 & 4294967295);
                        lVar13 = 0;
                    }
                    if (5000 < uVar27)
                        goto LAB_100190450;
                    break;
                case 45:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    local_40 = (ClientVarValues*)(long)*local_48;
                    *local_48 = (int)&local_40[-1].field_135;
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](local_50, (ulong)&local_40[-1].field_135);
                    iVar2 = *piVar11;
                    if (-1 < (long)iVar2) {
                        piVar17 = (int*)std::array<int, 5ul>::operator[](local_d0, (long)iVar7);
                        if (iVar2 < *piVar17) {
                            paVar22 = (array<int, 5000ul>*)std::array<std::array<int, 5000ul>, 5ul>::operator[](
                                local_c8, (long)iVar7);
                            piVar17 = (int*)std::array<int, 5000ul>::operator[](paVar22, (long)iVar2);
                            iVar7 = *piVar17;
                            *local_48 = (int)local_40;
                            *piVar11 = iVar7;
                            lVar13 = 4;
                            bVar6 = true;
                            goto joined_r0x00010019051b;
                        }
                    }
                    bVar6 = false;
                    local_70->Raise(1, "Invalid array index: %d Local array: %d", iVar2, iVar7);
                    lVar13 = 0;
                    goto joined_r0x00010019051b;
                case 46:
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    iVar2 = *local_48;
                    uVar30 = (long)iVar2 - 2;
                    *local_48 = (int)uVar30;
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](local_50, uVar30);
                    iVar3 = *piVar11;
                    if (-1 < (long)iVar3) {
                        piVar11 = (int*)std::array<int, 5ul>::operator[](local_d0, (long)iVar7);
                        if (iVar3 < *piVar11) {
                            puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, (long)iVar2 - 1);
                            uVar8 = *puVar21;
                            paVar22 = (array<int, 5000ul>*)std::array<std::array<int, 5000ul>, 5ul>::operator[](
                                local_c8, (long)iVar7);
                            puVar21 = (undefined4*)std::array<int, 5000ul>::operator[](paVar22, (long)iVar3);
                            *puVar21 = uVar8;
                            lVar13 = 4;
                            bVar6 = true;
                            goto joined_r0x00010019051b;
                        }
                    }
                    bVar6 = false;
                    local_70->Raise(1, "Invalid array index: %d Local array: %d", iVar3, iVar7);
                    lVar13 = 0;
                joined_r0x00010019051b:
                    if (bVar6)
                        break;
                    goto LAB_100190450;
                case 47:
                    lVar13 = Client::Instance();
                    pCVar18 =
                        (ClientVarValues*)
                            std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(lVar13 + 52488));
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pbVar9 = (basic_string*)pCVar18->GetLegacyVarString(*piVar11);
                    goto LAB_1001903b8;
                case 48:
                    lVar13 = Client::Instance();
                    local_40 =
                        (ClientVarValues*)
                            std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(lVar13 + 52488));
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    uVar27 = *local_68;
                    *local_68 = (uint)((long)(int)uVar27 - 1U);
                    pbVar9 =
                        (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_78, (long)(int)uVar27 - 1U);
                    local_40->SetLegacyVarString(iVar7, pbVar9);
                    break;
                case 49:
                    lVar13 = Client::Instance();
                    pCVar18 =
                        (ClientVarValues*)
                            std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(lVar13 + 52488));
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    pbVar9 = (basic_string*)pCVar18->getVarValueString(*piVar11);
                LAB_1001903b8:
                    uVar27 = *local_68;
                    *local_68 = uVar27 + 1;
                    pbVar23 =
                        (eastl::string*)std::array<eastl::string, 1000ul>::operator[](local_78, (long)(int)uVar27);
                    eastl::string::operator=(pbVar23, pbVar9);
                    break;
                case 50:
                    lVar13 = Client::Instance();
                    local_40 =
                        (ClientVarValues*)
                            std::unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>::operator->(
                                (unique_ptr<ClientVarValues, std::default_delete<ClientVarValues>>*)(lVar13 + 52488));
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    iVar7 = *piVar11;
                    uVar27 = *local_68;
                    *local_68 = (uint)((long)(int)uVar27 - 1U);
                    pbVar9 =
                        (basic_string*)std::array<eastl::string, 1000ul>::operator[](local_78, (long)(int)uVar27 - 1U);
                    local_40->SetVarValueString(iVar7, pbVar9);
                    break;
                case 60:
                    iVar7 = *local_48;
                    *local_48 = (int)((long)iVar7 - 1U);
                    piVar11 = (int*)std::array<int, 1000ul>::operator[](local_50, (long)iVar7 - 1U);
                    local_108[0] = *piVar11;
                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    this_03 = (hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>,
                                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                        eastl::vector<
                            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>,
                            eastl::allocator>::
                        operator[]((vector<eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                           eastl::allocator, false>,
                                           eastl::allocator>*)(lVar13 + 136),
                                   (long)*piVar11);
                    VVar32 = (VarContainerSparse)eastl::hashtable<
                        int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                        eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find(this_03, local_108);
                    local_c0[0] = VVar32;
                    auVar33 = this_03->end();
                    local_138[0] = auVar33;
                    bVar6 = eastl::operator!=((eastl*)local_c0, (hashtable_iterator_base*)local_138, auVar33._8_8_);
                    if (bVar6) {
                        lVar13 = local_c0->HeapBeginPtr();
                        local_34 = local_34 + *(int*)(lVar13 + 4);
                    }
                    break;
                case 74:
                    ptVar19 = (type*)shared_ptr<rs2lib::social::ClanSettings>::operator->(local_140);
                    Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    local_c0->GetExtraSettingAsInt((int)ptVar19);
                    bVar6 = local_c0->IsActive();
                    uVar8 = 4294967295;
                    if (!bVar6) {
                        pvVar20 = local_c0->SSOBeginPtr(ptVar19);
                        goto LAB_10019024d;
                    }
                LAB_10019024f:
                    iVar7 = *local_48;
                    *local_48 = iVar7 + 1;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](local_50, (long)iVar7);
                    *puVar21 = uVar8;
                    break;
                case 76:
                    lVar13 = Client::Instance();
                    iVar7 = shared_ptr<game::VarContainerSparse>::operator->(
                        (shared_ptr<game::VarContainerSparse>*)(lVar13 + 52528));
                    Array<int, eastl::allocator>::operator[](this_00, uVar30);
                    local_c0->GetVarValueByID(iVar7);
                    cVar5 = local_c0->IsUndefined();
                    piVar11 = local_48;
                    paVar4 = local_50;
                    uVar8 = 4294967295;
                    if (cVar5 == '\0') {
                        uVar8 = local_c0->GetInt();
                    }
                    iVar7 = *piVar11;
                    *piVar11 = iVar7 + 1;
                    puVar21 = (undefined4*)std::array<int, 1000ul>::operator[](paVar4, (long)iVar7);
                    *puVar21 = uVar8;
                    local_c0->~VarValue();
                }
            switchD_10018fa4a_caseD_4:
                lVar13 = 0;
                if ((0 < local_e4) && (iVar7 = (int)local_98, local_e4 <= (int)local_98)) {
                    uVar10 = logger::default_logger();
                    uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar13 = 0;
                    logger::Logger::Log(uVar10, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/ScriptRunnerImpl.cpp",
                                        588, "Warning: Script %s finished at op count %i of max %i", uVar12, iVar7,
                                        local_9c);
                }
            LAB_100190450:
                if (lVar13 != 0) {
                    return;
                }
                cVar5 = local_70->IsRaised();
                iVar7 = (int)local_98;
            } while (cVar5 == '\0');
        }
        pSVar31 = local_80;
        local_80->field_0 = 0;
        cVar5 = local_70->IsRaised();
        if (cVar5 != '\0') {
            new (local_c0) eastl::string();
            local_c0->reserve(200);
            pbVar9 = (basic_string*)param_1->end();
            new (local_138) eastl::string();
            local_98 = (ulong)(uint)pSVar31->field_136100;
            do {
                new (local_108) eastl::string();
                cVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar5 == '\0') {
                    eastl::string::operator=((eastl::string*)local_108, pbVar9);
                } else {
                    uVar30 = *(ulong*)(pbVar9 + 32);
                    if (uVar30 < 65536) {
                        eastl::string::append_sprintf((char*)local_108, "script_%d", uVar30 & 4294967295);
                    } else {
                        eastl::string::append_sprintf((char*)local_108, "trig_%d_%d", (ulong) * (uint*)(pbVar9 + 128),
                                                      uVar30 >> 16);
                    }
                }
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::append_sprintf((char*)local_c0, "\n  %s", uVar10);
                cVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar5 != '\0') {
                    eastl::string::operator=((eastl::string*)local_138, (basic_string*)local_108);
                }
                if (0 < *(int*)(pbVar9 + 120)) {
                    eastl::string::operator+=((eastl::string*)local_c0, " ints");
                    if (0 < *(int*)(pbVar9 + 120)) {
                        uVar10 = 40;
                        uVar30 = 0;
                        do {
                            piVar11 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)local_90, uVar30);
                            if (*piVar11 + 32766U < 65533) {
                                eastl::string::append_sprintf((char*)local_c0, "%c%d", uVar10);
                            } else {
                                eastl::string::append_sprintf((char*)local_c0, "%c0x%08X", uVar10);
                            }
                            uVar30 = uVar30 + 1;
                            uVar10 = 44;
                        } while ((long)uVar30 < (long)*(int*)(pbVar9 + 120));
                    }
                    eastl::string::operator+=((eastl::string*)local_c0, ")");
                }
                if (0 < *(int*)(pbVar9 + 124)) {
                    eastl::string::operator+=((eastl::string*)local_c0, " strings");
                    if (0 < *(int*)(pbVar9 + 124)) {
                        uVar10 = 40;
                        uVar30 = 0;
                        do {
                            eastl::vector<eastl::string, eastl::allocator>::operator[](
                                (vector<eastl::string, eastl::allocator>*)local_88, uVar30);
                            uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            eastl::string::append_sprintf((char*)local_c0, "%c\"%s\"", uVar10, uVar12);
                            uVar30 = uVar30 + 1;
                            uVar10 = 44;
                        } while ((long)uVar30 < (long)*(int*)(pbVar9 + 124));
                    }
                    eastl::string::operator+=((eastl::string*)local_c0, ")");
                }
                iVar7 = (int)local_98;
                if (iVar7 == 0) {
                    uVar30 = 0;
                } else {
                    this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        std::array<ClientGosubFrame, 50ul>::operator[](local_e0, (long)(int)(iVar7 - 1U));
                    pbVar9 = (basic_string*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                    local_90 = this_02 + 24;
                    local_88 = this_02 + 56;
                    uVar30 = (ulong)(iVar7 - 1U);
                }
                local_108->~basic_string();
                local_98 = uVar30;
            } while (iVar7 != 0);
            local_70->second();
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::append_sprintf((char*)local_c0, "\n  %c message: %s", 32, uVar10);
            pCVar24 = (Client*)Client::Instance();
            pSVar31 = local_80;
            if (pCVar24->field_54168 != *(int*)(ModeWhere::LIVE + 8)) {
                eastl::allocator::allocator(local_148, "EASTL basic_string");
                new (local_108) eastl::string("", local_148);
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::basic_string(local_168, "Clientscript error in: %s", uVar10);
                pCVar24->AddChat(0, local_108, local_168);
                local_168->~basic_string();
                local_108->~basic_string();
            }
            pCVar25 = (Callstack*)local_70->get_overflow_allocator();
            pcVar26 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            OldscapeClientError::ReportError(pcVar26, pCVar25);
            local_138->~basic_string();
            local_c0->~basic_string();
        }
        RunDeferredEvents(pSVar31);
    }

    // 0x100190da0, 272 bytes, placed by class name
    // ScriptRunnerImpl::RunDeferredEvents()
    void ScriptRunnerImpl::RunDeferredEvents() {
        int iVar1;
        int iVar2;
        int iVar3;
        long lVar5;
        int* piVar6;
        shared_ptr* this_00;
        Client* pCVar7;
        eastl::string local_60[32];
        allocator local_40[8];

        while (true) {
            lVar5 = (&field_140584)->size();
            if (lVar5 == 0)
                break;
            piVar6 = (int*)eastl::queue<
                ScriptRunnerImpl::TriggerOpRequest,
                eastl::fixed_list<ScriptRunnerImpl::TriggerOpRequest, 5ul, true, eastl::allocator>>::front();
            iVar1 = *piVar6;
            iVar2 = piVar6[1];
            iVar3 = piVar6[2];
            (&field_140584)->pop();
            this_00 = (shared_ptr*)rs2lib::IfType::Get(iVar2, iVar3);
            if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                pCVar7 = (Client*)Client::Instance();
                eastl::allocator::allocator(local_40, "EASTL basic_string");
                eastl::string::basic_string(local_60, "", local_40);
                lVar5 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this_00);
                pCVar7->IfButtonX(iVar1, this_00, local_60, *(int*)(lVar5 + 1984));
                eastl::string::~basic_string(local_60);
            }
        }
        if (((ScriptRunnerImpl*)this)->field_140992 != '\0') {
            ((ScriptRunnerImpl*)this)->field_140992 = 0;
            pCVar7 = (Client*)Client::Instance();
            pCVar7->CloseModal();
        }
    }

    // 0x100191400, 896 bytes, placed by class name
    // ScriptRunnerImpl::ExecuteOtherCommand(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteOtherCommand(undefined8 param_1, int param_2) {
        int iVar1;
        undefined8 uVar2;

        iVar1 = param_2 + -1000;
        if (param_2 - 2500U < 400 || 999 < param_2 - 2000U) {
            iVar1 = param_2;
        }
        if (iVar1 < 1000) {
            uVar2 = ExecuteCommand100To999();
            return uVar2;
        }
        if (iVar1 < 1100) {
            uVar2 = ExecuteCommand1000To1099Or2000To2099();
            return uVar2;
        }
        if (iVar1 < 1200) {
            uVar2 = ExecuteCommand1100To1199Or2100To2199();
            return uVar2;
        }
        if (iVar1 < 1300) {
            uVar2 = ExecuteCommand1200To1299Or2200To2299();
            return uVar2;
        }
        if (iVar1 < 1400) {
            uVar2 = ExecuteCommand1300To1399Or2300To2399();
            return uVar2;
        }
        if (iVar1 < 1500) {
            uVar2 = ExecuteCommand1400To1499Or2400To2499();
            return uVar2;
        }
        if (iVar1 < 1600) {
            uVar2 = ExecuteCommand1500To1599();
            return uVar2;
        }
        if (iVar1 < 1700) {
            uVar2 = ExecuteCommand1600To1699();
            return uVar2;
        }
        if (iVar1 < 1800) {
            uVar2 = ExecuteCommand1700To1799();
            return uVar2;
        }
        if (iVar1 < 1900) {
            uVar2 = ExecuteCommand1800To1899();
            return uVar2;
        }
        if (iVar1 < 2000) {
            uVar2 = ExecuteCommand1900To1999Or2900To2999();
            return uVar2;
        }
        if (iVar1 < 2600) {
            uVar2 = ExecuteCommand2500To2599();
            return uVar2;
        }
        if (iVar1 < 2700) {
            uVar2 = ExecuteCommand2600To2699();
            return uVar2;
        }
        if (iVar1 < 2800) {
            uVar2 = ExecuteCommand2700To2799();
            return uVar2;
        }
        if (iVar1 < 2900) {
            uVar2 = ExecuteCommand2800To2899();
            return uVar2;
        }
        if (iVar1 < 3200) {
            uVar2 = ExecuteCommand3100To3199();
            return uVar2;
        }
        if (iVar1 < 3300) {
            uVar2 = ExecuteCommand3200To3299();
            return uVar2;
        }
        if (iVar1 < 3400) {
            uVar2 = ExecuteCommand3300To3399();
            return uVar2;
        }
        if (iVar1 < 3500) {
            uVar2 = ExecuteCommand3400To3499();
            return uVar2;
        }
        if (iVar1 < 3600) {
            uVar2 = ExecuteCommand3500To3599();
            return uVar2;
        }
        if (iVar1 < 3700) {
            uVar2 = ExecuteCommand3600To3699();
            return uVar2;
        }
        if (iVar1 < 3800) {
            uVar2 = ExecuteCommand3700To3799();
            return uVar2;
        }
        if (iVar1 < 3900) {
            uVar2 = ExecuteCommand3800To3899();
            return uVar2;
        }
        if (iVar1 < 4000) {
            uVar2 = ExecuteCommand3900To3999();
            return uVar2;
        }
        if (iVar1 < 4100) {
            uVar2 = ExecuteCommand4000To4099();
            return uVar2;
        }
        if (iVar1 < 4200) {
            uVar2 = ExecuteCommand4100To4199();
            return uVar2;
        }
        if (iVar1 < 4300) {
            uVar2 = ExecuteCommand4200To4299();
            return uVar2;
        }
        if (iVar1 < 5100) {
            uVar2 = ExecuteCommand5000To5099();
            return uVar2;
        }
        if (iVar1 < 5400) {
            uVar2 = ExecuteCommand5300To5399();
            return uVar2;
        }
        if (iVar1 < 5600) {
            uVar2 = ExecuteCommand5500To5599();
            return uVar2;
        }
        if (iVar1 < 5700) {
            uVar2 = ExecuteCommand5600To5699();
            return uVar2;
        }
        if (iVar1 < 6300) {
            uVar2 = ExecuteCommand6200To6299();
            return uVar2;
        }
        if (iVar1 < 6600) {
            uVar2 = ExecuteCommand6500To6599();
            return uVar2;
        }
        if (iVar1 < 6700) {
            uVar2 = ExecuteCommand6600To6699();
            return uVar2;
        }
        if (iVar1 < 6800) {
            uVar2 = ExecuteCommand6700To6799();
            return uVar2;
        }
        if (iVar1 < 6900) {
            uVar2 = ExecuteCommand6800To6899();
            return uVar2;
        }
        if (iVar1 < 7000) {
            uVar2 = ExecuteCommand6900To6999();
            return uVar2;
        }
        if (iVar1 < 7100) {
            uVar2 = ExecuteCommand7000To7099();
            return uVar2;
        }
        if (iVar1 < 7200) {
            uVar2 = ExecuteCommand7100To7199();
            return uVar2;
        }
        if (iVar1 < 7300) {
            uVar2 = ExecuteCommand7200To7299();
            return uVar2;
        }
        if (iVar1 < 7500) {
            uVar2 = ExecuteCommand7400To7499();
            return uVar2;
        }
        if (iVar1 < 7600) {
            uVar2 = ExecuteCommand7500To7599();
            return uVar2;
        }
        if (iVar1 < 7700) {
            uVar2 = ExecuteCommand7600To7699();
            return uVar2;
        }
        if (iVar1 < 7900) {
            uVar2 = ExecuteCommand7800To7899();
            return uVar2;
        }
        uVar2 = 2;
        if (iVar1 < 8100) {
            uVar2 = ExecuteCommand8000To8099();
        }
        return uVar2;
    }

    // 0x100194ff0, 64 bytes, placed by class name
    // ScriptRunnerImpl::SafeGetComponent(int, bool, bool)
    undefined1* ScriptRunnerImpl::SafeGetComponent(int param_1, bool param_2, bool param_3) {
        undefined3 in_register_00000011;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            return field_140504 + (ulong)param_3 * 16;
        }
        if (param_1 == -1) {
            return &rs2lib::NULL_IFTYPE;
        }
        return (undefined1*)rs2lib::IfType::Get(param_1);
    }

    // 0x100195030, 352 bytes, placed by class name
    // ScriptRunnerImpl::PopValueOfType(game::BaseVarType const*, game::VarValue&)
    ulong ScriptRunnerImpl::PopValueOfType(BaseVarType* param_1, VarValue* param_2) {
        undefined8 uVar1;
        int* piVar2;
        ulong uVar3;
        undefined8 uVar4;
        char* pcVar5;
        undefined1 auVar6[16];
        basic_string local_48[24];
        eastl local_30[8];

        if (param_1 == (BaseVarType*)0) {
            uVar1 = logger::default_logger();
            pcVar5 = "Could not pop value - no BaseVarType provided.";
            uVar4 = 971;
        LAB_1001950c1:
            uVar3 = 0;
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl.cpp",
                                uVar4, pcVar5);
        } else {
            if (game::BaseVarType::INTEGER == param_1) {
                uVar3 = (long)field_104092 - 1;
                field_104092 = (int)uVar3;
                piVar2 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar3);
                game::VarValue::Set<int&>(param_2, piVar2);
            } else {
                if (game::BaseVarType::STRING != param_1) {
                    uVar1 = logger::default_logger();
                    (**(code**)(param_1->field_0 + 16))(param_1);
                    pcVar5 = "Could not pop value - unsupported or unknown BaseVarType provided: %u";
                    uVar4 = 986;
                    goto LAB_1001950c1;
                }
                uVar3 = (long)(int)field_136096 - 1;
                field_136096 = (uint)uVar3;
                std::array<eastl::string, 1000ul>::operator[]((array<eastl::string, 1000ul>*)&field_104096, uVar3);
                auVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                param_1 = auVar6._0_8_;
                eastl::destruct<highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", auVar6._8_8_);
                eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48,
                                                                              (BucketAllocatorEASTL*)param_1);
                game::VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>(param_2, local_48);
                local_48->~basic_string();
            }
            uVar3 = CONCAT71((int7)((ulong)param_1 >> 8), 1);
        }
        return uVar3 & 4294967295;
    }

    // 0x100195350, 16 bytes, complete-object destructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::~$_3(): jumps straight to the base-object destructor

    // 0x100195390, 16 bytes, complete-object destructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::~$_4(): jumps straight to the base-object destructor

    // 0x100195790, 384 bytes, placed by class name
    // ScriptRunnerImpl::CcIfSetOpOptKey(shared_ptr<rs2lib::IfType> const&, int, Array<unsigned char, eastl::allocator>&&, Array<unsigned char, eastl::allocator>&&)
    void ScriptRunnerImpl::CcIfSetOpOptKey(shared_ptr* param_1, int param_2, Array* param_3, Array* param_4) {
        char cVar2;
        long lVar3;
        ServerKeyData* this;
        array<Array<unsigned char, eastl::allocator>, 11ul>* paVar4;
        Array<unsigned char, eastl::allocator>* pAVar5;
        undefined1* puVar6;
        Array<game::VarValue, eastl::allocator>* this_00;
        ulong uVar7;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var8;

        p_Var8 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2);
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (std::operator==((unique_ptr*)(lVar3 + 696), p_Var8)) {
            cVar2 = param_3->empty();
            if (cVar2 != '\0') {
                return;
            }
            lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            this = operator_new(616);
            ___bzero(this, 616);
            rs2lib::IfType::ServerKeyData::ServerKeyData(this);
            ((lVar3 + 696))->reset(this);
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        paVar4 =
            (array<Array<unsigned char, eastl::allocator>, 11ul>*)
                std::unique_ptr<rs2lib::IfType::ServerKeyData, std::default_delete<rs2lib::IfType::ServerKeyData>>::
                operator->((unique_ptr<rs2lib::IfType::ServerKeyData,
                                       std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar3 + 696));
        pAVar5 = (Array<unsigned char, eastl::allocator>*)
            std::array<Array<unsigned char, eastl::allocator>, 11ul>::operator[](paVar4, (long)param_2);
        Array<unsigned char, eastl::allocator>::operator=(pAVar5, param_3);
        cVar2 = param_3->empty();
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        puVar6 = (undefined1*)(lVar3 + 688);
        if (cVar2 == '\0') {
        LAB_1001958b9:
            *puVar6 = 1;
        } else {
            *puVar6 = 0;
            shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            uVar7 = 0;
            do {
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                paVar4 = (array<Array<unsigned char, eastl::allocator>, 11ul>*)std::unique_ptr<
                             rs2lib::IfType::ServerKeyData, std::default_delete<rs2lib::IfType::ServerKeyData>>::
                         operator->((unique_ptr<rs2lib::IfType::ServerKeyData,
                                                std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar3 + 696));
                this_00 = (Array<game::VarValue, eastl::allocator>*)
                    std::array<Array<unsigned char, eastl::allocator>, 11ul>::operator[](paVar4, uVar7);
                cVar2 = this_00->empty();
                lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                if (cVar2 == '\0') {
                    puVar6 = (undefined1*)(lVar3 + 688);
                    goto LAB_1001958b9;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 != 11);
        }
        lVar3 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        lVar3 =
            std::unique_ptr<rs2lib::IfType::ServerKeyData, std::default_delete<rs2lib::IfType::ServerKeyData>>::
            operator->(
                (unique_ptr<rs2lib::IfType::ServerKeyData, std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar3 +
                                                                                                                 696));
        pAVar5 = (Array<unsigned char, eastl::allocator>*)
            std::array<Array<unsigned char, eastl::allocator>, 11ul>::operator[](
                (array<Array<unsigned char, eastl::allocator>, 11ul>*)(lVar3 + 264), (long)param_2);
        Array<unsigned char, eastl::allocator>::operator=(pAVar5, param_4);
    }

    // 0x100195920, 160 bytes, placed by class name
    // ScriptRunnerImpl::CcIfSetOpOptKeyRate(shared_ptr<rs2lib::IfType> const&, int, int, int, ErrorCapture&)
    void ScriptRunnerImpl::CcIfSetOpOptKeyRate(shared_ptr* param_1, int param_2, int param_3, int param_4,
                                               ErrorCapture* param_5) {
        long lVar1;
        int* piVar2;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var4;

        p_Var4 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2);
        lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (std::operator==((unique_ptr*)(lVar1 + 696), p_Var4)) {
            param_5->Raise(1);
        } else {
            lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            lVar1 = std::unique_ptr<rs2lib::IfType::ServerKeyData, std::default_delete<rs2lib::IfType::ServerKeyData>>::
                    operator->((unique_ptr<rs2lib::IfType::ServerKeyData,
                                           std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar1 + 696));
            piVar2 = (int*)std::array<int, 11ul>::operator[]((array<int, 11ul>*)(lVar1 + 528), (long)param_2);
            *piVar2 = param_3;
            lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            lVar1 = std::unique_ptr<rs2lib::IfType::ServerKeyData, std::default_delete<rs2lib::IfType::ServerKeyData>>::
                    operator->((unique_ptr<rs2lib::IfType::ServerKeyData,
                                           std::default_delete<rs2lib::IfType::ServerKeyData>>*)(lVar1 + 696));
            piVar2 = (int*)std::array<int, 11ul>::operator[]((array<int, 11ul>*)(lVar1 + 572), (long)param_2);
            *piVar2 = param_4;
        }
    }

    // 0x1001959c0, 96 bytes, placed by class name
    // ScriptRunnerImpl::CcIfSetOpOptKeyIgnoreHeld(shared_ptr<rs2lib::IfType> const&, int, ErrorCapture&)
    void ScriptRunnerImpl::CcIfSetOpOptKeyIgnoreHeld(shared_ptr* param_1, int param_2, ErrorCapture* param_3) {
        long lVar1;
        undefined4* puVar2;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var4;

        p_Var4 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_2);
        lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        if (std::operator==((unique_ptr*)(lVar1 + 696), p_Var4)) {
            param_3->Raise(1);
        } else {
            lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
            puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)(lVar1 + 2056), (long)param_2);
            *puVar2 = 2147483647;
        }
    }

    // 0x1001a38e0, 16 bytes, base-object destructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::~$_3()
    /* ~$_3() */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_3::~__3() {
        ~shared_ptr();
    }

    // 0x1001a38f0, 16 bytes, base-object destructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::~$_4()
    /* ~$_4() */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_4::~__4() {
        ~shared_ptr();
    }

    // 0x1001b44e0, 16 bytes, complete-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::$_3($_3&&): jumps straight to the base-object constructor

    // 0x1001b4500, 16 bytes, base-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::$_3($_3&&)
    /* $_3($_3&&) */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_3::__3(__3* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
    }

    // 0x1001b47b0, 16 bytes, complete-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::$_3($_3 const&): jumps straight to the base-object constructor

    // 0x1001b47d0, 16 bytes, base-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::$_3($_3 const&)
    /* $_3($_3 const&) */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_3::__3(__3* param_1) {
        new (this) shared_ptr<dash3d::Decor>(param_1);
    }

    // 0x1001b4a40, 176 bytes, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::operator()() const
    /* ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp,
   ClientScript const&, bool)::$_3::TEMPNAMEPLACEHOLDERVALUE() const */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_3::operator()() {
        IfType* pIVar1;
        long lVar2;
        Client* this_00;
        list<HookReq, eastl::allocator>* this_01;
        char cVar3;
        undefined1 local_90[128];

        pIVar1 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this);
        lVar2 = pIVar1->GetInputFieldWrapper();
        cVar3 = ((lVar2 + 1616))->empty();
        if (cVar3 == '\0') {
            new (local_90) HookReq();
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_90 + 32), (shared_ptr*)this);
            pIVar1 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this);
            lVar2 = pIVar1->GetInputFieldWrapper();
            Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_90,
                                                        (Array*)(lVar2 + 1616));
            this_00 = (Client*)Client::Instance();
            this_01 = (list<HookReq, eastl::allocator>*)this_00->GetHookQueue();
            eastl::list<HookReq, eastl::allocator>::push_back(this_01, (HookReq*)local_90);
            local_90->~HookReq();
        }
    }

    // 0x1001b5320, 16 bytes, complete-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::$_4($_4&&): jumps straight to the base-object constructor

    // 0x1001b5340, 16 bytes, base-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::$_4($_4&&)
    /* $_4($_4&&) */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_4::__4(__4* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
    }

    // 0x1001b55f0, 16 bytes, complete-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::$_4($_4 const&): jumps straight to the base-object constructor

    // 0x1001b5610, 16 bytes, base-object constructor, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::$_4($_4 const&)
    /* $_4($_4 const&) */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_4::__4(__4* param_1) {
        new (this) shared_ptr<dash3d::Decor>(param_1);
    }

    // 0x1001b5880, 176 bytes, placed by class name
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::operator()() const
    /* ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp,
   ClientScript const&, bool)::$_4::TEMPNAMEPLACEHOLDERVALUE() const */

    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_4::operator()() {
        IfType* pIVar1;
        long lVar2;
        Client* this_00;
        list<HookReq, eastl::allocator>* this_01;
        char cVar3;
        undefined1 local_90[128];

        pIVar1 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this);
        lVar2 = pIVar1->GetInputFieldWrapper();
        cVar3 = ((lVar2 + 1568))->empty();
        if (cVar3 == '\0') {
            new (local_90) HookReq();
            shared_ptr<rs2lib::IfType>::operator=((shared_ptr<rs2lib::IfType>*)(local_90 + 32), (shared_ptr*)this);
            pIVar1 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)this);
            lVar2 = pIVar1->GetInputFieldWrapper();
            Array<HookArg, eastl::allocator>::operator=((Array<HookArg, eastl::allocator>*)local_90,
                                                        (Array*)(lVar2 + 1568));
            this_00 = (Client*)Client::Instance();
            this_01 = (list<HookReq, eastl::allocator>*)this_00->GetHookQueue();
            eastl::list<HookReq, eastl::allocator>::push_back(this_01, (HookReq*)local_90);
            local_90->~HookReq();
        }
    }

} // namespace jag::oldscape
