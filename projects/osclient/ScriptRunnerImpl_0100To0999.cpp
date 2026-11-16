// projects/osclient/ScriptRunnerImpl_0100To0999.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100191900, 2544 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand100To999(undefined4 param_2, undefined8 param_3, uint param_4) {
        uint uVar1;
        undefined4 uVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        Client* pCVar6;
        long lVar7;
        undefined4* puVar8;
        uint* puVar9;
        shared_ptr* psVar10;
        EntityOverlays* pEVar11;
        int* piVar12;
        shared_ptr* psVar13;
        long lVar14;
        IfType* pIVar15;
        InputField* pIVar16;
        undefined1* puVar17;
        shared_ptr<rs2lib::IfType>* psVar18;
        ulong uVar19;
        undefined8 uVar20;
        shared_ptr in_stack_fffffffffffffef8;
        shared_ptr<dash3d::Decor> asStack_f6[6];
        __3 local_f0;
        __4 local_e0;
        Client* local_d0;
        ulong local_c8;
        uint local_bc;
        shared_ptr* local_b8;
        shared_ptr local_b0;
        uint local_9c;
        function<void()> local_98[48];
        function<void()> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar6 = (Client*)Client::Instance();
        switch (param_2) {
        case 100:
            lVar14 = (long)field_104092;
            field_104092 = (int)(lVar14 - 3U);
            puVar17 = &field_100092;
            local_9c = param_4;
            puVar9 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, lVar14 - 3U);
            local_bc = *puVar9;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, lVar14 - 2);
            iVar5 = *piVar12;
            puVar9 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, lVar14 - 1);
            if (iVar5 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_0100To0999.cpp",
                                25, "Dynamic layers aren\'t allowed");
            }
            uVar1 = *puVar9;
            uVar19 = (ulong)(int)uVar1;
            local_d0 = pCVar6;
            local_b8 = (shared_ptr*)rs2lib::IfType::Get(local_bc);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_b8);
            iVar4 = ((lVar14 + 2000))->end();
            local_c8 = uVar19;
            if ((int)(uVar19 + 1) != iVar4) {
                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_b8);
                ((lVar14 + 2000))->set_max_size(uVar19 + 1, 3);
            }
            if (0 < (int)uVar1) {
                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_b8);
                psVar13 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar14 + 2000), (ulong)(uVar1 - 1));
                bVar3 = operator==(psVar13, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_0100To0999.cpp",
                                    41, "Creating component %d would leave a gap in IfType %d", (ulong)uVar1,
                                    (ulong)local_bc);
                }
            }
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_b8);
            make_shared<rs2lib::IfType, int const&>((jag*)&local_b0, (int*)(lVar14 + 4));
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            pCVar6 = local_d0;
            *(int*)(lVar14 + 12) = iVar5;
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_b8);
            uVar2 = *(undefined4*)(lVar14 + 4);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *(undefined4*)(lVar14 + 88) = uVar2;
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *(uint*)(lVar14 + 8) = uVar1;
            puVar17 = (undefined1*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *puVar17 = 1;
            if (iVar5 == 12) {
                pIVar15 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
                pIVar15->InitialiseInputField();
                pIVar15 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
                pIVar16 = (InputField*)pIVar15->GetInputField();
                new (&local_f0) shared_ptr<dash3d::Decor>(&local_b0);
                std::function<void()>::function<
                    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::__3, void>(
                    local_68, &local_f0);
                pIVar16->SetCallbackOnSelectionChanged(local_68);
                std::function<void()>::~function(local_68);
                ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_3::~__3(&local_f0);
                pIVar15 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
                pIVar16 = (InputField*)pIVar15->GetInputField();
                new (&local_e0) shared_ptr<dash3d::Decor>(&local_b0);
                std::function<void()>::function<
                    ScriptRunnerImpl::ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::__4, void>(
                    local_98, &local_e0);
                pIVar16->SetCallbackOnTextChanged(local_98);
                std::function<void()>::~function(local_98);
                ExecuteCommand100To999(ScriptOp, ClientScript_const&, bool)::$_4::~__4(&local_e0);
            }
            shared_ptr<rs2lib::IfType>::operator=(
                (shared_ptr<rs2lib::IfType>*)(field_140504 + (ulong)(byte)local_9c * 16), &local_b0);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)local_b8);
            psVar18 = (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar14 + 2000), local_c8);
            shared_ptr<rs2lib::IfType>::operator=(psVar18, &local_b0);
            pCVar6->ComponentUpdated(local_b8);
            goto LAB_1001921c6;
        case 101:
            shared_ptr<dash3d::Decor>::shared_ptr(asStack_f6 + -10,
                                                  (shared_ptr*)(field_140504 + ((ulong)param_4 & 255) * 16));
            psVar13 = (shared_ptr*)pCVar6->GetParentInterface(in_stack_fffffffffffffef8);
            ((asStack_f6 + -10))->~shared_ptr();
            new (&local_b0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
            lVar7 = shared_ptr<rs2lib::IfType>::operator->(
                (shared_ptr<rs2lib::IfType>*)(field_140504 + ((ulong)param_4 & 255) * 16));
            psVar18 = (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar14 + 2000), (long)*(int*)(lVar7 + 8));
            shared_ptr<rs2lib::IfType>::operator=(psVar18, &local_b0);
            local_b0.~shared_ptr();
            pCVar6->ComponentUpdated(psVar13);
            break;
        case 102:
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
            psVar13 = (shared_ptr*)rs2lib::IfType::Get(*piVar12);
            goto LAB_100191d3c;
        case 103:
            lVar14 = (long)field_104092;
            field_104092 = (int)(lVar14 - 3U);
            puVar17 = &field_100092;
            local_9c = param_4;
            puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, lVar14 - 3U);
            local_b8 = (shared_ptr*)CONCAT44(local_b8._4_4_, *puVar8);
            puVar9 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, lVar14 - 2);
            uVar1 = *puVar9;
            puVar9 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, lVar14 - 1);
            local_bc = uVar1;
            if (uVar1 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "ScriptRunnerImpl_0100To0999.cpp",
                                112, "Dynamic layers aren\'t allowed");
            }
            uVar1 = *puVar9;
            uVar19 = (ulong)(int)uVar1;
            local_d0 = pCVar6;
            pEVar11 = (EntityOverlays*)pCVar6->GetEntityOverlays();
            psVar13 = (shared_ptr*)pEVar11->GetLayer((int)local_b8);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
            iVar5 = ((lVar14 + 2000))->end();
            local_c8 = uVar19;
            if ((int)(uVar19 + 1) != iVar5) {
                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
                ((lVar14 + 2000))->set_max_size(uVar19 + 1, 3);
            }
            if (0 < (int)uVar1) {
                lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
                psVar10 = (shared_ptr*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                    (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar14 + 2000), (ulong)(uVar1 - 1));
                bVar3 = operator==(psVar10, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/ScriptRunnerImpl_0100To0999.cpp",
                                    128, "Creating component %d would leave a gap in entity overlay %d", (ulong)uVar1,
                                    (ulong)local_b8 & 4294967295);
                }
            }
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
            make_shared<rs2lib::IfType, int const&>((jag*)&local_b0, (int*)(lVar14 + 4));
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *(uint*)(lVar14 + 12) = local_bc;
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
            uVar2 = *(undefined4*)(lVar14 + 4);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *(undefined4*)(lVar14 + 88) = uVar2;
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *(uint*)(lVar14 + 8) = uVar1;
            puVar17 = (undefined1*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *puVar17 = 1;
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)&local_b0);
            *(undefined1*)(lVar14 + 24) = 1;
            shared_ptr<rs2lib::IfType>::operator=(
                (shared_ptr<rs2lib::IfType>*)(field_140504 + (ulong)(byte)local_9c * 16), &local_b0);
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
            psVar18 = (shared_ptr<rs2lib::IfType>*)Array<shared_ptr<rs2lib::IfType>, eastl::allocator>::operator[](
                (Array<shared_ptr<rs2lib::IfType>, eastl::allocator>*)(lVar14 + 2000), local_c8);
            shared_ptr<rs2lib::IfType>::operator=(psVar18, &local_b0);
            local_d0->ComponentUpdated(psVar13);
        LAB_1001921c6:
            local_b0.~shared_ptr();
            break;
        case 104:
            pEVar11 = (EntityOverlays*)pCVar6->GetEntityOverlays();
            uVar19 = (long)field_104092 - 1;
            field_104092 = (int)uVar19;
            piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
            psVar13 = (shared_ptr*)pEVar11->GetLayer(*piVar12);
        LAB_100191d3c:
            lVar14 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
            ((lVar14 + 2000))->clear();
            pCVar6->ComponentUpdated(psVar13);
            break;
        default:
            switch (param_2) {
            case 200:
                iVar5 = field_104092;
                uVar19 = (long)iVar5 - 2;
                field_104092 = (int)uVar19;
                puVar17 = &field_100092;
                local_9c = param_4;
                piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, uVar19);
                iVar4 = *piVar12;
                piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, (long)iVar5 - 1);
                iVar5 = *piVar12;
                psVar13 = (shared_ptr*)rs2lib::IfType::Get(iVar4, iVar5);
                bVar3 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                iVar4 = field_104092;
                field_104092 = iVar4 + 1;
                puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, (long)iVar4);
                if ((bVar3) && (iVar5 != -1)) {
                LAB_100191e2f:
                    *puVar8 = 1;
                    shared_ptr<rs2lib::IfType>::operator=(
                        (shared_ptr<rs2lib::IfType>*)(field_140504 + (ulong)(byte)local_9c * 16), psVar13);
                    goto LAB_1001921d2;
                }
                break;
            case 201:
                uVar19 = (long)field_104092 - 1;
                field_104092 = (int)uVar19;
                local_9c = param_4;
                piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
                psVar13 = (shared_ptr*)rs2lib::IfType::Get(*piVar12);
                bVar3 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                iVar5 = field_104092;
                field_104092 = iVar5 + 1;
                puVar8 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar5);
                if (bVar3)
                    goto LAB_100191e2f;
                break;
            case 202:
                local_9c = param_4;
                pEVar11 = (EntityOverlays*)pCVar6->GetEntityOverlays();
                uVar19 = (long)field_104092 - 1;
                field_104092 = (int)uVar19;
                piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, uVar19);
                psVar13 = (shared_ptr*)pEVar11->GetLayer(*piVar12);
                bVar3 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                iVar5 = field_104092;
                field_104092 = iVar5 + 1;
                puVar8 =
                    (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)&field_100092, (long)iVar5);
                if (bVar3)
                    goto LAB_100191e2f;
                break;
            case 203:
                iVar5 = field_104092;
                uVar19 = (long)iVar5 - 2;
                field_104092 = (int)uVar19;
                puVar17 = &field_100092;
                local_9c = param_4;
                piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, uVar19);
                iVar4 = *piVar12;
                piVar12 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, (long)iVar5 - 1);
                iVar5 = *piVar12;
                pEVar11 = (EntityOverlays*)pCVar6->GetEntityOverlays();
                psVar13 = (shared_ptr*)pEVar11->GetLayer(iVar4);
                bVar3 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    pIVar15 = (IfType*)shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)psVar13);
                    psVar13 = (shared_ptr*)pIVar15->GetCC(iVar5);
                    bVar3 = operator!=(psVar13, (_func_decltype_nullptr*)0);
                    if (bVar3) {
                        iVar5 = field_104092;
                        field_104092 = iVar5 + 1;
                        puVar8 =
                            (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, (long)iVar5);
                        *puVar8 = 1;
                        shared_ptr<rs2lib::IfType>::operator=(
                            (shared_ptr<rs2lib::IfType>*)(field_140504 + (ulong)(byte)local_9c * 16), psVar13);
                        goto LAB_1001921d2;
                    }
                }
                iVar5 = field_104092;
                field_104092 = iVar5 + 1;
                puVar8 = (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)puVar17, (long)iVar5);
                break;
            default:
                uVar20 = 2;
                goto LAB_1001921d8;
            }
            *puVar8 = 0;
        }
    LAB_1001921d2:
        uVar20 = 1;
    LAB_1001921d8:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar20;
    }

} // namespace jag::oldscape
