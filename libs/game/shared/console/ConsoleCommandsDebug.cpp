// libs/game/shared/console/ConsoleCommandsDebug.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

namespace jag::console::internal {
    // 0x1006ef2b0, 112 bytes, placed by neighbouring functions
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<bool> >(std::tuple<std::optional<bool> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<bool> >(std::tuple<std::optional<bool> >*) */

    tuple* BuildArgInfos<std::optional<bool>>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<bool>>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006efd50, 48 bytes, placed by neighbouring functions
    // auto DecodeArgs<std::optional<bool> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<std::optional<bool> >*)
    /* auto DecodeArgs<std::optional<bool>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<std::optional<bool> >*) */

    undefined2 DecodeArgs<std::optional<bool>>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                               tuple* param_4) {
        undefined2 local_c;
        undefined2 local_a;

        local_a = DecodeArg<std::optional<bool>>(param_1, param_2, param_3, 0);
        std::tuple<std::optional<bool>>::tuple<std::optional<bool>, 0>((optional*)&local_c);
        return local_c;
    }

    // 0x1006efda0, 112 bytes, placed by neighbouring functions
    // auto DecodeArg<std::optional<bool> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    /* auto DecodeArg<std::optional<bool>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, int) */

    undefined2 DecodeArg<std::optional<bool>>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                              int param_4) {
        undefined1 uVar1;
        undefined8 in_RAX;
        ulong uVar2;
        undefined8 uStack_38;

        uStack_38 = in_RAX;
        uVar2 = param_3->size();
        if ((uint)param_4 < uVar2) {
            uVar1 = DecodeArg<bool>(param_1, param_2, param_3, param_4);
            uStack_38 = CONCAT17(uVar1, (undefined7)uStack_38);
            std::optional<bool>::optional<bool, 0>((bool*)((long)&uStack_38 + 4));
        } else {
            new (((long)&uStack_38 + 4)) std::optional<bool>();
        }
        return uStack_38._4_2_;
    }

    // 0x1006efe20, 480 bytes, placed by neighbouring functions
    // auto DecodeArg<bool>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    ulong DecodeArg<bool>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3, int param_4) {
        undefined3 uVar1;
        int iVar2;
        bool bVar3;
        int iVar4;
        ulong uVar5;
        StringView* pSVar6;
        variant* pvVar7;
        char* pcVar8;
        ulong uVar9;
        StringView SVar10;
        StringView local_d8;
        fixed_vector* local_c8;
        char* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar9 = (ulong)(uint)param_4;
        local_b4 = param_4;
        uVar5 = param_3->size();
        if (uVar9 < uVar5) {
            local_c8 = param_1;
            pSVar6 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            new (&local_d8) StringView(pSVar6);
            SVar10.field_8 = (uchar*)&local_d8;
            SVar10.field_0 = (ulong)param_2;
            local_b0->FindStoredVariable(SVar10);
            bVar3 = local_b0->operator_cast_to_bool();
            uVar1 = (undefined3)((uint)param_4 >> 8);
            if (bVar3) {
                pvVar7 = (variant*)local_b0->value();
                pcVar8 = (char*)std::get_if<bool, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar7);
                if ((pcVar8 == (char*)0) || (uVar9 = (ulong)CONCAT31(uVar1, *pcVar8 != '\0'), pcVar8 == (char*)0))
                    goto LAB_1006eff20;
            LAB_1006efedc:
                bVar3 = false;
            } else {
                local_c0 = (char*)((ulong)local_c0 & 18446744073709551360);
                pSVar6 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
                bVar3 = FromString<StringView, bool>(pSVar6, (bool*)&local_c0, 10);
                uVar9 = (ulong)CONCAT31(uVar1, (char)local_c0 != '\0');
                if (bVar3)
                    goto LAB_1006efedc;
            LAB_1006eff20:
                bVar3 = true;
            }
            param_1 = local_c8;
            local_b0->~optional();
            if (!bVar3)
                goto LAB_1006effa4;
        }
        local_c0 = GetTypeName<bool>();
        iVar2 = local_b4;
        iVar4 = param_3->size();
        if (iVar2 < iVar4) {
            pSVar6 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            StringView::StringView(local_b0, pSVar6);
        } else {
            StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
        }
        eastl::vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<char const*, StringView_const, int&>(
                (vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                &local_c0, local_b0, &local_b4);
        uVar9 = 0;
    LAB_1006effa4:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9 & 18446744073709551361;
    }

    // 0x1006f0b10, 128 bytes, placed by neighbouring functions
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<eastl::string const&, std::optional<bool> >(std::tuple<eastl::string const&, std::optional<bool> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<eastl::string const&,
   std::optional<bool> >(std::tuple<eastl::string const&,
   std::optional<bool> >*) */

    tuple* internal::BuildArgInfos<eastl::stringconst&, std::optional<bool>>(tuple* param_1) {
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        allocator local_48[8];
        undefined8 local_40;
        undefined1 local_38;
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_40 = GetArgInfo<eastl::stringconst&>();
        local_38 = extraout_DL;
        local_30 = GetArgInfo<std::optional<bool>>();
        local_28 = extraout_DL_00;
        eastl::allocator::allocator(local_48, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_40, 2, local_48);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006f1600, 160 bytes, placed by neighbouring functions
    // auto DecodeArgs<eastl::string const&, std::optional<bool> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, std::tuple<eastl::string const&, std::optional<bool> >*)
    /* auto DecodeArgs<eastl::string const&,
   std::optional<bool> >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::allocator>&, Console const&, ArgDecodingError<StringView,
   4ul, true, eastl::allocator> const&, std::tuple<eastl::string
   const&, std::optional<bool> >*) */

    fixed_vector* internal::DecodeArgs<eastl::stringconst&, std::optional<bool>>(fixed_vector* param_1,
                                                                                 Console* param_2,
                                                                                 ArgDecodingError* param_3,
                                                                                 tuple* param_4) {
        basic_string local_78[40];
        fixed_vector local_50[38];
        undefined2 local_2a;

        DecodeArg<eastl::stringconst&>(local_50, param_2, param_3, (int)param_4);
        local_2a =
            DecodeArg<std::optional<bool>>((fixed_vector*)param_2, (Console*)param_3, (ArgDecodingError*)param_4, 1);
        std::tuple<eastl::string, std::optional<bool>>::tuple<eastl::string, std::optional<bool>, 0>(
            local_78, (optional*)local_50);
        local_50->~basic_string();
        new (param_1) std::tuple<eastl::string, std::optional<bool>>(local_78);
        local_78->~tuple();
        return param_1;
    }

    // 0x1006f16e0, 528 bytes, placed by neighbouring functions
    // auto DecodeArg<eastl::string const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, int)
    fixed_vector* DecodeArg<eastl::stringconst&>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
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
        LAB_1006f181c:
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
                LAB_1006f1810:
                    local_b0->~optional();
                    goto LAB_1006f181c;
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
                    goto LAB_1006f1810;
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

    // 0x1006f6b30, 112 bytes, placed by neighbouring functions
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<eastl::string const&>(std::tuple<eastl::string const&>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<eastl::string
   const&>(std::tuple<eastl::string const&>*) */

    tuple* BuildArgInfos<eastl::stringconst&>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<eastl::stringconst&>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006f7610, 96 bytes, placed by neighbouring functions
    // auto DecodeArgs<eastl::string const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, std::tuple<eastl::string const&>*)
    /* auto DecodeArgs<eastl::string
   const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&,
   Console const&, ArgDecodingError<StringView, 4ul, true,
   eastl::allocator> const&, std::tuple<eastl::string const&>*) */

    fixed_vector* DecodeArgs<eastl::stringconst&>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                                  tuple* param_4) {
        basic_string local_60[32];
        fixed_vector local_40[32];

        DecodeArg<eastl::stringconst&>(local_40, param_2, param_3, (int)param_4);
        std::tuple<eastl::string>::tuple<eastl::string, 0>(local_60);
        local_40->~basic_string();
        new (param_1) std::tuple<eastl::string>(local_60);
        local_60->~tuple();
        return param_1;
    }

    // 0x1006f78d0, 112 bytes, placed by neighbouring functions
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(std::tuple<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>(std::tuple<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>*) */

    tuple*
    internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006f8370, 48 bytes, placed by neighbouring functions
    // auto DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&, std::tuple<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>*)
    /* auto DecodeArgs<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::allocator>&, Console const&, eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&, std::tuple<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&>*) */

    undefined8 internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
        fixed_vector* param_1, Console* param_2, fixed_vector* param_3, tuple* param_4) {
        undefined8 local_18;
        undefined8 local_10;

        local_10 = DecodeArg<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, param_2, param_3, (int)param_4);
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>::tuple<
            std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>, 0>(
            (reference_wrapper*)&local_18);
        return local_18;
    }

    // 0x1006f83d0, 16 bytes, placed by neighbouring functions
    // auto DecodeArg<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&, int)
    void internal::DecodeArg<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(fixed_vector* param_1,
                                                                                                  Console* param_2,
                                                                                                  fixed_vector* param_3,
                                                                                                  int param_4) {
        std::ref<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>(param_1);
    }

} // namespace jag::console::internal

namespace jag::game {
    // 0x1006dc2c0, 560 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)
    void RegisterCommonCommandsDebug(Console* param_1, BaseApp* param_2, RT7Core* param_3) {
        RegisteredCommand local_58;
        char* pcStack_50;
        char* local_48;
        char* pcStack_40;
        RegisteredCommand local_38;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__0>(param_1, param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__1>(param_1);
        local_58 = jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                                 graphics::RT7Core*)::__2>(param_1);
        local_38.field_0 = 4309533054;
        jag::console::RegisteredCommand::SetArgNames(&local_58, &local_38, 1);
        local_38 = jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                                 graphics::RT7Core*)::__3>(param_1);
        local_58.field_0 = 4309897557;
        pcStack_50 = "verbose";
        jag::console::RegisteredCommand::SetArgNames(&local_38, &local_58, 2);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__4>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__5>(param_1);
        local_58 = jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__6>(param_1, param_1);
        local_38.field_0 = 4309897557;
        jag::console::RegisteredCommand::SetArgNames(&local_58, &local_38, 1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__7>(param_1, param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__8>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__9>(param_1, param_3, param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__10>(param_1, param_3, param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__11>(param_1, param_3, param_1);
        local_58 = jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__12>(param_1, param_3, param_1);
        local_38.field_0 = 4309533200;
        jag::console::RegisteredCommand::SetArgNames(&local_58, &local_38, 1);
        local_58 = jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__13>(param_1, param_3, param_1);
        local_38.field_0 = 4309533200;
        jag::console::RegisteredCommand::SetArgNames(&local_58, &local_38, 1);
        local_38 = jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__14>(param_1, param_3, param_1);
        local_48 = "width";
        pcStack_40 = "height";
        local_58.field_0 = (long)&DAT_100e54345;
        pcStack_50 = "y";
        jag::console::RegisteredCommand::SetArgNames(&local_38, &local_58, 4);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__15>(param_1, param_3, param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__16>(param_1, param_1, param_2);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__17>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__18>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__19>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__20>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__21>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__22>(param_1, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__23>(param_1, param_3);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__24>(param_1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__25>(param_1);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006ec970, 544 bytes, placed by __FILE__ string
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_0::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_0::operator()() {
        char cVar1;
        Filename* pFVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        HeapInterface* this_00;
        function local_3f8[56];
        ClientCompositeZone local_3c0[13];
        Filename local_288[19];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pFVar2 = (Filename*)GetCacheFolder();
        Filename::Filename(local_158, pFVar2);
        uVar3 = logger::default_logger();
        uVar4 = local_158->GetName();
        logger::Logger::Log(uVar3, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                            "ConsoleCommandsDebug.cpp",
                            24, "Cache folder at: %s", uVar4);
        Filename::operator+(local_288, (char*)local_158);
        pcVar5 = (char*)local_288->GetName();
        new (local_3c0) File(pcVar5, 1538, 0);
        cVar1 = local_3c0->IsValid();
        if (cVar1 == '\0') {
            local_3c0->create(0);
        }
        cVar1 = local_3c0->IsValid();
        if (cVar1 != '\0') {
            this_00 = (HeapInterface*)HeapInterface::Instance();
            std::function<void(char const*, unsigned long)>::operator()(
                (function<void(char const*, unsigned long)>*)local_3f8, local_3c0);
            this_00->SaveMemoryUsageToXML(local_3f8);
            std::function<void(char const*, unsigned long)>::~function(
                (function<void(char const*, unsigned long)>*)local_3f8);
            uVar3 = logger::default_logger();
            uVar4 = local_288->GetName();
            logger::Logger::Log(uVar3, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/ConsoleCommandsDebug.cpp",
                                38, "Wrote memory dump at file : %s", uVar4);
            uVar3 = *(undefined8*)this;
            uVar4 = local_288->GetName();
            jag::console::Console::AddMessage(uVar3, 2, "Wrote memory dump at file : %s", uVar4);
        }
        local_3c0->~File();
        local_288->~pair();
        local_158->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006ed4f0, 16 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_0::operator()() const::{lambda(char const*, unsigned long)#1}::operator()(char const*, unsigned long) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_0::TEMPNAMEPLACEHOLDERVALUE() const::{lambda(char const*, unsigned
   long)#1}::TEMPNAMEPLACEHOLDERVALUE(char const*, unsigned long) const */

    _func_TEMPNAMEPLACEHOLDERVALUE* const ::{
        lambda(char const*, unsigned long) #1
    }
    ::operator()(char* param_1, ulong param_2) {
        _func_TEMPNAMEPLACEHOLDERVALUE* p_Var1;

        p_Var1 = (_func_TEMPNAMEPLACEHOLDERVALUE*)(*(File**)this)->write(param_1, (uint)param_2, 0);
        return p_Var1;
    }

    // 0x1006ef1a0, 144 bytes, placed by __FILE__ string
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_1::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_1::operator()() {
        HeapInterface* pHVar1;
        ulong uVar2;
        RenderDevice* this_00;
        ulong uVar3;
        undefined8 uVar4;

        pHVar1 = (HeapInterface*)HeapInterface::Instance();
        uVar2 = pHVar1->GetUsed();
        this_00 = (RenderDevice*)pHVar1->Instance();
        uVar3 = this_00->GetTotalAllocatedGPUMemory();
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
            "ConsoleCommandsDebug.cpp",
            52, "\nTotal memory usage (excluding static/global data) / MB - Total: %llu, CPU: %llu, GPU: %llu\n",
            (uVar3 >> 20) + (uVar2 >> 20), uVar2 >> 20, uVar3 >> 20);
        pHVar1 = (HeapInterface*)HeapInterface::Instance();
        pHVar1->SaveMemoryUsageToConsole();
        pHVar1 = (HeapInterface*)HeapInterface::Instance();
        pHVar1->SaveMemoryUsageBottomUpToConsole();
        render::GPUMemoryReportToConsole();
    }

    // 0x1006f26c0, 176 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() {
        RenderDevice* this_00;
        Layout* this_01;
        ThreadPool* this_02;
        _lambda___1_* extraout_RDX;
        _lambda_jag__render__RenderContext___1_* in_RSI;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, in_RSI);
        this_00->RunSynchronouslyOnRenderThread(&local_c8, true);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        this_01 = (Layout*)local_c8.Instance();
        this_02 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(this_01, (type*)&local_c8);
        ThreadPool::operator()(this_02, (char*)&local_c8, extraout_RDX);
        BucketManager::PrintMetrics();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f2a70, 16 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}::operator()(render::RenderContext&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE* const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(RenderContext * param_1) {
        return (_func_TEMPNAMEPLACEHOLDERVALUE*)BucketManager::PrintMetrics();
    }

    // 0x1006f3350, 16 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_TEMPNAMEPLACEHOLDERVALUE* const ::{
        lambda() #1
    }
    ::operator()() {
        return (_func_TEMPNAMEPLACEHOLDERVALUE*)BucketManager::PrintMetrics();
    }

    // 0x1006f5790, 176 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() {
        RenderDevice* this_00;
        Layout* this_01;
        ThreadPool* this_02;
        _lambda___1_* extraout_RDX;
        _lambda_jag__render__RenderContext___1_* in_RSI;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, in_RSI);
        this_00->RunSynchronouslyOnRenderThread(&local_c8, true);
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        this_01 = (Layout*)local_c8.Instance();
        this_02 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(this_01, (type*)&local_c8);
        ThreadPool::operator()(this_02, (char*)&local_c8, extraout_RDX);
        BucketManager::ResetMetrics();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f5b10, 16 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}::operator()(render::RenderContext&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&)
   const */

    _func_TEMPNAMEPLACEHOLDERVALUE* const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(RenderContext * param_1) {
        return (_func_TEMPNAMEPLACEHOLDERVALUE*)BucketManager::ResetMetrics();
    }

    // 0x1006f5fd0, 16 bytes, placed by neighbouring functions
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_TEMPNAMEPLACEHOLDERVALUE* const ::{
        lambda() #1
    }
    ::operator()() {
        return (_func_TEMPNAMEPLACEHOLDERVALUE*)BucketManager::ResetMetrics();
    }

    // 0x1006f90b0, 448 bytes, placed by __FILE__ string
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_8::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_8::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_8::operator()() {
        undefined8 uVar2;
        char* pcVar3;
        char* pcVar4;
        int local_3c0;
        int local_3bc;
        undefined4 local_3b4;
        undefined4 local_3b0;
        int local_3ac;
        fixed_string<char, 256, true, eastl::allocator> local_3a0[296];
        fixed_string<char, 256, true, eastl::allocator> local_278[296];
        fixed_string<char, 256, true, eastl::allocator> local_150[296];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (SQLInit::GetMemoryUsage((SQLiteMemoryStatus*)&local_3c0) != '\0') {
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_150);
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_278);
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_3a0);
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/ConsoleCommandsDebug.cpp",
                                133, "SQL> Memory Status\nSQL> -------------");
            uVar2 = logger::default_logger();
            pcVar3 = DataSizeString<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)local_150,
                                                                                            (long)local_3c0);
            pcVar4 = DataSizeString<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)local_278,
                                                                                            (long)local_3bc);
            logger::Logger::Log(uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/ConsoleCommandsDebug.cpp",
                                134, "SQL> Memory Used: %s (Max: %s)", pcVar3, pcVar4);
            uVar2 = logger::default_logger();
            pcVar3 = DataSizeString<eastl::fixed_string<char, 256, true, eastl::allocator>>((fixed_string*)local_3a0,
                                                                                            (long)local_3ac);
            logger::Logger::Log(uVar2, 0, 7,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/"
                                "console/ConsoleCommandsDebug.cpp",
                                135, "SQL> Page cache pages overflow count: %i/%i (Page cache size: %s)", local_3b4,
                                local_3b0, pcVar3);
            /* WARNING: Subroutine does not return */
            local_3a0->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::game
