// libs/framework/sysinitparams/SystemInitParams.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.framework.sysinitparams

#include "SystemInitParams.h"

namespace jag {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    SystemInitParams::GetArgs() const;

    // 0x100c9a4a0, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // Args::Args()
    void Args::Args() {
        new (this) eastl::vector<eastl::string, eastl::allocator>();
    }

    // 0x100c9a4b0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // Args::Args(): jumps straight to the base-object constructor

    // 0x100c9a4c0, 240 bytes, base-object constructor, placed by debug map only (low confidence)
    // Args::Args(int, char const**)
    void Args::Args(int param_1, char** param_2) {
        char* pcVar1;
        ulong uVar2;
        eastl::string local_68[32];
        allocator local_48[8];
        ulong local_40;

        new (this) eastl::vector<eastl::string, eastl::allocator>();
        reserve((long)param_1);
        if (0 < param_1) {
            local_40 = (ulong)(uint)param_1;
            uVar2 = 0;
            do {
                if (param_2[uVar2] == (char*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("argv[i]",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                              "sysinitparams/SystemInitParams.cpp",
                              14, (char*)0);
                }
                pcVar1 = param_2[uVar2];
                eastl::allocator::allocator(local_48, "EASTL basic_string");
                eastl::string::basic_string(local_68, pcVar1, local_48);
                ((Args*)this)->push_back(local_68);
                eastl::string::~basic_string(local_68);
                uVar2 = uVar2 + 1;
            } while (local_40 != uVar2);
        }
    }

    // 0x100c9a5b0, 16 bytes, complete-object constructor, placed by neighbouring functions
    // Args::Args(int, char const**): jumps straight to the base-object constructor

    // 0x100c9a5c0, 384 bytes, base-object constructor, placed by neighbouring functions
    // Args::Args(char const*, char const*)
    void Args::Args(char* param_1, char* param_2) {
        char* pcVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        char* local_50;
        char* local_48;
        char* local_40;
        char* local_38;

        local_48 = param_1;
        new (this) eastl::vector<eastl::string, eastl::allocator>();
        if (local_48 != (char*)0) {
            eastl::vector<eastl::string, eastl::allocator>::emplace_back<char const*&>(
                (vector<eastl::string, eastl::allocator>*)this, &local_48);
        }
        local_40 = param_2 + -1;
        do {
            pcVar1 = local_40 + 1;
            local_40 = local_40 + 1;
        } while (*pcVar1 == ' ');
        iVar4 = 0;
        local_38 = local_40;
        do {
            cVar2 = *local_40;
            if (cVar2 == '\0') {
                bVar3 = true;
                if (((iVar4 == 0) && (local_38 != (char*)0)) && (*local_38 != '\0')) {
                    eastl::vector<eastl::string, eastl::allocator>::emplace_back<char const*&, char const*&>(
                        (vector<eastl::string, eastl::allocator>*)this, &local_38, &local_40);
                    local_38 = (char*)0;
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
                                if (local_38 != (char*)0) {
                                    eastl::vector<eastl::string, eastl::allocator>::emplace_back<char const*&,
                                                                                                 char const*&>(
                                        (vector<eastl::string, eastl::allocator>*)this, &local_38, &local_40);
                                    local_38 = (char*)0;
                                }
                            }
                        }
                    } else {
                        iVar4 = 2;
                        if (cVar2 == '\"') {
                            local_50 = local_38 + 1;
                            eastl::vector<eastl::string, eastl::allocator>::emplace_back<char const*, char const*&>(
                                (vector<eastl::string, eastl::allocator>*)this, &local_50, &local_40);
                            local_38 = (char*)0;
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

    // 0x100c9a930, 16 bytes, complete-object constructor, placed by neighbouring functions
    // Args::Args(char const*, char const*): jumps straight to the base-object constructor

    // 0x100c9a940, 16 bytes, base-object constructor, placed by neighbouring functions
    // Args::Args(eastl::vector<eastl::string, eastl::allocator> const&)
    void Args::Args(vector* param_1) {
        new (this) eastl::vector<eastl::string, eastl::allocator>(param_1);
    }

    // 0x100c9a950, 16 bytes, complete-object constructor, placed by neighbouring functions
    // Args::Args(eastl::vector<eastl::string, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x100c9a960, 16 bytes, base-object constructor, placed by neighbouring functions
    // Args::Args(eastl::vector<eastl::string, eastl::allocator>&&)
    void Args::Args(vector* param_1) {
        new (this) eastl::vector<eastl::string, eastl::allocator>(param_1);
    }

    // 0x100c9a970, 16 bytes, complete-object constructor, placed by neighbouring functions
    // Args::Args(eastl::vector<eastl::string, eastl::allocator>&&): jumps straight to the base-object constructor

    // 0x100c9a980, 16 bytes, base-object constructor, placed by neighbouring functions
    // Args::Args(Args const&)
    void Args::Args(Args* param_1) {
        new (this) eastl::vector<eastl::string, eastl::allocator>(param_1);
    }

    // 0x100c9a990, 16 bytes, complete-object constructor, placed by neighbouring functions
    // Args::Args(Args const&): jumps straight to the base-object constructor

    // 0x100c9a9a0, 64 bytes, base-object constructor, placed by neighbouring functions
    // Args::Args(Args&&)
    void Args::Args(Args* param_1) {
        vector* extraout_RDX;

        new (this) eastl::vector<eastl::string, eastl::allocator>();
        eastl::swap<eastl::string, eastl::allocator>((eastl*)this, (vector*)param_1, extraout_RDX);
    }

    // 0x100c9a9e0, 16 bytes, complete-object constructor, placed by neighbouring functions
    // Args::Args(Args&&): jumps straight to the base-object constructor

    // 0x100c9a9f0, 32 bytes, placed by neighbouring functions
    // Args::operator=(Args const&)
    /* Args::TEMPNAMEPLACEHOLDERVALUE(Args const&) */

    Args* Args::operator=(Args* param_1) {
        eastl::vector<eastl::string, eastl::allocator>::operator=((vector<eastl::string, eastl::allocator>*)this,
                                                                  (vector*)param_1);
        return this;
    }

    // 0x100c9aa10, 32 bytes, placed by neighbouring functions
    // Args::operator=(Args&&)
    /* Args::TEMPNAMEPLACEHOLDERVALUE(Args&&) */

    Args* Args::operator=(Args* param_1) {
        vector* in_RDX;

        eastl::swap<eastl::string, eastl::allocator>((eastl*)this, (vector*)param_1, in_RDX);
        return this;
    }

    // 0x100c9aa30, 336 bytes, base-object constructor, placed by debug map only (low confidence)
    // GoogleArgs::GoogleArgs(Args const&)
    void GoogleArgs::GoogleArgs(Args* param_1) {
        char* pcVar1;
        undefined1 auVar2[16];
        int iVar3;
        ulong uVar4;
        void* pvVar5;
        long lVar6;
        char* pcVar7;

        field_0 = 0;
        field_8 = (void*)0;
        field_16 = 0;
        field_24 = (void*)0;
        uVar4 = param_1->GetArgc();
        if ((uVar4 & 18446744071562067968) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("args.GetArgc() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/sysinitparams/"
                      "SystemInitParams.cpp",
                      133, (char*)0);
        }
        iVar3 = param_1->GetArgc();
        field_16 = iVar3;
        field_0 = iVar3;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)(iVar3 + 1);
        uVar4 = 18446744073709551615;
        if (SUB168(auVar2 * ZEXT816(8), 8) == 0) {
            uVar4 = SUB168(auVar2 * ZEXT816(8), 0);
        }
        pvVar5 = operator_new__(uVar4);
        field_8 = pvVar5;
        pvVar5 = operator_new__(uVar4);
        field_24 = pvVar5;
        iVar3 = 0;
        if (field_16 != 0) {
            uVar4 = 0;
            do {
                param_1->GetArgv(uVar4);
                lVar6 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if (lVar6 == 0) {
                    *(undefined8*)((long)field_24 + uVar4 * 8) = 0;
                } else {
                    pvVar5 = operator_new__(lVar6 + 1U);
                    *(void**)((long)field_24 + uVar4 * 8) = pvVar5;
                    pcVar1 = *(char**)((long)field_24 + uVar4 * 8);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    _strncpy(pcVar1, pcVar7, lVar6 + 1U);
                }
                *(undefined8*)((long)field_8 + uVar4 * 8) = *(undefined8*)((long)field_24 + uVar4 * 8);
                uVar4 = uVar4 + 1;
                iVar3 = field_16;
            } while (uVar4 < (ulong)(long)iVar3);
        }
        *(undefined8*)((long)field_24 + (long)iVar3 * 8) = 0;
    }

    // 0x100c9ab80, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // GoogleArgs::GoogleArgs(Args const&): jumps straight to the base-object constructor

    // 0x100c9ab90, 96 bytes, base-object destructor, placed by debug map only (low confidence)
    // GoogleArgs::~GoogleArgs()
    void GoogleArgs::~GoogleArgs() {
        long lVar1;
        long lVar2;

        if (0 < field_16) {
            lVar2 = 0;
            lVar1 = 0;
            do {
                safe_delete_array<float>((float**)((long)field_24 + lVar2));
                lVar1 = lVar1 + 1;
                lVar2 = lVar2 + 8;
            } while (lVar1 < field_16);
        }
        safe_delete_array<float>(&field_24);
        safe_delete_array<float>(&field_8);
    }

    // 0x100c9abf0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // GoogleArgs::~GoogleArgs(): jumps straight to the base-object destructor

} // namespace jag
