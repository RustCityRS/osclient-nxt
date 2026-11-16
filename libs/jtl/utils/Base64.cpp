// libs/jtl/utils/Base64.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

#include "Base64.h"

namespace jag {
    // 0x103bff670
    uint8_t Base64::m_instance[16];

    // 0x100cbe7c0
    Base64* Base64::Instance() {
        Base64* base64;

        if (m_instance == nullptr) {
            base64 = (Base64*)operator new(640);
            Base64(base64);
            m_instance = base64;
        }
        return m_instance;
    }

    // 0x100cbe820
    void Base64::CleanInstance() {
        if (m_instance != nullptr) {
            operator delete(m_instance);
        }
        m_instance = nullptr;
    }

    // 0x100cbe850
    Base64::Base64() {
        uint64_t in_RAX;
        char* pcVar1;
        uint32_t* puVar5;
        int* piVar6;

        uint64_t uStack_28 = in_RAX;
        _atexit(CleanInstance);
        unsigned long uVar7 = 0;
        do {
            pcVar1 = (char*)(*this)[uVar7];
            *pcVar1 = (char)uVar7 + 'A';
            uVar7 = uVar7 + 1;
        } while (uVar7 != 26);
        uVar7 = 26;
        do {
            pcVar1 = (char*)(*this)[uVar7];
            *pcVar1 = (char)uVar7 + 'G';
            uVar7 = uVar7 + 1;
        } while (uVar7 != 52);
        uVar7 = 52;
        do {
            pcVar1 = (char*)(*this)[uVar7];
            *pcVar1 = (char)uVar7 - 4;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 62);
        uint8_t* puVar2 = (uint8_t*)(*this)[62];
        *puVar2 = 43;
        puVar2 = (uint8_t*)(*this)[63];
        *puVar2 = 47;
        puVar2 = &field_64;
        pcVar1 = puVar2->data();
        auto pcVar3 = data();
        _strncpy(pcVar1, pcVar3, 64);
        uint8_t* puVar4 = (uint8_t*)(*puVar2)[62];
        *puVar4 = 42;
        puVar2 = (uint8_t*)(*puVar2)[63];
        *puVar2 = 45;
        puVar2 = &field_128;
        uStack_28 = (((uint64_t)4294967295 << 32) | (uint32_t)((uint32_t)uStack_28));
        puVar2->fill(*((int*)((long)&uStack_28 + 4)));
        long lVar8 = 0;
        do {
            puVar5 = (uint32_t*)(*puVar2)[lVar8 + 65];
            *puVar5 = (int)lVar8;
            lVar8 = lVar8 + 1;
        } while (lVar8 != 26);
        uVar7 = 97;
        do {
            piVar6 = (int*)(*puVar2)[uVar7];
            *piVar6 = (int)uVar7 - 71;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 123);
        uVar7 = 48;
        do {
            piVar6 = (int*)(*puVar2)[uVar7];
            *piVar6 = (int)uVar7 + 4;
            uVar7 = uVar7 + 1;
        } while (uVar7 != 58);
        puVar5 = (uint32_t*)(*puVar2)[43];
        *puVar5 = 62;
        puVar5 = (uint32_t*)(*puVar2)[42];
        *puVar5 = 62;
        puVar5 = (uint32_t*)(*puVar2)[47];
        *puVar5 = 63;
        puVar5 = (uint32_t*)(*puVar2)[45];
        *puVar5 = 63;
    }

    // 0x100cbea60
    void Base64::EncodeInner(eastl::string& str1, unsigned char* arg2, unsigned long arg3, char* str2) {
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned long uVar4;

        long lVar3 = str1.size();
        str1.reserve(((int)arg3 * 4 + 4) / 3 + lVar3);
        if (arg3 != 0) {
            uVar4 = 0;
            do {
                bVar1 = arg2[uVar4];
                str1 += (str2[bVar1 >> 2]);
                if (uVar4 < arg3 - 1) {
                    bVar2 = arg2[uVar4 + 1];
                    str1 += (str2[(bVar2 >> 4) | (unsigned long)((bVar1 & 3) << 4)]);
                    if (uVar4 < arg3 - 2) {
                        bVar1 = arg2[uVar4 + 2];
                        str1 += (str2[(bVar1 >> 6) + (unsigned long)(bVar2 & 15) * 4]);
                        str1 += (str2[bVar1 & 63]);
                    } else {
                        str1 += (str2[(bVar2 & 15) * 4]);
                        str1 += '=';
                    }
                } else {
                    str1 += (str2[(bVar1 & 3) << 4]);
                    str1 += "==";
                }
                uVar4 = uVar4 + 3;
            } while (uVar4 < arg3);
        }
    }

    // 0x100cbebf0
    void Base64::Encode(eastl::string& str, unsigned char* arg2, unsigned long arg3) {
        auto str2 = data();
        EncodeInner(str, arg2, arg3, str2);
    }

    // 0x100cbec30
    void Base64::EncodeAlt(eastl::string& str, unsigned char* arg2, unsigned long arg3) {
        Base64* this_00 = (Base64*)&field_64;
        auto str2 = this_00->data();
        EncodeInner(this_00, str, arg2, arg3, str2);
    }

} // namespace jag
