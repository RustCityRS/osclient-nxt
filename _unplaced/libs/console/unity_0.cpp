// _unplaced/libs/console/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.console

namespace jag::console::internal {
    // 0x100c8bf00, 112 bytes, placed by nothing (unplaced)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<int> >(std::tuple<std::optional<int> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<int> >(std::tuple<std::optional<int> >*) */

    tuple* BuildArgInfos<std::optional<int>>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<int>>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100c8cab0, 48 bytes, placed by nothing (unplaced)
    // auto DecodeArgs<std::optional<int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<std::optional<int> >*)
    /* auto DecodeArgs<std::optional<int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<std::optional<int> >*) */

    undefined8 DecodeArgs<std::optional<int>>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                              tuple* param_4) {
        undefined8 local_18;
        undefined8 local_10;

        local_10 = DecodeArg<std::optional<int>>(param_1, param_2, param_3, (int)param_4);
        std::tuple<std::optional<int>>::tuple<std::optional<int>, 0>((optional*)&local_18);
        return local_18;
    }

    // 0x100c8cb20, 96 bytes, placed by nothing (unplaced)
    // auto DecodeArg<std::optional<int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    /* auto DecodeArg<std::optional<int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, int) */

    undefined8 DecodeArg<std::optional<int>>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                             int param_4) {
        long lVar1;
        undefined8 local_30;
        undefined4 local_24;

        lVar1 = param_3->size();
        if (lVar1 == 0) {
            new (&local_30) std::optional<int>();
        } else {
            local_24 = DecodeArg<int>(param_1, param_2, param_3, param_4);
            std::optional<int>::optional<int, 0>((int*)&local_30);
        }
        return local_30;
    }

    // 0x100c8cb90, 448 bytes, placed by nothing (unplaced)
    // auto DecodeArg<int>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    ulong DecodeArg<int>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3, int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        variant* pvVar6;
        uint* puVar7;
        StringView SVar8;
        StringView local_d0;
        char* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = 0;
        lVar4 = param_3->size();
        if (lVar4 != 0) {
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            new (&local_d0) StringView(pSVar5);
            SVar8.field_8 = (uchar*)&local_d0;
            SVar8.field_0 = (ulong)param_2;
            local_b0->FindStoredVariable(SVar8);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                puVar7 = (uint*)std::get_if<int, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar6);
                if ((puVar7 == (uint*)0) || (param_2 = (Console*)(ulong)*puVar7, puVar7 == (uint*)0))
                    goto LAB_100c8cc78;
            LAB_100c8cc3c:
                bVar2 = false;
            } else {
                local_c0 = (char*)((ulong)local_c0 & 18446744069414584320);
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
                bVar2 = FromString<StringView, int>(pSVar5, (int*)&local_c0, 10);
                param_2 = (Console*)((ulong)local_c0 & 4294967295);
                if (bVar2)
                    goto LAB_100c8cc3c;
            LAB_100c8cc78:
                bVar2 = true;
            }
            local_b0->~optional();
            if (!bVar2)
                goto LAB_100c8ccfc;
        }
        local_c0 = GetTypeName<int>();
        iVar1 = local_b4;
        iVar3 = param_3->size();
        if (iVar1 < iVar3) {
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            StringView::StringView(local_b0, pSVar5);
        } else {
            StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
        }
        eastl::vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<char const*, StringView_const, int&>(
                (vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                &local_c0, local_b0, &local_b4);
        param_2 = (Console*)0;
    LAB_100c8ccfc:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (ulong)param_2 & 4294967295;
    }

    // 0x100c8d1a0, 112 bytes, placed by nothing (unplaced)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<StringView>(std::tuple<StringView>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<StringView>(std::tuple<StringView>*) */

    tuple* BuildArgInfos<StringView>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<StringView>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100c8dc60, 80 bytes, placed by nothing (unplaced)
    // auto DecodeArgs<StringView>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<StringView>*)
    /* auto 
   DecodeArgs<StringView>(eastl::fixed_vector<ArgDecodingError,
   4ul, true, eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<StringView>*) */

    fixed_vector* DecodeArgs<StringView>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                         tuple* param_4) {
        StringView local_40;
        fixed_vector local_30[16];

        DecodeArg<StringView>(local_30, param_2, param_3, (int)param_4);
        std::tuple<StringView>::tuple<StringView, 0>(&local_40);
        new (param_1) std::tuple<StringView>((tuple*)&local_40);
        return param_1;
    }

    // 0x100c8dcf0, 480 bytes, placed by nothing (unplaced)
    // auto DecodeArg<StringView>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    fixed_vector* DecodeArg<StringView>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                        int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        variant* pvVar6;
        fixed_string* pfVar7;
        undefined4 in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this;
        StringView SVar8;
        StringView local_e0;
        StringView local_d0;
        Console* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        this = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)CONCAT44(in_register_0000000c,
                                                                                                 param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = 0;
        lVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
        if (lVar4 == 0) {
        LAB_100c8de15:
            local_d0.field_0 = (ulong)GetTypeName<StringView>();
            iVar1 = local_b4;
            iVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
            if (iVar1 < iVar3) {
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                StringView::StringView(local_b0, pSVar5);
            } else {
                StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
            }
            eastl::vector<ArgDecodingError,
                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                emplace_back<char const*, StringView_const, int&>(
                    (vector<ArgDecodingError,
                            eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                    (char**)&local_d0, local_b0, &local_b4);
            new (param_1) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            local_c0 = param_2;
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
            new (&local_e0) StringView(pSVar5);
            SVar8.field_8 = (uchar*)&local_e0;
            SVar8.field_0 = (ulong)param_3;
            local_b0->FindStoredVariable(SVar8);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                pfVar7 =
                    (fixed_string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                        pvVar6);
                if (pfVar7 == (fixed_string*)0) {
                LAB_100c8de09:
                    param_2 = local_c0;
                    local_b0->~optional();
                    goto LAB_100c8de15;
                }
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)param_1,
                                                                                              pfVar7);
            } else {
                new (&local_d0) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                bVar2 = FromString<StringView, StringView>(pSVar5, &local_d0, 10);
                if (!bVar2)
                    goto LAB_100c8de09;
                new (param_1) StringView(&local_d0);
            }
            local_b0->~optional();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100c90da0, 112 bytes, placed by nothing (unplaced)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<eastl::string > const&>(std::tuple<std::optional<eastl::string > const&>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<eastl::string >
   const&>(std::tuple<std::optional<eastl::string > const&>*) */

    tuple* internal::BuildArgInfos<std::optional<eastl::string> const&>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<eastl::string> const&>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100c91880, 96 bytes, placed by nothing (unplaced)
    // auto DecodeArgs<std::optional<eastl::string > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, std::tuple<std::optional<eastl::string > const&>*)
    /* auto DecodeArgs<std::optional<eastl::string
   > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&,
   Console const&, ArgDecodingError<StringView, 4ul, true,
   eastl::allocator> const&, std::tuple<std::optional<eastl::string >
   const&>*) */

    fixed_vector* DecodeArgs<std::optional<eastl::string> const&>(fixed_vector* param_1, Console* param_2,
                                                                  ArgDecodingError* param_3, tuple* param_4) {
        optional local_70[40];
        fixed_vector local_48[40];

        DecodeArg<std::optional<eastl::string> const&>(local_48, param_2, param_3, (int)param_4);
        std::tuple<std::optional<eastl::string>>::tuple<std::optional<eastl::string>, 0>(local_70);
        local_48->~optional();
        new (param_1) std::tuple<std::optional<eastl::string>>(local_70);
        local_70->~tuple();
        return param_1;
    }

    // 0x100c91910, 144 bytes, placed by nothing (unplaced)
    // auto DecodeArg<std::optional<eastl::string > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, int)
    /* auto DecodeArg<std::optional<eastl::string
   > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&,
   Console const&, ArgDecodingError<StringView, 4ul, true,
   eastl::allocator> const&, int) */

    fixed_vector* DecodeArg<std::optional<eastl::string> const&>(fixed_vector* param_1, Console* param_2,
                                                                 ArgDecodingError* param_3, int param_4) {
        long lVar1;
        undefined4 in_register_0000000c;
        fixed_vector local_50[32];

        lVar1 = (CONCAT44(in_register_0000000c, param_4))->size();
        if (lVar1 == 0) {
            new (param_1) std::optional<eastl::string>();
        } else {
            DecodeArg<eastl::string>(local_50, param_2, param_3, param_4);
            std::optional<eastl::string>::optional<eastl::string, 0>((basic_string*)param_1);
            local_50->~basic_string();
        }
        return param_1;
    }

    // 0x100c919b0, 528 bytes, placed by nothing (unplaced)
    // auto DecodeArg<eastl::string >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, int)
    fixed_vector* DecodeArg<eastl::string>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                           int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        variant* pvVar6;
        basic_string* pbVar7;
        undefined4 in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this;
        StringView SVar8;
        StringView local_f0;
        char* local_e0[4];
        Console* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        this = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)CONCAT44(in_register_0000000c,
                                                                                                 param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = 0;
        lVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
        if (lVar4 == 0) {
        LAB_100c91aec:
            local_e0[0] = GetTypeName<eastl::string>();
            iVar1 = local_b4;
            iVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
            if (iVar1 < iVar3) {
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                StringView::StringView(local_b0, pSVar5);
            } else {
                StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
            }
            eastl::vector<ArgDecodingError,
                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                emplace_back<char const*, StringView_const, int&>(
                    (vector<ArgDecodingError,
                            eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                    local_e0, local_b0, &local_b4);
            new (param_1) eastl::string();
        } else {
            local_c0 = param_2;
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
            new (&local_f0) StringView(pSVar5);
            SVar8.field_8 = (uchar*)&local_f0;
            SVar8.field_0 = (ulong)param_3;
            local_b0->FindStoredVariable(SVar8);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                pbVar7 =
                    (basic_string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                        pvVar6);
                param_2 = local_c0;
                if (pbVar7 == (basic_string*)0) {
                LAB_100c91ae0:
                    local_b0->~optional();
                    goto LAB_100c91aec;
                }
                new (param_1) eastl::string(pbVar7);
            } else {
                new (local_e0) eastl::string();
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                param_2 = local_c0;
                bVar2 = FromString<StringView, eastl::string>(pSVar5, (basic_string*)local_e0, 10);
                if (!bVar2) {
                    local_e0->~basic_string();
                    goto LAB_100c91ae0;
                }
                new (param_1) eastl::string(local_e0);
                local_e0->~basic_string();
            }
            local_b0->~optional();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100c92390, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c923d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c92410, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c92450, 54 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag::console::internal
