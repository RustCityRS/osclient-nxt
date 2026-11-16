// libs/ui/components/ComponentBehaviourConfigs.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ComponentBehaviourConfigs.h"
#include "Component.h"

namespace jag::ui {
    // 0x100f38bc0, set at startup by ___cxx_global_var_init.27
    oldscape::sidebars::SideBarData ComponentServerConfig::DEFAULT_SERVER_ACTIVE_PROPERTIES = SideBarData(0, -1);

    // 0x1006933d0
    void ComponentOpConfig::SetOpBaseName(const char* str) {
        size_t sVar1;
        char* str_00;

        if ((str == nullptr) || (*str == '\0')) {
            str_00 = nullptr;
        } else {
            sVar1 = _strlen(str);
            str_00 = (char*)operator_new__(sVar1 + 1);
            _strncpy(str_00, str, sVar1);
            str_00[sVar1] = '\0';
        }
        reset(str_00);
    }

    // 0x100693460
    void ComponentOpConfig::Decode(PacketT<Array<unsigned char>>& arg1, int arg2) {
        vector<int>* vector;
        uint8_t bVar3;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true>>* this_00;
        unsigned long uVar5;
        uint32_t* puVar7;
        unsigned long uVar8;
        unsigned int* puVar9;
        unsigned int uVar10;
        uint32_t in_register_00000034;
        fixed_string<char, 40> local_c0;

        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_01 =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                (uint32_t)arg2);
        fixed_string<char, 32> local_80;
        this_01->gStringCP1252ToUTF8<eastl::fixed_string<char, 32>>(local_80, false);
        char* pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        SetOpBaseName((ComponentOpConfig*)arg1, pcVar4);
        uint8_t bVar1 = this_01->g1();
        if ((bVar1 & 15) != 0) {
            ((arg1 + 8))->resize((unsigned long)(bVar1 & 15));
            local_c0 = eastl::fixed_string<char, 24>();
            this_01->gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(local_c0, false);
            local_c0.trim();
            if (local_c0.empty() == '\0') {
                this_00 =
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true>>*)(*((arg1 + 8)))[0];
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar5 = local_c0.size();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true>>::assign(
                    this_00, pcVar4, uVar5);
            }
        }
        if (15 < bVar1) {
            bVar3 = this_01->g1();
            vector = (vector<int>*)(arg1 + 72);
            vector->resize((unsigned long)bVar3 + 1);
            if (vector->size() != 0) {
                uVar10 = 1;
                uVar5 = 0;
                do {
                    puVar7 = (uint32_t*)(*vector)[uVar5];
                    *puVar7 = 4294967295;
                    uVar5 = (unsigned long)uVar10;
                    uVar8 = vector->size();
                    uVar10 = uVar10 + 1;
                } while (uVar5 < uVar8);
            }
            uVar10 = this_01->g2();
            puVar9 = (unsigned int*)(*vector)[(unsigned long)bVar3];
            *puVar9 = uVar10 & 65535;
        }
        if (31 < bVar1) {
            bVar1 = this_01->g1();
            uVar10 = this_01->g2();
            puVar9 = (unsigned int*)(*((arg1 + 72)))[(unsigned long)bVar1];
            *puVar9 = uVar10 & 65535;
        }
        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
            this_01, (eastl::string*)(arg1 + 40), false);
    }

    // 0x1006938a0
    uint8_t* ComponentOpConfig::GetOpName(int arg1) const {
        uint8_t* puVar2;

        int iVar1 = field_8.size();
        if (arg1 < iVar1) {
            puVar2 = &field_8[(long)arg1];
        } else {
            puVar2 = &GetOpName(int)::EMPTY_STRING;
            if (GetOpName(int)::EMPTY_STRING == '\0') {
                iVar1 = ___cxa_guard_acquire(&GetOpName(int)::EMPTY_STRING);
                if (iVar1 != 0) {
                    puVar2 = &GetOpName(int)::EMPTY_STRING;
                    new ((fixed_string<char, 24>*)&GetOpName(int)::EMPTY_STRING) eastl::fixed_string<char, 24>();
                    ___cxa_atexit(PTR__fixed_string_100ee6c88, &GetOpName(int)::EMPTY_STRING, 4294967296);
                    ___cxa_guard_release(&GetOpName(int)::EMPTY_STRING);
                }
            }
        }
        return puVar2;
    }

    // 0x100693990
    void ComponentOpConfig::SetOpName(int arg1, const char* str) {
        uint8_t* this_01 = &field_8;
        if (this_01->size() <= arg1) {
            this_01->resize((long)(arg1 + 1));
        }
        fixed_string<char, 16>* this_00 = (fixed_string<char, 16>*)(*this_01)[(long)arg1];
        *this_00 = str;
    }

    // 0x1006939f0
    uint32_t ComponentOpConfig::GetOpCursor(int arg1) const {
        uint32_t* puVar3;

        int iVar1 = field_72.size();
        uint32_t uVar2 = 4294967295;
        if (arg1 < iVar1) {
            puVar3 = &field_72[(long)arg1];
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x100693a30
    void ComponentOpConfig::SetOpCursor(int arg1, int arg2) {
        uint32_t* puVar2;
        unsigned long arg1_00;

        uint8_t* this_00 = &field_72;
        int iVar1 = this_00->size();
        if (iVar1 <= arg1) {
            iVar1 = this_00->size();
            this_00->resize((long)(arg1 + 1));
            if (iVar1 < arg1) {
                arg1_00 = (unsigned long)iVar1;
                iVar1 = arg1 - iVar1;
                do {
                    puVar2 = (uint32_t*)(*this_00)[arg1_00];
                    *puVar2 = 4294967295;
                    arg1_00 = arg1_00 + 1;
                    iVar1 = iVar1 - 1;
                } while (iVar1 != 0);
            }
        }
        int* piVar3 = (int*)(*this_00)[(long)arg1];
        *piVar3 = arg2;
    }

    // 0x100693ac0
    void ComponentDragConfig::Decode(PacketT<Array<unsigned char>>& arg1, int arg2) {
        uint32_t in_register_00000034;

        PacketT<Array<unsigned char> _> PVar1 =
            (PacketT<Array<unsigned char> _>)((PacketReaderMixin<
                                                  PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034
                                                                                    << 32) |
                                                                                   (uint32_t)arg2))
                ->g1();
        arg1[17] = PVar1;
        PVar1 = (PacketT<Array<unsigned char> _>)((PacketReaderMixin<
                                                      PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034
                                                                                        << 32) |
                                                                                       (uint32_t)arg2))
                    ->g1();
        arg1[18] = PVar1;
        PVar1 = (PacketT<Array<unsigned char> _>)((PacketReaderMixin<
                                                      PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034
                                                                                        << 32) |
                                                                                       (uint32_t)arg2))
                    ->g1();
        arg1[16] = PVar1;
    }

    // 0x100693b00
    void ComponentServerConfig::DecodeServerKeys(PacketT<Array<unsigned char>>& arg1, int arg2) {
        bool bVar1;
        uint8_t bVar2;
        bool cVar3;
        ServerKeyProperties* serverKeyProperties;
        unsigned int* puVar5;
        uint32_t in_register_00000034;
        unsigned long arg1_00;
        int local_38;

        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_02 =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                (uint32_t)arg2);
        unsigned int uVar4 = this_02->g1();
        if ((char)uVar4 != '\0') {
            serverKeyProperties = (ServerKeyProperties*)operator new(904);
            new (serverKeyProperties) ServerKeyProperties();
            bVar1 = false;
            do {
                arg1_00 = (unsigned long)(((uVar4 & 255) >> 4) - 1);
                bVar2 = this_02->g1();
                uVar4 = (uVar4 & 15) << 8 | (unsigned int)bVar2;
                if (uVar4 == 4095) {
                    uVar4 = 4294967295;
                }
                cVar3 = this_02->g1s();
                local_38 = (int)cVar3;
                if (cVar3) {
                    bVar1 = true;
                }
                cVar3 = this_02->g1s();
                puVar5 = &serverKeyProperties->field_712[arg1_00];
                *puVar5 = uVar4;
                ((vector<int>*)serverKeyProperties->field_8[arg1_00])->push_back(local_38);
                ((vector<unsigned int>*)serverKeyProperties->field_360[arg1_00])->push_back((int)cVar3);
                uVar4 = this_02->g1();
            } while ((char)uVar4 != '\0');
            if (bVar1) {
                serverKeyProperties->field_0 = 1;
                ((arg1 + 8))->reset(serverKeyProperties);
            } else {
                serverKeyProperties->~ServerKeyProperties();
                operator delete(serverKeyProperties);
            }
        }
    }

} // namespace jag::ui
