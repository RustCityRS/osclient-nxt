// libs/encryption/Isaac.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.encryption

namespace jag {
    class Isaac {
    public:
        Isaac(const std::array<int, 4ul>& arg1);
        void Init(const std::array<int, 4ul>& arg1);
        void Generate();
        uint32_t TakeNextValue();
        uint32_t PollNextValue();

    private:
        unsigned int field_0;
        uint8_t _unknown_4[2048];
        unsigned int field_2052;
        int field_2056;
        int field_2060;
        uint8_t _unknown_2064[4];
    };

    // 0x100c6f310
    Isaac::Isaac(const std::array<int, 4ul>& arg1) : field_0(0), field_2052(0), field_2056(0), field_2060(0) {
        Init(arg1);
    }

    // 0x100c6f340
    void Isaac::Init(const std::array<int, 4ul>& arg1) {
        uint32_t uVar1;
        uint32_t* puVar2;
        int* piVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned int uVar7;
        int iVar8;
        int iVar10;
        int iVar12;
        int iVar15;
        unsigned int local_98[2];
        unsigned int* local_90;
        int* local_88;
        unsigned int* local_80;
        unsigned int* local_78;
        unsigned long local_70;
        unsigned int* local_68;
        unsigned long local_58;
        unsigned long local_40;

        uint8_t* this_00 = &field_4;
        local_98[0] = 0;
        this_00->fill(*local_98);
        array<unsigned int, 256ul>* local_48 = (array<unsigned int, 256ul>*)&field_1028;
        local_98[1] = 0;
        local_48->fill(*(local_98 + 1));
        unsigned long uVar11 = 0;
        do {
            puVar2 = &arg1[uVar11];
            uVar1 = *puVar2;
            puVar2 = (uint32_t*)(*this_00)[uVar11];
            *puVar2 = uVar1;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 4);
        local_58._0_4_ = 325574490;
        unsigned int* local_50 = (unsigned int*)2514026585;
        unsigned int local_34 = -1021952437;
        unsigned int uVar6 = 255990488;
        unsigned int uVar14 = 3643427448;
        unsigned int uVar16 = 2769960009;
        unsigned int uVar13 = 3304057371;
        unsigned int uVar9 = 811634969;
        uVar11 = 0;
        array<unsigned int, 256ul>* local_60 = (array<unsigned int, 256ul>*)this_00;
        do {
            local_40 = uVar11;
            piVar3 = (int*)(*local_60)[uVar11];
            local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((unsigned int)local_58 + *piVar3));
            local_90 = (unsigned int*)(local_40 + 1);
            piVar3 = (int*)(*local_60)[(unsigned long)local_90];
            local_50 = (unsigned int*)(unsigned long)(unsigned int)((int)local_50 + *piVar3);
            local_88 = (int*)(local_40 + 2);
            piVar3 = (int*)(*local_60)[(unsigned long)local_88];
            local_34 = local_34 + *piVar3;
            local_80 = (unsigned int*)(local_40 + 3);
            piVar3 = (int*)(*local_60)[(unsigned long)local_80];
            local_78 = (unsigned int*)(local_40 + 4);
            uVar5 = (int)local_50 << 11 ^ (unsigned int)local_58;
            local_58 = (unsigned long)uVar5;
            iVar12 = uVar6 + uVar5 + *piVar3;
            piVar3 = (int*)(*local_60)[(unsigned long)local_78];
            local_70 = local_40 + 5;
            uVar6 = (int)local_50 + local_34 ^ local_34 >> 2;
            local_50 = (unsigned int*)(unsigned long)uVar6;
            uVar14 = uVar14 + uVar6 + *piVar3;
            piVar3 = (int*)(*local_60)[local_70];
            iVar8 = *piVar3;
            local_68 = (unsigned int*)(local_40 + 6);
            piVar3 = (int*)(*local_60)[(unsigned long)local_68];
            iVar10 = *piVar3;
            uVar11 = local_40 + 7;
            piVar3 = (int*)(*local_60)[uVar11];
            local_34 = local_34 + iVar12 ^ iVar12 * 256;
            iVar15 = uVar16 + iVar8 + local_34;
            uVar6 = uVar14 >> 16 ^ uVar14 + iVar12;
            uVar13 = uVar13 + iVar10 + uVar6;
            uVar14 = iVar15 * 1024 ^ iVar15 + uVar14;
            iVar8 = uVar9 + *piVar3 + uVar14;
            uVar16 = uVar13 >> 4 ^ iVar15 + uVar13;
            uVar7 = (int)local_58 + uVar16;
            uVar13 = iVar8 * 256 ^ iVar8 + uVar13;
            uVar5 = (int)local_50 + uVar13;
            local_50 = (unsigned int*)(unsigned long)uVar5;
            uVar9 = uVar7 >> 9 ^ uVar7 + iVar8;
            local_34 = local_34 + uVar9;
            local_58._0_4_ = uVar5 + uVar7;
            piVar3 = (int*)(*local_48)[local_40];
            *piVar3 = (unsigned int)local_58;
            puVar2 = (uint32_t*)(*local_48)[(unsigned long)local_90];
            *puVar2 = (int)local_50;
            piVar3 = (int*)(*local_48)[(unsigned long)local_88];
            *piVar3 = local_34;
            puVar4 = (unsigned int*)(*local_48)[(unsigned long)local_80];
            *puVar4 = uVar6;
            puVar4 = (unsigned int*)(*local_48)[(unsigned long)local_78];
            *puVar4 = uVar14;
            puVar4 = (unsigned int*)(*local_48)[local_70];
            *puVar4 = uVar16;
            puVar4 = (unsigned int*)(*local_48)[(unsigned long)local_68];
            *puVar4 = uVar13;
            puVar4 = (unsigned int*)(*local_48)[uVar11];
            *puVar4 = uVar9;
            uVar11 = local_40 + 8;
        } while (local_40 < 248);
        uVar11 = 0;
        do {
            local_40 = uVar11;
            local_60 = (array<unsigned int, 256ul>*)(*local_48)[uVar11];
            local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((unsigned int)local_58 + *(int*)local_60));
            local_90 = (unsigned int*)(*local_48)[local_40 + 1];
            local_50 = (unsigned int*)(unsigned long)((int)local_50 + *local_90);
            local_88 = (int*)(*local_48)[local_40 + 2];
            local_34 = local_34 + *local_88;
            local_80 = (unsigned int*)(*local_48)[local_40 + 3];
            uVar5 = (int)local_50 << 11 ^ (unsigned int)local_58;
            local_58 = (unsigned long)uVar5;
            iVar8 = uVar6 + uVar5 + *local_80;
            local_78 = (unsigned int*)(*local_48)[local_40 + 4];
            uVar6 = local_34 >> 2 ^ (int)local_50 + local_34;
            local_70 = (unsigned long)uVar6;
            uVar5 = uVar14 + uVar6 + *local_78;
            local_50 = (unsigned int*)(*local_48)[local_40 + 5];
            uVar6 = *local_50;
            local_68 = (unsigned int*)(*local_48)[local_40 + 6];
            uVar14 = *local_68;
            puVar4 = (unsigned int*)(*local_48)[local_40 + 7];
            local_34 = iVar8 * 256 ^ local_34 + iVar8;
            iVar12 = uVar16 + uVar6 + local_34;
            uVar6 = uVar5 >> 16 ^ uVar5 + iVar8;
            uVar13 = uVar13 + uVar14 + uVar6;
            uVar14 = iVar12 * 1024 ^ iVar12 + uVar5;
            iVar10 = uVar9 + *puVar4 + uVar14;
            uVar16 = uVar13 >> 4 ^ iVar12 + uVar13;
            uVar9 = (int)local_58 + uVar16;
            uVar13 = iVar10 * 256 ^ iVar10 + uVar13;
            uVar5 = (int)local_70 + uVar13;
            iVar8 = uVar5 + uVar9;
            uVar9 = uVar9 >> 9 ^ uVar9 + iVar10;
            *(int*)local_60 = iVar8;
            *local_90 = uVar5;
            local_34 = local_34 + uVar9;
            *local_88 = local_34;
            *local_80 = uVar6;
            *local_78 = uVar14;
            *local_50 = uVar16;
            *local_68 = uVar13;
            *puVar4 = uVar9;
            local_50 = (unsigned int*)(unsigned long)uVar5;
            uVar11 = local_40 + 8;
            local_58._0_4_ = iVar8;
        } while (local_40 < 248);
        Generate();
        field_0 = 256;
    }

    // 0x100c6f850
    void Isaac::Generate() {
        unsigned int uVar1;
        int* piVar3;
        unsigned int* puVar4;
        unsigned int uVar5;
        unsigned int uVar6;

        int iVar2 = field_2060 + 1;
        field_2060 = iVar2;
        field_2056 = field_2056 + iVar2;
        uint8_t* this_00 = &field_1028;
        unsigned long arg1 = 0;
        do {
            puVar4 = (unsigned int*)(*this_00)[arg1];
            uVar5 = field_2052;
            if ((arg1 & 2) == 0) {
                if ((arg1 & 1) == 0) {
                    uVar6 = uVar5 << 13;
                } else {
                    uVar6 = uVar5 >> 6;
                }
            } else if ((arg1 & 1) == 0) {
                uVar6 = uVar5 * 4;
            } else {
                uVar6 = uVar5 >> 16;
            }
            uVar1 = *puVar4;
            field_2052 = uVar6 ^ uVar5;
            piVar3 = (int*)(*this_00)[(unsigned long)((int)arg1 + 128U & 255)];
            uVar5 = (uVar6 ^ uVar5) + *piVar3;
            field_2052 = uVar5;
            piVar3 = (int*)(*this_00)[(unsigned long)(uVar1 >> 2 & 255)];
            uVar5 = uVar5 + *piVar3 + field_2056;
            *puVar4 = uVar5;
            piVar3 = (int*)(*this_00)[(unsigned long)(uVar5 >> 10 & 255)];
            iVar2 = uVar1 + *piVar3;
            field_2056 = iVar2;
            piVar3 = &field_4[arg1];
            *piVar3 = iVar2;
            arg1 = arg1 + 1;
        } while (arg1 != 256);
    }

    // 0x100c6f9a0
    uint32_t Isaac::TakeNextValue() {
        if (field_0 == 0) {
            Generate();
            field_0 = 256;
        }
        unsigned int uVar2 = field_0 - 1;
        field_0 = uVar2;
        uint32_t* puVar1 = &field_4[(unsigned long)uVar2];
        return *puVar1;
    }

    // 0x100c6f9e0
    uint32_t Isaac::PollNextValue() {
        if (field_0 == 0) {
            Generate();
            field_0 = 256;
        }
        uint32_t* puVar1 = &field_4[(unsigned long)(field_0 - 1)];
        return *puVar1;
    }

} // namespace jag
