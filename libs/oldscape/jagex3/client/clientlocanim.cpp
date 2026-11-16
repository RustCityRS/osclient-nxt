// libs/oldscape/jagex3/client/clientlocanim.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "clientlocanim.h"

namespace jag::oldscape {
    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientLocAnim::IsLit() const;

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ClientLocAnim::IsUnlit() const;

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ClientLocAnim::IsClientLocAnim() const;

    // 0x100347af0, 560 bytes, base-object constructor, placed by class name and debug map
    // ClientLocAnim::ClientLocAnim(int, int, int, int, int, int, int, bool, shared_ptr<dash3d::ModelSource>, int)
    void ClientLocAnim::ClientLocAnim(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                      int param_7, bool param_8, shared_ptr param_9, int param_10) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        long* plVar5;
        ClientLocAnim* pCVar6;
        SeqType* pSVar7;
        int* piVar8;
        undefined4 extraout_EDX;
        undefined4 extraout_var;
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var9;
        shared_ptr local_40;

        p_Var9 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        new (this) dash3d::ModelSource();
        field_0 = &PTR__ClientLocAnim_100efbca0;
        this_00 = &field_40;
        new (this_00) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(p_Var9);
        field_16 = param_1;
        field_20 = param_2;
        field_24 = param_3;
        field_28 = param_4;
        field_32 = param_5;
        field_36 = param_6;
        if (param_7 != -1) {
            local_40.List(param_7);
            shared_ptr<configdecoder::SeqType>::operator=((shared_ptr<configdecoder::SeqType>*)this_00, &local_40);
            local_40.~shared_ptr();
            field_56 = 0;
            field_60 = (int)param_9.field_8 + -1;
            lVar4 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
            if ((*(int*)(lVar4 + 256) == 0) &&
                (bVar1 = operator!=((shared_ptr*)param_9._0_8_, (_func_decltype_nullptr*)0), bVar1)) {
                plVar5 =
                    (long*)shared_ptr<dash3d::ModelSource>::operator->((shared_ptr<dash3d::ModelSource>*)param_9._0_8_);
                cVar2 = (**(code**)(*plVar5 + 40))(plVar5);
                if (cVar2 != '\0') {
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(
                        &local_40, (jag*)param_9._0_8_, (shared_ptr*)CONCAT44(extraout_var, extraout_EDX));
                    pCVar6 =
                        (ClientLocAnim*)shared_ptr<ClientLocAnim>::operator->((shared_ptr<ClientLocAnim>*)&local_40);
                    if (pCVar6 == this) {
                        lVar4 = shared_ptr<ClientLocAnim>::operator->((shared_ptr<ClientLocAnim>*)&local_40);
                        field_56 = *(int*)(lVar4 + 56);
                        lVar4 = shared_ptr<ClientLocAnim>::operator->((shared_ptr<ClientLocAnim>*)&local_40);
                        field_60 = *(int*)(lVar4 + 60);
                        local_40.~shared_ptr();
                        return;
                    }
                    local_40.~shared_ptr();
                }
            }
            if ((param_8) &&
                (lVar4 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00),
                 *(int*)(lVar4 + 168) != -1)) {
                pSVar7 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)this_00);
                cVar2 = pSVar7->IsKeyFramed();
                if (cVar2 == '\0') {
                    lVar4 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    iVar3 = ((lVar4 + 72))->end();
                    iVar3 = (&jag::math::g_Rand)->Rand(iVar3);
                    field_56 = iVar3;
                    lVar4 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)(lVar4 + 120), (long)field_56);
                    iVar3 = (&jag::math::g_Rand)->Rand(*piVar8);
                    field_60 = field_60 - iVar3;
                } else {
                    pSVar7 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                        (shared_ptr<configdecoder::SeqType>*)this_00);
                    iVar3 = pSVar7->GetDuration();
                    iVar3 = (&jag::math::g_Rand)->Rand(iVar3);
                    field_56 = iVar3;
                }
            }
        }
    }

    // 0x100347d90, 48 bytes, complete-object constructor, placed by class name
    // ClientLocAnim::ClientLocAnim(int, int, int, int, int, int, int, bool, shared_ptr<dash3d::ModelSource>, int)
    void ClientLocAnim::ClientLocAnim(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                      int param_7, bool param_8, shared_ptr param_9, int param_10) {
        shared_ptr sVar1;
        int in_stack_ffffffffffffffe0;

        sVar1.field_8._4_4_ = 0;
        sVar1._0_12_ = param_9._0_12_;
        ClientLocAnim(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, sVar1,
                      in_stack_ffffffffffffffe0);
    }

    // 0x100347dc0, 32 bytes, placed by class name
    // ClientLocAnim::Hmap(int, int)
    void ClientLocAnim::Hmap(int param_1, int param_2) {
        ClientBuild::Read3DArray<int>((Array*)&ClientBuild::m_groundh, field_28, param_1, param_2);
    }

    // 0x100347de0, 912 bytes, placed by class name
    // ClientLocAnim::GetTempModel(int)
    ClientLocAnim* ClientLocAnim::GetTempModel(int param_1) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        bool bVar3;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        long lVar12;
        SeqType* pSVar13;
        shared_ptr* psVar14;
        LocType* this_01;
        int iVar15;
        int* piVar16;
        int in_EDX;
        int iVar17;
        undefined4 in_register_00000034;
        ClientLocAnim* this_02;
        int iVar18;
        uint uVar19;
        int iVar20;
        int iVar21;
        undefined4 in_stack_ffffffffffffff74;
        shared_ptr local_40;

        this_02 = (ClientLocAnim*)CONCAT44(in_register_00000034, param_1);
        this_00 = &this_02->field_40;
        bVar3 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar3) {
            iVar20 = in_EDX - this_02->field_60;
            if ((100 < iVar20) &&
                (lVar12 = shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00),
                 0 < *(int*)(lVar12 + 168))) {
                iVar20 = 100;
            }
            pSVar13 =
                (SeqType*)shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
            if (pSVar13->IsKeyFramed() == '\0') {
                do {
                    do {
                        lVar12 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)this_00);
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar12 + 120), (long)this_02->field_56);
                        if (iVar20 <= *piVar16)
                            goto LAB_100347f4a;
                        lVar12 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)this_00);
                        piVar16 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)(lVar12 + 120), (long)this_02->field_56);
                        iVar20 = iVar20 - *piVar16;
                        iVar15 = this_02->field_56 + 1;
                        this_02->field_56 = iVar15;
                        lVar12 = shared_ptr<configdecoder::SeqType>::operator->(
                            (shared_ptr<configdecoder::SeqType>*)this_00);
                        iVar5 = ((lVar12 + 72))->end();
                    } while (iVar15 < iVar5);
                    lVar12 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    iVar5 = this_02->field_56 - *(int*)(lVar12 + 168);
                    this_02->field_56 = iVar5;
                    if (iVar5 < 0)
                        break;
                    lVar12 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    iVar15 = ((lVar12 + 72))->end();
                } while (iVar5 < iVar15);
                new (&local_40) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                shared_ptr<configdecoder::SeqType>::operator=((shared_ptr<configdecoder::SeqType>*)this_00, &local_40);
                local_40.~shared_ptr();
            } else {
                pSVar13 = (SeqType*)shared_ptr<configdecoder::SeqType>::operator->(
                    (shared_ptr<configdecoder::SeqType>*)this_00);
                iVar5 = pSVar13->GetDuration();
                iVar15 = iVar20 + this_02->field_56;
                this_02->field_56 = iVar15;
                iVar20 = 0;
                if (iVar5 <= iVar15) {
                    lVar12 =
                        shared_ptr<configdecoder::SeqType>::operator->((shared_ptr<configdecoder::SeqType>*)this_00);
                    uVar1 = *(uint*)(lVar12 + 168);
                    uVar19 = iVar5 - uVar1;
                    this_02->field_56 = uVar19;
                    if ((int)(uVar19 | uVar1) < 0) {
                        shared_ptr<configdecoder::SeqType>::reset();
                    }
                }
            }
        LAB_100347f4a:
            this_02->field_60 = in_EDX - iVar20;
        }
        psVar14 = (shared_ptr*)configdecoder::LocType::List(this_02->field_16);
        new (&local_40) shared_ptr<dash3d::Decor>(psVar14);
        lVar12 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_40);
        lVar12 = ((lVar12 + 488))->end();
        if (lVar12 != 0) {
            this_01 = (LocType*)shared_ptr<configdecoder::LocType>::operator->(
                (shared_ptr<configdecoder::LocType>*)&local_40);
            psVar14 = (shared_ptr*)this_01->GetMultiLoc();
            shared_ptr<configdecoder::LocType>::operator=((shared_ptr<configdecoder::LocType>*)&local_40, psVar14);
        }
        bVar3 = operator==(&local_40, (_func_decltype_nullptr*)0);
        if (bVar3) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            if ((this_02->field_24 | 2U) == 3) {
                lVar12 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_40);
                iVar20 = *(int*)(lVar12 + 188);
                lVar12 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_40);
                piVar16 = (int*)(lVar12 + 184);
            } else {
                lVar12 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_40);
                iVar20 = *(int*)(lVar12 + 184);
                lVar12 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_40);
                piVar16 = (int*)(lVar12 + 188);
            }
            iVar5 = *piVar16;
            iVar15 = this_02->field_32;
            iVar18 = this_02->field_36;
            iVar21 = (iVar20 >> 1) + iVar15;
            iVar17 = (iVar5 >> 1) + iVar18;
            iVar6 = Hmap(this_02, iVar21, iVar17);
            iVar15 = iVar15 + (iVar20 + 1 >> 1);
            iVar7 = Hmap(this_02, iVar15, iVar17);
            iVar18 = iVar18 + (iVar5 + 1 >> 1);
            iVar8 = Hmap(this_02, iVar21, iVar18);
            iVar9 = Hmap(this_02, iVar15, iVar18);
            iVar15 = this_02->field_32;
            iVar18 = this_02->field_36;
            iVar10 = shared_ptr<configdecoder::LocType>::operator->((shared_ptr<configdecoder::LocType>*)&local_40);
            iVar17 = this_02->field_20;
            iVar21 = this_02->field_24;
            iVar2 = this_02->field_28;
            iVar11 = this_00->end();
            GetTempModel(iVar10, iVar17, iVar21, iVar2, iVar20 * 64 + iVar15 * 128, iVar7 + iVar6 + iVar8 + iVar9 >> 2,
                         (SeqType*)CONCAT44(in_stack_ffffffffffffff74, iVar5 * 64 + iVar18 * 128), iVar11);
        }
        local_40.~shared_ptr();
        return this;
    }

} // namespace jag::oldscape
