// libs/encryption/Isaac.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.encryption

namespace jag {
    class Isaac {
    public:
        Isaac(std::array<int, 4ul> const&);
        void Init(std::array<int, 4ul> const&);
        void Generate();
        TakeNextValue();
        PollNextValue();

        // data members, from how the methods use this: 2068 bytes
        uint field_0; // offset 0
        char _unknown_4[2048];
        uint field_2052; // offset 2052
        int field_2056;  // offset 2056
        int field_2060;  // offset 2060
        char _unknown_2064[4];
    };

    // 0x100c6f310, 48 bytes, base-object constructor, placed by class name and debug map
    // Isaac::Isaac(std::array<int, 4ul> const&)
    /* Isaac::Isaac(std::array<int, 4ul> const&) */

    void Isaac::Isaac(array* param_1) {
        field_0 = 0;
        field_2052 = 0;
        field_2056 = 0;
        field_2060 = 0;
        Init(this, param_1);
    }

    // 0x100c6f340, 1216 bytes, placed by class name and debug map
    // Isaac::Init(std::array<int, 4ul> const&)
    /* Isaac::Init(std::array<int, 4ul> const&) */

    void Isaac::Init(array* param_1) {
        undefined1* this_00;
        undefined4 uVar1;
        undefined4* puVar2;
        int* piVar3;
        uint* puVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        ulong uVar11;
        int iVar12;
        uint uVar13;
        uint uVar14;
        int iVar15;
        uint uVar16;
        uint local_98[2];
        uint* local_90;
        int* local_88;
        uint* local_80;
        uint* local_78;
        ulong local_70;
        uint* local_68;
        array<unsigned int, 256ul>* local_60;
        ulong local_58;
        uint* local_50;
        array<unsigned int, 256ul>* local_48;
        ulong local_40;
        uint local_34;

        this_00 = &field_4;
        local_98[0] = 0;
        this_00->fill(local_98);
        local_48 = (array<unsigned int, 256ul>*)&field_1028;
        local_98[1] = 0;
        std::array<unsigned int, 256ul>::fill(local_48, local_98 + 1);
        uVar11 = 0;
        do {
            puVar2 = (undefined4*)std::array<int, 4ul>::operator[]((array<int, 4ul>*)param_1, uVar11);
            uVar1 = *puVar2;
            puVar2 =
                (undefined4*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)this_00, uVar11);
            *puVar2 = uVar1;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 4);
        local_58._0_4_ = 325574490;
        local_50 = (uint*)2514026585;
        local_34 = -1021952437;
        uVar6 = 255990488;
        uVar14 = 3643427448;
        uVar16 = 2769960009;
        uVar13 = 3304057371;
        uVar9 = 811634969;
        uVar11 = 0;
        local_60 = (array<unsigned int, 256ul>*)this_00;
        do {
            local_40 = uVar11;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, uVar11);
            local_58 = CONCAT44(local_58._4_4_, (uint)local_58 + *piVar3);
            local_90 = (uint*)(local_40 + 1);
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, (ulong)local_90);
            local_50 = (uint*)(ulong)(uint)((int)local_50 + *piVar3);
            local_88 = (int*)(local_40 + 2);
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, (ulong)local_88);
            local_34 = local_34 + *piVar3;
            local_80 = (uint*)(local_40 + 3);
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, (ulong)local_80);
            local_78 = (uint*)(local_40 + 4);
            uVar5 = (int)local_50 << 11 ^ (uint)local_58;
            local_58 = (ulong)uVar5;
            iVar12 = uVar6 + uVar5 + *piVar3;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, (ulong)local_78);
            local_70 = local_40 + 5;
            uVar6 = (int)local_50 + local_34 ^ local_34 >> 2;
            local_50 = (uint*)(ulong)uVar6;
            uVar14 = uVar14 + uVar6 + *piVar3;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, local_70);
            iVar8 = *piVar3;
            local_68 = (uint*)(local_40 + 6);
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, (ulong)local_68);
            iVar10 = *piVar3;
            uVar11 = local_40 + 7;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_60, uVar11);
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
            local_50 = (uint*)(ulong)uVar5;
            uVar9 = uVar7 >> 9 ^ uVar7 + iVar8;
            local_34 = local_34 + uVar9;
            local_58._0_4_ = uVar5 + uVar7;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_48, local_40);
            *piVar3 = (uint)local_58;
            puVar2 = (undefined4*)std::array<unsigned int, 256ul>::operator[](local_48, (ulong)local_90);
            *puVar2 = (int)local_50;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[](local_48, (ulong)local_88);
            *piVar3 = local_34;
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, (ulong)local_80);
            *puVar4 = uVar6;
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, (ulong)local_78);
            *puVar4 = uVar14;
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_70);
            *puVar4 = uVar16;
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, (ulong)local_68);
            *puVar4 = uVar13;
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, uVar11);
            *puVar4 = uVar9;
            uVar11 = local_40 + 8;
        } while (local_40 < 248);
        uVar11 = 0;
        do {
            local_40 = uVar11;
            local_60 = (array<unsigned int, 256ul>*)std::array<unsigned int, 256ul>::operator[](local_48, uVar11);
            local_58 = CONCAT44(local_58._4_4_, (uint)local_58 + *(int*)local_60);
            local_90 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 1);
            local_50 = (uint*)(ulong)((int)local_50 + *local_90);
            local_88 = (int*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 2);
            local_34 = local_34 + *local_88;
            local_80 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 3);
            uVar5 = (int)local_50 << 11 ^ (uint)local_58;
            local_58 = (ulong)uVar5;
            iVar8 = uVar6 + uVar5 + *local_80;
            local_78 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 4);
            uVar6 = local_34 >> 2 ^ (int)local_50 + local_34;
            local_70 = (ulong)uVar6;
            uVar5 = uVar14 + uVar6 + *local_78;
            local_50 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 5);
            uVar6 = *local_50;
            local_68 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 6);
            uVar14 = *local_68;
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[](local_48, local_40 + 7);
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
            local_50 = (uint*)(ulong)uVar5;
            uVar11 = local_40 + 8;
            local_58._0_4_ = iVar8;
        } while (local_40 < 248);
        Generate(this);
        field_0 = 256;
    }

    // 0x100c6f800, 16 bytes, complete-object constructor, placed by class name and debug map
    // Isaac::Isaac(std::array<int, 4ul> const&): jumps straight to the base-object constructor

    // 0x100c6f850, 336 bytes, placed by class name and debug map
    // Isaac::Generate()
    void Isaac::Generate() {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        int* piVar3;
        uint* puVar4;
        ulong uVar5;
        uint uVar6;
        uint uVar7;

        iVar2 = field_2060 + 1;
        field_2060 = iVar2;
        field_2056 = field_2056 + iVar2;
        this_00 = &field_1028;
        uVar5 = 0;
        do {
            puVar4 = (uint*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)this_00, uVar5);
            uVar6 = field_2052;
            if ((uVar5 & 2) == 0) {
                if ((uVar5 & 1) == 0) {
                    uVar7 = uVar6 << 13;
                } else {
                    uVar7 = uVar6 >> 6;
                }
            } else if ((uVar5 & 1) == 0) {
                uVar7 = uVar6 * 4;
            } else {
                uVar7 = uVar6 >> 16;
            }
            uVar1 = *puVar4;
            field_2052 = uVar7 ^ uVar6;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)this_00,
                                                                       (ulong)((int)uVar5 + 128U & 255));
            uVar6 = (uVar7 ^ uVar6) + *piVar3;
            field_2052 = uVar6;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)this_00,
                                                                       (ulong)(uVar1 >> 2 & 255));
            uVar6 = uVar6 + *piVar3 + field_2056;
            *puVar4 = uVar6;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)this_00,
                                                                       (ulong)(uVar6 >> 10 & 255));
            iVar2 = uVar1 + *piVar3;
            field_2056 = iVar2;
            piVar3 = (int*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)&field_4, uVar5);
            *piVar3 = iVar2;
            uVar5 = uVar5 + 1;
        } while (uVar5 != 256);
    }

    // 0x100c6f9a0, 64 bytes, placed by class name and debug map
    // Isaac::TakeNextValue()
    undefined4 Isaac::TakeNextValue() {
        undefined4* puVar1;
        uint uVar2;

        if (field_0 == 0) {
            Generate(this);
            field_0 = 256;
        }
        uVar2 = field_0 - 1;
        field_0 = uVar2;
        puVar1 = (undefined4*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)&field_4,
                                                                          (ulong)uVar2);
        return *puVar1;
    }

    // 0x100c6f9e0, 64 bytes, placed by class name and debug map
    // Isaac::PollNextValue()
    undefined4 Isaac::PollNextValue() {
        undefined4* puVar1;

        if (field_0 == 0) {
            Generate(this);
            field_0 = 256;
        }
        puVar1 = (undefined4*)std::array<unsigned int, 256ul>::operator[]((array<unsigned int, 256ul>*)&field_4,
                                                                          (ulong)(field_0 - 1));
        return *puVar1;
    }

} // namespace jag
