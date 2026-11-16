// libs/framework/sysinitparams/SystemInitParams.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.framework.sysinitparams

#include "SystemInitParams.h"

namespace jag {
    // 0x100009d00: SystemInitParams::GetArgs() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100c9a4a0
    Args::Args() : eastl::vector<eastl::string>() {}

    // 0x100c9a4c0
    Args::Args(int arg1, const char** arg2) : eastl::vector<eastl::string>() {
        char* str;
        unsigned long uVar1;
        eastl::string local_68;
        unsigned long local_40;

        reserve((long)arg1);
        if (0 < arg1) {
            local_40 = (unsigned long)(unsigned int)arg1;
            uVar1 = 0;
            do {
                if (arg2[uVar1] == nullptr) {
                    LogAssert("argv[i]",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                              "sysinitparams/SystemInitParams.cpp",
                              14, nullptr);
                }
                str = arg2[uVar1];
                local_68 = eastl::string(str);
                push_back(local_68);
                uVar1 = uVar1 + 1;
            } while (local_40 != uVar1);
        }
    }

    // 0x100c9a5c0
    Args::Args(const char* str1, const char* str2) : eastl::vector<eastl::string>() {
        char* pcVar1;
        char cVar2;
        bool bVar3;
        char* local_50;

        if (str1 != nullptr) {
            emplace_back<char const*&>(str1);
        }
        char* local_40 = str2 - 1;
        do {
            pcVar1 = local_40 + 1;
            local_40 = local_40 + 1;
        } while (*pcVar1 == ' ');
        int iVar4 = 0;
        char* local_38 = local_40;
        do {
            cVar2 = *local_40;
            if (!cVar2) {
                bVar3 = true;
                if (((iVar4 == 0) && (local_38 != nullptr)) && (*local_38 != '\0')) {
                    emplace_back<char const*&, char const*&>(local_38, local_40);
                    local_38 = nullptr;
                }
            } else {
                if (iVar4 == 1) {
                    iVar4 = 1;
                    if (cVar2 == ' ')
                        goto LAB_100c9a630;
                    local_38 = local_40;
                    iVar4 = 0;
                } else {
                    if (iVar4 == 0) {
                        if (cVar2 == '\"') {
                            iVar4 = 2;
                            local_38 = local_40;
                        } else {
                            iVar4 = 0;
                            if (cVar2 == ' ') {
                                iVar4 = 1;
                                if (local_38 != nullptr) {
                                    emplace_back<char const*&, char const*&>(local_38, local_40);
                                    local_38 = nullptr;
                                }
                            }
                        }
                    } else {
                        iVar4 = 2;
                        if (cVar2 == '\"') {
                            local_50 = local_38 + 1;
                            emplace_back<char const*, char const*&>(local_50, local_40);
                            local_38 = nullptr;
                            iVar4 = 0;
                        }
                    }
                LAB_100c9a630:
                    local_40 = local_40 + 1;
                }
                bVar3 = false;
            }
            if (bVar3) {
                return;
            }
        } while (true);
    }

    // 0x100c9a940
    Args::Args(const eastl::vector<eastl::string>& strs) : eastl::vector<eastl::string>(strs) {}

    // 0x100c9a960
    Args::Args(eastl::vector<eastl::string>&& strs) : eastl::vector<eastl::string>(strs) {}

    // 0x100c9a980
    Args::Args(const Args& args) : eastl::vector<eastl::string>(args) {}

    // 0x100c9a9a0
    Args::Args(Args&& args) : eastl::vector<eastl::string>() {
        swap<eastl::string>(args);
    }

    // 0x100c9a9f0
    Args* Args::operator=(const Args& args) {
        *this = args;
        return this;
    }

    // 0x100c9aa10
    Args* Args::operator=(Args&& args) {
        swap<eastl::string>(args);
        return this;
    }

    // 0x100c9aa30
    GoogleArgs::GoogleArgs(const Args& args) : field_0(0), field_8(nullptr), field_16(0), field_24(nullptr) {
        char* pcVar1;
        uint8_t auVar2[16];
        long lVar6;
        uint64_t uVar7;
        char* pcVar8;

        unsigned long uVar4 = args.GetArgc();
        if ((uVar4 & 18446744071562067968) != 0) {
            LogAssert("args.GetArgc() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/sysinitparams/"
                      "SystemInitParams.cpp",
                      133, nullptr);
        }
        int iVar3 = args.GetArgc();
        field_16 = iVar3;
        field_0 = iVar3;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)(iVar3 + 1);
        uVar4 = 18446744073709551615;
        if ((uint64_t)((auVar2 * (unsigned __int128)8) >> 64) == 0) {
            uVar4 = (uint64_t)(auVar2 * (unsigned __int128)8);
        }
        auto puVar5 = operator_new__(uVar4);
        field_8 = puVar5;
        puVar5 = (unsigned char*)operator_new__(uVar4);
        field_24 = puVar5;
        iVar3 = 0;
        if (field_16 != 0) {
            uVar4 = 0;
            do {
                lVar6 =
                    ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)args.GetArgv(uVar4))
                        ->size();
                if (lVar6 == 0) {
                    puVar5 = field_24 + uVar4 * 8;
                    puVar5[0] = '\0';
                    puVar5[1] = '\0';
                    puVar5[2] = '\0';
                    puVar5[3] = '\0';
                    puVar5[4] = '\0';
                    puVar5[5] = '\0';
                    puVar5[6] = '\0';
                    puVar5[7] = '\0';
                } else {
                    uVar7 = operator_new__(lVar6 + 1U);
                    *(uint64_t*)(field_24 + uVar4 * 8) = uVar7;
                    pcVar1 = *(char**)(field_24 + uVar4 * 8);
                    pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    _strncpy(pcVar1, pcVar8, lVar6 + 1U);
                }
                *(uint64_t*)(field_8 + uVar4 * 8) = *(uint64_t*)(field_24 + uVar4 * 8);
                uVar4 = uVar4 + 1;
                iVar3 = field_16;
            } while (uVar4 < (unsigned long)(long)iVar3);
        }
        puVar5 = field_24 + (long)iVar3 * 8;
        puVar5[0] = '\0';
        puVar5[1] = '\0';
        puVar5[2] = '\0';
        puVar5[3] = '\0';
        puVar5[4] = '\0';
        puVar5[5] = '\0';
        puVar5[6] = '\0';
        puVar5[7] = '\0';
    }

    // 0x100c9ab90
    GoogleArgs::~GoogleArgs() {
        long lVar1;
        long lVar2;

        if (0 < field_16) {
            lVar2 = 0;
            lVar1 = 0;
            do {
                safe_delete_array<float>((unsigned char**)(field_24 + lVar2));
                lVar1 = lVar1 + 1;
                lVar2 = lVar2 + 8;
            } while (lVar1 < field_16);
        }
        safe_delete_array<float>(&field_24);
        safe_delete_array<float>(&field_8);
    }

} // namespace jag
