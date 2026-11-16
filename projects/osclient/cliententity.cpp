// projects/osclient/cliententity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "cliententity.h"
#include "libs/ui/components/Component.h"

namespace jag::oldscape {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientEntity::IsClientNPC();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientEntity::IsClientLocAnim() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientEntity::IsLit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientEntity::IsUnlit() const;

    // 0x1000b75d0, 112 bytes, placed by class name and debug map
    // ClientEntity::GetScriptedOverlayIndex(int)
    undefined4 ClientEntity::GetScriptedOverlayIndex(int param_1) {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_38[8];
        eastl local_30[12];
        int local_24;

        local_24 = param_1;
        eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>,
                      eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>,
                      eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::find((int*)local_30);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=(local_30, local_38, extraout_RDX);
        uVar2 = 4294967295;
        if (bVar1) {
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_30);
            uVar2 = *(undefined4*)(lVar3 + 8);
        }
        return uVar2;
    }

    // 0x1000b7640, 48 bytes, placed by class name and debug map
    // ClientEntity::SetScriptedOverlay(int, int)
    void ClientEntity::SetScriptedOverlay(int param_1, int param_2) {
        long* plVar1;
        int local_14;

        plVar1 = (long*)eastl::map<int, unsigned long, eastl::less<int>,
                                   eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((map<int, unsigned long, eastl::less<int>,
                        eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)&field_568,
                   &local_14);
        *plVar1 = (long)param_2;
    }

    // 0x1000b7770, 48 bytes, placed by class name
    // ClientEntity::RemoveScriptedOverlay(int)
    void ClientEntity::RemoveScriptedOverlay(int param_1) {
        undefined4 in_register_0000003c;

        eastl::map<int, unsigned long, eastl::less<int>,
                   eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
            erase((int*)(CONCAT44(in_register_0000003c, param_1) + 568));
    }

    // 0x1000f87b0, 32 bytes, placed by class name
    // ClientEntity::AbortRoute()
    void ClientEntity::AbortRoute() {
        field_440 = 0;
        *(undefined4*)((long)&field_536 + 4) = 0;
    }

    // 0x1000f9460, 48 bytes, placed by class name
    // ClientEntity::ClearPendingFacing()
    void ClientEntity::ClearPendingFacing() {
        field_352 = 0;
        field_336 = 4294967295;
        (&field_340)->Unset();
    }

    // 0x10010d270, 192 bytes, placed by class name
    // ClientEntity::GetScriptedOverlays()
    ClientEntity* ClientEntity::GetScriptedOverlays() {
        ulong uVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* phVar4;
        hashtable_iterator_base* extraout_RDX_00;
        long in_RSI;
        eastl local_40[8];
        hashtable_iterator_base local_38[8];
        ulong local_30;

        eastl::vector<unsigned long, BucketAllocatorEASTL>::vector();
        uVar2 = ((in_RSI + 568))->capacity();
        reserve(uVar2);
        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        phVar4 = extraout_RDX;
        while (true) {
            if (!eastl::operator!=(local_40, local_38, phVar4))
                break;
            lVar3 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            local_30 = *(ulong*)(lVar3 + 8);
            push_back(&local_30);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator++(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_40);
            phVar4 = extraout_RDX_00;
        }
        return this;
    }

    // 0x100110fa0, 112 bytes, placed by class name
    // ClientEntity::HasHitmark(int) const
    ulong ClientEntity::HasHitmark(int param_1) {
        int* piVar1;
        ulong uVar2;
        undefined8 unaff_R12;
        ulong uVar3;

        piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)field_244, 0);
        uVar3 = CONCAT71((int7)((ulong)unaff_R12 >> 8), 1);
        if (*piVar1 <= param_1) {
            uVar2 = 1;
            do {
                uVar3 = CONCAT71((int7)(uVar3 >> 8), uVar2 - 1 < 3);
                if (uVar2 == 4)
                    break;
                piVar1 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)field_244, uVar2);
                uVar2 = uVar2 + 1;
            } while (*piVar1 <= param_1);
        }
        return uVar3 & 4294967295;
    }

    // 0x100113d30, 128 bytes, placed by class name
    // ClientEntity::AddSpotAnim(int, int, int, int, int)
    void ClientEntity::AddSpotAnim(int param_1, int param_2, int param_3, int param_4, int param_5) {
        undefined8* puVar1;
        SpotAnimClient local_28;

        local_28._20_4_ = param_1;
        if ((param_2 == 65535) || (param_2 == -1)) {
            (&field_952, (int*)&local_28.field_20)->erase();
        } else {
            new (&local_28) SpotAnimClient(param_2, param_3, param_5 + param_4, -(uint)(0 < param_4));
            puVar1 = (undefined8*)eastl::vector_map<int, SpotAnimClient, eastl::less<int>, eastl::allocator,
                                                    eastl::vector<eastl::pair<int, SpotAnimClient>, eastl::allocator>>::
            operator[]((vector_map<int, SpotAnimClient, eastl::less<int>, eastl::allocator,
                                   eastl::vector<eastl::pair<int, SpotAnimClient>, eastl::allocator>>*)&field_952,
                       (int*)&local_28.field_20);
            *puVar1 = local_28._0_8_;
            puVar1[1] = local_28._8_8_;
            *(int*)(puVar1 + 2) = local_28.field_16;
        }
    }

    // 0x100119fe0, 640 bytes, placed by class name
    // ClientEntity::AddHitmark(int, int, int, int, int, int)
    void ClientEntity::AddHitmark(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        undefined1* this_00;
        int* piVar2;
        long lVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        ulong uVar7;
        array<int, 4ul>* paVar8;
        int iVar9;
        int iVar10;
        bool bVar11;
        char cVar12;
        uint uVar13;
        bool bVar14;
        shared_ptr<configdecoder::HitmarkType> local_78[16];
        array<int, 4ul>* local_68;
        int local_54;
        array<int, 4ul>* local_50;

        this_00 = field_244;
        bVar14 = true;
        uVar7 = 0;
        bVar11 = true;
        do {
            piVar2 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)this_00, uVar7);
            iVar6 = param_5;
            if (*piVar2 <= param_5) {
                bVar11 = false;
            }
            if (param_5 < *piVar2) {
                bVar14 = false;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 4);
        local_50 = (array<int, 4ul>*)this_00;
        if (param_1 < 0) {
            iVar4 = 0;
            iVar9 = -1;
        } else {
            local_78->List(param_1);
            lVar3 = shared_ptr<configdecoder::HitmarkType>::operator->(local_78);
            iVar9 = *(int*)(lVar3 + 80);
            lVar3 = shared_ptr<configdecoder::HitmarkType>::operator->(local_78);
            iVar4 = *(int*)(lVar3 + 12);
            local_78->~shared_ptr();
        }
        local_54 = iVar4;
        if (!bVar11) {
            if (bVar14) {
                ((ClientEntity*)this)->field_208 = 0;
            }
            uVar13 = (uint)(byte)((ClientEntity*)this)->field_208;
            iVar9 = 3;
            do {
                cVar12 = (char)uVar13;
                iVar5 = (int)cVar12;
                uVar13 = iVar5 + 4;
                if (-1 < (int)(iVar5 + 1U)) {
                    uVar13 = iVar5 + 1U;
                }
                uVar13 = (iVar5 - (uVar13 & 252)) + 1;
                piVar2 = (int*)std::array<int, 4ul>::operator[](local_50, (long)cVar12);
                bVar14 = iVar9 != 0;
                iVar9 = iVar9 + -1;
            } while ((iVar6 < *piVar2) && (iVar5 = -1, bVar14));
            ((ClientEntity*)this)->field_208 = (char)uVar13;
            goto LAB_10011a11b;
        }
        if (iVar9 == -1) {
            return;
        }
        paVar8 = local_50;
        if (iVar9 == 0) {
        LAB_10011a1c0:
            piVar2 = (int*)std::array<int, 4ul>::operator[](paVar8, 0);
            iVar4 = *piVar2;
        } else {
            iVar4 = 0;
            if (iVar9 == 1) {
                paVar8 = (array<int, 4ul>*)((ClientEntity*)this)->field_228;
                goto LAB_10011a1c0;
            }
        }
        local_68 = (array<int, 4ul>*)((ClientEntity*)this)->field_228;
        iVar5 = 0;
        uVar7 = 1;
        iVar10 = iVar5;
        do {
            if (iVar9 == 0) {
                paVar8 = local_50;
            LAB_10011a1f4:
                piVar2 = (int*)std::array<int, 4ul>::operator[](paVar8, uVar7);
                iVar5 = iVar10;
                if (*piVar2 < iVar4) {
                    iVar5 = (int)uVar7;
                    iVar4 = *piVar2;
                    iVar10 = (int)uVar7;
                }
            } else if (iVar9 == 1) {
                paVar8 = local_68;
                goto LAB_10011a1f4;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 != 4);
        if ((iVar9 == 1) && (param_2 <= iVar4)) {
            return;
        }
    LAB_10011a11b:
        if (-1 < iVar5) {
            uVar7 = (ulong)iVar5;
            piVar2 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)((ClientEntity*)this)->field_212, uVar7);
            *piVar2 = param_1;
            piVar2 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)((ClientEntity*)this)->field_228, uVar7);
            *piVar2 = param_2;
            piVar2 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)((ClientEntity*)this)->field_260, uVar7);
            *piVar2 = param_3;
            piVar2 = (int*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)((ClientEntity*)this)->field_276, uVar7);
            *piVar2 = param_4;
            iVar6 = param_6 + iVar6 + local_54;
            piVar2 = (int*)std::array<int, 4ul>::operator[](local_50, uVar7);
            *piVar2 = iVar6;
        }
    }

    // 0x10011a260, 656 bytes, placed by class name
    // ClientEntity::AddHeadbar(int, int, int, int, int, int)
    void ClientEntity::AddHeadbar(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        list<console::Line, eastl::allocator>* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>* this_01;
        bool bVar4;
        long lVar5;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        HeadbarQueue* pHVar6;
        int* piVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        uint uVar8;
        undefined8 local_a0;
        undefined8 local_98;
        list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>* local_90;
        undefined1 local_88[24];
        list<console::Line, eastl::allocator> local_70[12];
        uint local_64;
        list<console::Line, eastl::allocator> local_60[8];
        list<console::Line, eastl::allocator> local_58[8];
        shared_ptr local_50;
        int local_40;
        int local_34;

        local_88->List((long)param_1);
        eastl::list<console::Line, eastl::allocator>::end(local_60);
        eastl::list<console::Line, eastl::allocator>::end(local_58);
        lVar5 = shared_ptr<configdecoder::HeadbarType>::operator->((shared_ptr<configdecoder::HeadbarType>*)local_88);
        local_40 = *(int*)(lVar5 + 12);
        this_00 = (list<console::Line, eastl::allocator>*)(local_88 + 16);
        eastl::list<console::Line, eastl::allocator>::begin(this_00);
        local_34 = param_4 + param_2;
        uVar8 = 0;
        local_90 = (list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>*)&field_296;
        do {
            this_01 = local_90;
            local_50.end();
            bVar4 = eastl::operator!=((eastl*)this_00, (hashtable_iterator_base*)&local_50, extraout_RDX);
            if (!bVar4) {
                local_50.end();
                bVar4 = eastl::operator==((eastl*)local_58, (hashtable_iterator_base*)&local_50, extraout_RDX_00);
                if ((!bVar4) || (uVar8 < 4)) {
                    make_shared<configdecoder::HeadbarQueue, shared_ptr<configdecoder::HeadbarType>&>(
                        (jag*)&local_50, (shared_ptr*)local_88);
                    eastl::list<console::Line, eastl::allocator>::end(local_70);
                    bVar4 = eastl::operator==((eastl*)local_60, (hashtable_iterator_base*)local_70, extraout_RDX_01);
                    if (bVar4) {
                        eastl::list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>::push_front(this_01,
                                                                                                           &local_50);
                    } else {
                        new (&local_a0) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const&>(local_60);
                        eastl::list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>::insert(
                            local_70, this_01, local_a0, &local_50);
                    }
                    iVar1 = local_34;
                    pHVar6 = (HeadbarQueue*)shared_ptr<configdecoder::HeadbarQueue>::operator->(
                        (shared_ptr<configdecoder::HeadbarQueue>*)&local_50);
                    pHVar6->EventAdd(iVar1, param_5, param_6, param_3);
                    if (3 < uVar8) {
                        new (&local_98) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                            shared_ptr<rs2lib::worldmap::MapElement> const&>(local_58);
                        eastl::list<shared_ptr<ClientObj>, eastl::allocator>::erase(local_70, this_01, local_98);
                    }
                    local_50.~shared_ptr();
                }
                break;
            }
            local_64 = uVar8;
            this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)this_00);
            pHVar6 = (HeadbarQueue*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            piVar7 = (int*)shared_ptr<configdecoder::HeadbarType>::operator->(
                (shared_ptr<configdecoder::HeadbarType>*)local_88);
            iVar1 = *piVar7;
            piVar7 = (int*)shared_ptr<configdecoder::HeadbarType>::operator->(
                (shared_ptr<configdecoder::HeadbarType>*)pHVar6);
            iVar2 = *piVar7;
            if (iVar1 == iVar2) {
                pHVar6->EventAdd(local_34, param_5, param_6, param_3);
            } else {
                lVar5 =
                    shared_ptr<configdecoder::HeadbarType>::operator->((shared_ptr<configdecoder::HeadbarType>*)pHVar6);
                iVar3 = *(int*)(lVar5 + 8);
                lVar5 = shared_ptr<configdecoder::HeadbarType>::operator->(
                    (shared_ptr<configdecoder::HeadbarType>*)local_88);
                if (iVar3 <= *(int*)(lVar5 + 8)) {
                    local_60[0] = (list<console::Line, eastl::allocator>)local_88[16];
                    local_60[1] = (list<console::Line, eastl::allocator>)local_88[17];
                    local_60[2] = (list<console::Line, eastl::allocator>)local_88[18];
                    local_60[3] = (list<console::Line, eastl::allocator>)local_88[19];
                    local_60[4] = (list<console::Line, eastl::allocator>)local_88[20];
                    local_60[5] = (list<console::Line, eastl::allocator>)local_88[21];
                    local_60[6] = (list<console::Line, eastl::allocator>)local_88[22];
                    local_60[7] = (list<console::Line, eastl::allocator>)local_88[23];
                }
                lVar5 =
                    shared_ptr<configdecoder::HeadbarType>::operator->((shared_ptr<configdecoder::HeadbarType>*)pHVar6);
                if (local_40 < *(int*)(lVar5 + 12)) {
                    local_58[0] = (list<console::Line, eastl::allocator>)local_88[16];
                    local_58[1] = (list<console::Line, eastl::allocator>)local_88[17];
                    local_58[2] = (list<console::Line, eastl::allocator>)local_88[18];
                    local_58[3] = (list<console::Line, eastl::allocator>)local_88[19];
                    local_58[4] = (list<console::Line, eastl::allocator>)local_88[20];
                    local_58[5] = (list<console::Line, eastl::allocator>)local_88[21];
                    local_58[6] = (list<console::Line, eastl::allocator>)local_88[22];
                    local_58[7] = (list<console::Line, eastl::allocator>)local_88[23];
                    lVar5 = shared_ptr<configdecoder::HeadbarType>::operator->(
                        (shared_ptr<configdecoder::HeadbarType>*)pHVar6);
                    local_40 = *(int*)(lVar5 + 12);
                }
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)this_00);
            }
            uVar8 = local_64 + 1;
        } while (iVar1 != iVar2);
        local_88->~shared_ptr();
    }

    // 0x10011a4f0, 96 bytes, placed by class name
    // ClientEntity::ClearHeadbar(int)
    void ClientEntity::ClearHeadbar(int param_1) {
        shared_ptr<RSevenDebugPresetProvider> local_28[16];

        local_28->List((long)param_1);
        eastl::list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>::remove_if<ClientEntity::ClearHeadbar(
            int)::__23>((list<shared_ptr<configdecoder::HeadbarQueue>, eastl::allocator>*)&field_296,
                        (HeadbarType*)local_28);
        local_28->~shared_ptr();
    }

    // 0x10011c0d0, 16 bytes, placed by class name
    // ClientEntity::Ready() const
    undefined8 ClientEntity::Ready() {
        return 0;
    }

    // 0x10011c880, 256 bytes, placed by class name
    // ClientEntity::CombineWithSpotAnim(shared_ptr<dash3d::ModelLit>&)
    void ClientEntity::CombineWithSpotAnim(shared_ptr* param_1) {
        long lVar1;
        ModelAppender local_e8;
        undefined1 local_c8[160];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar1 = (&field_952)->size();
        if (lVar1 != 0) {
            new ((local_c8 + 16)) SpotAnimAppendList((vector_map*)&field_952);
            new (&local_e8) dash3d::ModelAppender(param_1, (ModelAppendList*)(local_c8 + 16));
            local_c8->Resolve();
            shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)param_1, (shared_ptr*)local_c8);
            local_c8->~shared_ptr();
            local_e8.~pair();
            ((local_c8 + 16))->~SpotAnimAppendList();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ClientEntity::~ClientEntity();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ClientEntity::~ClientEntity();

} // namespace jag::oldscape

namespace jag::ui {
    // 0x1000b7680: the linker folded this into oldscape::LocInfo::GetLevel() const, which has identical code
    ComponentSwipeConfig::GetDeadZoneVertical() const;

    // 0x1000b7690: the linker folded this into oldscape::LocInfo::GetX() const, which has identical code
    ComponentSwipeConfig::GetDeadZoneHorizontal() const;

    // 0x1000b76a0: the linker folded this into oldscape::LocInfo::GetZ() const, which has identical code
    ComponentSwipeConfig::GetDirectionMask() const;

    // 0x1000b76f0: the linker folded this into oldscape::LocInfo::GetLayer() const, which has identical code
    ComponentSwipeConfig::GetStopExponent() const;

} // namespace jag::ui
