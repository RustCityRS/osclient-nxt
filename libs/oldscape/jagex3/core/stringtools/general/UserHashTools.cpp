// libs/oldscape/jagex3/core/stringtools/general/UserHashTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::core::stringtools::general {
    class UserhashTools {
    public:
        IsValidUserhash(long long);
        long ToUserhash(eastl::string const&);
        UserhashTools* FromUserhash(long long);
        UserhashTools* ToRawUsername(long long);
        eastl::string* ToScreenName(long long);
        UserhashTools* ToRawUsername(eastl::string const&);
        UserhashTools* ToScreenName(eastl::string const&);
        int CompareUserhashes(long long, long long);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100349010, 80 bytes, placed by class name and debug map
    // UserhashTools::IsValidUserhash(long long)
    undefined8 UserhashTools::IsValidUserhash(longlong param_1) {
        ulong uVar1;

        if (param_1 - 1U < 6582952005840035280) {
            uVar1 = param_1 * 1495681951922396077 + 249280325320399346;
            return CONCAT71((int7)(uVar1 >> 8), 498560650640798692 < uVar1);
        }
        return 0;
    }

    // 0x100349060, 288 bytes, placed by class name and debug map
    // UserhashTools::ToUserhash(eastl::string const&)
    long UserhashTools::ToUserhash(basic_string* param_1) {
        char cVar1;
        int iVar2;
        ulong uVar3;
        char* pcVar4;
        ulong uVar5;
        long* plVar6;
        long lVar7;
        long lVar8;
        long lVar9;
        ulong uVar10;
        bool bVar11;

        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (uVar3 == 0) {
            lVar8 = 0;
        } else {
            lVar8 = 0;
            uVar10 = 1;
            do {
                lVar8 = lVar8 * 37;
                pcVar4 = (char*)eastl::string::operator[]((eastl::string*)param_1, uVar10 - 1);
                cVar1 = *pcVar4;
                iVar2 = (int)cVar1;
                if ((byte)(cVar1 + 191U) < 26) {
                    uVar5 = (ulong)(iVar2 - 64);
                LAB_1003490e0:
                    lVar8 = lVar8 + uVar5;
                } else {
                    if ((byte)(cVar1 + 159U) < 26) {
                        uVar5 = (ulong)(iVar2 - 96);
                        goto LAB_1003490e0;
                    }
                    if ((byte)(cVar1 - 48U) < 10) {
                        uVar5 = (ulong)(iVar2 - 21);
                        goto LAB_1003490e0;
                    }
                }
                plVar6 = (long*)std::array<long long, 12ul>::operator[](11);
            } while ((lVar8 < *plVar6) && (bVar11 = uVar10 < uVar3, uVar10 = uVar10 + 1, bVar11));
        }
        lVar7 = SUB168(SEXT816(lVar8) * SEXT816(3988485205126389539), 8);
        lVar9 = 0;
        if (lVar8 != 0) {
            do {
                if (lVar8 != ((lVar7 >> 3) - (lVar7 >> 63)) * 37) {
                    return lVar8;
                }
                lVar9 = lVar8 / 37;
                lVar7 = SUB168(SEXT816(lVar9) * SEXT816(3988485205126389539), 8);
                uVar3 = lVar8 + 36;
                lVar8 = lVar9;
            } while (72 < uVar3);
        }
        return lVar9;
    }

    // 0x1003491a0, 32 bytes, placed by class name and debug map
    // UserhashTools::FromUserhash(long long)
    UserhashTools* UserhashTools::FromUserhash(longlong param_1) {
        ToRawUsername(this, param_1);
        return this;
    }

    // 0x1003491c0, 336 bytes, placed by class name and debug map
    // UserhashTools::ToRawUsername(long long)
    UserhashTools* UserhashTools::ToRawUsername(longlong param_1) {
        long lVar1;
        allocator* this_00;
        ulong uVar2;
        char* pcVar3;
        undefined1* puVar4;
        allocator local_40[8];
        allocator local_38[12];
        undefined1 local_2c[4];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_1 - 1U < 6582952005840035280) &&
            (498560650640798692 < param_1 * 1495681951922396077 + 249280325320399346U)) {
            local_2c[1] = 0;
            if (param_1 == 0) {
                lVar1 = 13;
            } else {
                puVar4 = local_2c;
                lVar1 = 55834574848;
                do {
                    lVar1 = lVar1 + -4294967296;
                    *puVar4 = (&g_decodeMap)[(int)(param_1 / 37) * -37 + (int)param_1];
                    uVar2 = param_1 + 36;
                    puVar4 = puVar4 + -1;
                    param_1 = param_1 / 37;
                } while (72 < uVar2);
                lVar1 = lVar1 >> 32;
            }
            pcVar3 = (char*)(local_38 + lVar1);
            this_00 = local_40;
            eastl::allocator::allocator(this_00, "EASTL basic_string");
        } else {
            this_00 = local_38;
            eastl::allocator::allocator(this_00, "EASTL basic_string");
            pcVar3 = "";
        }
        new (this) eastl::string(pcVar3, this_00);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100349310, 400 bytes, placed by class name and debug map
    // UserhashTools::ToScreenName(long long)
    eastl::string* UserhashTools::ToScreenName(longlong param_1) {
        allocator aVar1;
        allocator* this_00;
        char* pcVar2;
        long lVar3;
        int iVar4;
        ulong uVar5;
        ulong uVar6;
        allocator local_68[8];
        allocator local_58[31];
        undefined1 local_39;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((param_1 - 1U < 6582952005840035280) &&
            (498560650640798692 < param_1 * 1495681951922396077 + 249280325320399346U)) {
            local_39 = 0;
            uVar5 = 31;
            iVar4 = 31;
            if (param_1 != 0) {
                do {
                    iVar4 = (int)uVar5;
                    lVar3 = (long)iVar4;
                    uVar5 = lVar3 - 1;
                    if ((param_1 % 37 & 4294967295U) == 0) {
                        aVar1 = (allocator)::toupper((int)(char)local_58[lVar3]);
                        local_58[lVar3] = aVar1;
                        local_58[lVar3 + -1] = (allocator)160;
                        aVar1 = (allocator)194;
                        uVar5 = (ulong)(iVar4 - 2);
                    } else {
                        aVar1 = *(allocator*)(&g_decodeMap + (int)(param_1 % 37));
                    }
                    iVar4 = (int)uVar5;
                    local_58[iVar4] = aVar1;
                    uVar6 = param_1 + 36;
                    param_1 = param_1 / 37;
                } while (72 < uVar6);
            }
            pcVar2 = (char*)(local_58 + iVar4);
            aVar1 = (allocator)::toupper((int)(char)local_58[iVar4]);
            local_58[iVar4] = aVar1;
            this_00 = local_68;
            eastl::allocator::allocator(this_00, "EASTL basic_string");
            this = (undefined8)this;
        } else {
            this_00 = local_58;
            eastl::allocator::allocator(this_00, "EASTL basic_string");
            pcVar2 = "";
        }
        new (this) eastl::string(pcVar2, this_00);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (eastl::string*)this;
    }

    // 0x1003494b0, 48 bytes, placed by class name and debug map
    // UserhashTools::ToRawUsername(eastl::string const&)
    UserhashTools* UserhashTools::ToRawUsername(basic_string* param_1) {
        longlong lVar1;

        lVar1 = ToUserhash(param_1);
        ToRawUsername(this, lVar1);
        return this;
    }

    // 0x1003494e0, 48 bytes, placed by class name and debug map
    // UserhashTools::ToScreenName(eastl::string const&)
    UserhashTools* UserhashTools::ToScreenName(basic_string* param_1) {
        longlong lVar1;

        lVar1 = ToUserhash(param_1);
        ToScreenName(this, lVar1);
        return this;
    }

    // 0x100349510, 176 bytes, placed by class name and debug map
    // UserhashTools::CompareUserhashes(long long, long long)
    int UserhashTools::CompareUserhashes(longlong param_1, longlong param_2) {
        int iVar1;
        long* plVar2;
        ulong uVar3;
        ulong uVar4;

        uVar3 = 1;
        uVar4 = 11;
        do {
            if (param_1 == 0) {
                param_1 = 0;
                if (param_2 == 0)
                    goto LAB_100349530;
            LAB_100349578:
                plVar2 = (long*)std::array<long long, 12ul>::operator[](uVar3);
                if (param_2 < *plVar2) {
                    plVar2 = (long*)std::array<long long, 12ul>::operator[](uVar4);
                    param_2 = param_2 * *plVar2;
                }
            } else {
                plVar2 = (long*)std::array<long long, 12ul>::operator[](uVar3);
                if (param_1 < *plVar2) {
                    plVar2 = (long*)std::array<long long, 12ul>::operator[](uVar4);
                    param_1 = param_1 * *plVar2;
                }
                if (param_2 != 0)
                    goto LAB_100349578;
            LAB_100349530:
                param_2 = 0;
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
                iVar1 = 1;
                if (param_1 <= param_2) {
                    iVar1 = -(uint)(param_1 < param_2);
                }
                return iVar1;
            }
        } while (true);
    }

} // namespace jag::oldscape::core::stringtools::general

// 0x1003494a0, 16 bytes, inline, placed by debug map only (low confidence)
// toupper(int)
void toupper(int param_1) {
    ___toupper(param_1);
}
