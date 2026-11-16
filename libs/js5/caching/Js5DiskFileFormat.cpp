// libs/js5/caching/Js5DiskFileFormat.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

namespace jag {
    class Js5DiskFileFormat {
    public:
        void DechunkGroupFiles(PacketT<Array<unsigned char>>& arg1, PacketT<Array<unsigned char>>& arg2,
                               unsigned int arg3, unsigned int arg4, unsigned int arg5);
        auto GetGroupFileData(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        void GetGroupFileData(PacketT<Array<unsigned char>>& arg1, const Array<unsigned char>& arg2, unsigned int arg3);
    };

    // 0x1009e0880
    void Js5DiskFileFormat::DechunkGroupFiles(PacketT<Array<unsigned char>>& arg1, PacketT<Array<unsigned char>>& arg2,
                                              unsigned int arg3, unsigned int arg4, unsigned int arg5) {
        int iVar1;
        uint32_t* puVar2;
        int* piVar3;
        unsigned int* puVar4;
        unsigned long uVar5;
        unsigned long arg1_01;
        int iVar7;
        unsigned int local_34;

        unsigned int local_48 = arg3;
        arg2.SetPos((unsigned long)(arg4 - 1));
        uint8_t local_35 = arg2.g1();
        unsigned int local_44 = (unsigned int)local_35;
        unsigned long uVar6 = (unsigned long)((arg4 - 1) + arg5 * local_44 * -4);
        arg2.SetPos(uVar6);
        Array<unsigned int> local_68((unsigned long)arg5);
        if (arg5 != 0) {
            uVar5 = 0;
            do {
                puVar2 = &local_68[uVar5];
                *puVar2 = 0;
                uVar5 = uVar5 + 1;
            } while ((unsigned long)arg5 != uVar5);
        }
        if (local_44 != 0) {
            local_34 = 0;
            do {
                if ((int)(unsigned long)arg5 != 0) {
                    uVar5 = 0;
                    iVar7 = 0;
                    do {
                        iVar1 = arg2.g4s();
                        piVar3 = &local_68[uVar5];
                        iVar7 = iVar7 + iVar1;
                        *piVar3 = *piVar3 + iVar7;
                        uVar5 = uVar5 + 1;
                    } while ((unsigned long)arg5 != uVar5);
                }
                local_34 = local_34 + 1;
            } while (local_34 != local_44);
        }
        local_34 = (int)(unsigned long)arg5 * 4 + 5;
        uVar5 = (unsigned long)local_34;
        if ((int)(unsigned long)arg5 != 0) {
            arg1_01 = 0;
            uVar5 = (unsigned long)local_34;
            do {
                piVar3 = &local_68[arg1_01];
                uVar5 = (unsigned long)(unsigned int)((int)uVar5 + *piVar3);
                arg1_01 = arg1_01 + 1;
            } while ((unsigned long)arg5 != arg1_01);
        }
        VBOMapper local_88(uVar5);
        arg1 = local_88;
        local_88 = Array<int>((unsigned long)arg5);
        arg1.p1<unsigned long>(1);
        unsigned int uVar8 = local_34;
        if ((int)(unsigned long)arg5 != 0) {
            uVar5 = 0;
            do {
                puVar4 = &local_88[uVar5];
                *puVar4 = uVar8;
                arg1.p4<int>(uVar8);
                piVar3 = &local_68[uVar5];
                uVar8 = uVar8 + *piVar3;
                uVar5 = uVar5 + 1;
            } while ((unsigned long)arg5 != uVar5);
        }
        arg1.p4<int>(uVar8);
        uVar5 = arg1.size();
        if (uVar5 != local_34) {
            LogAssert("groupFilesOut.GetPos()==headerLength",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskFileFormat.cpp",
                      67, "Js5DiskFileFormat: File data not starting at correct location");
        }
        arg2.SetPos(uVar6);
        if (local_35 != 0) {
            local_34 = 0;
            do {
                if ((int)(unsigned long)arg5 != 0) {
                    uVar6 = 0;
                    uVar8 = 0;
                    do {
                        iVar7 = arg2.g4s();
                        uVar8 = uVar8 + iVar7;
                        if (uVar8 != 0) {
                            piVar3 = &local_88[uVar6];
                            arg1.SetPos((long)*piVar3);
                            arg1.pArrayBuffer((unsigned char*)arg2.GetDataPtr(), (unsigned long)local_48,
                                              (unsigned long)uVar8);
                            piVar3 = &local_88[uVar6];
                            *piVar3 = *piVar3 + uVar8;
                            local_48 = local_48 + uVar8;
                        }
                        uVar6 = uVar6 + 1;
                    } while ((unsigned long)arg5 != uVar6);
                }
                local_34 = local_34 + 1;
            } while (local_34 != local_44);
        }
    }

    // 0x1009ef090
    auto Js5DiskFileFormat::GetGroupFileData(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        auto result;

        long lVar4 = arg1.size();
        uint8_t bVar1 = arg1.g1();
        if (1 < bVar1) {
            LogAssert("version <= Js5DiskFileFormat::VERSION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskFileFormat.cpp",
                      101, "Js5DiskFileFormat: Unknown group file version: %d", (unsigned long)bVar1);
        }
        arg1.SetPos((unsigned long)(arg2 * 4 + 1) + lVar4);
        unsigned int uVar2 = arg1.g4();
        int iVar3 = arg1.g4();
        MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::MakeShared<unsigned int&>(&result);
        arg1.SetPos((unsigned long)uVar2 + lVar4);
        PacketT<Array<unsigned char> _>* arg1_00 = (PacketT<Array<unsigned char> _>*)*result;
        arg1.gArrayBuffer<PacketT<Array<unsigned char>>>(*arg1_00, (unsigned long)(iVar3 - uVar2));
        ((PacketT<Array<unsigned char>>*)(result).operator->())->SetPos(0);
        return result;
    }

    // 0x1009ef180
    void Js5DiskFileFormat::GetGroupFileData(PacketT<Array<unsigned char>>& arg1, const Array<unsigned char>& arg2,
                                             unsigned int arg3) {
        void* pvVar5;
        void* pvVar6;

        uint8_t* pbVar3 = &arg2[0];
        if (1 < *pbVar3) {
            LogAssert("version <= Js5DiskFileFormat::VERSION",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                      "Js5DiskFileFormat.cpp",
                      117, "Js5DiskFileFormat: Unknown group file version: %d");
        }
        unsigned int arg2_00 = arg3 * 4 + 1;
        unsigned int uVar1 = PacketT<Array<unsigned char>>::ReadUint(arg2, arg2_00);
        unsigned int uVar7 = PacketT<Array<unsigned char>>::ReadUint(arg2, arg3 * 4 + 5) - uVar1;
        arg1.Reserve((unsigned long)uVar7);
        arg1.SetPos(0);
        if (uVar7 != 0) {
            if (arg2.end() < arg2_00 + uVar7) {
                LogAssert("index + length <= groupData.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/caching/"
                          "Js5DiskFileFormat.cpp",
                          129, nullptr);
            }
            pvVar5 = (void*)arg1.GetDataPtr();
            pvVar6 = &arg2[(unsigned long)uVar1];
            _memcpy(pvVar5, pvVar6, (unsigned long)uVar7);
        }
    }

} // namespace jag
