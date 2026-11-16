// libs/jtl/utils/Base64.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

#include "Base64.h"

namespace jag {
    // 0x103bff670, 16 bytes, __common; zero-initialised
    Base64::m_instance;

    // 0x100cbe7c0, 80 bytes, placed by class name and debug map
    // Base64::Instance()
    Base64* Base64::Instance() {
        Base64* this;

        if (m_instance == (Base64*)0) {
            this = operator_new(640);
            Base64(this);
            m_instance = this;
        }
        return m_instance;
    }

    // 0x100cbe810, 16 bytes, complete-object constructor, placed by class name and debug map
    // Base64::Base64(): jumps straight to the base-object constructor

    // 0x100cbe820, 48 bytes, placed by class name and debug map
    // Base64::CleanInstance()
    void Base64::CleanInstance() {
        if (m_instance != (void*)0) {
            operator_delete(m_instance);
        }
        m_instance = (void*)0;
    }

    // 0x100cbe850, 448 bytes, base-object constructor, placed by class name and debug map
    // Base64::Base64()
    void Base64::Base64() {
        undefined8 in_RAX;
        char* pcVar1;
        undefined1* puVar2;
        char* pcVar3;
        undefined1* puVar4;
        undefined4* puVar5;
        int* piVar6;
        ulong uVar7;
        long lVar8;
        undefined8 uStack_28;

        uStack_28 = in_RAX;
        _atexit(CleanInstance);
        uVar7 = 0;
        do {
            pcVar1 = (char*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)this, uVar7);
            *pcVar1 = (char)uVar7 + 'A';
            uVar7 = uVar7 + 1;
        } while (uVar7 != 26);
        uVar7 = 26;
        do {
            pcVar1 = (char*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)this, uVar7);
            *pcVar1 = (char)uVar7 + 'G';
            uVar7 = uVar7 + 1;
        } while (uVar7 != 52);
        uVar7 = 52;
        do {
            pcVar1 = (char*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)this, uVar7);
            *pcVar1 = (char)uVar7 + -4;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 62);
        puVar2 = (undefined1*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)this, 62);
        *puVar2 = 43;
        puVar2 = (undefined1*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)this, 63);
        *puVar2 = 47;
        puVar2 = &field_64;
        pcVar1 = (char*)puVar2->data();
        pcVar3 = (char*)data();
        _strncpy(pcVar1, pcVar3, 64);
        puVar4 = (undefined1*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)puVar2, 62);
        *puVar4 = 42;
        puVar2 = (undefined1*)std::array<char, 64ul>::operator[]((array<char, 64ul>*)puVar2, 63);
        *puVar2 = 45;
        puVar2 = &field_128;
        uStack_28 = CONCAT44(4294967295, (undefined4)uStack_28);
        puVar2->fill((int*)((long)&uStack_28 + 4));
        lVar8 = 0;
        do {
            puVar5 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, lVar8 + 65);
            *puVar5 = (int)lVar8;
            lVar8 = lVar8 + 1;
        } while (lVar8 != 26);
        uVar7 = 97;
        do {
            piVar6 = (int*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, uVar7);
            *piVar6 = (int)uVar7 + -71;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 123);
        uVar7 = 48;
        do {
            piVar6 = (int*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, uVar7);
            *piVar6 = (int)uVar7 + 4;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 58);
        puVar5 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, 43);
        *puVar5 = 62;
        puVar5 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, 42);
        *puVar5 = 62;
        puVar5 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, 47);
        *puVar5 = 63;
        puVar5 = (undefined4*)std::array<int, 128ul>::operator[]((array<int, 128ul>*)puVar2, 45);
        *puVar5 = 63;
    }

    // 0x100cbea60, 400 bytes, placed by class name and debug map
    // Base64::EncodeInner(eastl::string&, unsigned char*, unsigned long, char*)
    void Base64::EncodeInner(basic_string* param_1, uchar* param_2, ulong param_3, char* param_4) {
        byte bVar1;
        byte bVar2;
        long lVar3;
        ulong uVar4;

        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        param_1->reserve(((int)param_3 * 4 + 4) / 3 + lVar3);
        if (param_3 != 0) {
            uVar4 = 0;
            do {
                bVar1 = param_2[uVar4];
                eastl::string::operator+=((eastl::string*)param_1, param_4[bVar1 >> 2]);
                if (uVar4 < param_3 - 1) {
                    bVar2 = param_2[uVar4 + 1];
                    eastl::string::operator+=((eastl::string*)param_1,
                                              param_4[(ulong)(bVar2 >> 4) | (ulong)((bVar1 & 3) << 4)]);
                    if (uVar4 < param_3 - 2) {
                        bVar1 = param_2[uVar4 + 2];
                        eastl::string::operator+=((eastl::string*)param_1,
                                                  param_4[(ulong)(bVar1 >> 6) + (ulong)(bVar2 & 15) * 4]);
                        eastl::string::operator+=((eastl::string*)param_1, param_4[bVar1 & 63]);
                    } else {
                        eastl::string::operator+=((eastl::string*)param_1, param_4[(ulong)(bVar2 & 15) * 4]);
                        eastl::string::operator+=((eastl::string*)param_1, '=');
                    }
                } else {
                    eastl::string::operator+=((eastl::string*)param_1, param_4[(bVar1 & 3) << 4]);
                    eastl::string::operator+=((eastl::string*)param_1, "==");
                }
                uVar4 = uVar4 + 3;
            } while (uVar4 < param_3);
        }
    }

    // 0x100cbebf0, 64 bytes, placed by class name and debug map
    // Base64::Encode(eastl::string&, unsigned char*, unsigned long)
    void Base64::Encode(basic_string* param_1, uchar* param_2, ulong param_3) {
        char* pcVar1;

        pcVar1 = (char*)data();
        EncodeInner(this, param_1, param_2, param_3, pcVar1);
    }

    // 0x100cbec30, 64 bytes, placed by class name and debug map
    // Base64::EncodeAlt(eastl::string&, unsigned char*, unsigned long)
    void Base64::EncodeAlt(basic_string* param_1, uchar* param_2, ulong param_3) {
        char* pcVar1;
        Base64* this_00;

        this_00 = (Base64*)&field_64;
        pcVar1 = (char*)this_00->data();
        EncodeInner(this_00, param_1, param_2, param_3, pcVar1);
    }

} // namespace jag
