// libs/jtl/TextConvert.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "TextConvert.h"

namespace jag {
    // 0x100cb9d20, 80 bytes, placed by neighbouring functions
    // FromText(StringView, int&, int)
    void FromText(StringView param_1, int* param_2, int param_3) {
        _func_long_char_ptr_char_ptr_ptr_int* in_R8;
        StringView SVar1;
        StringView local_38;
        undefined* local_28;

        SVar1.field_8 = param_1.field_8;
        new (&local_38) StringView(param_1.field_0);
        local_28 = PTR__strtol_100ee9e80;
        SVar1.field_0 = (ulong)&local_38;
        internal::TryParseFallback<int, long (*)(char const*, char**, int)>(SVar1, (int*)((ulong)param_2 & 4294967295),
                                                                            (int)&local_28, in_R8);
    }

    // 0x100cb9e40, 80 bytes, placed by neighbouring functions
    // FromText(StringView, unsigned int&, int)
    void FromText(StringView param_1, uint* param_2, int param_3) {
        _func_ulong_char_ptr_char_ptr_ptr_int* in_R8;
        StringView SVar1;
        StringView local_38;
        undefined* local_28;

        SVar1.field_8 = param_1.field_8;
        new (&local_38) StringView(param_1.field_0);
        local_28 = PTR__strtoul_100ee9e90;
        SVar1.field_0 = (ulong)&local_38;
        internal::TryParseFallback<unsigned int, unsigned long (*)(char const*, char**, int)>(
            SVar1, (uint*)((ulong)param_2 & 4294967295), (int)&local_28, in_R8);
    }

    // 0x100cb9f50, 80 bytes, placed by neighbouring functions
    // FromText(StringView, long long&, int)
    void FromText(StringView param_1, longlong* param_2, int param_3) {
        _func_longlong_char_ptr_char_ptr_ptr_int* in_R8;
        StringView SVar1;
        StringView local_38;
        undefined* local_28;

        SVar1.field_8 = param_1.field_8;
        new (&local_38) StringView(param_1.field_0);
        local_28 = PTR__strtoll_100ee9e88;
        SVar1.field_0 = (ulong)&local_38;
        internal::TryParseFallback<long long, long long (*)(char const*, char**, int)>(
            SVar1, (longlong*)((ulong)param_2 & 4294967295), (int)&local_28, in_R8);
    }

    // 0x100cba060, 80 bytes, placed by neighbouring functions
    // FromText(StringView, unsigned long long&, int)
    void FromText(StringView param_1, ulonglong* param_2, int param_3) {
        _func_ulonglong_char_ptr_char_ptr_ptr_int* in_R8;
        StringView SVar1;
        StringView local_38;
        undefined* local_28;

        SVar1.field_8 = param_1.field_8;
        new (&local_38) StringView(param_1.field_0);
        local_28 = PTR__strtoull_100ee9e98;
        SVar1.field_0 = (ulong)&local_38;
        internal::TryParseFallback<unsigned long long, unsigned long long (*)(char const*, char**, int)>(
            SVar1, (ulonglong*)((ulong)param_2 & 4294967295), (int)&local_28, in_R8);
    }

    // 0x100cba170, 176 bytes, placed by neighbouring functions
    // FromText(StringView, bool&, int)
    ulong FromText(StringView param_1, bool* param_2, int param_3) {
        char cVar1;
        uint uVar2;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        StringView* this;
        undefined8 unaff_R15;
        ulong uVar3;
        StringView SVar4;
        StringView SVar5;
        StringView SVar6;
        StringView local_60;
        StringView local_50;
        StringView local_40;
        int local_2c;

        this = (StringView*)param_1.field_0;
        local_2c = 0;
        StringView::StringView<5ul>(&local_60, "true");
        SVar4.field_8 = extraout_RDX;
        SVar4.field_0 = (ulong)&local_60;
        cVar1 = StringView::operator==(this, SVar4);
        uVar3 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        uVar2 = CONCAT31((int3)((uint)param_3 >> 8), 1);
        if (cVar1 == '\0') {
            StringView::StringView<6ul>(&local_50, "false");
            SVar5.field_8 = extraout_RDX_00;
            SVar5.field_0 = (ulong)&local_50;
            cVar1 = StringView::operator==(this, SVar5);
            if (cVar1 == '\0') {
                new (&local_40) StringView(this);
                SVar6.field_8 = (uchar*)&local_2c;
                SVar6.field_0 = (ulong)&local_40;
                cVar1 = FromText(SVar6, (int*)10, uVar2);
                if (cVar1 == '\0') {
                    uVar3 = 0;
                    goto LAB_100cba203;
                }
            }
            uVar2 = (uint)(local_2c != 0);
        }
        *param_1.field_8 = (uchar)uVar2;
    LAB_100cba203:
        return uVar3 & 4294967295;
    }

    // 0x100cba2c0, 64 bytes, placed by neighbouring functions
    // FromText(StringView, float&, int)
    void FromText(StringView param_1, float* param_2, int param_3) {
        float* extraout_RDX;
        StringView SVar1;
        StringView local_28;

        SVar1.field_8 = param_1.field_8;
        new (&local_28) StringView(param_1.field_0);
        SVar1.field_0 = (ulong)&local_28;
        internal::TryParseFallback(SVar1, extraout_RDX);
    }

    // 0x100cba300, 64 bytes, placed by neighbouring functions
    // FromText(StringView, double&, int)
    void FromText(StringView param_1, double* param_2, int param_3) {
        double* extraout_RDX;
        StringView SVar1;
        StringView local_28;

        SVar1.field_8 = param_1.field_8;
        new (&local_28) StringView(param_1.field_0);
        SVar1.field_0 = (ulong)&local_28;
        internal::TryParseFallback(SVar1, extraout_RDX);
    }

    // 0x100cba340, 32 bytes, placed by neighbouring functions
    // FromText(char const*, int&, int)
    undefined4 FromText(char* param_1, int* param_2, int param_3) {
        int iVar1;

        iVar1 = eastl::stoi(param_1, param_3);
        *param_2 = iVar1;
        return 1;
    }

    // 0x100cba370, 32 bytes, placed by neighbouring functions
    // FromText(char const*, unsigned int&, int)
    undefined8 FromText(char* param_1, uint* param_2, int param_3) {
        ulong uVar1;

        uVar1 = _strtoul(param_1, (char**)0, param_3);
        *param_2 = (uint)uVar1;
        return 1;
    }

    // 0x100cba390, 32 bytes, placed by neighbouring functions
    // FromText(char const*, long long&, int)
    undefined8 FromText(char* param_1, longlong* param_2, int param_3) {
        longlong lVar1;

        lVar1 = _strtoll(param_1, (char**)0, param_3);
        *param_2 = lVar1;
        return 1;
    }

    // 0x100cba3b0, 32 bytes, placed by neighbouring functions
    // FromText(char const*, unsigned long long&, int)
    undefined8 FromText(char* param_1, ulonglong* param_2, int param_3) {
        ulonglong uVar1;

        uVar1 = _strtoull(param_1, (char**)0, param_3);
        *param_2 = uVar1;
        return 1;
    }

    // 0x100cba3d0, 64 bytes, placed by neighbouring functions
    // FromText(char const*, bool&, int)
    undefined4 FromText(char* param_1, bool* param_2, int param_3) {
        int iVar1;
        undefined3 uVar2;
        bool bVar3;

        iVar1 = _strcmp(param_1, "true");
        if (iVar1 == 0) {
            uVar2 = 0;
            bVar3 = true;
        } else {
            iVar1 = eastl::stoi(param_1, 10);
            bVar3 = iVar1 != 0;
            uVar2 = (undefined3)((uint)iVar1 >> 8);
        }
        *param_2 = bVar3;
        return CONCAT31(uVar2, 1);
    }

    // 0x100cba410, 32 bytes, placed by neighbouring functions
    // FromText(char const*, float&, int)
    undefined1 FromText(char* param_1, float* param_2, int param_3) {
        double dVar1;

        dVar1 = _atof(param_1);
        *param_2 = (float)dVar1;
        return 1;
    }

    // 0x100cba430, 32 bytes, placed by neighbouring functions
    // FromText(char const*, double&, int)
    undefined1 FromText(char* param_1, double* param_2, int param_3) {
        double dVar1;

        dVar1 = _atof(param_1);
        *param_2 = dVar1;
        return 1;
    }

    // 0x100cba450, 336 bytes, placed by debug map only (low confidence)
    // FromText(StringView, math::Vector3T<float>&, int)
    ulong FromText(StringView param_1, Vector3T* param_2, int param_3) {
        bool bVar1;
        int iVar2;
        ulong uVar3;
        jag* this;
        bool bVar4;
        undefined1 auVar5[16];
        fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>
            local_5a0[1384];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::fixed_vector(local_5a0);
        tokenize<
            eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>,
            StringView>((fixed_vector*)local_5a0, (StringView*)param_1.field_0, ", ", -1);
        uVar3 = local_5a0->size();
        if (3 < uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("tokens.size() <= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 266,
                      (char*)0);
        }
        param_1.field_8->SetXYZ(PTR_ZERO_100ee66e8);
        iVar2 = local_5a0->size();
        bVar4 = 0 < iVar2;
        if (0 < iVar2) {
            uVar3 = 0;
            do {
                eastl::vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                            eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_5a0,
                    uVar3);
                this = (jag*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                auVar5 = math::Vector3T<float>::operator[]((Vector3T<float>*)param_1.field_8, (uint)uVar3);
                bVar1 = FromText<float>(this, auVar5._0_8_, auVar5._8_8_);
                if (!bVar1)
                    break;
                uVar3 = uVar3 + 1;
                iVar2 = local_5a0->size();
                bVar4 = (long)uVar3 < (long)iVar2;
            } while ((long)uVar3 < (long)iVar2);
        }
        eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::~fixed_vector(local_5a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)local_5a0 >> 8), ~bVar4) & 4294967041;
    }

    // 0x100cba5b0, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>, StringView>(eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>&, StringView const&, char const*, int)
    int jag::tokenize<
        eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>,
        StringView>(fixed_vector* param_1, StringView* param_2, char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)param_2->end();
        pcVar5 = (char*)param_2->end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)
                                eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                                                    eastl::allocator>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar7,
                                                                                                           pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_100cba6a0:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_100cba6a0;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>*)
                eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                                    eastl::allocator>::push_back();
            eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar4,
                                                                                                           pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

    // 0x100cba710, 16 bytes, inline, placed by debug map only (low confidence)
    // bool FromText<float>(char const*, float&)
    bool FromText<float>(char* param_1, float* param_2) {
        FromText((char*)this, (float*)param_1, (int)param_2);
        return true;
    }

    // 0x100cba7c0, 112 bytes, placed by neighbouring functions
    // ToText(char*, unsigned int, int, unsigned int)
    char* ToText(char* param_1, uint param_2, int param_3, uint param_4) {
        void* pvVar1;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::itoa(local_48, &local_4c, (long)param_3, param_4);
        if (local_4c < param_2) {
            _memcpy(param_1, pvVar1, (ulong)(local_4c + 1));
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100cba830, 112 bytes, placed by neighbouring functions
    // ToText(char*, unsigned int, unsigned int, unsigned int)
    char* ToText(char* param_1, uint param_2, uint param_3, uint param_4) {
        void* pvVar1;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::utoa(local_48, &local_4c, (ulong)param_3, param_4);
        if (local_4c < param_2) {
            _memcpy(param_1, pvVar1, (ulong)(local_4c + 1));
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100cba8a0, 112 bytes, placed by neighbouring functions
    // ToText(char*, unsigned int, long long, unsigned int)
    char* ToText(char* param_1, uint param_2, longlong param_3, uint param_4) {
        void* pvVar1;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::itoa(local_48, &local_4c, param_3, param_4);
        if (local_4c < param_2) {
            _memcpy(param_1, pvVar1, (ulong)(local_4c + 1));
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100cba910, 112 bytes, placed by neighbouring functions
    // ToText(char*, unsigned int, unsigned long long, unsigned int)
    char* ToText(char* param_1, uint param_2, ulonglong param_3, uint param_4) {
        void* pvVar1;
        uint local_4c;
        char local_48[40];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_4c = 32;
        pvVar1 = (void*)internal::utoa(local_48, &local_4c, param_3, param_4);
        if (local_4c < param_2) {
            _memcpy(param_1, pvVar1, (ulong)(local_4c + 1));
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100cba980, 144 bytes, placed by debug map only (low confidence)
    // ToText(char*, unsigned int, bool, unsigned int)
    char* ToText(char* param_1, uint param_2, bool param_3, uint param_4) {
        char* pcVar1;

        if (param_2 < 6) {
            /* WARNING: Subroutine does not return */
            LogAssert("uTextSize > 5",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 335,
                      (char*)0);
        }
        if (param_4 != 10) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix == 10",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 337,
                      (char*)0);
        }
        pcVar1 = "false";
        if (param_3) {
            pcVar1 = "true";
        }
        _strcpy(param_1, pcVar1);
        return param_1;
    }

    // 0x100cbaa10, 80 bytes, placed by neighbouring functions
    // TrimNumericZeros(char*, int)
    uint TrimNumericZeros(char* param_1, int param_2) {
        uint uVar1;
        bool bVar2;
        bool bVar3;

        if (__ZL6strchrUa9enable_ifIXLb1EEEPci() != 0) {
            do {
                if (param_2 < 1) {
                    return param_2;
                }
                uVar1 = param_2 - 1;
                bVar2 = false;
                bVar3 = false;
                if (param_1[uVar1] == '.') {
                LAB_100cbaa30:
                    bVar2 = bVar3;
                    param_1[uVar1] = '\0';
                    param_2 = uVar1;
                } else if (param_1[uVar1] == '0') {
                    bVar3 = true;
                    goto LAB_100cbaa30;
                }
            } while (bVar2);
        }
        return param_2;
    }

    // 0x100cbaa70, 112 bytes, placed by debug map only (low confidence)
    // ToText(char*, unsigned int, float, unsigned int)
    char* ToText(char* param_1, uint param_2, float param_3, uint param_4) {
        int iVar1;

        if (param_4 != 10) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix == 10",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 371,
                      (char*)0);
        }
        iVar1 = _snprintf(param_1, (ulong)param_2, "%f", (double)param_3);
        TrimNumericZeros(param_1, iVar1);
        return param_1;
    }

    // 0x100cbaae0, 112 bytes, placed by debug map only (low confidence)
    // ToText(char*, unsigned int, double, unsigned int)
    char* ToText(char* param_1, uint param_2, double param_3, uint param_4) {
        int iVar1;

        if (param_4 != 10) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix == 10",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 380,
                      (char*)0);
        }
        iVar1 = _snprintf(param_1, (ulong)param_2, "%lf");
        TrimNumericZeros(param_1, iVar1);
        return param_1;
    }

} // namespace jag

namespace jag::internal {
    // 0x100cb9870, 176 bytes, placed by debug map only (low confidence)
    // TryParseFallback(StringView, float&)
    void TryParseFallback(StringView param_1, float* param_2) {
        char* pcVar1;
        char* pcVar2;
        char* local_78;
        float local_6c;
        StringView local_68[4];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        StringView::to_owned_string<eastl::fixed_string<char, 30, true, eastl::allocator>>(local_68);
        local_78 = (char*)0;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_6c = _strtof(pcVar1, &local_78);
        pcVar1 = local_78;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (pcVar1 != pcVar2) {
            *(float*)param_1.field_8 = local_6c;
        }
        /* WARNING: Subroutine does not return */
        local_68->~fixed_string();
    }

    // 0x100cb9960, 192 bytes, placed by debug map only (low confidence)
    // TryParseFallback(StringView, double&)
    void TryParseFallback(StringView param_1, double* param_2) {
        char* pcVar1;
        char* pcVar2;
        double dVar3;
        char* local_88;
        StringView local_80[6];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        StringView::to_owned_string<eastl::fixed_string<char, 50, true, eastl::allocator>>(local_80);
        local_88 = (char*)0;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        dVar3 = _strtod(pcVar1, &local_88);
        pcVar1 = local_88;
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (pcVar1 != pcVar2) {
            *(double*)param_1.field_8 = dVar3;
        }
        /* WARNING: Subroutine does not return */
        local_80->~fixed_string();
    }

    // 0x100cb9a60, 336 bytes, placed by debug map only (low confidence)
    // itoa(char*, unsigned int&, long long, unsigned int)
    char* itoa(char* param_1, uint* param_2, longlong param_3, uint param_4) {
        char cVar1;
        uint uVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        char* pcVar6;
        char cVar7;
        longlong lVar8;
        ulong uVar9;
        double dVar10;
        double dVar11;

        if (34 < param_4 - 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 92,
                      (char*)0);
        }
        uVar9 = (ulong)*param_2;
        lVar8 = -param_3;
        if (-param_3 < 0) {
            lVar8 = param_3;
        }
        dVar10 = (double)log<long long>(lVar8);
        dVar11 = (double)log<unsigned int>(param_4);
        if ((double)uVar9 < (double)((uint)((ulong)param_3 >> 63) | 2) + dVar10 / dVar11) {
            /* WARNING: Subroutine does not return */
            LogAssert("tempBufferSize >= ((std::log(value) / std::log(radix)) + 1 + (negative ? 1 : 0) + 1 )",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 99,
                      (char*)0);
        }
        param_1[uVar9 - 1] = '\0';
        if (lVar8 == 0) {
            param_1[uVar9 - 2] = '0';
            pcVar6 = param_1 + (uVar9 - 2);
            uVar2 = 1;
        } else {
            pcVar6 = param_1 + (uVar9 - 2);
            do {
                pcVar5 = pcVar6;
                lVar3 = lVar8 / (long)(ulong)param_4;
                lVar4 = lVar8 % (long)(ulong)param_4;
                cVar1 = (char)lVar4;
                cVar7 = cVar1 + '7';
                if ((int)lVar4 < 10) {
                    cVar7 = cVar1 + '0';
                }
                *pcVar5 = cVar7;
                pcVar6 = pcVar5 + -1;
                lVar8 = lVar3;
            } while (lVar3 != 0);
            if (param_3 < 0) {
                *pcVar6 = '-';
            } else {
                pcVar6 = pcVar5;
            }
            uVar2 = ~((int)pcVar6 - (int)param_1) + *param_2;
        }
        *param_2 = uVar2;
        return pcVar6;
    }

    // 0x100cb9be0, 272 bytes, placed by debug map only (low confidence)
    // utoa(char*, unsigned int&, unsigned long long, unsigned int)
    char* utoa(char* param_1, uint* param_2, ulonglong param_3, uint param_4) {
        char cVar1;
        char* pcVar2;
        char cVar3;
        uint uVar4;
        ulong uVar5;
        bool bVar7;
        double dVar8;
        double dVar9;

        uVar4 = *param_2;
        dVar8 = (double)log<unsigned long long>(param_3);
        dVar9 = (double)log<unsigned int>(param_4);
        if ((double)uVar4 < dVar8 / dVar9 + 2.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("tempBufferSize >= ((std::log(value) / std::log(radix)) + 1 + 1 )",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 128,
                      (char*)0);
        }
        if (34 < param_4 - 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("radix >= 2 && radix <= 36",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/TextConvert.cpp", 129,
                      (char*)0);
        }
        uVar5 = (ulong)*param_2;
        pcVar2 = param_1 + (uVar5 - 1);
        param_1[uVar5 - 1] = '\0';
        if (param_3 == 0) {
            param_1[uVar5 - 2] = '0';
            pcVar2 = param_1 + (uVar5 - 2);
            uVar4 = 1;
        } else {
            do {
                cVar1 = (char)(param_3 % (ulong)param_4);
                cVar3 = cVar1 + '7';
                if ((int)(param_3 % (ulong)param_4) < 10) {
                    cVar3 = cVar1 + '0';
                }
                pcVar2[-1] = cVar3;
                pcVar2 = pcVar2 + -1;
                uVar4 = (int)uVar5 - 1;
                uVar5 = (ulong)uVar4;
                bVar7 = (ulong)param_4 <= param_3;
                param_3 = param_3 / (ulong)param_4;
            } while (bVar7);
            uVar4 = *param_2 - uVar4;
        }
        *param_2 = uVar4;
        return pcVar2;
    }

    // 0x100cb9d70, 192 bytes, inline, placed by debug map only (low confidence)
    // bool TryParseFallback<int, long (*)(char const*, char**, int)>(StringView, int&, int, long (*&&)(char const*, char**, int))
    bool TryParseFallback<int, long (*)(char const*, char**, int)>(StringView param_1, int* param_2, int param_3,
                                                                   _func_long_char_ptr_char_ptr_ptr_int* param_4) {
        code* pcVar1;
        long lVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        long lVar5;
        undefined4 in_register_0000000c;
        long local_78;
        StringView local_70[4];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        StringView::to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator>>(local_70);
        local_78 = 0;
        pcVar1 = *(code**)CONCAT44(in_register_0000000c, param_3);
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = (*pcVar1)(uVar4, &local_78, (ulong)param_2 & 4294967295);
        lVar2 = local_78;
        lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar5) {
            *(undefined4*)param_1.field_8 = uVar3;
        }
        /* WARNING: Subroutine does not return */
        local_70->~fixed_string();
    }

    // 0x100cb9e90, 192 bytes, inline, placed by debug map only (low confidence)
    // bool TryParseFallback<unsigned int, unsigned long (*)(char const*, char**, int)>(StringView, unsigned int&, int, unsigned long (*&&)(char const*, char**, int))
    bool TryParseFallback<unsigned int, unsigned long (*)(char const*, char**, int)>(
        StringView param_1, uint* param_2, int param_3, _func_ulong_char_ptr_char_ptr_ptr_int* param_4) {
        code* pcVar1;
        long lVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        long lVar5;
        undefined4 in_register_0000000c;
        long local_78;
        StringView local_70[4];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        StringView::to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator>>(local_70);
        local_78 = 0;
        pcVar1 = *(code**)CONCAT44(in_register_0000000c, param_3);
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = (*pcVar1)(uVar4, &local_78, (ulong)param_2 & 4294967295);
        lVar2 = local_78;
        lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar5) {
            *(undefined4*)param_1.field_8 = uVar3;
        }
        /* WARNING: Subroutine does not return */
        local_70->~fixed_string();
    }

    // 0x100cb9fa0, 192 bytes, inline, placed by debug map only (low confidence)
    // bool TryParseFallback<long long, long long (*)(char const*, char**, int)>(StringView, long long&, int, long long (*&&)(char const*, char**, int))
    bool TryParseFallback<long long, long long (*)(char const*, char**, int)>(
        StringView param_1, longlong* param_2, int param_3, _func_longlong_char_ptr_char_ptr_ptr_int* param_4) {
        code* pcVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined4 in_register_0000000c;
        long local_78;
        StringView local_70[4];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        StringView::to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator>>(local_70);
        local_78 = 0;
        pcVar1 = *(code**)CONCAT44(in_register_0000000c, param_3);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = (*pcVar1)(uVar3, &local_78, (ulong)param_2 & 4294967295);
        lVar2 = local_78;
        lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar4) {
            *(undefined8*)param_1.field_8 = uVar3;
        }
        /* WARNING: Subroutine does not return */
        local_70->~fixed_string();
    }

    // 0x100cba0b0, 192 bytes, inline, placed by debug map only (low confidence)
    // bool TryParseFallback<unsigned long long, unsigned long long (*)(char const*, char**, int)>(StringView, unsigned long long&, int, unsigned long long (*&&)(char const*, char**, int))
    bool internal::TryParseFallback<unsigned long long, unsigned long long (*)(char const*, char**, int)>(
        StringView param_1, ulonglong* param_2, int param_3, _func_ulonglong_char_ptr_char_ptr_ptr_int* param_4) {
        code* pcVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        undefined4 in_register_0000000c;
        long local_78;
        StringView local_70[4];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        StringView::to_owned_string<eastl::fixed_string<char, 20, true, eastl::allocator>>(local_70);
        local_78 = 0;
        pcVar1 = *(code**)CONCAT44(in_register_0000000c, param_3);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = (*pcVar1)(uVar3, &local_78, (ulong)param_2 & 4294967295);
        lVar2 = local_78;
        lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar2 != lVar4) {
            *(undefined8*)param_1.field_8 = uVar3;
        }
        /* WARNING: Subroutine does not return */
        local_70->~fixed_string();
    }

} // namespace jag::internal

// 0x100cbaa60, 16 bytes, placed by neighbouring functions
// _ZL6strchrUa9enable_ifIXLb1EEEPci
void __ZL6strchrUa9enable_ifIXLb1EEEPci(char* param_1, int param_2) {
    __libcpp_strchr(param_1, param_2);
}
