// libs/js5/caching/Js5DiskFileFormat.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

namespace jag {
    class Js5DiskFileFormat {
    public:
        void DechunkGroupFiles(PacketT<Array<unsigned char, eastl::allocator>>&,
                               PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int, unsigned int,
                               unsigned int);
        Js5DiskFileFormat* GetGroupFileData(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        void GetGroupFileData(PacketT<Array<unsigned char, eastl::allocator>>&,
                              Array<unsigned char, eastl::allocator> const&, unsigned int);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[8];
        long field_8; // offset 8
    };

    // 0x1009e0880, 800 bytes, placed by class name and debug map
    // Js5DiskFileFormat::DechunkGroupFiles(PacketT<Array<unsigned char, eastl::allocator> >&, PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int, unsigned int, unsigned int)
    void Js5DiskFileFormat::DechunkGroupFiles(PacketT* param_1, PacketT* param_2, uint param_3, uint param_4,
                                              uint param_5) {
        int iVar1;
        undefined4* puVar2;
        int* piVar3;
        uint* puVar4;
        uchar* puVar5;
        ulong uVar6;
        ulong uVar7;
        ulong uVar9;
        int iVar10;
        uint uVar11;
        VBOMapper local_88;
        Array<unsigned int, eastl::allocator> local_68[24];
        uint local_48;
        uint local_44;
        byte local_35;
        uint local_34;

        local_48 = param_3;
        param_2->SetPos((ulong)(param_4 - 1));
        local_35 = param_2->g1();
        local_44 = (uint)local_35;
        uVar9 = (ulong)((param_4 - 1) + param_5 * local_44 * -4);
        param_2->SetPos(uVar9);
        Array<unsigned int, eastl::allocator>::Array(local_68, (ulong)param_5);
        if (param_5 != 0) {
            uVar6 = 0;
            do {
                puVar2 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](local_68, uVar6);
                *puVar2 = 0;
                uVar6 = uVar6 + 1;
            } while ((ulong)param_5 != uVar6);
        }
        if (local_44 != 0) {
            local_34 = 0;
            do {
                if ((int)(ulong)param_5 != 0) {
                    uVar6 = 0;
                    iVar10 = 0;
                    do {
                        iVar1 = param_2->g4s();
                        piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](local_68, uVar6);
                        iVar10 = iVar10 + iVar1;
                        *piVar3 = *piVar3 + iVar10;
                        uVar6 = uVar6 + 1;
                    } while ((ulong)param_5 != uVar6);
                }
                local_34 = local_34 + 1;
            } while (local_34 != local_44);
        }
        local_34 = (int)(ulong)param_5 * 4 + 5;
        uVar6 = (ulong)local_34;
        if ((int)(ulong)param_5 != 0) {
            uVar7 = 0;
            uVar6 = (ulong)local_34;
            do {
                piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](local_68, uVar7);
                uVar6 = (ulong)(uint)((int)uVar6 + *piVar3);
                uVar7 = uVar7 + 1;
            } while ((ulong)param_5 != uVar7);
        }
        new (&local_88) PacketT<Array<unsigned char, eastl::allocator>>(uVar6);
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, (PacketT*)&local_88);
        local_88.~VBOMapper();
        new (&local_88) Array<int, eastl::allocator>((ulong)param_5);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, 1);
        uVar11 = local_34;
        if ((int)(ulong)param_5 != 0) {
            uVar6 = 0;
            do {
                puVar4 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&local_88, uVar6);
                *puVar4 = uVar11;
                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, uVar11);
                piVar3 = (int*)Array<unsigned int, eastl::allocator>::operator[](local_68, uVar6);
                uVar11 = uVar11 + *piVar3;
                uVar6 = uVar6 + 1;
            } while ((ulong)param_5 != uVar6);
        }
        PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
            (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, uVar11);
        uVar6 = param_1->size();
        if (uVar6 != local_34) {
            /* WARNING: Subroutine does not return */
            LogAssert("groupFilesOut.GetPos()==headerLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskFileFormat.cpp",
                      67, "Js5DiskFileFormat: File data not starting at correct location");
        }
        param_2->SetPos(uVar9);
        if (local_35 != 0) {
            local_34 = 0;
            do {
                if ((int)(ulong)param_5 != 0) {
                    uVar9 = 0;
                    uVar11 = 0;
                    do {
                        iVar10 = param_2->g4s();
                        uVar11 = uVar11 + iVar10;
                        if (uVar11 != 0) {
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_88, uVar9);
                            param_1->SetPos((long)*piVar3);
                            puVar5 = (uchar*)param_2->GetDataPtr();
                            param_1->pArrayBuffer(puVar5, (ulong)local_48, (ulong)uVar11);
                            piVar3 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&local_88, uVar9);
                            *piVar3 = *piVar3 + uVar11;
                            local_48 = local_48 + uVar11;
                        }
                        uVar9 = uVar9 + 1;
                    } while ((ulong)param_5 != uVar9);
                }
                local_34 = local_34 + 1;
            } while (local_34 != local_44);
        }
        local_88.~Array();
        local_68->~Array();
    }

    // 0x1009ef090, 240 bytes, placed by class name
    // Js5DiskFileFormat::GetGroupFileData(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    Js5DiskFileFormat* Js5DiskFileFormat::GetGroupFileData(PacketT* param_1, uint param_2) {
        byte bVar1;
        uint uVar2;
        int iVar3;
        long lVar4;
        PacketT* pPVar5;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        uint* extraout_RDX;
        uint local_34;

        lVar4 = param_1->size();
        bVar1 = param_1->g1();
        if (1 < bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("version <= Js5DiskFileFormat::VERSION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskFileFormat.cpp",
                      101, "Js5DiskFileFormat: Unknown group file version: %d", (ulong)bVar1);
        }
        param_1->SetPos((ulong)(param_2 * 4 + 1) + lVar4);
        uVar2 = param_1->g4();
        iVar3 = param_1->g4();
        local_34 = iVar3 - uVar2;
        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::MakeShared<unsigned int&>(
            (shared_ptr*)this, (MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>*)&local_34,
            extraout_RDX);
        param_1->SetPos((ulong)uVar2 + lVar4);
        pPVar5 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
            (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this);
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gArrayBuffer<
            PacketT<Array<unsigned char, eastl::allocator>>>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pPVar5, (ulong)local_34);
        this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                      shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                          (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)this);
        this_00->SetPos(0);
        return this;
    }

    // 0x1009ef180, 256 bytes, placed by class name
    // Js5DiskFileFormat::GetGroupFileData(PacketT<Array<unsigned char, eastl::allocator> >&, Array<unsigned char, eastl::allocator> const&, unsigned int)
    void Js5DiskFileFormat::GetGroupFileData(PacketT* param_1, Array* param_2, uint param_3) {
        uint uVar1;
        uint uVar2;
        byte* pbVar4;
        ulong uVar5;
        void* pvVar6;
        void* pvVar7;
        uint uVar8;

        pbVar4 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)param_2, 0);
        if (1 < *pbVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("version <= Js5DiskFileFormat::VERSION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskFileFormat.cpp",
                      117, "Js5DiskFileFormat: Unknown group file version: %d");
        }
        uVar1 = param_3 * 4 + 1;
        uVar2 = PacketT<Array<unsigned char, eastl::allocator>>::ReadUint(param_2, uVar1);
        uVar8 = PacketT<Array<unsigned char, eastl::allocator>>::ReadUint(param_2, param_3 * 4 + 5) - uVar2;
        param_1->Reserve((ulong)uVar8);
        param_1->SetPos(0);
        if (uVar8 != 0) {
            uVar5 = param_2->end();
            if (uVar5 < uVar1 + uVar8) {
                /* WARNING: Subroutine does not return */
                LogAssert("index + length <= groupData.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskFileFormat.cpp",
                          129, (char*)0);
            }
            pvVar6 = (void*)param_1->GetDataPtr();
            pvVar7 = (void*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)param_2, (ulong)uVar2);
            _memcpy(pvVar6, pvVar7, (ulong)uVar8);
        }
    }

} // namespace jag
