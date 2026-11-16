// _unplaced/libs/console/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.console

namespace jag::console::internal {
    // 0x100c8bf00
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<std::optional<int>>(std::tuple<std::optional<int>>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<int>>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x100c8cab0
    auto DecodeArgs<std::optional<int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<std::optional<int>>* tuple) {
        uint32_t extraout_var;
        return local_18;

        auto aVar1 = DecodeArg<std::optional<int>>(argDecodingErrors, console, argDecodingError, (int)tuple);
        uint64_t local_10 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        local_18.tuple<std::optional<int>, 0>(local_10);
        return local_18[0];
    }

    // 0x100c8cb20
    auto DecodeArg<std::optional<int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        return local_30;
        auto local_24;

        if (argDecodingError.size() == 0) {
            local_30 = std::optional();
        } else {
            local_24 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, arg4);
            local_30.optional<int, 0>(local_24);
        }
        return local_30[0];
    }

    // 0x100c8cb90
    auto DecodeArg<int>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        bool bVar3;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        auto* paVar7;
        auto aVar8;
        StringView local_d0;
        char* local_c0;
        StringView local_b0;

        if (argDecodingError.size() != 0) {
            pSVar6 = &argDecodingError[(long)0];
            local_d0 = StringView(*pSVar6);
            local_b0 = console.FindStoredVariable(&local_d0);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                local_c0 = (char*)((unsigned long)local_c0 & 18446744069414584320);
                pSVar6 = &argDecodingError[(long)0];
                bVar3 = FromString<StringView, int>(pSVar6, (int*)&local_c0, 10);
                console = (Console*)((unsigned long)local_c0 & 4294967295);
                aVar8 = (auto)local_c0;
                if (!bVar3)
                    goto LAB_100c8cc78;
            LAB_100c8cc3c:
                bVar3 = false;
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                paVar7 = (auto*)std::get_if<int, int, unsigned int, bool, float, eastl::string, VarAny>(arg1);
                if (paVar7 != nullptr) {
                    aVar8 = *paVar7;
                    console = (Console*)(unsigned long)aVar8;
                    if (paVar7 != nullptr)
                        goto LAB_100c8cc3c;
                }
            LAB_100c8cc78:
                aVar8 = (auto)console;
                bVar3 = true;
            }
            if (!bVar3)
                goto LAB_100c8ccfc;
        }
        local_c0 = GetTypeName<int>();
        int iVar4 = argDecodingError.size();
        if (0 < iVar4) {
            pSVar6 = &argDecodingError[(long)0];
            local_b0 = StringView(*pSVar6);
        } else {
            local_b0.StringView<13ul>("<lt>null<gt>");
        }
        argDecodingErrors.emplace_back<char const*, StringView const, int&>(local_c0, local_b0, 0);
        aVar8 = 0;
    LAB_100c8ccfc:
        return aVar8;
    }

    // 0x100c8d1a0
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<StringView>(std::tuple<StringView>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<StringView>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x100c8dc60
    auto DecodeArgs<StringView>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<StringView>* tuple) {
        tuple<StringView> local_40;
        StringView local_30;

        DecodeArg<StringView>((fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>*)&local_30,
                              console, argDecodingError, (int)tuple);
        local_40.tuple<StringView, 0>(local_30);
        new (argDecodingErrors) std::tuple<StringView>(local_40);
        return (auto)argDecodingErrors;
    }

    // 0x100c8dcf0
    auto DecodeArg<StringView>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        int iVar4;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        basic_string<char, BucketAllocatorEASTL>* str;
        uint32_t in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* vector;
        StringView local_e0;
        StringView local_d0;
        Console* local_c0;
        StringView local_b0;

        vector =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                       << 32) |
                                                                                      (uint32_t)arg4);
        if (vector->size() == 0) {
        LAB_100c8de15:
            local_d0.field_0 = (unsigned long)GetTypeName<StringView>();
            iVar4 = vector->size();
            if (0 < iVar4) {
                pSVar6 = (StringView*)(*vector)[(long)0];
                local_b0 = StringView(*pSVar6);
            } else {
                local_b0.StringView<13ul>("<lt>null<gt>");
            }
            console.emplace_back<char const*, StringView const, int&>(local_d0, local_b0, 0);
            new (argDecodingErrors) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            local_c0 = console;
            pSVar6 = (StringView*)(*vector)[(long)0];
            local_e0 = StringView(*pSVar6);
            local_b0 = argDecodingError.FindStoredVariable(&local_e0);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                local_d0 = oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
                pSVar6 = (StringView*)(*vector)[(long)0];
                if (!FromString<StringView, StringView>(pSVar6, &local_d0, 10))
                    goto LAB_100c8de09;
                new (argDecodingErrors) StringView(local_d0);
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                str = (basic_string<char, BucketAllocatorEASTL>*)
                    std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(arg1);
                if (str == nullptr) {
                LAB_100c8de09:
                    console = local_c0;
                    goto LAB_100c8de15;
                }
                argDecodingErrors.StringView<eastl::fixed_string<char, 40>>(*str);
            }
        }
        return (auto)argDecodingErrors;
    }

    // 0x100c90da0
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<std::optional<eastl::string> const&>(std::tuple<std::optional<eastl::string> const&>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<eastl::string> const&>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x100c91880
    auto
    DecodeArgs<std::optional<eastl::string> const&>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors,
                                                    const Console& console,
                                                    const ArgDecodingError<StringView, 4ul, true>& argDecodingError,
                                                    std::tuple<std::optional<eastl::string> const&>* tuple) {
        tuple<std::optional<eastl::string>> local_70;
        fixed_vector<ArgDecodingError, _4ul> local_48;

        DecodeArg<std::optional<eastl::string> const&>(&local_48, console, argDecodingError, (int)tuple);
        local_70.tuple<std::optional<eastl::string>, 0>(local_48);
        new (argDecodingErrors) std::tuple<std::optional<eastl::string>>(local_70);
        return (auto)argDecodingErrors;
    }

    // 0x100c91910
    auto DecodeArg<std::optional<eastl::string> const&>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors,
                                                        const Console& console,
                                                        const ArgDecodingError<StringView, 4ul, true>& argDecodingError,
                                                        int arg4) {
        uint32_t in_register_0000000c;
        fixed_vector<ArgDecodingError, _4ul> local_50;

        if (((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                        << 32) |
                                                                                       (uint32_t)arg4))
                ->size() == 0) {
            new (argDecodingErrors) std::optional<eastl::string>();
        } else {
            DecodeArg<eastl::string>(&local_50, console, argDecodingError, arg4);
            argDecodingErrors.optional<eastl::string, 0>(local_50);
        }
        return (auto)argDecodingErrors;
    }

    // 0x100c919b0
    auto DecodeArg<eastl::string>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
                                  const ArgDecodingError<StringView, 4ul, true>& argDecodingError, int arg4) {
        int iVar4;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        eastl::string* str;
        uint32_t in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* vector;
        StringView local_f0;
        char* local_e0[4];
        Console* local_c0;
        StringView local_b0;

        vector =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                       << 32) |
                                                                                      (uint32_t)arg4);
        if (vector->size() == 0) {
        LAB_100c91aec:
            local_e0[0] = GetTypeName<eastl::string>();
            iVar4 = vector->size();
            if (0 < iVar4) {
                pSVar6 = (StringView*)(*vector)[(long)0];
                local_b0 = StringView(*pSVar6);
            } else {
                local_b0.StringView<13ul>("<lt>null<gt>");
            }
            console.emplace_back<char const*, StringView const, int&>(*local_e0, local_b0, 0);
            new (argDecodingErrors) eastl::string();
        } else {
            local_c0 = console;
            pSVar6 = (StringView*)(*vector)[(long)0];
            local_f0 = StringView(*pSVar6);
            local_b0 = argDecodingError.FindStoredVariable(&local_f0);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                new (local_e0) eastl::string();
                pSVar6 = (StringView*)(*vector)[(long)0];
                console = local_c0;
                if (!FromString<StringView, eastl::string>(pSVar6, (eastl::string*)local_e0, 10)) {
                    goto LAB_100c91ae0;
                }
                new (argDecodingErrors) eastl::string(*local_e0);
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                str = (eastl::string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                    arg1);
                console = local_c0;
                if (str == nullptr) {
                LAB_100c91ae0:
                    goto LAB_100c91aec;
                }
                new (argDecodingErrors) eastl::string(*str);
            }
        }
        return (auto)argDecodingErrors;
    }

    // 0x100c92390
    void ___cxx_global_var_init(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c923d0
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c92410
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c92450
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag::console::internal
