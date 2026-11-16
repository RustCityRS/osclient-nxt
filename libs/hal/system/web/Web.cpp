// libs/hal/system/web/Web.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.web

namespace jag {
    // 0x1007a0ed0, 448 bytes, placed by class name and debug map
    // Web::ParseKeyValueParams(eastl::string const&, eastl::vector<eastl::pair<eastl::string const, eastl::string const>, eastl::allocator>&)
    void Web::ParseKeyValueParams(basic_string* param_1, vector* param_2) {
        bool bVar1;
        ulong uVar2;
        ulong uVar3;
        ulong uVar4;
        pair<eastl::stringconst, eastl::string> local_108[64];
        pair<eastl::string, eastl::string> local_c8[64];
        basic_string local_88[32];
        basic_string local_68[32];
        ulong local_48;
        vector* local_40;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* local_38;

        local_40 = param_2;
        param_2->reserve(2);
        uVar2 = param_1->find("?", 0);
        local_38 =
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)param_1;
        do {
            if (uVar2 == 18446744073709551615) {
                return;
            }
            uVar3 = param_1->find('=', uVar2 + 1);
            bVar1 = false;
            if ((uVar3 != 18446744073709551615) && (uVar2 + 1 != uVar3)) {
                uVar3 = uVar3 + 1;
                uVar4 = param_1->find("&", uVar3);
                if (uVar4 == 18446744073709551615) {
                    uVar4 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    if (uVar3 == uVar4)
                        goto LAB_1007a0f20;
                LAB_1007a0f8e:
                    eastl::string::substr((ulong)local_68, (ulong)local_38);
                    local_48 = uVar4;
                    eastl::string::substr((ulong)local_88, (ulong)local_38);
                    eastl::pair<eastl::string, eastl::string>::pair<eastl::string, eastl::string, void>(
                        local_c8, local_68, local_88);
                    eastl::pair<eastl::stringconst, eastl::string>::pair<eastl::string, eastl::string, void>(
                        local_108, (pair*)local_c8);
                    local_40->push_back(local_108);
                    local_108->~pair();
                    local_c8->~pair();
                    local_88->~basic_string();
                    local_68->~basic_string();
                    bVar1 = true;
                    uVar2 = local_48;
                } else {
                    if (uVar3 != uVar4)
                        goto LAB_1007a0f8e;
                LAB_1007a0f20:
                    bVar1 = false;
                }
                param_1 = (basic_string*)local_38;
            }
            if (!bVar1) {
                return;
            }
        } while (true);
    }

} // namespace jag
