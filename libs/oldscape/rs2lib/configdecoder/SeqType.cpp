// libs/oldscape/rs2lib/configdecoder/SeqType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "SeqType.h"

namespace jag::oldscape::configdecoder {
    // 0x10166f228, 8 bytes, __common; zero-initialised
    SeqType::m_pConfigClient;

    // 0x10166f230, 8 bytes, __common; zero-initialised
    SeqType::m_pAnims;

    // 0x10166f238, 8 bytes, __common; zero-initialised
    SeqType::m_pBases;

    // 0x10166f240, 5376 bytes, __common; zero-initialised
    SeqType::m_recentUse;

    // 0x101670740, 8256 bytes, __common; zero-initialised
    SeqType::m_framesetCache;

    // 0x101672780, 8256 bytes, __common; zero-initialised
    SeqType::m_keyFrameSetCache;

    // 0x10022b5d0, 864 bytes, placed by class name and debug map
    // SeqType::AnimateModel90(dash3d::ModelLit&, int, int, int) const
    SeqType* SeqType::AnimateModel90(ModelLit* param_1, int param_2, int param_3, int param_4) {
        bool bVar2;
        byte bVar3;
        uint uVar4;
        uint* puVar5;
        OldscapeAnimKeyFrameSet* this_00;
        long* plVar6;
        AnimFrameSet* this_01;
        undefined4 in_register_00000014;
        uint uVar7;
        undefined4 in_R9D;
        shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> local_58[20];
        shared_ptr local_40;

        plVar6 = (long*)CONCAT44(in_register_00000014, param_2);
        if (IsKeyFramed((SeqType*)param_1) == '\0') {
            puVar5 = (uint*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), (long)param_3);
            uVar7 = *puVar5;
            Get((SeqType*)local_58, (int)uVar7 >> 16);
            bVar2 = operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0);
            if (bVar2) {
                (**(code**)(*plVar6 + 80))(this, plVar6, 1, in_R9D);
            } else {
                this_01 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(
                    (shared_ptr<dash3d::AnimFrameSet>*)local_58);
                uVar7 = uVar7 & 65535;
                bVar3 = this_01->GetAnimateTransparencies(uVar7);
                (**(code**)(*plVar6 + 80))(&local_40, plVar6, bVar3 ^ 1, in_R9D);
                uVar4 = (uint)param_4 & 3;
                if (uVar4 == 1) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 144))(plVar6);
                } else if (uVar4 == 3) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 128))(plVar6);
                } else if (uVar4 == 2) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 136))(plVar6);
                }
                plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar6 + 88))(plVar6, local_58, uVar7);
                if (uVar4 == 1) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 128))(plVar6);
                } else if (uVar4 == 3) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 144))(plVar6);
                } else if (uVar4 == 2) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 136))(plVar6);
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
                local_40.~shared_ptr();
            }
            local_58->~shared_ptr();
        } else {
            GetKeyFrameSet((SeqType*)local_58, *(int*)&param_1->field_0);
            bVar2 = operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0);
            if (bVar2) {
                (**(code**)(*plVar6 + 80))(this, plVar6, 1, in_R9D);
            } else {
                this_00 =
                    (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                        local_58);
                bVar3 = this_00->GetTransAnim();
                (**(code**)(*plVar6 + 80))(&local_40, plVar6, bVar3 ^ 1, in_R9D);
                uVar7 = (uint)param_4 & 3;
                if (uVar7 == 1) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 144))(plVar6);
                } else if (uVar7 == 3) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 128))(plVar6);
                } else if (uVar7 == 2) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 136))(plVar6);
                }
                plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar6 + 96))(plVar6, local_58, param_3);
                if (uVar7 == 1) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 128))(plVar6);
                } else if (uVar7 == 3) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 144))(plVar6);
                } else if (uVar7 == 2) {
                    plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar6 + 136))(plVar6);
                }
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
                local_40.~shared_ptr();
            }
            local_58->~shared_ptr();
        }
        return this;
    }

    // 0x10022b9d0, 32 bytes, inline, placed by debug map only (low confidence)
    // IsWallShape(int)
    bool IsWallShape(int param_1) {
        return param_1 == 9 || param_1 < 4;
    }

    // 0x10022f120, 1328 bytes, placed by class name
    // SeqType::SplitAnimateModel(dash3d::ModelLit&, int, SeqType&, int)
    SeqType* SeqType::SplitAnimateModel(ModelLit* param_1, int param_2, SeqType* param_3, int param_4) {
        Array<game::VarValue, eastl::allocator>* this_00;
        uint uVar1;
        int iVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        long* plVar7;
        OldscapeAnimKeyFrameSet* pOVar8;
        shared_ptr* psVar9;
        uint* puVar10;
        undefined4 in_register_00000014;
        _func_decltype_nullptr* p_Var11;
        undefined4 in_register_00000084;
        SeqType* this_01;
        int in_R9D;
        Array<bool, eastl::allocator> local_c8[24];
        Array<bool, eastl::allocator> local_b0[24];
        shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> local_98[16];
        shared_ptr local_88;
        shared_ptr local_78;
        undefined4 local_64;
        shared_ptr local_60;
        shared_ptr local_48;
        int local_38;
        uint local_34;

        this_01 = (SeqType*)CONCAT44(in_register_00000084, param_4);
        p_Var11 = (_func_decltype_nullptr*)CONCAT44(in_register_00000014, param_2);
        (**(code**)(*(long*)p_Var11 + 80))(&local_60, p_Var11, 0, 1);
        new (&local_78) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var11);
        new (&local_88) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var11);
        cVar3 = IsKeyFramed((SeqType*)param_1);
        local_38 = in_R9D;
        if (cVar3 == '\0') {
            puVar10 = (uint*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), (long)(int)(uint)param_3);
            uVar1 = *puVar10;
            Get((SeqType*)&local_48, (int)uVar1 >> 16);
            shared_ptr<dash3d::AnimFrameSet>::operator=((shared_ptr<dash3d::AnimFrameSet>*)&local_78, &local_48);
            local_48.~shared_ptr();
            bVar4 = operator==(&local_78, (_func_decltype_nullptr*)0);
            if (bVar4) {
                AnimateModel((SeqType*)this, (ModelLit*)this_01, param_2, local_38);
                goto LAB_10022f58e;
            }
            local_34 = uVar1 & 65535;
            cVar3 = IsKeyFramed(this_01);
            iVar2 = local_38;
            if ((cVar3 == '\0') &&
                ((cVar3 = (((long)&param_1[10].field_0 + 6))->empty(), cVar3 != '\0' || (iVar2 == -1)))) {
                plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                (**(code**)(*plVar7 + 88))(plVar7, &local_78, local_34);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_60);
                goto LAB_10022f58e;
            }
            this_00 = (Array<game::VarValue, eastl::allocator>*)((long)&param_1[10].field_0 + 6);
            cVar3 = this_00->empty();
            if ((cVar3 != '\0') || (iVar2 == -1)) {
                plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                (**(code**)(*plVar7 + 88))(plVar7, &local_78, local_34);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_60);
                goto LAB_10022f58e;
            }
            local_64 = IsKeyFramed(this_01);
            if ((char)local_64 == '\0') {
                plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                (**(code**)(*plVar7 + 120))(plVar7, &local_78, local_34, this_00, 0);
            }
        LAB_10022f397:
            cVar3 = IsKeyFramed(this_01);
            if (cVar3 == '\0') {
                puVar10 = (uint*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&this_01->field_72, (long)local_38);
                uVar1 = *puVar10;
                Get((SeqType*)&local_48, (int)uVar1 >> 16);
                bVar4 = operator==(&local_48, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    AnimateModel((SeqType*)this, param_1, param_2, local_34);
                } else {
                    plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                    (**(code**)(*plVar7 + 120))(plVar7, &local_48, uVar1 & 65535,
                                                (undefined1*)((long)&param_1[10].field_0 + 6), 1);
                }
                local_48.~shared_ptr();
                if (bVar4)
                    goto LAB_10022f58e;
            } else {
                GetKeyFrameSet((SeqType*)&local_48);
                bVar4 = operator==(&local_48, (_func_decltype_nullptr*)0);
                if (bVar4) {
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_60);
                } else {
                    if (operator==(&local_88, (_func_decltype_nullptr*)0)) {
                        pOVar8 = (OldscapeAnimKeyFrameSet*)
                                     shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                                         (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)&local_48);
                        psVar9 = (shared_ptr*)pOVar8->GetBase();
                        shared_ptr<dash3d::AnimBase>::operator=((shared_ptr<dash3d::AnimBase>*)&local_88, psVar9);
                    }
                    plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                    Array<bool, eastl::allocator>::Array(local_b0, (Array*)((long)&param_1[11].field_8 + 5));
                    (**(code**)(*plVar7 + 112))(plVar7, &local_88, &local_48, local_38, local_b0, 1, 1);
                    local_b0->~Array();
                }
                local_48.~shared_ptr();
                if (bVar4)
                    goto LAB_10022f58e;
            }
            if (((char)local_64 != '\0') && (bVar4 = operator!=(&local_78, (_func_decltype_nullptr*)0), bVar4)) {
                plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                (**(code**)(*plVar7 + 120))(plVar7, &local_78, local_34, (undefined1*)((long)&param_1[10].field_0 + 6),
                                            0);
            }
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_60);
        } else {
            GetKeyFrameSet((SeqType*)&local_48);
            bVar4 = operator==(&local_48, (_func_decltype_nullptr*)0);
            if (bVar4) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_60);
            } else {
                cVar3 = IsKeyFramed(this_01);
                if ((cVar3 == '\0') || (cVar3 = (((long)&param_1[11].field_8 + 5))->empty(), cVar3 == '\0')) {
                    GetKeyFrameSet((SeqType*)local_98);
                    pOVar8 =
                        (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                            local_98);
                    psVar9 = (shared_ptr*)pOVar8->GetBase();
                    shared_ptr<dash3d::AnimBase>::operator=((shared_ptr<dash3d::AnimBase>*)&local_88, psVar9);
                    local_98->~shared_ptr();
                    plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                    Array<bool, eastl::allocator>::Array(local_c8, (Array*)((long)&param_1[11].field_8 + 5));
                    bVar5 = IsKeyFramed(this_01);
                    local_34 = (uint)param_3;
                    (**(code**)(*plVar7 + 112))(plVar7, &local_88, &local_48, (ulong)param_3 & 4294967295, local_c8, 0,
                                                bVar5 ^ 1);
                    local_c8->~Array();
                    local_48.~shared_ptr();
                    local_64 = 0;
                    goto LAB_10022f397;
                }
                plVar7 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_60);
                (**(code**)(*plVar7 + 96))(plVar7, &local_48, (ulong)param_3 & 4294967295);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_60);
            }
            local_48.~shared_ptr();
        }
    LAB_10022f58e:
        local_88.~shared_ptr();
        local_78.~shared_ptr();
        local_60.~shared_ptr();
        return (SeqType*)this;
    }

    // 0x10022f650, 464 bytes, placed by class name
    // SeqType::AnimateModel(dash3d::ModelLit&, int, int) const
    SeqType* SeqType::AnimateModel(ModelLit* param_1, int param_2, int param_3) {
        bool bVar2;
        byte bVar3;
        uint* puVar4;
        OldscapeAnimKeyFrameSet* this_00;
        long* plVar5;
        AnimFrameSet* this_01;
        undefined4 in_register_00000014;
        undefined4 in_R8D;
        uint uVar6;
        shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet> local_50[16];
        shared_ptr local_40;

        plVar5 = (long*)CONCAT44(in_register_00000014, param_2);
        if (IsKeyFramed((SeqType*)param_1) == '\0') {
            puVar4 = (uint*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), (long)param_3);
            uVar6 = *puVar4;
            Get((SeqType*)local_50, (int)uVar6 >> 16);
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                (**(code**)(*plVar5 + 80))(this, plVar5, 1, in_R8D);
            } else {
                this_01 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(
                    (shared_ptr<dash3d::AnimFrameSet>*)local_50);
                uVar6 = uVar6 & 65535;
                bVar3 = this_01->GetAnimateTransparencies(uVar6);
                (**(code**)(*plVar5 + 80))(&local_40, plVar5, bVar3 ^ 1, in_R8D);
                plVar5 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar5 + 88))(plVar5, local_50, uVar6);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
                local_40.~shared_ptr();
            }
            local_50->~shared_ptr();
        } else {
            GetKeyFrameSet((SeqType*)local_50, *(int*)&param_1->field_0);
            bVar2 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
            if (bVar2) {
                (**(code**)(*plVar5 + 80))(this, plVar5, 1, in_R8D);
            } else {
                this_00 =
                    (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                        local_50);
                bVar3 = this_00->GetTransAnim();
                (**(code**)(*plVar5 + 80))(&local_40, plVar5, bVar3 ^ 1, in_R8D);
                plVar5 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                (**(code**)(*plVar5 + 96))(plVar5, local_50, param_3);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
                local_40.~shared_ptr();
            }
            local_50->~shared_ptr();
        }
        return this;
    }

    // 0x100234870, 32 bytes, placed by class name
    // SeqType::Init(jagex3::Js5*, jagex3::Js5*, jagex3::Js5*)
    void SeqType::Init(Js5* param_1, Js5* param_2, Js5* param_3) {
        m_pConfigClient = param_1;
        m_pAnims = param_2;
        m_pBases = param_3;
    }

    // 0x100234890, 304 bytes, placed by class name
    // SeqType::List(int)
    SeqType* SeqType::List(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        SeqType* pSVar3;
        PacketJ* pPVar4;
        shared_ptr local_40;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 =
            (shared_ptr*)LRUHashCache<SeqType, 64ul, 65ul, false, unsigned long long>::Find((ulonglong*)&m_recentUse);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            m_pConfigClient->GetFile((int)&local_30, 12, (array*)(ulong)(uint)param_1);
            make_shared<SeqType>((jag*)&local_40);
            shared_ptr<SeqType>::operator=((shared_ptr<SeqType>*)this, &local_40);
            local_40.~shared_ptr();
            bVar1 = operator!=(&local_30, (_func_decltype_nullptr*)0);
            if (bVar1) {
                pSVar3 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this);
                pPVar4 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)&local_30);
                Decode(pSVar3, pPVar4);
            }
            pSVar3 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this);
            PostDecode(pSVar3);
            local_40._0_8_ = (long)param_1;
            m_recentUse.Put(this, 1, (ulonglong*)&local_40);
            local_30.~shared_ptr();
        }
        return this;
    }

    // 0x100234af0, 64 bytes, placed by class name
    // SeqType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&)
    void SeqType::Decode(PacketJ* param_1) {
        byte bVar1;

        while (true) {
            bVar1 = param_1->g1();
            if (bVar1 == 0)
                break;
            Decode(this, param_1, (uint)bVar1);
        }
    }

    // 0x100234b30, 144 bytes, placed by class name
    // SeqType::PostDecode()
    void SeqType::PostDecode() {
        char cVar1;
        byte bVar2;
        uint uVar3;

        if (field_248 == 4294967295) {
            cVar1 = (&field_176)->empty();
            uVar3 = 2;
            if (cVar1 != '\0') {
                bVar2 = (&field_200)->empty();
                uVar3 = (uint)(bVar2 ^ 1) * 2;
            }
            field_248 = uVar3;
            uVar3 = field_252;
        } else {
            uVar3 = field_252;
        }
        if (uVar3 == 4294967295) {
            cVar1 = (&field_176)->empty();
            uVar3 = 2;
            if (cVar1 != '\0') {
                bVar2 = (&field_200)->empty();
                uVar3 = (uint)(bVar2 ^ 1) * 2;
            }
            field_252 = uVar3;
        }
    }

    // 0x100234cb0, 1344 bytes, placed by class name
    // SeqType::Decode(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    void SeqType::Decode(PacketJ* param_1, int param_2) {
        byte bVar1;
        ushort uVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        long lVar6;
        undefined1* puVar7;
        ulong uVar8;
        undefined8 uVar9;
        uint* puVar10;
        int* piVar11;
        undefined4* puVar12;
        uint uVar13;
        ulong uVar14;
        undefined1* puVar15;
        uint local_78[14];
        allocator local_40[8];
        Array<int, eastl::allocator>* local_38;

        switch (param_2) {
        case 1:
            uVar2 = param_1->g2();
            local_38 = (Array<int, eastl::allocator>*)&field_120;
            uVar14 = (ulong)uVar2;
            local_38->set_max_size(uVar14, 5);
            if (uVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar10 = (uint*)Array<int, eastl::allocator>::operator[](local_38, uVar8);
                    *puVar10 = (uint)uVar2;
                    uVar8 = uVar8 + 1;
                } while (uVar14 != uVar8);
            }
            puVar15 = &field_72;
            puVar15->set_max_size(uVar14, 5);
            if (uVar14 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar10 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    *puVar10 = (uint)uVar2;
                    uVar8 = uVar8 + 1;
                } while (uVar14 != uVar8);
                uVar8 = 0;
                do {
                    iVar3 = param_1->g2();
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    iVar4 = *piVar11;
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    *piVar11 = iVar3 * 65536 + iVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar14 != uVar8);
            }
            break;
        case 2:
            uVar2 = param_1->g2();
            field_168 = (uint)uVar2;
            break;
        case 3:
            bVar1 = param_1->g1();
            uVar14 = (ulong)bVar1;
            puVar15 = &field_176;
            puVar15->set_max_size(uVar14 + 1, 5);
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    bVar1 = param_1->g1();
                    puVar10 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    *puVar10 = (uint)bVar1;
                    uVar8 = uVar8 + 1;
                } while (uVar14 != uVar8);
            }
            puVar12 =
                (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar14);
            *puVar12 = 9999999;
            break;
        case 4:
            field_224 = 1;
            break;
        case 5:
            bVar1 = param_1->g1();
            field_228 = (uint)bVar1;
            break;
        case 6:
            uVar2 = param_1->g2();
            field_232 = (uint)uVar2;
            break;
        case 7:
            uVar2 = param_1->g2();
            field_236 = (uint)uVar2;
            break;
        case 8:
            bVar1 = param_1->g1();
            field_240 = (uint)bVar1;
            field_244 = 1;
            break;
        case 9:
            bVar1 = param_1->g1();
            field_248 = (uint)bVar1;
            break;
        case 10:
            bVar1 = param_1->g1();
            field_252 = (uint)bVar1;
            break;
        case 11:
            bVar1 = param_1->g1();
            field_256 = (uint)bVar1;
            break;
        case 12:
            bVar1 = param_1->g1();
            puVar15 = &field_96;
            uVar14 = (ulong)bVar1;
            puVar15->set_max_size(uVar14, 5);
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar10 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    *puVar10 = (uint)uVar2;
                    uVar8 = uVar8 + 1;
                } while (uVar14 != uVar8);
                uVar8 = 0;
                do {
                    iVar3 = param_1->g2();
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    iVar4 = *piVar11;
                    piVar11 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar15, uVar8);
                    *piVar11 = iVar3 * 65536 + iVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar14 != uVar8);
            }
            break;
        case 13:
            bVar1 = param_1->g1();
            (&field_144, (ulong)bVar1, 5)->set_max_size();
            if (bVar1 != 0) {
                uVar14 = 0;
                do {
                    uVar5 = param_1->g3();
                    puVar12 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_144, uVar14);
                    *puVar12 = uVar5;
                    uVar14 = uVar14 + 1;
                } while (bVar1 != uVar14);
            }
            break;
        case 14:
            iVar4 = param_1->g4();
            field_0 = iVar4;
            break;
        case 15:
            uVar13 = param_1->g2();
            eastl::allocator::allocator(local_40, "EASTL hash_map");
            new (local_78)
                eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>(local_40);
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator=(
                (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_8,
                (hash_map*)local_78);
            uVar13 = uVar13 & 65535;
            local_78->~hash_map();
            if (uVar13 != 0) {
                do {
                    uVar2 = param_1->g2();
                    local_78[0] = (uint)uVar2;
                    uVar5 = param_1->g3();
                    puVar12 = (undefined4*)
                        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator,
                                        false>::operator[]((hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>,
                                                                     eastl::allocator, false>*)&field_8,
                                                           (int*)local_78);
                    *puVar12 = uVar5;
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            break;
        case 16:
            uVar2 = param_1->g2();
            m_start = (uint)uVar2;
            uVar2 = param_1->g2();
            m_end = (uint)uVar2;
            break;
        case 17:
            puVar15 = &field_200;
            puVar15->set_max_size(256, 5);
            lVar6 = puVar15->end();
            if (lVar6 != 0) {
                uVar14 = 0;
                do {
                    puVar7 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)puVar15, uVar14);
                    *puVar7 = 0;
                    uVar14 = uVar14 + 1;
                    uVar8 = puVar15->end();
                } while (uVar14 < uVar8);
            }
            bVar1 = param_1->g1();
            if (bVar1 != 0) {
                uVar13 = (uint)bVar1;
                do {
                    bVar1 = param_1->g1();
                    puVar7 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                        (Array<bool, eastl::allocator>*)puVar15, (ulong)bVar1);
                    *puVar7 = 1;
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            break;
        default:
            uVar9 = logger::default_logger();
            logger::Logger::Log(uVar9, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/SeqType.cpp",
                                209, "Error unrecognised .seq config code: %i", param_2);
        }
    }

    // 0x1002351f0, 16 bytes, placed by class name
    // SeqType::IsKeyFramed() const
    bool SeqType::IsKeyFramed() {
        return -1 < field_0;
    }

    // 0x100235200, 208 bytes, placed by class name
    // SeqType::Get(int)
    SeqType* SeqType::Get(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)LRUHashCache<dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Find(
            (ulonglong*)&m_framesetCache);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            local_30.Load(m_pAnims, m_pBases, param_1, false);
            shared_ptr<dash3d::AnimFrameSet>::operator=((shared_ptr<dash3d::AnimFrameSet>*)this, &local_30);
            local_30.~shared_ptr();
            bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
            if (bVar1) {
                local_30._0_8_ = (long)param_1;
                m_framesetCache.Put(this, 1, (ulonglong*)&local_30);
            }
        }
        return this;
    }

    // 0x1002353e0, 64 bytes, placed by class name
    // SeqType::GetKeyFrameSet() const
    SeqType* SeqType::GetKeyFrameSet() {
        SeqType* in_RSI;

        if (IsKeyFramed(in_RSI) == '\0') {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            GetKeyFrameSet(this, in_RSI->field_0);
        }
        return this;
    }

    // 0x1002354b0, 496 bytes, placed by class name
    // SeqType::SplitAnimateModelNoKeyFrameSet(dash3d::ModelLit&, int, SeqType&, int)
    SeqType* SeqType::SplitAnimateModelNoKeyFrameSet(ModelLit* param_1, int param_2, SeqType* param_3, int param_4) {
        bool bVar1;
        byte bVar2;
        byte bVar3;
        uint* puVar4;
        AnimFrameSet* pAVar5;
        long* plVar6;
        undefined8 uVar7;
        undefined4 in_register_00000014;
        undefined4 in_register_00000084;
        int in_R9D;
        uint uVar8;
        uint uVar9;
        shared_ptr local_70;
        shared_ptr local_60;
        shared_ptr<dash3d::AnimFrameSet> local_50[16];
        long* local_40;

        local_40 = (long*)CONCAT44(in_register_00000014, param_2);
        puVar4 = (uint*)Array<int, eastl::allocator>::operator[](
            (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), (long)(int)param_3);
        uVar9 = *puVar4;
        Get((SeqType*)local_50, (int)uVar9 >> 16);
        bVar1 = operator==((shared_ptr*)local_50, (_func_decltype_nullptr*)0);
        if (bVar1) {
            AnimateModel((SeqType*)this, (ModelLit*)CONCAT44(in_register_00000084, param_4), (int)local_40, in_R9D);
        } else {
            puVar4 = (uint*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)((long)&((ModelLit*)CONCAT44(in_register_00000084, param_4))[4].field_0 +
                                                4),
                (long)in_R9D);
            uVar8 = *puVar4;
            Get((SeqType*)&local_60, (int)uVar8 >> 16);
            bVar1 = operator==(&local_60, (_func_decltype_nullptr*)0);
            uVar9 = uVar9 & 65535;
            if (bVar1) {
                pAVar5 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(local_50);
                bVar2 = pAVar5->GetAnimateTransparencies(uVar9);
                (**(code**)(*local_40 + 80))((SeqType*)this, local_40, bVar2 ^ 1, 1);
                plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)(SeqType*)this);
                (**(code**)(*plVar6 + 88))(plVar6, local_50, uVar9);
            } else {
                pAVar5 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(local_50);
                bVar2 = pAVar5->GetAnimateTransparencies(uVar9);
                pAVar5 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(
                    (shared_ptr<dash3d::AnimFrameSet>*)&local_60);
                uVar8 = uVar8 & 65535;
                bVar3 = pAVar5->GetAnimateTransparencies(uVar8);
                (**(code**)(*local_40 + 80))(&local_70, local_40, (bVar2 | bVar3) ^ 1, 1);
                plVar6 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_70);
                uVar7 = (((long)&param_1[10].field_0 + 6))->data();
                (**(code**)(*plVar6 + 104))(plVar6, local_50, uVar9, &local_60, uVar8, uVar7);
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)(SeqType*)this, &local_70);
                local_70.~shared_ptr();
            }
            local_60.~shared_ptr();
        }
        local_50->~shared_ptr();
        return (SeqType*)this;
    }

    // 0x1002356a0, 304 bytes, placed by class name
    // SeqType::Compare(Array<int, eastl::allocator>, Array<int, eastl::allocator>, int, int)
    ulong SeqType::Compare(Array<game::VarValue, eastl::allocator>* param_1,
                           Array<game::VarValue, eastl::allocator>* param_2, uint param_3, uint param_4) {
        int iVar1;
        char cVar2;
        int* piVar3;
        undefined8 uVar4;
        int iVar5;
        ulong uVar6;
        bool bVar7;
        undefined8 unaff_R13;

        cVar2 = param_1->empty();
        if (cVar2 != '\0') {
            cVar2 = param_2->empty();
            uVar6 = CONCAT71((int7)((ulong)unaff_R13 >> 8), 1);
            if (cVar2 != '\0')
                goto LAB_1002357b4;
        }
        cVar2 = param_1->empty();
        if (cVar2 == '\0') {
            cVar2 = param_2->empty();
            uVar6 = 0;
            if ((cVar2 == '\0') && (param_3 == param_4)) {
                bVar7 = 0 < (int)param_3;
                if (0 < (int)param_3) {
                    iVar5 = 0;
                    piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1, 0);
                    iVar1 = *piVar3;
                    piVar3 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_2, 0);
                    bVar7 = true;
                    if (iVar1 == *piVar3) {
                        uVar6 = 1;
                        do {
                            bVar7 = (long)uVar6 < (long)(int)param_3;
                            if (param_3 == uVar6)
                                goto LAB_1002357b0;
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)param_1, uVar6);
                            iVar1 = *piVar3;
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)param_2, uVar6);
                            uVar6 = uVar6 + 1;
                        } while (iVar1 == *piVar3);
                        iVar5 = (int)uVar6 + -1;
                    }
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/configdecoder/SeqType.cpp",
                                        535, "FAILED AT %i", iVar5);
                }
            LAB_1002357b0:
                uVar6 = (ulong)bVar7 ^ 1;
            }
        } else {
            uVar6 = 0;
        }
    LAB_1002357b4:
        return uVar6 & 4294967295;
    }

    // 0x1002357d0, 624 bytes, placed by class name
    // SeqType::AnimateModelWithExtra(dash3d::ModelLit&, int) const
    SeqType* SeqType::AnimateModelWithExtra(ModelLit* param_1, int param_2) {
        undefined2 uVar1;
        bool bVar3;
        byte bVar4;
        byte bVar5;
        int iVar6;
        uint* puVar7;
        long lVar8;
        AnimFrameSet* pAVar9;
        long* plVar10;
        int in_ECX;
        undefined4 in_register_00000014;
        uint uVar11;
        uint uVar12;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        shared_ptr<dash3d::AnimFrameSet> local_68[16];
        shared_ptr local_58;
        uint local_44;
        shared_ptr local_40;

        plVar10 = (long*)CONCAT44(in_register_00000014, param_2);
        if (IsKeyFramed((SeqType*)param_1) == '\0') {
            puVar7 = (uint*)Array<int, eastl::allocator>::operator[](
                (Array<int, eastl::allocator>*)((long)&param_1[4].field_0 + 4), (long)in_ECX);
            local_44 = *puVar7;
            Get((SeqType*)local_68, (int)local_44 >> 16);
            bVar3 = operator==((shared_ptr*)local_68, (_func_decltype_nullptr*)0);
            if (bVar3) {
                (**(code**)(*plVar10 + 80))(this, plVar10, 1, 1);
            } else {
                uVar11 = 0;
                new (&local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                this_00 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((long)&param_1[5].field_8 + 3);
                lVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (lVar8 != 0) {
                    iVar6 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                    if (in_ECX < iVar6) {
                        puVar7 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                 (long)in_ECX);
                        uVar11 = *puVar7;
                        Get((SeqType*)&local_40, (int)uVar11 >> 16);
                        shared_ptr<dash3d::AnimFrameSet>::operator=((shared_ptr<dash3d::AnimFrameSet>*)&local_58,
                                                                    &local_40);
                        local_40.~shared_ptr();
                        uVar11 = uVar11 & 65535;
                    }
                }
                bVar3 = operator==(&local_58, (_func_decltype_nullptr*)0);
                uVar1 = (undefined2)local_44;
                uVar12 = local_44 & 65535;
                if (bVar3 || uVar11 == 65535) {
                    pAVar9 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(local_68);
                    bVar4 = pAVar9->GetAnimateTransparencies(uVar12);
                    (**(code**)(*plVar10 + 80))(this, plVar10, bVar4 ^ 1, 1);
                    plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)this);
                    (**(code**)(*plVar10 + 88))(plVar10, local_68, uVar1);
                } else {
                    pAVar9 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(local_68);
                    bVar4 = pAVar9->GetAnimateTransparencies(uVar12);
                    pAVar9 = (AnimFrameSet*)shared_ptr<dash3d::AnimFrameSet>::operator->(
                        (shared_ptr<dash3d::AnimFrameSet>*)&local_58);
                    bVar5 = pAVar9->GetAnimateTransparencies(uVar11);
                    (**(code**)(*plVar10 + 80))(&local_40, plVar10, (bVar4 | bVar5) ^ 1, 1);
                    plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar10 + 88))(plVar10, local_68, uVar1);
                    plVar10 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)&local_40);
                    (**(code**)(*plVar10 + 88))(plVar10, &local_58, uVar11);
                    shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                        (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
                    local_40.~shared_ptr();
                }
                local_58.~shared_ptr();
            }
            local_68->~shared_ptr();
        } else {
            AnimateModel(this, param_1, param_2, in_ECX);
        }
        return this;
    }

    // 0x100235a40, 16 bytes, placed by class name
    // SeqType::GetEnd() const
    uint SeqType::GetEnd() {
        return m_end;
    }

    // 0x100235a50, 16 bytes, placed by class name
    // SeqType::GetStart() const
    uint SeqType::GetStart() {
        return m_start;
    }

    // 0x100235a60, 16 bytes, placed by class name
    // SeqType::GetDuration() const
    int SeqType::GetDuration() {
        return m_end - m_start;
    }

    // 0x100235c00, 48 bytes, placed by class name
    // SeqType::GetKeyFrameSetStatus() const
    undefined* SeqType::GetKeyFrameSetStatus() {
        undefined* puVar2;

        if (IsKeyFramed(this) == '\0') {
            puVar2 = DataStatus::MISSING;
        } else {
            puVar2 = (undefined*)GetKeyFrameSetStatus(field_0);
        }
        return puVar2;
    }

    // 0x100235c30, 208 bytes, placed by class name
    // SeqType::GetKeyFrameSetStatus(int)
    undefined* SeqType::GetKeyFrameSetStatus(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        OldscapeAnimKeyFrameSet* this;
        undefined* puVar3;
        shared_ptr local_38;
        shared_ptr local_28;

        local_28._0_8_ = SEXT48(param_1);
        psVar2 = (shared_ptr*)
            LRUHashCache<graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::Find(
                (ulonglong*)&m_keyFrameSetCache);
        new (&local_38) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator==(&local_38, (_func_decltype_nullptr*)0);
        if (bVar1) {
            GetKeyFrameSetInner((SeqType*)&local_28, param_1);
            shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator=(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)&local_38, &local_28);
            local_28.~shared_ptr();
        }
        bVar1 = operator==(&local_38, (_func_decltype_nullptr*)0);
        if (bVar1) {
            puVar3 = DataStatus::MISSING;
        } else {
            this = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)&local_38);
            puVar3 = (undefined*)GetStatus();
        }
        local_38.~shared_ptr();
        return puVar3;
    }

    // 0x100235da0, 208 bytes, placed by class name
    // SeqType::GetKeyFrameSetInner(int)
    SeqType* SeqType::GetKeyFrameSetInner(int param_1) {
        bool bVar1;
        shared_ptr* psVar2;
        shared_ptr local_30;

        local_30._0_8_ = (long)param_1;
        psVar2 = (shared_ptr*)
            LRUHashCache<graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::Find(
                (ulonglong*)&m_keyFrameSetCache);
        new (this) shared_ptr<dash3d::Decor>(psVar2);
        bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            local_30.Load(m_pAnims, m_pBases, param_1, false);
            shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator=(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)this, &local_30);
            local_30.~shared_ptr();
            bVar1 = operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0);
            if (bVar1) {
                local_30._0_8_ = (long)param_1;
                m_keyFrameSetCache.Put(this, 1, (ulonglong*)&local_30);
            }
        }
        return this;
    }

    // 0x100235fb0, 48 bytes, placed by class name
    // SeqType::ResetCache()
    void SeqType::ResetCache() {
        m_recentUse.Reset();
        m_framesetCache.Reset();
        m_keyFrameSetCache.Reset();
    }

    // 0x100236020, 48 bytes, placed by class name
    // SeqType::IsInitComplete()
    bool SeqType::IsInitComplete() {
        bool bVar1;

        bVar1 = false;
        if ((m_pConfigClient != 0) && (m_pAnims != 0)) {
            bVar1 = m_pBases != 0;
        }
        return bVar1;
    }

    // 0x100236050, 16 bytes, placed by class name
    // SeqType::GetNumFrames()
    void SeqType::GetNumFrames() {
        (&field_72)->end();
    }

} // namespace jag::oldscape::configdecoder
