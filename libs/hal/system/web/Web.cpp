// libs/hal/system/web/Web.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.web

namespace jag {
    // 0x1007a0ed0
    void Web::ParseKeyValueParams(const eastl::string& str,
                                  eastl::vector<eastl::pair<eastl::string const, eastl::string const>>& pairs) {
        unsigned long arg2;
        unsigned long arg2_00;
        bool bVar1;
        unsigned long uVar3;
        unsigned long uVar4;
        pair<eastl::stringconst, eastl::string> local_108;
        pair<eastl::string, eastl::string> local_c8;
        ReturnValue local_88;
        ReturnValue local_68;
        unsigned long local_48;

        pairs.reserve(2);
        unsigned long uVar2 = str.find("?", 0);
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* local_38 =
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)str;
        do {
            if (uVar2 == 18446744073709551615) {
                return;
            }
            arg2_00 = uVar2 + 1;
            uVar3 = str.find('=', arg2_00);
            bVar1 = false;
            if ((uVar3 != 18446744073709551615) && (arg2_00 != uVar3)) {
                arg2 = uVar3 + 1;
                uVar4 = str.find("&", arg2);
                if (uVar4 == 18446744073709551615) {
                    uVar4 = local_38->size();
                    if (arg2 == uVar4)
                        goto LAB_1007a0f20;
                LAB_1007a0f8e:
                    local_68 = local_38->substr(arg2_00, ~uVar2 + uVar3);
                    local_48 = uVar4;
                    local_88 = local_38->substr(arg2, ~uVar3 + uVar4);
                    eastl::pair<eastl::string, eastl::string>::pair<eastl::string, eastl::string, void>(
                        &local_c8, &local_68, &local_88);
                    eastl::pair<eastl::stringconst, eastl::string>::pair<eastl::string, eastl::string, void>(&local_108,
                                                                                                             &local_c8);
                    pairs.push_back(local_108);
                    bVar1 = true;
                    uVar2 = local_48;
                } else {
                    if (arg2 != uVar4)
                        goto LAB_1007a0f8e;
                LAB_1007a0f20:
                    bVar1 = false;
                }
                str = (eastl::string*)local_38;
            }
            if (!bVar1) {
                return;
            }
        } while (true);
    }

} // namespace jag
