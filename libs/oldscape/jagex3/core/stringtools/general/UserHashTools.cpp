// libs/oldscape/jagex3/core/stringtools/general/UserHashTools.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::core::stringtools::general {
    class UserhashTools {
    public:
        void IsValidUserhash(long long arg1);
        long ToUserhash(const eastl::string& str);
        UserhashTools* FromUserhash(long long arg1);
        auto ToRawUsername(long long arg1);
        auto ToScreenName(long long arg1);
        auto ToRawUsername(const eastl::string& str);
        auto ToScreenName(const eastl::string& str);
        int CompareUserhashes(long long arg1, long long arg2);
    };

    // 0x100349010
    void UserhashTools::IsValidUserhash(long long arg1) {
        unsigned long uVar1;

        if (arg1 - 1U < 6582952005840035280) {
            uVar1 = arg1 * 1495681951922396077 + 249280325320399346;
            return 498560650640798692 < uVar1;
        }
        return 0;
    }

    // 0x100349060
    long UserhashTools::ToUserhash(const eastl::string& str) {
        char cVar1;
        int iVar2;
        char* pcVar4;
        unsigned long uVar5;
        long* plVar6;
        long lVar8;
        unsigned long arg1;
        unsigned long uVar10;
        bool bVar11;

        unsigned long uVar3 = str.size();
        if (uVar3 == 0) {
            lVar8 = 0;
        } else {
            lVar8 = 0;
            uVar10 = 1;
            do {
                arg1 = uVar10 - 1;
                lVar8 = lVar8 * 37;
                pcVar4 = &str[arg1];
                cVar1 = *pcVar4;
                iVar2 = (int)cVar1;
                if ((uint8_t)(cVar1 + 191U) < 26) {
                    uVar5 = (unsigned long)(iVar2 - 64);
                LAB_1003490e0:
                    lVar8 = lVar8 + uVar5;
                } else {
                    if ((uint8_t)(cVar1 + 159U) < 26) {
                        uVar5 = (unsigned long)(iVar2 - 96);
                        goto LAB_1003490e0;
                    }
                    if ((uint8_t)(cVar1 - 48U) < 10) {
                        uVar5 = (unsigned long)(iVar2 - 21);
                        goto LAB_1003490e0;
                    }
                }
                plVar6 = (long*)(*11)[arg1];
            } while ((lVar8 < *plVar6) && (bVar11 = uVar10 < uVar3, uVar10 = uVar10 + 1, bVar11));
        }
        long lVar7 = (uint64_t)(((__int128)lVar8 * (__int128)3988485205126389539) >> 64);
        long lVar9 = 0;
        if (lVar8 != 0) {
            do {
                if (lVar8 != ((lVar7 >> 3) - (lVar7 >> 63)) * 37) {
                    return lVar8;
                }
                lVar9 = lVar8 / 37;
                lVar7 = (uint64_t)(((__int128)lVar9 * (__int128)3988485205126389539) >> 64);
                uVar3 = lVar8 + 36;
                lVar8 = lVar9;
            } while (72 < uVar3);
        }
        return lVar9;
    }

    // 0x1003491a0
    UserhashTools* UserhashTools::FromUserhash(long long arg1) {
        ToRawUsername((ReturnValue*)this, arg1);
        return this;
    }

    // 0x1003491c0
    auto UserhashTools::ToRawUsername(long long arg1) {
        long lVar1;
        allocator* allocator;
        unsigned long uVar2;
        char* str;
        uint8_t* puVar3;
        allocator local_40;
        allocator local_38;
        uint8_t local_2c[4];

        if ((arg1 - 1U < 6582952005840035280) &&
            (498560650640798692 < arg1 * 1495681951922396077 + 249280325320399346U)) {
            local_2c[1] = 0;
            if (arg1 == 0) {
                lVar1 = 13;
            } else {
                puVar3 = local_2c;
                lVar1 = 55834574848;
                do {
                    lVar1 = lVar1 - 4294967296;
                    *puVar3 = (&g_decodeMap)[(arg1 / 37) * -37 + (int)arg1];
                    uVar2 = arg1 + 36;
                    puVar3 = puVar3 - 1;
                    arg1 = arg1 / 37;
                } while (72 < uVar2);
                lVar1 = lVar1 >> 32;
            }
            str = (char*)(&local_38 + lVar1);
            allocator = &local_40;
            new (allocator) eastl::allocator("EASTL basic_string");
        } else {
            allocator = &local_38;
            new (allocator) eastl::allocator("EASTL basic_string");
            str = "";
        }
        return auto(str, allocator);
    }

    // 0x100349310
    auto UserhashTools::ToScreenName(long long arg1) {
        allocator aVar1;
        allocator* allocator;
        char* str;
        long lVar2;
        int iVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        allocator local_68;
        uint64_t local_60;
        allocator local_58;
        uint8_t local_39;

        if ((arg1 - 1U < 6582952005840035280) &&
            (498560650640798692 < arg1 * 1495681951922396077 + 249280325320399346U)) {
            local_39 = 0;
            uVar4 = 31;
            iVar3 = 31;
            local_60 = &result;
            if (arg1 != 0) {
                do {
                    iVar3 = (int)uVar4;
                    lVar2 = (long)iVar3;
                    uVar4 = lVar2 - 1;
                    if ((arg1 % 37 & 4294967295U) == 0) {
                        aVar1 = (allocator)::toupper((int)(char)local_58[lVar2]);
                        local_58[lVar2] = aVar1;
                        local_58[lVar2 - 1] = (allocator)160;
                        aVar1 = (allocator)194;
                        uVar4 = (unsigned long)(iVar3 - 2);
                    } else {
                        aVar1 = *(allocator*)(&g_decodeMap + (int)(arg1 % 37));
                    }
                    iVar3 = (int)uVar4;
                    local_58[iVar3] = aVar1;
                    uVar5 = arg1 + 36;
                    arg1 = arg1 / 37;
                } while (72 < uVar5);
            }
            str = (char*)(&local_58 + iVar3);
            aVar1 = (allocator)::toupper((int)(char)local_58[iVar3]);
            local_58[iVar3] = aVar1;
            allocator = &local_68;
            new (allocator) eastl::allocator("EASTL basic_string");
            &result = local_60;
        } else {
            allocator = &local_58;
            new (allocator) eastl::allocator("EASTL basic_string");
            str = "";
        }
        return auto(str, allocator);
    }

    // 0x1003494b0
    auto UserhashTools::ToRawUsername(const eastl::string& str) {
        auto result;

        long long arg1 = ToUserhash(str);
        ToRawUsername(&result, arg1);
        return result;
    }

    // 0x1003494e0
    auto UserhashTools::ToScreenName(const eastl::string& str) {
        auto result;

        long long arg1 = ToUserhash(str);
        ToScreenName(&result, arg1);
        return result;
    }

    // 0x100349510
    int UserhashTools::CompareUserhashes(long long arg1, long long arg2) {
        int iVar1;
        long* plVar2;
        array<long long, 12ul>* array;

        array = (array<long long, 12ul>*)&DAT_00000001;
        array<long long, 12ul>* this_00 = (array<long long, 12ul>*)11;
        long long lVar3 = arg2;
        do {
            if (arg1 == 0) {
                arg1 = 0;
                if (lVar3 == 0)
                    goto LAB_100349530;
            LAB_100349578:
                plVar2 = (long*)(*array)[arg2];
                if (lVar3 < *plVar2) {
                    plVar2 = (long*)(*this_00)[arg2];
                    lVar3 = lVar3 * *plVar2;
                }
            } else {
                plVar2 = (long*)(*array)[arg2];
                if (arg1 < *plVar2) {
                    plVar2 = (long*)(*this_00)[arg2];
                    arg1 = arg1 * *plVar2;
                }
                if (lVar3 != 0)
                    goto LAB_100349578;
            LAB_100349530:
                lVar3 = 0;
            }
            array = array + 1;
            this_00 = this_00 - 1;
            if (this_00 == nullptr) {
                iVar1 = 1;
                if (arg1 <= lVar3) {
                    iVar1 = -(unsigned int)(arg1 < lVar3);
                }
                return iVar1;
            }
        } while (true);
    }

} // namespace jag::oldscape::core::stringtools::general

// 0x1003494a0
void toupper(int arg1) {
    ___toupper(arg1);
}
