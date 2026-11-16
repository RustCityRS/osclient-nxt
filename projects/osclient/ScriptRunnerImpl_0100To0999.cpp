// projects/osclient/ScriptRunnerImpl_0100To0999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100191900
    uint64_t ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp scriptOp, const ClientScript& clientScript, bool arg3) {
        unsigned int uVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        long lVar6;
        uint32_t* puVar7;
        unsigned int* puVar8;
        shared_ptr<configdecoder::ObjType>* psVar9;
        EntityOverlays* pEVar10;
        int* piVar11;
        shared_ptr<rs2lib::IfType>* psVar12;
        long lVar13;
        shared_ptr<midi2::MidiPlayerMainThread>* psVar14;
        IfType* pIVar15;
        InputField* pIVar16;
        uint8_t* puVar17;
        shared_ptr<rs2lib::IfType>* psVar18;
        uint64_t in_register_00000009;
        unsigned long uVar19;
        uint64_t uVar20;
        shared_ptr<dash3d::Decor> local_100;
        __3 local_f0;
        __4 local_e0;
        Client* local_d0;
        unsigned long local_c8;
        unsigned int local_bc;
        shared_ptr<rs2lib::IfType>* local_b8;
        ReturnValue local_b0;
        uint32_t local_9c;
        function<void()> local_98[48];
        function<void()> local_68[48];
        long local_38;

        auto pCVar5 = Client::Instance();
        uint32_t uVar21 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        switch (scriptOp) {
        case 100:
            lVar13 = (long)field_104092;
            field_104092 = (int)(lVar13 - 3U);
            puVar17 = &field_100092;
            local_9c = uVar21;
            puVar8 = (unsigned int*)(*puVar17)[lVar13 - 3U];
            local_bc = *puVar8;
            piVar11 = (int*)(*puVar17)[lVar13 - 2];
            iVar4 = *piVar11;
            puVar8 = (unsigned int*)(*puVar17)[lVar13 - 1];
            if (iVar4 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_0100To0999.cpp",
                                25, "Dynamic layers aren\'t allowed");
            }
            uVar1 = *puVar8;
            uVar19 = (unsigned long)(int)uVar1;
            local_d0 = pCVar5;
            local_b8 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(local_bc);
            lVar13 = (*local_b8).operator->();
            iVar3 = ((lVar13 + 2000))->end();
            local_c8 = uVar19;
            if ((int)(uVar19 + 1) != iVar3) {
                lVar13 = (*local_b8).operator->();
                ((lVar13 + 2000))->set_max_size(uVar19 + 1, 3);
            }
            if (0 < (int)uVar1) {
                lVar13 = (*local_b8).operator->();
                psVar9 = (shared_ptr<configdecoder::ObjType>*)(*((lVar13 + 2000)))[(unsigned long)(uVar1 - 1)];
                bVar2 = *psVar9 == nullptr;
                if (bVar2) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_0100To0999.cpp",
                                    41, "Creating component %d would leave a gap in IfType %d", (unsigned long)uVar1,
                                    (unsigned long)local_bc);
                }
            }
            lVar13 = (*local_b8).operator->();
            make_shared<rs2lib::IfType, int const&>(&local_b0, (int*)(lVar13 + 4));
            lVar13 = local_b0.operator->();
            pCVar5 = local_d0;
            *(int*)(lVar13 + 12) = iVar4;
            lVar13 = (*local_b8).operator->();
            uVar21 = *(uint32_t*)(lVar13 + 4);
            lVar13 = local_b0.operator->();
            *(uint32_t*)(lVar13 + 88) = uVar21;
            lVar13 = local_b0.operator->();
            *(unsigned int*)(lVar13 + 8) = uVar1;
            puVar17 = (uint8_t*)local_b0.operator->();
            *puVar17 = 1;
            if (iVar4 == 12) {
                pIVar15 = (IfType*)local_b0.operator->();
                pIVar15->InitialiseInputField();
                pIVar15 = (IfType*)local_b0.operator->();
                pIVar16 = (InputField*)pIVar15->GetInputField();
                local_f0 = shared_ptr(&local_b0);
                std::function<void()>::function<
                    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::__3, void>(
                    local_68, (__3*)&local_f0);
                pIVar16->SetCallbackOnSelectionChanged(local_68);
                ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_3::~__3(&local_f0);
                pIVar15 = (IfType*)local_b0.operator->();
                pIVar16 = (InputField*)pIVar15->GetInputField();
                local_e0 = shared_ptr(&local_b0);
                std::function<void()>::function<
                    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::__4, void>(
                    local_98, (__4*)&local_e0);
                pIVar16->SetCallbackOnTextChanged(local_98);
                ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)::$_4::~__4(&local_e0);
            }
            (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)(uint8_t)local_9c * 16 - 352))) = local_b0;
            lVar13 = (*local_b8).operator->();
            psVar12 = (shared_ptr<rs2lib::IfType>*)(*((lVar13 + 2000)))[local_c8];
            *psVar12 = local_b0;
            pCVar5->ComponentUpdated(*local_b8);
            goto LAB_1001921c6;
        case 101:
            local_100 = shared_ptr((shared_ptr<dash3d::GroundDecor>*)(field_140856 + (unsigned long)arg3 * 16 - 352));
            psVar12 = (shared_ptr<rs2lib::IfType>*)pCVar5->GetParentInterface(&local_100);
            local_b0 = shared_ptr();
            lVar13 = (*psVar12).operator->();
            lVar6 = (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)arg3 * 16 - 352))).operator->();
            psVar18 = (shared_ptr<rs2lib::IfType>*)(*((lVar13 + 2000)))[(long)*(int*)(lVar6 + 8)];
            *psVar18 = local_b0;
            pCVar5->ComponentUpdated(*psVar12);
            break;
        case 102:
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            piVar11 = &field_100092[uVar19];
            psVar12 = (shared_ptr<rs2lib::IfType>*)rs2lib::IfType::Get(*piVar11);
            goto LAB_100191d3c;
        case 103:
            lVar13 = (long)field_104092;
            field_104092 = (int)(lVar13 - 3U);
            puVar17 = &field_100092;
            local_9c = uVar21;
            puVar7 = (uint32_t*)(*puVar17)[lVar13 - 3U];
            local_b8 = (shared_ptr<rs2lib::IfType>*)(((uint64_t)local_b8._4_4_ << 32) | (uint32_t)(*puVar7));
            puVar8 = (unsigned int*)(*puVar17)[lVar13 - 2];
            uVar1 = *puVar8;
            puVar8 = (unsigned int*)(*puVar17)[lVar13 - 1];
            local_bc = uVar1;
            if (uVar1 == 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_0100To0999.cpp",
                                112, "Dynamic layers aren\'t allowed");
            }
            uVar1 = *puVar8;
            uVar19 = (unsigned long)(int)uVar1;
            local_d0 = pCVar5;
            pEVar10 = pCVar5->GetEntityOverlays();
            psVar12 = (shared_ptr<rs2lib::IfType>*)pEVar10->GetLayer((int)local_b8);
            lVar13 = (*psVar12).operator->();
            iVar4 = ((lVar13 + 2000))->end();
            local_c8 = uVar19;
            if ((int)(uVar19 + 1) != iVar4) {
                lVar13 = (*psVar12).operator->();
                ((lVar13 + 2000))->set_max_size(uVar19 + 1, 3);
            }
            if (0 < (int)uVar1) {
                lVar13 = (*psVar12).operator->();
                psVar9 = (shared_ptr<configdecoder::ObjType>*)(*((lVar13 + 2000)))[(unsigned long)(uVar1 - 1)];
                bVar2 = *psVar9 == nullptr;
                if (bVar2) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_0100To0999.cpp",
                                    128, "Creating component %d would leave a gap in entity overlay %d",
                                    (unsigned long)uVar1, (unsigned long)local_b8 & 4294967295);
                }
            }
            lVar13 = (*psVar12).operator->();
            make_shared<rs2lib::IfType, int const&>(&local_b0, (int*)(lVar13 + 4));
            lVar13 = local_b0.operator->();
            *(unsigned int*)(lVar13 + 12) = local_bc;
            lVar13 = (*psVar12).operator->();
            uVar21 = *(uint32_t*)(lVar13 + 4);
            lVar13 = local_b0.operator->();
            *(uint32_t*)(lVar13 + 88) = uVar21;
            lVar13 = local_b0.operator->();
            *(unsigned int*)(lVar13 + 8) = uVar1;
            puVar17 = (uint8_t*)local_b0.operator->();
            *puVar17 = 1;
            lVar13 = local_b0.operator->();
            *(uint8_t*)(lVar13 + 24) = 1;
            (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)(uint8_t)local_9c * 16 - 352))) = local_b0;
            lVar13 = (*psVar12).operator->();
            psVar18 = (shared_ptr<rs2lib::IfType>*)(*((lVar13 + 2000)))[local_c8];
            *psVar18 = local_b0;
            local_d0->ComponentUpdated(*psVar12);
        LAB_1001921c6:
            break;
        case 104:
            pEVar10 = pCVar5->GetEntityOverlays();
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            piVar11 = &field_100092[uVar19];
            psVar12 = (shared_ptr<rs2lib::IfType>*)pEVar10->GetLayer(*piVar11);
        LAB_100191d3c:
            lVar13 = (*psVar12).operator->();
            ((lVar13 + 2000))->clear();
            pCVar5->ComponentUpdated(*psVar12);
            break;
        default:
            switch (scriptOp) {
            case 200:
                iVar4 = field_104092;
                uVar19 = (long)iVar4 - 2;
                field_104092 = (int)uVar19;
                puVar17 = &field_100092;
                local_9c = uVar21;
                piVar11 = (int*)(*puVar17)[uVar19];
                iVar3 = *piVar11;
                piVar11 = (int*)(*puVar17)[(long)iVar4 - 1];
                iVar4 = *piVar11;
                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(iVar3, iVar4);
                bVar2 = *psVar14 != nullptr;
                iVar3 = field_104092;
                field_104092 = iVar3 + 1;
                puVar7 = (uint32_t*)(*puVar17)[(long)iVar3];
                if ((bVar2) && (iVar4 != -1)) {
                LAB_100191e2f:
                    *puVar7 = 1;
                    (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)(uint8_t)local_9c * 16 - 352))) =
                        *psVar14;
                    goto LAB_1001921d2;
                }
                break;
            case 201:
                uVar19 = (long)field_104092 - 1;
                field_104092 = (int)uVar19;
                local_9c = uVar21;
                piVar11 = &field_100092[uVar19];
                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)rs2lib::IfType::Get(*piVar11);
                bVar2 = *psVar14 != nullptr;
                iVar4 = field_104092;
                field_104092 = iVar4 + 1;
                puVar7 = &field_100092[(long)iVar4];
                if (bVar2)
                    goto LAB_100191e2f;
                break;
            case 202:
                local_9c = uVar21;
                pEVar10 = pCVar5->GetEntityOverlays();
                uVar19 = (long)field_104092 - 1;
                field_104092 = (int)uVar19;
                piVar11 = &field_100092[uVar19];
                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)pEVar10->GetLayer(*piVar11);
                bVar2 = *psVar14 != nullptr;
                iVar4 = field_104092;
                field_104092 = iVar4 + 1;
                puVar7 = &field_100092[(long)iVar4];
                if (bVar2)
                    goto LAB_100191e2f;
                break;
            case 203:
                iVar4 = field_104092;
                uVar19 = (long)iVar4 - 2;
                field_104092 = (int)uVar19;
                puVar17 = &field_100092;
                local_9c = uVar21;
                piVar11 = (int*)(*puVar17)[uVar19];
                iVar3 = *piVar11;
                piVar11 = (int*)(*puVar17)[(long)iVar4 - 1];
                iVar4 = *piVar11;
                pEVar10 = pCVar5->GetEntityOverlays();
                psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)pEVar10->GetLayer(iVar3);
                bVar2 = *psVar14 != nullptr;
                if (bVar2) {
                    pIVar15 = (IfType*)(*psVar14).operator->();
                    psVar14 = (shared_ptr<midi2::MidiPlayerMainThread>*)pIVar15->GetCC(iVar4);
                    bVar2 = *psVar14 != nullptr;
                    if (bVar2) {
                        iVar4 = field_104092;
                        field_104092 = iVar4 + 1;
                        puVar7 = (uint32_t*)(*puVar17)[(long)iVar4];
                        *puVar7 = 1;
                        (*((shared_ptr<rs2lib::IfType>*)(field_140856 + (unsigned long)(uint8_t)local_9c * 16 - 352))) =
                            *psVar14;
                        goto LAB_1001921d2;
                    }
                }
                iVar4 = field_104092;
                field_104092 = iVar4 + 1;
                puVar7 = (uint32_t*)(*puVar17)[(long)iVar4];
                break;
            default:
                uVar20 = 2;
                goto LAB_1001921d8;
            }
            *puVar7 = 0;
        }
    LAB_1001921d2:
        uVar20 = 1;
    LAB_1001921d8:
        return uVar20;
    }

} // namespace jag::oldscape
