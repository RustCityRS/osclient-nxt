// libs/ui/components/ComponentBehaviourConfigs.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ComponentBehaviourConfigs.h"
#include "Component.h"

namespace jag::ui {
    // 0x100f38bc0, 16 bytes, __data; set at startup by ___cxx_global_var_init.27
    oldscape::sidebars::SideBarData ComponentServerConfig::DEFAULT_SERVER_ACTIVE_PROPERTIES = SideBarData(0, -1);

    // 0x1003bb8d0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.27
    void ___cxx_global_var_init_27() {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x1006933d0, 96 bytes, placed by debug map only (low confidence)
    // ComponentOpConfig::SetOpBaseName(char const*)
    void ComponentOpConfig::SetOpBaseName(char* param_1) {
        size_t sVar1;
        char* pcVar2;

        if ((param_1 == (char*)0) || (*param_1 == '\0')) {
            pcVar2 = (char*)0;
        } else {
            sVar1 = _strlen(param_1);
            pcVar2 = operator_new__(sVar1 + 1);
            _strncpy(pcVar2, param_1, sVar1);
            pcVar2[sVar1] = '\0';
        }
        reset(pcVar2);
    }

    // 0x100693460, 624 bytes, placed by debug map only (low confidence)
    // ComponentOpConfig::Decode(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ComponentOpConfig::Decode(PacketT* param_1, int param_2) {
        vector<unsigned int, eastl::allocator>* this;
        byte bVar1;
        byte bVar3;
        char* pcVar4;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true, eastl::allocator>>* this_00;
        ulong uVar5;
        undefined4* puVar7;
        ulong uVar8;
        uint* puVar9;
        uint uVar10;
        undefined4 in_register_00000034;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_01;
        fixed_string<char, 40, true, eastl::allocator> local_c0[64];
        fixed_string<char, 32, true, eastl::allocator> local_80[72];
        undefined8 local_38;

        this_01 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000034,
                                                                                                param_2);
        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_80);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
            eastl::fixed_string<char, 32, true, eastl::allocator>>(this_01, (fixed_string*)local_80, false);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        SetOpBaseName((ComponentOpConfig*)param_1, pcVar4);
        bVar1 = this_01->g1();
        if ((bVar1 & 15) != 0) {
            ((param_1 + 8))->resize((ulong)(bVar1 & 15));
            new (local_c0) eastl::fixed_string<char, 24, true, eastl::allocator>();
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::fixed_string<char, 24, true, eastl::allocator>>(this_01, (fixed_string*)local_c0, false);
            local_c0->trim();
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                this_00 = (basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>*)(param_1 + 8),
                        0);
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 24ul, 1ul, 0ul, true, eastl::allocator>>::assign(this_00,
                                                                                                              pcVar4,
                                                                                                              uVar5);
            }
            /* WARNING: Subroutine does not return */
            eastl::fixed_string<char, 40, true, eastl::allocator>::~fixed_string(local_c0);
        }
        if (15 < bVar1) {
            bVar3 = this_01->g1();
            this = (vector<unsigned int, eastl::allocator>*)(param_1 + 72);
            eastl::vector<int, eastl::allocator>::resize((ulong)this);
            if (eastl::vector<unsigned int, eastl::allocator>::size(this) != 0) {
                uVar10 = 1;
                uVar5 = 0;
                do {
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this, uVar5);
                    *puVar7 = 4294967295;
                    uVar5 = (ulong)uVar10;
                    uVar8 = eastl::vector<unsigned int, eastl::allocator>::size(this);
                    uVar10 = uVar10 + 1;
                } while (uVar5 < uVar8);
            }
            uVar10 = this_01->g2();
            puVar9 = (uint*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this,
                                                                             (ulong)bVar3);
            *puVar9 = uVar10 & 65535;
        }
        if (31 < bVar1) {
            bVar1 = this_01->g1();
            uVar10 = this_01->g2();
            puVar9 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)(param_1 + 72), (ulong)bVar1);
            *puVar9 = uVar10 & 65535;
        }
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
            this_01, (basic_string*)(param_1 + 40), false);
        /* WARNING: Subroutine does not return */
        local_80->~fixed_string();
    }

    // 0x1006938a0, 176 bytes, placed by debug map only (low confidence)
    // ComponentOpConfig::GetOpName(int) const
    undefined1* ComponentOpConfig::GetOpName(int param_1) {
        int iVar1;
        undefined1* puVar2;

        iVar1 = (&field_8)->size();
        if (param_1 < iVar1) {
            puVar2 = (undefined1*)
                eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>*)&field_8,
                    (long)param_1);
        } else {
            puVar2 = &GetOpName(int)::EMPTY_STRING;
            if (GetOpName(int)::EMPTY_STRING == '\0') {
                iVar1 = ___cxa_guard_acquire(&GetOpName(int)::EMPTY_STRING);
                if (iVar1 != 0) {
                    puVar2 = &GetOpName(int)::EMPTY_STRING;
                    new (&GetOpName(int)::EMPTY_STRING) eastl::fixed_string<char, 24, true, eastl::allocator>();
                    ___cxa_atexit(PTR__fixed_string_100ee6c88, &GetOpName(int)::EMPTY_STRING, 4294967296);
                    ___cxa_guard_release(&GetOpName(int)::EMPTY_STRING);
                }
            }
        }
        return puVar2;
    }

    // 0x100693990, 96 bytes, placed by debug map only (low confidence)
    // ComponentOpConfig::SetOpName(int, char const*)
    void ComponentOpConfig::SetOpName(int param_1, char* param_2) {
        int iVar1;
        fixed_string<char, 16, true, eastl::allocator>* this_00;
        undefined1* this_01;

        this_01 = &field_8;
        iVar1 = this_01->size();
        if (iVar1 <= param_1) {
            this_01->resize((long)(param_1 + 1));
        }
        this_00 = (fixed_string<char, 16, true, eastl::allocator>*)
            eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::fixed_string<char, 24, true, eastl::allocator>, eastl::allocator>*)this_01,
                (long)param_1);
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(this_00, param_2);
    }

    // 0x1006939f0, 64 bytes, placed by debug map only (low confidence)
    // ComponentOpConfig::GetOpCursor(int) const
    undefined4 ComponentOpConfig::GetOpCursor(int param_1) {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;

        iVar1 = (&field_72)->size();
        uVar2 = 4294967295;
        if (param_1 < iVar1) {
            puVar3 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                (vector<int, eastl::allocator>*)&field_72, (long)param_1);
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x100693a30, 144 bytes, placed by debug map only (low confidence)
    // ComponentOpConfig::SetOpCursor(int, int)
    void ComponentOpConfig::SetOpCursor(int param_1, int param_2) {
        int iVar1;
        undefined4* puVar2;
        int* piVar3;
        ulong uVar4;
        undefined1* this_00;

        this_00 = &field_72;
        iVar1 = this_00->size();
        if (iVar1 <= param_1) {
            iVar1 = this_00->size();
            eastl::vector<int, eastl::allocator>::resize((ulong)this_00);
            if (iVar1 < param_1) {
                uVar4 = (ulong)iVar1;
                iVar1 = param_1 - iVar1;
                do {
                    puVar2 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)this_00, uVar4);
                    *puVar2 = 4294967295;
                    uVar4 = uVar4 + 1;
                    iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
            }
        }
        piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                        (long)param_1);
        *piVar3 = param_2;
    }

    // 0x100693ac0, 64 bytes, placed by debug map only (low confidence)
    // ComponentDragConfig::Decode(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ComponentDragConfig::Decode(PacketT* param_1, int param_2) {
        PacketT PVar1;
        undefined4 in_register_00000034;

        PVar1 = (PacketT)(CONCAT44(in_register_00000034, param_2))->g1();
        param_1[17] = PVar1;
        PVar1 = (PacketT)(CONCAT44(in_register_00000034, param_2))->g1();
        param_1[18] = PVar1;
        PVar1 = (PacketT)(CONCAT44(in_register_00000034, param_2))->g1();
        param_1[16] = PVar1;
    }

    // 0x100693b00, 368 bytes, placed by debug map only (low confidence)
    // ComponentServerConfig::DecodeServerKeys(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ComponentServerConfig::DecodeServerKeys(PacketT* param_1, int param_2) {
        bool bVar1;
        byte bVar2;
        char cVar3;
        uint uVar4;
        ServerKeyProperties* this;
        uint* puVar5;
        vector<int, eastl::allocator>* this_00;
        vector<unsigned int, eastl::allocator>* this_01;
        undefined4 in_register_00000034;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_02;
        ulong uVar6;
        int local_38;
        uint local_34;

        this_02 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)CONCAT44(in_register_00000034,
                                                                                                param_2);
        uVar4 = this_02->g1();
        if ((char)uVar4 != '\0') {
            this = operator_new(904);
            ServerKeyProperties::ServerKeyProperties(this);
            bVar1 = false;
            do {
                uVar6 = (ulong)(((uVar4 & 255) >> 4) - 1);
                bVar2 = this_02->g1();
                uVar4 = (uVar4 & 15) << 8 | (uint)bVar2;
                if (uVar4 == 4095) {
                    uVar4 = 4294967295;
                }
                cVar3 = this_02->g1s();
                local_38 = (int)cVar3;
                if (cVar3 != '\0') {
                    bVar1 = true;
                }
                cVar3 = this_02->g1s();
                puVar5 = (uint*)std::array<int, 11ul>::operator[]((array<int, 11ul>*)&field_712, uVar6);
                *puVar5 = uVar4;
                this_00 =
                    (vector<int, eastl::allocator>*)std::array<eastl::vector<int, eastl::allocator>, 11ul>::operator[](
                        (array<eastl::vector<int, eastl::allocator>, 11ul>*)&field_8, uVar6);
                eastl::vector<int, eastl::allocator>::push_back(this_00, &local_38);
                this_01 = (vector<unsigned int, eastl::allocator>*)
                    std::array<eastl::vector<unsigned int, eastl::allocator>, 11ul>::operator[](
                        (array<eastl::vector<unsigned int, eastl::allocator>, 11ul>*)&field_360, uVar6);
                local_34 = (int)cVar3;
                eastl::vector<unsigned int, eastl::allocator>::push_back(this_01, &local_34);
                uVar4 = this_02->g1();
            } while ((char)uVar4 != '\0');
            if (bVar1) {
                field_0 = 1;
                ((param_1 + 8))->reset(this);
            } else {
                ~ServerKeyProperties();
                operator_delete(this);
            }
        }
    }

} // namespace jag::ui
