// projects/osclient/ScriptRunnerImpl.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100f8aca0
    uint8_t ScriptRunnerImpl::LOG_E_2[16];

    // 0x10018eaf0
    void ScriptRunnerImpl::ExecuteScript(const HookReq& hookReq, int arg2, int arg3) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        int iVar7;
        int iVar8;
        unsigned int uVar9;
        HookArg* pHVar10;
        uint64_t* puVar11;
        MapElementType* pMVar12;
        shared_ptr<ClientScript>* psVar13;
        long lVar14;
        CoordMapSquare* pCVar15;
        basic_string<char, BucketAllocatorEASTL>* str;
        eastl::string* this_02;
        int* piVar16;
        int iVar17;
        unsigned long arg1;
        shared_ptr<midi2::MidiPlayerMainThread>* local_50;
        shared_ptr<midi2::MidiPlayerMainThread>* local_48;
        int local_34;

        ScriptRunnerImpl* local_40 = this;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        if (rs2lib::ClientTriggerType::IsMelTypeSubjectTriggerType(*(ID*)((long)&hookReq.field_120 + 4)) == '\0') {
            pHVar10 = &hookReq[0];
            iVar7 = pHVar10->IntValue();
            psVar13 = ClientScript::Get(iVar7);
            local_60 = *psVar13;
        } else {
            pHVar10 = &hookReq[0];
            puVar11 = (uint64_t*)pHVar10->MapPos();
            uVar1 = puVar11[1];
            uVar2 = *(uint64_t*)((long)puVar11 + 12);
            uVar3 = *(uint64_t*)((long)puVar11 + 20);
            *(uint64_t*)local_40->field_140856 = *puVar11;
            *(uint64_t*)(local_40->field_140856 + 8) = uVar1;
            *(uint64_t*)(local_40->field_140856 + 12) = uVar2;
            *(uint64_t*)(local_40->field_140856 + 20) = uVar3;
            pMVar12 = configdecoder::MapElementType::List(*(int*)local_40->field_140856);
            psVar13 = ClientScript::Get(*(ID*)((long)&hookReq.field_120 + 4), pMVar12->m_iD, pMVar12->field_440);
            local_60 = *psVar13;
        }
        bool bVar6 = local_60 == nullptr;
        ScriptRunnerImpl* pSVar4 = local_40;
        if (!bVar6) {
            ResetStackFrame(local_40);
            pSVar4->field_140996 = *(int*)&hookReq.field_120;
            this_00 = &pSVar4->field_8;
            this_00->clear();
            lVar14 = local_60.operator->();
            this_00->resize((long)*(int*)(lVar14 + 112));
            this_01 = &local_40->field_40;
            this_01->clear();
            lVar14 = local_60.operator->();
            this_01->resize((long)*(int*)(lVar14 + 116));
            iVar7 = hookReq.end();
            if (1 < iVar7) {
                local_50 = (shared_ptr<midi2::MidiPlayerMainThread>*)&hookReq.field_32;
                local_48 = (shared_ptr<midi2::MidiPlayerMainThread>*)&hookReq.field_64;
                arg1 = 1;
                local_34 = 0;
                iVar7 = 0;
                do {
                    pCVar15 = &hookReq[arg1];
                    iVar8 = pCVar15->GetX();
                    if (iVar8 == 2) {
                        pHVar10 = &hookReq[arg1];
                        str = (basic_string<char, BucketAllocatorEASTL>*)pHVar10->StrValue();
                        bVar6 = *str == (*((value_type*)"event_opbase"));
                        this_02 = (eastl::string*)(*this_01)[(long)local_34];
                        if (bVar6) {
                            str = (basic_string<char, BucketAllocatorEASTL>*)&hookReq.field_88;
                        }
                        *this_02 = str;
                        local_34 = local_34 + 1;
                    } else {
                        if (iVar8 != 1) {
                            pCVar15 = &hookReq[arg1];
                            uVar9 = pCVar15->GetX();
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/ScriptRunnerImpl.cpp",
                                            145, "args[%d] of unexpected type %d", arg1 & 4294967295,
                                            (unsigned long)uVar9);
                        }
                        pHVar10 = &hookReq[arg1];
                        iVar8 = pHVar10->IntValue();
                        if (iVar8 == -2147483647) {
                            iVar8 = *(int*)&hookReq.field_48;
                        }
                        if (iVar8 == -2147483646) {
                            iVar8 = *(int*)((long)&hookReq.field_48 + 4);
                        }
                        if (iVar8 == -2147483645) {
                            bVar6 = *local_50 != nullptr;
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = (*local_50).operator->();
                                iVar8 = *(int*)(lVar14 + 4);
                            }
                        }
                        if (iVar8 == -2147483644) {
                            iVar8 = hookReq.field_56;
                        }
                        if (iVar8 == -2147483643) {
                            bVar6 = *local_50 != nullptr;
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = (*local_50).operator->();
                                iVar8 = *(int*)(lVar14 + 8);
                            }
                        }
                        if (iVar8 == -2147483642) {
                            bVar6 = *local_48 != nullptr;
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = (*local_48).operator->();
                                iVar8 = *(int*)(lVar14 + 4);
                            }
                        }
                        if (iVar8 == -2147483641) {
                            bVar6 = *local_48 != nullptr;
                            iVar8 = -1;
                            if (bVar6) {
                                lVar14 = (*local_48).operator->();
                                iVar8 = *(int*)(lVar14 + 8);
                            }
                        }
                        if (iVar8 == -2147483640) {
                            iVar8 = *(int*)&hookReq.field_80;
                        }
                        iVar17 = *(int*)((long)&hookReq.field_80 + 4);
                        piVar16 = (int*)(*this_00)[(long)iVar7];
                        if (iVar8 != -2147483639) {
                            iVar17 = iVar8;
                        }
                        iVar7 = iVar7 + 1;
                        *piVar16 = iVar17;
                    }
                    arg1 = arg1 + 1;
                    iVar8 = hookReq.end();
                } while ((long)arg1 < (long)iVar8);
            }
            ExecuteScriptInner(local_40, &local_60, arg2, arg3);
        }
    }

    // 0x10018eec0
    unsigned long ScriptRunnerImpl::ExecuteScript(rs2lib::ClientTriggerType::ID id, int arg2, int arg3, int arg4,
                                                  int arg5) {
        long lVar2;

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        auto clientScript = ClientScript::Get(id, arg2, arg3);
        local_40 = *clientScript;
        bool bVar1 = local_40 == nullptr;
        if (!bVar1) {
            ResetStackFrame();
            field_140996 = 0;
            field_8.clear();
            lVar2 = local_40.operator->();
            field_8.resize((long)*(int*)(lVar2 + 112));
            field_40.clear();
            lVar2 = local_40.operator->();
            field_40.resize((long)*(int*)(lVar2 + 116));
            ExecuteScriptInner(local_40, arg4, arg5);
        }
        return bVar1 & 4294967295 ^ 1;
    }

    // 0x10018eff0
    unsigned long ScriptRunnerImpl::ExecuteStringScriptTrigger(eastl::string& str, rs2lib::ClientTriggerType::ID id,
                                                               int arg3, int arg4, int arg5, int arg6) {
        bool cVar1;
        uint32_t in_register_00000034;
        int in_stack_00000008;

        unsigned int uVar2 = ExecuteScript((ScriptRunnerImpl*)str, arg3, arg4, arg5, arg6, in_stack_00000008);
        if ((((char)uVar2 == '\0') || (cVar1 = ((str + 141000))->IsRaised(), cVar1)) || (*(int*)(str + 136096) < 1)) {
            ((((uint64_t)in_register_00000034 << 32) | (uint32_t)id))->assign("");
            return (unsigned long)uVar2;
        }
        unsigned int uVar3 = *(int*)(str + 136096) - 1;
        *(unsigned int*)(str + 136096) = uVar3;
        eastl::string* str_00 = (eastl::string*)(*((str + 104096)))[(unsigned long)uVar3];
        (*((eastl::string*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)id))) = str_00;
        return 1;
    }

    // 0x10018f0a0
    unsigned long ScriptRunnerImpl::ExecuteHeldObjOverlayTrigger(const shared_ptr<rs2lib::IfType>& ifType, int arg2,
                                                                 int arg3) {
        uint8_t* this_00;
        uint32_t uVar1;
        uint32_t* puVar4;

        long lVar3 = ifType.operator->();
        if (*(int*)(lVar3 + 680) == -1) {
            LogAssert("graphic->m_overlayId != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ScriptRunnerImpl.cpp",
                      168, nullptr);
        }
        lVar3 = ifType.operator->();
        auto local_58 = configdecoder::ObjType::List(*(int*)(lVar3 + 1984));
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        lVar3 = ifType.operator->();
        int arg2_00 = *(int*)(lVar3 + 1984);
        lVar3 = local_58.operator->();
        auto clientScript = ClientScript::Get(77, arg2_00, *(int*)(lVar3 + 672));
        local_40 = *clientScript;
        bool bVar2 = local_40 == nullptr;
        if (!bVar2) {
            ResetStackFrame();
            field_140996 = 0;
            this_00 = &field_8;
            this_00->clear();
            lVar3 = local_40.operator->();
            this_00->resize((long)*(int*)(lVar3 + 112));
            field_40.clear();
            lVar3 = local_40.operator->();
            field_40.resize((long)*(int*)(lVar3 + 116));
            lVar3 = ifType.operator->();
            uVar1 = *(uint32_t*)(lVar3 + 680);
            puVar4 = (uint32_t*)(*this_00)[0];
            *puVar4 = uVar1;
            field_140504 = ifType;
            ExecuteScriptInner(local_40, arg2, arg3);
        }
        return bVar2 & 4294967295 ^ 1;
    }

    // 0x10018f260
    void ScriptRunnerImpl::OnLoad(int arg1) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        long lVar2;
        unsigned long uVar3;
        shared_ptr<rs2lib::IfType>* this_01;
        unsigned long arg1_00;
        uint8_t local_b0[128];

        if (arg1 != -1) {
            if (((IfType*)(unsigned long)(unsigned int)arg1)->OpenInterface(arg1) != '\0') {
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*(
                    (Array<Array<shared_ptr<rs2lib::IfType>>>*)&rs2lib::IfType::m_list))[(long)arg1];
                lVar2 = this_00->end();
                if (lVar2 != 0) {
                    arg1_00 = 0;
                    do {
                        this_01 = (shared_ptr<rs2lib::IfType>*)(*this_00)[arg1_00];
                        lVar2 = (*this_01).operator->();
                        lVar2 = ((lVar2 + 832))->end();
                        if (lVar2 != 0) {
                            new (local_b0) HookReq();
                            (*((local_b0 + 32))) = *this_01;
                            lVar2 = (*this_01).operator->();
                            *local_b0 = (*((lVar2 + 832)));
                            ExecuteScript(*local_b0, 5000000, 0);
                        }
                        arg1_00 = arg1_00 + 1;
                        uVar3 = this_00->end();
                    } while (arg1_00 < uVar3);
                }
            }
        }
    }

    // 0x10018f570
    void ScriptRunnerImpl::ResetStackFrame() {
        field_104092 = 0;
        field_136096 = 0;
        field_136100 = 0;
        field_140992 = 0;
    }

    // 0x10018f620
    void ScriptRunnerImpl::ExecuteScriptInner(shared_ptr<ClientScript>& clientScript, int arg2, int arg3) {
        short sVar1;
        ScriptOp scriptOp;
        unsigned int uVar2;
        int iVar3;
        bool bVar4;
        array<eastl::string, 1000ul>* this_00;
        array<int, 1000ul>* paVar5;
        int iVar7;
        uint32_t uVar8;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* this_01;
        uint64_t uVar9;
        int* piVar10;
        uint64_t uVar11;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        ClientScript* clientScript_00;
        ScriptOp* pSVar12;
        int* piVar13;
        shared_ptr<ClientScript>* clientScript_01;
        short* psVar14;
        unsigned int* puVar15;
        ClientVarValues* pCVar16;
        hashtable<int, eastl::pair<int const, minimenu::MinimenuOp>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, minimenu::MinimenuOp>>, eastl::equal_to<int>,
                  eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                  false, true, true>* this_03;
        ClanSettings* this_04;
        VarContainerSparse* this_05;
        uint32_t* puVar17;
        ClientGosubFrame* this_06;
        unsigned int* puVar18;
        array<int, 5000ul>* paVar19;
        eastl::string* pbVar20;
        Logger* this_07;
        eastl::string* pbVar21;
        Client* pCVar22;
        char* pcVar23;
        Callstack* callstack;
        unsigned int uVar24;
        unsigned long uVar26;
        unsigned long uVar27;
        long lVar28;
        ScriptRunnerImpl* pSVar29;
        uint8_t auVar30[16];
        eastl::string local_168;
        shared_ptr<rs2lib::social::ClanSettings>* local_140;
        uint8_t local_138[2][16];
        ClientVarValues* local_118;
        ClientScript* local_110;
        int local_108[9];
        vector<int>* local_d8;
        array<int, 5ul>* local_d0;
        array<std::array<int, 5000ul>, 5ul>* local_c8;
        uint8_t local_c0[2][16];
        unsigned long local_98;
        array<eastl::string, 1000ul>* local_78;
        int* local_68;
        shared_ptr<ClientScript>* local_60;
        char local_51;
        array<int, 1000ul>* local_50;
        int* local_48;
        ClientVarValues* local_40;
        int local_34;

        int local_e4 = arg3;
        int local_9c = arg2;
        if (field_0 != '\0') {
            LogAssert("m_executingScript == false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "ScriptRunnerImpl.cpp",
                      205, "Cannot execute a script while another is already running!");
        }
        field_0 = 1;
        uint8_t* puVar25 = field_141000;
        puVar25->Reset();
        array<ClientGosubFrame, 50ul>* local_e0 = (array<ClientGosubFrame, 50ul>*)&field_136104;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_90 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_40;
        ScriptRunnerImpl* local_80 = this;
        ErrorCapture* local_70 = (ErrorCapture*)puVar25;
        char cVar6 = puVar25->IsRaised();
        if (!cVar6) {
            local_140 = (shared_ptr<rs2lib::social::ClanSettings>*)&local_80->field_140536;
            local_48 = &local_80->field_104092;
            local_50 = (array<int, 1000ul>*)&local_80->field_100092;
            local_78 = (array<eastl::string, 1000ul>*)&local_80->field_104096;
            local_68 = &local_80->field_136096;
            local_d0 = (array<int, 5ul>*)&local_80->field_72;
            local_c8 = (array<std::array<int, 5000ul>, 5ul>*)&local_80->field_92;
            local_34 = -1;
            iVar7 = 0;
            local_60 = clientScript;
            do {
                clientScript_00 = (ClientScript*)*clientScript;
                local_98 = (((uint64_t)local_98._4_4_ << 32) | (uint32_t)(iVar7 + 1));
                if (local_9c <= iVar7) {
                    local_70->Raise(1);
                    lVar28 = 0;
                    goto LAB_100190450;
                }
                puVar25 = &clientScript_00->field_64;
                local_34 = local_34 + 1;
                uVar27 = (unsigned long)local_34;
                pSVar12 = &clientScript_00->field_40[uVar27];
                paVar5 = local_50;
                scriptOp = *pSVar12;
                if (99 < (int)scriptOp) {
                    piVar10 = (int*)(*puVar25)[uVar27];
                    pSVar29 = local_80;
                    iVar7 = ExecuteOtherCommand(local_80, scriptOp, clientScript_00, *piVar10 == 1);
                    if (iVar7 != 2) {
                        if (iVar7 == 1) {
                            lVar28 = 0;
                        } else {
                            if (iVar7 != 0)
                                goto LAB_10018fad0;
                            RunDeferredEvents(pSVar29);
                            lVar28 = 1;
                        }
                        goto LAB_100190450;
                    }
                    local_70->Raise(2);
                LAB_10018fad0:
                    goto switchD_10018fa4a_caseD_4;
                }
                switch (scriptOp) {
                case 0:
                    puVar17 = (uint32_t*)(*puVar25)[uVar27];
                    goto LAB_10019024d;
                case 1:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    puVar17 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_var))[(long)*piVar10];
                    goto LAB_10019024d;
                case 2:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    iVar7 = *piVar10;
                    iVar3 = *local_48;
                    *local_48 = (int)((long)iVar3 - 1U);
                    puVar17 = (uint32_t*)(*local_50)[(long)iVar3 - 1U];
                    uVar8 = *puVar17;
                    puVar17 = (uint32_t*)(*((Array<int>*)&ClientVarCache::m_var))[(long)iVar7];
                    *puVar17 = uVar8;
                    pCVar22 = Client::Instance();
                    pCVar22->ClientVar(iVar7);
                    break;
                case 3:
                    pbVar21 = &clientScript_00->field_88[uVar27];
                    goto LAB_1001903b8;
                case 6:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    local_34 = local_34 + *piVar10;
                    break;
                case 7:
                    iVar7 = *local_48;
                    uVar26 = (long)iVar7 - 2;
                    *local_48 = (int)uVar26;
                    puVar17 = (uint32_t*)(*local_50)[uVar26];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar17));
                    piVar10 = (int*)(*paVar5)[(long)iVar7 - 1];
                    if ((int)local_40 != *piVar10)
                        goto LAB_10018fc02;
                LAB_10018fbc5:
                    clientScript = local_60;
                    break;
                case 8:
                    iVar7 = *local_48;
                    uVar26 = (long)iVar7 - 2;
                    *local_48 = (int)uVar26;
                    puVar17 = (uint32_t*)(*local_50)[uVar26];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar17));
                    piVar10 = (int*)(*paVar5)[(long)iVar7 - 1];
                    if ((int)local_40 != *piVar10)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 9:
                    iVar7 = *local_48;
                    uVar26 = (long)iVar7 - 2;
                    *local_48 = (int)uVar26;
                    puVar17 = (uint32_t*)(*local_50)[uVar26];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar17));
                    piVar10 = (int*)(*paVar5)[(long)iVar7 - 1];
                    if (*piVar10 <= (int)local_40)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 10:
                    iVar7 = *local_48;
                    uVar26 = (long)iVar7 - 2;
                    *local_48 = (int)uVar26;
                    puVar17 = (uint32_t*)(*local_50)[uVar26];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar17));
                    piVar10 = (int*)(*paVar5)[(long)iVar7 - 1];
                    if ((int)local_40 <= *piVar10)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 21:
                    if ((long)(int)local_80->field_136100 != 0) {
                        uVar27 = (long)(int)local_80->field_136100 - 1;
                        local_80->field_136100 = (int)uVar27;
                        this_06 = (ClientGosubFrame*)(*local_e0)[uVar27];
                        clientScript = *this_06;
                        local_34 = this_06->field_16;
                        this_06->SwapLocals(*local_90, *local_88);
                        this_06->field_24.clear();
                        this_06->field_56.clear();
                        break;
                    }
                    local_80->field_0 = 0;
                    RunDeferredEvents(local_80);
                    lVar28 = 1;
                    goto LAB_100190450;
                case 25:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    uVar8 = ClientVarCache::GetVarbit(*piVar10);
                    goto LAB_10019024f;
                case 27:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    iVar7 = *piVar10;
                    iVar3 = *local_48;
                    *local_48 = (int)((long)iVar3 - 1U);
                    piVar10 = (int*)(*local_50)[(long)iVar3 - 1U];
                    ClientVarCache::SetVarbit(iVar7, *piVar10);
                    break;
                case 31:
                    iVar7 = *local_48;
                    uVar26 = (long)iVar7 - 2;
                    *local_48 = (int)uVar26;
                    puVar17 = (uint32_t*)(*local_50)[uVar26];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar17));
                    piVar10 = (int*)(*paVar5)[(long)iVar7 - 1];
                    if (*piVar10 < (int)local_40)
                        goto LAB_10018fbc5;
                    goto LAB_10018fc02;
                case 32:
                    iVar7 = *local_48;
                    uVar26 = (long)iVar7 - 2;
                    *local_48 = (int)uVar26;
                    puVar17 = (uint32_t*)(*local_50)[uVar26];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar17));
                    piVar10 = (int*)(*paVar5)[(long)iVar7 - 1];
                    if ((int)local_40 < *piVar10)
                        goto LAB_10018fbc5;
                LAB_10018fc02:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    local_34 = local_34 + *piVar10;
                    clientScript = local_60;
                    break;
                case 33:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    puVar17 = (uint32_t*)(*local_90)[(long)*piVar10];
                LAB_10019024d:
                    uVar8 = *puVar17;
                    goto LAB_10019024f;
                case 34:
                    iVar7 = *local_48;
                    *local_48 = (int)((long)iVar7 - 1U);
                    puVar17 = (uint32_t*)(*local_50)[(long)iVar7 - 1U];
                    uVar8 = *puVar17;
                    piVar10 = (int*)(*puVar25)[uVar27];
                    puVar17 = (uint32_t*)(*local_90)[(long)*piVar10];
                    *puVar17 = uVar8;
                    break;
                case 35:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    pbVar21 = (eastl::string*)(*local_88)[(long)*piVar10];
                    goto LAB_1001903b8;
                case 36:
                    iVar7 = *local_68;
                    *local_68 = (int)((long)iVar7 - 1U);
                    pbVar21 = (eastl::string*)(*local_78)[(long)iVar7 - 1U];
                    piVar10 = (int*)(*puVar25)[uVar27];
                    pbVar20 = (eastl::string*)(*local_88)[(long)*piVar10];
                    *pbVar20 = pbVar21;
                    break;
                case 37:
                    piVar13 = (int*)(*puVar25)[uVar27];
                    piVar10 = local_68;
                    this_00 = local_78;
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*piVar13));
                    iVar7 = *local_68 - *piVar13;
                    *local_68 = iVar7;
                    pbVar21 = (eastl::string*)local_78->data();
                    *local_c0 = core::stringtools::general::StringTools::Join(pbVar21, iVar7, (int)local_40);
                    pbVar20 = (eastl::string*)(*this_00)[(long)*piVar10];
                    *pbVar20 = local_c0;
                    *piVar10 = *piVar10 + 1;
                    break;
                case 38:
                    *local_48 = *local_48 - 1;
                    break;
                case 39:
                    *local_68 = *local_68 - 1;
                    break;
                case 40:
                    local_118 = (ClientVarValues*)(*local_e0)[(long)(int)local_80->field_136100];
                    local_40 = local_118;
                    *local_118 = clientScript;
                    puVar18 = (unsigned int*)(*puVar25)[uVar27];
                    uVar24 = *puVar18;
                    clientScript_01 = ClientScript::Get(uVar24);
                    clientScript = *clientScript_01;
                    cVar6 = clientScript == nullptr;
                    if (cVar6) {
                        clientScript = *local_118;
                        local_70->Raise(1, "non-existant gosub script-num: %d", (unsigned long)uVar24);
                        lVar28 = 0;
                    } else {
                        local_110 = clientScript_00;
                        local_51 = cVar6;
                        lVar28 = clientScript;
                        piVar10 = &local_40->field_24;
                        piVar10->clear();
                        piVar10->reserve((long)*(int*)(lVar28 + 112));
                        local_d8 = (vector<int>*)piVar10;
                        piVar10->resize((long)*(int*)(lVar28 + 112));
                        piVar10 = local_48;
                        paVar5 = local_50;
                        uVar27 = (unsigned long)*(unsigned int*)(lVar28 + 120);
                        if (0 < (int)*(unsigned int*)(lVar28 + 120)) {
                            uVar26 = 0;
                            do {
                                puVar17 = (uint32_t*)(*paVar5)[(long)((*piVar10 - (int)uVar27) + (int)uVar26)];
                                uVar8 = *puVar17;
                                puVar17 = (uint32_t*)(*local_d8)[uVar26];
                                *puVar17 = uVar8;
                                uVar26 = uVar26 + 1;
                                uVar27 = (unsigned long)*(int*)(lVar28 + 120);
                            } while ((long)uVar26 < (long)uVar27);
                        }
                        puVar25 = &local_40->field_56;
                        puVar25->clear();
                        puVar25->reserve((long)*(int*)(lVar28 + 116));
                        puVar25->resize((long)*(int*)(lVar28 + 116));
                        piVar10 = local_68;
                        uVar24 = *(unsigned int*)(lVar28 + 124);
                        uVar27 = (unsigned long)uVar24;
                        if (0 < (int)uVar24) {
                            uVar26 = 0;
                            local_40 = (ClientVarValues*)puVar25;
                            do {
                                pbVar21 = (eastl::string*)(*local_78)[(long)((*piVar10 - (int)uVar27) + (int)uVar26)];
                                pbVar20 = (eastl::string*)(*local_40)[uVar26];
                                *pbVar20 = pbVar21;
                                uVar26 = uVar26 + 1;
                                uVar24 = *(unsigned int*)(lVar28 + 124);
                                uVar27 = (unsigned long)(int)uVar24;
                            } while ((long)uVar26 < (long)uVar27);
                        }
                        pSVar29 = local_80;
                        local_80->field_104092 = local_80->field_104092 - *(int*)(lVar28 + 120);
                        local_80->field_136096 = local_80->field_136096 - uVar24;
                        *(int*)&local_118->field_16 = local_34;
                        local_118->SwapLocals(*local_90, *local_88);
                        pSVar29->field_136100 = pSVar29->field_136100 + 1;
                        local_34 = -1;
                        lVar28 = 4;
                        clientScript = local_60;
                        cVar6 = local_51;
                    }
                    if (cVar6)
                        goto LAB_100190450;
                    break;
                case 42:
                    pCVar22 = Client::Instance();
                    pCVar16 = (ClientVarValues*)pCVar22->field_52488.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    uVar8 = pCVar16->GetVarValueInt(*piVar10);
                    goto LAB_10019024f;
                case 43:
                    pCVar22 = Client::Instance();
                    local_40 = (ClientVarValues*)pCVar22->field_52488.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    iVar7 = *piVar10;
                    iVar3 = *local_48;
                    *local_48 = (int)((long)iVar3 - 1U);
                    piVar10 = (int*)(*local_50)[(long)iVar3 - 1U];
                    local_40->SetVarValueInt(iVar7, *piVar10);
                    break;
                case 44:
                    piVar10 = (int*)(*puVar25)[uVar27];
                    local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*piVar10 >> 16));
                    psVar14 = (short*)(*puVar25)[uVar27];
                    sVar1 = *psVar14;
                    iVar7 = *local_48;
                    *local_48 = (int)((long)iVar7 - 1U);
                    puVar18 = (unsigned int*)(*local_50)[(long)iVar7 - 1U];
                    uVar24 = *puVar18;
                    if (uVar24 < 5001) {
                        uVar27 = (unsigned long)(int)local_40;
                        puVar18 = (unsigned int*)(*local_d0)[uVar27];
                        *puVar18 = uVar24;
                        lVar28 = 4;
                        if (uVar24 != 0) {
                            local_40 = (ClientVarValues*)(((uint64_t)local_40._4_4_ << 32) |
                                                          (uint32_t)(-(unsigned int)(sVar1 != 105)));
                            paVar19 = (array<int, 5000ul>*)(*local_c8)[uVar27];
                            local_d8 = (vector<int>*)(((uint64_t)local_d8._4_4_ << 32) | (uint32_t)uVar24);
                            uVar27 = 1;
                            if (1 < (int)uVar24) {
                                uVar27 = (unsigned long)uVar24;
                            }
                            uVar26 = 0;
                            do {
                                puVar17 = (uint32_t*)(*paVar19)[uVar26];
                                *puVar17 = (int)local_40;
                                uVar26 = uVar26 + 1;
                            } while (uVar27 != uVar26);
                            clientScript = local_60;
                            uVar24 = (unsigned int)local_d8;
                        }
                    } else {
                        local_70->Raise(1, "Invalid array size: %d Local array: %d", (unsigned long)uVar24,
                                        (unsigned long)local_40 & 4294967295);
                        lVar28 = 0;
                    }
                    if (5000 < uVar24)
                        goto LAB_100190450;
                    break;
                case 45:
                    puVar18 = (unsigned int*)(*puVar25)[uVar27];
                    uVar24 = *puVar18;
                    local_40 = (ClientVarValues*)(long)*local_48;
                    *local_48 = (int)&local_40[-1].field_135;
                    puVar18 = (unsigned int*)(*local_50)[(unsigned long)&local_40[-1].field_135];
                    uVar2 = *puVar18;
                    if (-1 < (long)(int)uVar2) {
                        piVar10 = (int*)(*local_d0)[(long)(int)uVar24];
                        if ((int)uVar2 < *piVar10) {
                            paVar19 = (array<int, 5000ul>*)(*local_c8)[(long)(int)uVar24];
                            puVar15 = (unsigned int*)(*paVar19)[(long)(int)uVar2];
                            uVar24 = *puVar15;
                            *local_48 = (int)local_40;
                            *puVar18 = uVar24;
                            lVar28 = 4;
                            bVar4 = true;
                            goto joined_r0x00010019051b;
                        }
                    }
                    bVar4 = false;
                    local_70->Raise(1, "Invalid array index: %d Local array: %d", (unsigned long)uVar2,
                                    (unsigned long)uVar24);
                    lVar28 = 0;
                    goto joined_r0x00010019051b;
                case 46:
                    puVar18 = (unsigned int*)(*puVar25)[uVar27];
                    uVar24 = *puVar18;
                    iVar7 = *local_48;
                    uVar27 = (long)iVar7 - 2;
                    *local_48 = (int)uVar27;
                    puVar18 = (unsigned int*)(*local_50)[uVar27];
                    uVar2 = *puVar18;
                    if (-1 < (long)(int)uVar2) {
                        piVar10 = (int*)(*local_d0)[(long)(int)uVar24];
                        if ((int)uVar2 < *piVar10) {
                            puVar17 = (uint32_t*)(*local_50)[(long)iVar7 - 1];
                            uVar8 = *puVar17;
                            paVar19 = (array<int, 5000ul>*)(*local_c8)[(long)(int)uVar24];
                            puVar17 = (uint32_t*)(*paVar19)[(long)(int)uVar2];
                            *puVar17 = uVar8;
                            lVar28 = 4;
                            bVar4 = true;
                            goto joined_r0x00010019051b;
                        }
                    }
                    bVar4 = false;
                    local_70->Raise(1, "Invalid array index: %d Local array: %d", (unsigned long)uVar2,
                                    (unsigned long)uVar24);
                    lVar28 = 0;
                joined_r0x00010019051b:
                    if (bVar4)
                        break;
                    goto LAB_100190450;
                case 47:
                    pCVar22 = Client::Instance();
                    pCVar16 = (ClientVarValues*)pCVar22->field_52488.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    pbVar21 = (eastl::string*)pCVar16->GetLegacyVarString(*piVar10);
                    goto LAB_1001903b8;
                case 48:
                    pCVar22 = Client::Instance();
                    local_40 = (ClientVarValues*)pCVar22->field_52488.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    iVar7 = *piVar10;
                    iVar3 = *local_68;
                    *local_68 = (int)((long)iVar3 - 1U);
                    pbVar21 = (eastl::string*)(*local_78)[(long)iVar3 - 1U];
                    local_40->SetLegacyVarString(iVar7, *pbVar21);
                    break;
                case 49:
                    pCVar22 = Client::Instance();
                    pCVar16 = (ClientVarValues*)pCVar22->field_52488.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    pbVar21 = (eastl::string*)pCVar16->getVarValueString(*piVar10);
                LAB_1001903b8:
                    iVar7 = *local_68;
                    *local_68 = iVar7 + 1;
                    pbVar20 = (eastl::string*)(*local_78)[(long)iVar7];
                    *pbVar20 = pbVar21;
                    break;
                case 50:
                    pCVar22 = Client::Instance();
                    local_40 = (ClientVarValues*)pCVar22->field_52488.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    iVar7 = *piVar10;
                    iVar3 = *local_68;
                    *local_68 = (int)((long)iVar3 - 1U);
                    pbVar21 = (eastl::string*)(*local_78)[(long)iVar3 - 1U];
                    local_40->SetVarValueString(iVar7, *pbVar21);
                    break;
                case 60:
                    iVar7 = *local_48;
                    *local_48 = (int)((long)iVar7 - 1U);
                    piVar10 = (int*)(*local_50)[(long)iVar7 - 1U];
                    local_108[0] = *piVar10;
                    piVar10 = (int*)(*puVar25)[uVar27];
                    this_03 = &clientScript_00->field_136[(long)*piVar10];
                    auVar30 = this_03->find(*local_108);
                    local_c0[0] = auVar30;
                    auVar30 = this_03->end();
                    local_138[0] = auVar30;
                    cVar6 = *local_c0 != *local_138;
                    if (cVar6) {
                        lVar28 = local_c0->HeapBeginPtr();
                        local_34 = local_34 + *(int*)(lVar28 + 4);
                    }
                    break;
                case 74:
                    this_04 = (ClanSettings*)(*local_140).operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    *local_c0 = this_04->GetExtraSettingAsInt(*piVar10);
                    cVar6 = local_c0->IsActive();
                    uVar8 = 4294967295;
                    if (!cVar6) {
                        puVar17 = (uint32_t*)local_c0->SSOBeginPtr();
                        goto LAB_10019024d;
                    }
                LAB_10019024f:
                    iVar7 = *local_48;
                    *local_48 = iVar7 + 1;
                    puVar17 = (uint32_t*)(*local_50)[(long)iVar7];
                    *puVar17 = uVar8;
                    break;
                case 76:
                    pCVar22 = Client::Instance();
                    this_05 = (VarContainerSparse*)pCVar22->field_52528.operator->();
                    piVar10 = (int*)(*puVar25)[uVar27];
                    *local_c0 = this_05->GetVarValueByID(*piVar10);
                    cVar6 = local_c0->IsUndefined();
                    piVar10 = local_48;
                    paVar5 = local_50;
                    uVar8 = 4294967295;
                    if (!cVar6) {
                        uVar8 = local_c0->GetInt();
                    }
                    iVar7 = *piVar10;
                    *piVar10 = iVar7 + 1;
                    puVar17 = (uint32_t*)(*paVar5)[(long)iVar7];
                    *puVar17 = uVar8;
                }
            switchD_10018fa4a_caseD_4:
                lVar28 = 0;
                if ((0 < local_e4) && (iVar7 = (int)local_98, local_e4 <= (int)local_98)) {
                    this_07 = logger::default_logger();
                    uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    lVar28 = 0;
                    this_07->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                 "ScriptRunnerImpl.cpp",
                                 588, "Warning: Script %s finished at op count %i of max %i", uVar9, iVar7, local_9c);
                }
            LAB_100190450:
                if (lVar28 != 0) {
                    return;
                }
                cVar6 = local_70->IsRaised();
                iVar7 = (int)local_98;
            } while (!cVar6);
        }
        pSVar29 = local_80;
        local_80->field_0 = 0;
        cVar6 = local_70->IsRaised();
        if (cVar6) {
            new (local_c0) eastl::string();
            local_c0->reserve(200);
            this_01 =
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)clientScript.end();
            new (local_138) eastl::string();
            local_98 = (unsigned long)(unsigned int)pSVar29->field_136100;
            do {
                new (local_108) eastl::string();
                cVar6 = this_01->empty();
                if (!cVar6) {
                    *local_108 = this_01;
                } else {
                    uVar27 = *(unsigned long*)(this_01 + 32);
                    if (uVar27 < 65536) {
                        local_108->append_sprintf("script_%d", uVar27 & 4294967295);
                    } else {
                        local_108->append_sprintf("trig_%d_%d", (unsigned long)*(unsigned int*)(this_01 + 128),
                                                  uVar27 >> 16);
                    }
                }
                uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_c0->append_sprintf("\n %s", uVar9);
                cVar6 = local_138->empty();
                if (cVar6) {
                    *local_138 = local_108;
                }
                if (0 < *(int*)(this_01 + 120)) {
                    *local_c0 += " ints";
                    if (0 < *(int*)(this_01 + 120)) {
                        uVar9 = 40;
                        uVar27 = 0;
                        do {
                            piVar10 = (int*)(*local_90)[uVar27];
                            if (*piVar10 + 32766U < 65533) {
                                local_c0->append_sprintf("%c%d", uVar9);
                            } else {
                                local_c0->append_sprintf("%c0x%08X", uVar9);
                            }
                            uVar27 = uVar27 + 1;
                            uVar9 = 44;
                        } while ((long)uVar27 < (long)*(int*)(this_01 + 120));
                    }
                    *local_c0 += ")";
                }
                if (0 < *(int*)(this_01 + 124)) {
                    *local_c0 += " strings";
                    if (0 < *(int*)(this_01 + 124)) {
                        uVar9 = 40;
                        uVar27 = 0;
                        do {
                            (*local_88)[uVar27];
                            uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            local_c0->append_sprintf("%c\"%s\"", uVar9, uVar11);
                            uVar27 = uVar27 + 1;
                            uVar9 = 44;
                        } while ((long)uVar27 < (long)*(int*)(this_01 + 124));
                    }
                    *local_c0 += ")";
                }
                iVar7 = (int)local_98;
                if (iVar7 == 0) {
                    uVar27 = 0;
                } else {
                    this_02 =
                        (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*local_e0)[(long)(int)(iVar7 - 1U)];
                    this_01 =
                        (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)this_02->end();
                    local_90 = this_02 + 24;
                    local_88 = this_02 + 56;
                    uVar27 = (unsigned long)(iVar7 - 1U);
                }
                local_98 = uVar27;
            } while (iVar7 != 0);
            local_70->second();
            uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_c0->append_sprintf("\n %c message: %s", 32, uVar9);
            pCVar22 = Client::Instance();
            pSVar29 = local_80;
            if (pCVar22->field_54168 != *(int*)(ModeWhere::LIVE + 8)) {
                new (local_108) eastl::string("");
                pcVar23 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_168 = eastl::string((CtorSprintf*)"Clientscript error in: %s", pcVar23);
                pCVar22->AddChat(0, *local_108, local_168);
            }
            callstack = (Callstack*)local_70->get_overflow_allocator();
            pcVar23 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            OldscapeClientError::ReportError(pcVar23, callstack);
        }
        RunDeferredEvents(pSVar29);
    }

    // 0x100190da0
    void ScriptRunnerImpl::RunDeferredEvents() {
        int arg1;
        int arg1_00;
        int arg2;
        long lVar2;
        int* piVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Client* pCVar4;
        eastl::string local_60;

        while (true) {
            lVar2 = field_140584.size();
            if (lVar2 == 0)
                break;
            piVar3 = (int*)eastl::queue<ScriptRunnerImpl::TriggerOpRequest,
                                        eastl::fixed_list<ScriptRunnerImpl::TriggerOpRequest, 5ul>>::front();
            arg1 = *piVar3;
            arg1_00 = piVar3[1];
            arg2 = piVar3[2];
            eastl::queue<ScriptRunnerImpl::TriggerOpRequest,
                         eastl::fixed_list<ScriptRunnerImpl::TriggerOpRequest, 5ul>>::pop();
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(arg1_00, arg2);
            if (*midiPlayerMainThread != nullptr) {
                pCVar4 = Client::Instance();
                local_60 = eastl::string("");
                lVar2 = (*midiPlayerMainThread).operator->();
                pCVar4->IfButtonX(arg1, *midiPlayerMainThread, local_60, *(int*)(lVar2 + 1984));
            }
        }
        if (field_140992 != '\0') {
            field_140992 = 0;
            pCVar4 = Client::Instance();
            pCVar4->CloseModal();
        }
    }

    // 0x100191400
    uint64_t ScriptRunnerImpl::ExecuteOtherCommand(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3) {
        uint64_t uVar1;

        bool bVar2 = scriptOp - 2000 < 1000;
        bool bVar3 = 399 < scriptOp - 2500;
        bool arg4 = bVar3 && bVar2;
        ScriptOp scriptOp_00 = scriptOp - 1000;
        if (!bVar3 || !bVar2) {
            scriptOp_00 = scriptOp;
        }
        if ((int)scriptOp_00 < 1000) {
            uVar1 = ExecuteCommand100To999(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1100) {
            uVar1 = ExecuteCommand1000To1099Or2000To2099(scriptOp_00, clientScript, arg3, arg4);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1200) {
            uVar1 = ExecuteCommand1100To1199Or2100To2199(scriptOp_00, clientScript, arg3, arg4);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1300) {
            uVar1 = ExecuteCommand1200To1299Or2200To2299(scriptOp_00, clientScript, arg3, arg4);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1400) {
            uVar1 = ExecuteCommand1300To1399Or2300To2399(scriptOp_00, clientScript, arg3, arg4);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1500) {
            uVar1 = ExecuteCommand1400To1499Or2400To2499(scriptOp_00, clientScript, arg3, arg4);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1600) {
            uVar1 = ExecuteCommand1500To1599(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1700) {
            uVar1 = ExecuteCommand1600To1699(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1800) {
            uVar1 = ExecuteCommand1700To1799(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 1900) {
            uVar1 = ExecuteCommand1800To1899(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 2000) {
            uVar1 = ExecuteCommand1900To1999Or2900To2999(scriptOp_00, clientScript, arg3, arg4);
            return uVar1;
        }
        if ((int)scriptOp_00 < 2600) {
            uVar1 = ExecuteCommand2500To2599(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 2700) {
            uVar1 = ExecuteCommand2600To2699(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 2800) {
            uVar1 = ExecuteCommand2700To2799(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 2900) {
            uVar1 = ExecuteCommand2800To2899(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3200) {
            uVar1 = ExecuteCommand3100To3199(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3300) {
            uVar1 = ExecuteCommand3200To3299(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3400) {
            uVar1 = ExecuteCommand3300To3399(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3500) {
            uVar1 = ExecuteCommand3400To3499(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3600) {
            uVar1 = ExecuteCommand3500To3599(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3700) {
            uVar1 = ExecuteCommand3600To3699(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3800) {
            uVar1 = ExecuteCommand3700To3799(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 3900) {
            uVar1 = ExecuteCommand3800To3899(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 4000) {
            uVar1 = ExecuteCommand3900To3999(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 4100) {
            uVar1 = ExecuteCommand4000To4099(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 4200) {
            uVar1 = ExecuteCommand4100To4199(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 4300) {
            uVar1 = ExecuteCommand4200To4299(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 5100) {
            uVar1 = ExecuteCommand5000To5099(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 5400) {
            uVar1 = ExecuteCommand5300To5399(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 5600) {
            uVar1 = ExecuteCommand5500To5599(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 5700) {
            uVar1 = ExecuteCommand5600To5699(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 6300) {
            uVar1 = ExecuteCommand6200To6299(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 6600) {
            uVar1 = ExecuteCommand6500To6599(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 6700) {
            uVar1 = ExecuteCommand6600To6699(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 6800) {
            uVar1 = ExecuteCommand6700To6799(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 6900) {
            uVar1 = ExecuteCommand6800To6899(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7000) {
            uVar1 = ExecuteCommand6900To6999(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7100) {
            uVar1 = ExecuteCommand7000To7099(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7200) {
            uVar1 = ExecuteCommand7100To7199(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7300) {
            uVar1 = ExecuteCommand7200To7299(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7500) {
            uVar1 = ExecuteCommand7400To7499(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7600) {
            uVar1 = ExecuteCommand7500To7599(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7700) {
            uVar1 = ExecuteCommand7600To7699(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        if ((int)scriptOp_00 < 7900) {
            uVar1 = ExecuteCommand7800To7899(scriptOp_00, clientScript, arg3);
            return uVar1;
        }
        uVar1 = 2;
        if ((int)scriptOp_00 < 8100) {
            uVar1 = ExecuteCommand8000To8099(scriptOp_00, clientScript, arg3);
        }
        return uVar1;
    }

    // 0x100194ff0
    uint8_t* ScriptRunnerImpl::SafeGetComponent(int arg1, bool arg2, bool arg3) {
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            return field_140856 + (unsigned long)arg3 * 16 - 352;
        }
        if (arg1 == -1) {
            return &rs2lib::NULL_IFTYPE;
        }
        return (uint8_t*)rs2lib::IfType::Get(arg1);
    }

    // 0x100195030
    unsigned long ScriptRunnerImpl::PopValueOfType(const game::BaseVarType* baseVarType, game::VarValue& varValue) {
        Logger* this_00;
        int* arg1;
        unsigned long uVar1;
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        if (baseVarType == nullptr) {
            this_00 = logger::default_logger();
            uVar1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                         "ScriptRunnerImpl.cpp",
                         971, "Could not pop value - no BaseVarType provided.");
        } else {
            if (game::BaseVarType::INTEGER == baseVarType) {
                uVar1 = (long)field_104092 - 1;
                field_104092 = (int)uVar1;
                arg1 = &field_100092[uVar1];
                varValue.Set<int&>(*arg1);
            } else {
                if (game::BaseVarType::STRING != baseVarType) {
                    logger::default_logger();
                    (*baseVarType->_vptr[1]._dtor)(baseVarType);
                }
                uVar1 = (long)field_136096 - 1;
                field_136096 = (int)uVar1;
                field_104096[uVar1];
                baseVarType = (BaseVarType*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::destruct<highlight::NpcUID*>(&local_30);
                local_48 = eastl::basic_string<char, BucketAllocatorEASTL>(baseVarType, &local_30);
                varValue.Set<eastl::basic_string<char, BucketAllocatorEASTL>>(local_48);
            }
            uVar1 = (((uint64_t)((int64_t)((unsigned long)baseVarType >> 8)) << 8) | (uint8_t)1);
        }
        return uVar1 & 4294967295;
    }

    // 0x100195790
    void ScriptRunnerImpl::CcIfSetOpOptKey(const shared_ptr<rs2lib::IfType>& ifType, int arg2,
                                           Array<unsigned char>&& arg3, Array<unsigned char>&& arg4) {
        bool cVar2;
        ServerKeyData* serverKeyData;
        unsigned long arg1;
        uint32_t in_register_00000034;

        void* arg2_00 = (void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        long lVar3 = ifType.operator->();
        if (((lVar3 + 696)) == arg2_00) {
            cVar2 = arg3.empty();
            if (cVar2) {
                return;
            }
            lVar3 = ifType.operator->();
            serverKeyData = (ServerKeyData*)operator new(616);
            ___bzero(serverKeyData, 616);
            new (serverKeyData) rs2lib::IfType::ServerKeyData();
            ((lVar3 + 696))->reset(serverKeyData);
        }
        lVar3 = ifType.operator->();
        array<Array<unsigned char>, 11ul>* paVar4 = (array<Array<unsigned char>, 11ul>*)(*((lVar3 + 696))).operator->();
        Array<unsigned char>* pAVar5 = (Array<unsigned char>*)(*paVar4)[(long)arg2];
        *pAVar5 = arg3;
        cVar2 = arg3.empty();
        lVar3 = ifType.operator->();
        uint8_t* puVar6 = (uint8_t*)(lVar3 + 688);
        if (!cVar2) {
        LAB_1001958b9:
            *puVar6 = 1;
        } else {
            *puVar6 = 0;
            ifType.operator->();
            arg1 = 0;
            do {
                lVar3 = ifType.operator->();
                paVar4 = (array<Array<unsigned char>, 11ul>*)(*((lVar3 + 696))).operator->();
                cVar2 = ((Array<game::VarValue>*)(*paVar4)[arg1])->empty();
                lVar3 = ifType.operator->();
                if (!cVar2) {
                    puVar6 = (uint8_t*)(lVar3 + 688);
                    goto LAB_1001958b9;
                }
                arg1 = arg1 + 1;
            } while (arg1 != 11);
        }
        lVar3 = ifType.operator->();
        lVar3 = (*((lVar3 + 696))).operator->();
        pAVar5 = (Array<unsigned char>*)(*((lVar3 + 264)))[(long)arg2];
        *pAVar5 = arg4;
    }

    // 0x100195920
    void ScriptRunnerImpl::CcIfSetOpOptKeyRate(const shared_ptr<rs2lib::IfType>& ifType, int arg2, int arg3, int arg4,
                                               ErrorCapture& errorCapture) {
        int* piVar2;
        uint32_t in_register_00000034;

        void* arg2_00 = (void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        long lVar1 = ifType.operator->();
        if (((lVar1 + 696)) == arg2_00) {
            errorCapture.Raise(1);
        } else {
            lVar1 = ifType.operator->();
            lVar1 = (*((lVar1 + 696))).operator->();
            piVar2 = (int*)(*((lVar1 + 528)))[(long)arg2];
            *piVar2 = arg3;
            lVar1 = ifType.operator->();
            lVar1 = (*((lVar1 + 696))).operator->();
            piVar2 = (int*)(*((lVar1 + 572)))[(long)arg2];
            *piVar2 = arg4;
        }
    }

    // 0x1001959c0
    void ScriptRunnerImpl::CcIfSetOpOptKeyIgnoreHeld(const shared_ptr<rs2lib::IfType>& ifType, int arg2,
                                                     ErrorCapture& errorCapture) {
        uint32_t* puVar2;
        uint32_t in_register_00000034;

        void* arg2_00 = (void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        long lVar1 = ifType.operator->();
        if (((lVar1 + 696)) == arg2_00) {
            errorCapture.Raise(1);
        } else {
            lVar1 = ifType.operator->();
            puVar2 = (uint32_t*)(*((lVar1 + 2056)))[(long)arg2];
            *puVar2 = 2147483647;
        }
    }

    // 0x1001a38e0
    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::~$_3() {}

    // 0x1001a38f0
    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::~$_4() {}

    // 0x1001b4500
    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::$_3($_3&& arg1) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(arg1);
    }

    // 0x1001b47d0
    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::$_3(const $_3& arg1)
        : shared_ptr(arg1) {}

    // 0x1001b4a40
    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::operator()() const {
        uint8_t local_90[128];

        IfType* pIVar2 = (IfType*)(*this).operator->();
        auto pIVar3 = pIVar2->GetInputFieldWrapper();
        if (pIVar3[5].field_56.empty() == '\0') {
            new (local_90) HookReq();
            (*((local_90 + 32))) = *this;
            pIVar2 = (IfType*)(*this).operator->();
            pIVar3 = pIVar2->GetInputFieldWrapper();
            *local_90 = pIVar3[5].field_56;
            Client::Instance()->GetHookQueue()->push_back(*local_90);
        }
    }

    // 0x1001b5340
    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::$_4($_4&& arg1) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(arg1);
    }

    // 0x1001b5610
    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::$_4(const $_4& arg1)
        : shared_ptr(arg1) {}

    // 0x1001b5880
    void ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::operator()() const {
        uint8_t local_90[128];

        IfType* pIVar2 = (IfType*)(*this).operator->();
        auto pIVar3 = pIVar2->GetInputFieldWrapper();
        if (pIVar3[5].field_8.empty() == '\0') {
            new (local_90) HookReq();
            (*((local_90 + 32))) = *this;
            pIVar2 = (IfType*)(*this).operator->();
            pIVar3 = pIVar2->GetInputFieldWrapper();
            *local_90 = pIVar3[5].field_8;
            Client::Instance()->GetHookQueue()->push_back(*local_90);
        }
    }

} // namespace jag::oldscape
