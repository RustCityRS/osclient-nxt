// libs/js5/index/Js5Index.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5Index.h"

namespace jag {
    // 0x103bc2178, 8 bytes, __common; set at startup by ___cxx_global_var_init.132
    Js5Index::HASH_MAIN = stringtools::hash32("main");

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    Js5Index::GetIndexWhirlpool() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    Js5Index::GetIndexCRC() const;

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    Js5Index::GetIndexVersion() const;

    // 0x10017f5b0: the linker folded this into oldscape::javapal::GameShell::GetPixToolkit(), which has identical code
    Js5Index::GetTotalPackedGroupSize() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    Js5Index::GetGroupList() const;

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    Js5Index::GetGroupCount() const;

    // 0x1003cf280: the linker folded this into game::MapElementType::GetTextBackgroundFillRGBA() const, which has identical code
    Js5Index::GetMaximumGroupID() const;

    // 0x1009e03c0, 64 bytes, placed by class name and debug map
    // Js5Index::Init(unsigned int, Array<unsigned char, eastl::allocator> const&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void Js5Index::Init(uint param_1, Array* param_2, PacketT* param_3) {
        field_0 = param_1;
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)&field_8, param_2);
        field_140 = 4294967295;
        LoadIndex(this, param_3, false);
    }

    // 0x1009e4950, 160 bytes, placed by class name
    // Js5Index::DoesFileExist(unsigned int, unsigned int) const
    ulong Js5Index::DoesFileExist(uint param_1, uint param_2) {
        uint uVar1;
        char cVar2;
        uint uVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        long lVar4;
        long lVar5;
        ulong uVar6;
        uint local_24;

        local_24 = param_2;
        cVar2 = DoesGroupExist(this, param_1);
        uVar1 = local_24;
        if (cVar2 != '\0') {
            uVar3 = GetMaximumFileID(this, param_1);
            if (uVar1 < uVar3) {
                cVar2 = (&field_248)->empty();
                uVar6 = CONCAT71((uint7)(uint3)(uVar1 >> 8), 1);
                if (cVar2 == '\0') {
                    this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        Array<eastl::vector_map<
                                  unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                              eastl::allocator>::
                        operator[](
                            (Array<eastl::vector_map<
                                       unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                   eastl::allocator>*)&field_248,
                            (ulong)param_1);
                    cVar2 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_00);
                    if (cVar2 == '\0') {
                        lVar4 = this_00->find(&local_24);
                        lVar5 = this_00->end();
                        uVar6 = CONCAT71((int7)((ulong)lVar4 >> 8), lVar4 == lVar5);
                    }
                }
                goto LAB_1009e49d3;
            }
        }
        uVar6 = 0;
    LAB_1009e49d3:
        return uVar6 & 4294967295;
    }

    // 0x1009e52f0, 240 bytes, placed by class name
    // Js5Index::GetFirstFileID(unsigned int, unsigned int&) const
    undefined8 Js5Index::GetFirstFileID(uint param_1, uint* param_2) {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        short* psVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>* this_02;
        long lVar4;
        long lVar5;
        ulong uVar6;
        uint local_34;

        cVar1 = DoesGroupExist(this, param_1);
        if (cVar1 != '\0') {
            uVar6 = (ulong)param_1;
            psVar3 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                (Array<unsigned short, eastl::allocator>*)&field_224, uVar6);
            if (*psVar3 != 0) {
                this_00 = &field_248;
                cVar1 = this_00->empty();
                if (cVar1 == '\0') {
                    this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        Array<eastl::vector_map<
                                  unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                              eastl::allocator>::
                        operator[](
                            (Array<eastl::vector_map<
                                       unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                   eastl::allocator>*)this_00,
                            uVar6);
                    cVar1 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_01);
                    if (cVar1 == '\0') {
                        this_02 = (vector_map<
                                   unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>*)
                            Array<eastl::vector_map<
                                      unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                  eastl::allocator>::
                            operator[](
                                (Array<eastl::vector_map<
                                           unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                       eastl::allocator>*)this_00,
                                uVar6);
                        uVar2 = GetMaximumFileID(this, param_1);
                        local_34 = 0;
                        if (uVar2 == 0) {
                            return 0;
                        }
                        do {
                            lVar4 = eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>,
                                                      eastl::allocator,
                                                      eastl::vector<eastl::pair<unsigned int, unsigned int>,
                                                                    eastl::allocator>>::find(this_02, &local_34);
                            lVar5 = this_02->end();
                            if (lVar4 == lVar5) {
                                *param_2 = local_34;
                                return 1;
                            }
                            local_34 = local_34 + 1;
                        } while (local_34 < uVar2);
                        return 0;
                    }
                }
                *param_2 = 0;
                return 1;
            }
        }
        return 0;
    }

    // 0x1009e5fc0, 16 bytes, complete-object constructor, placed by class name
    // Js5Index::Js5Index(unsigned int, Array<unsigned char, eastl::allocator> const&, PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x1009e5fd0, 32 bytes, complete-object constructor, placed by class name
    // Js5Index::Js5Index(unsigned int, unsigned int, Array<unsigned char, eastl::allocator> const&, Array<unsigned char, eastl::allocator> const&, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void Js5Index::Js5Index(uint param_1, uint param_2, Array* param_3, Array* param_4, uint param_5,
                            PacketT* param_6) {
        Js5Index(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x1009ef760, 256 bytes, placed by class name
    // Js5Index::GetFileIndex(unsigned int, unsigned int) const
    uint Js5Index::GetFileIndex(uint param_1, uint param_2) {
        char cVar1;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        long lVar2;
        long lVar3;
        reverse_iterator<eastl::pair<unsigned int, unsigned short> const*> local_30[12];
        uint local_24;

        local_24 = param_2;
        cVar1 = DoesGroupExist(this, param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 318,
                (char*)0);
        }
        cVar1 = (&field_248)->empty();
        if (cVar1 == '\0') {
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)Array<
                eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                eastl::allocator>::
            operator[](
                (Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                         eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                       eastl::allocator>*)&field_248,
                (ulong)param_1);
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00);
            if (cVar1 == '\0') {
                lVar2 = this_00->find(&local_24);
                lVar3 = this_00->end();
                if (lVar2 != lVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert(
                        "missingFiles.find(fileID) == missingFiles.end()",
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp",
                        303, (char*)0);
                }
                lVar2 = this_00->lower_bound(&local_24);
                lVar3 = this_00->end();
                if (lVar2 == lVar3) {
                    eastl::vector<unsigned long,
                                  eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                    lVar2 =
                        eastl::reverse_iterator<eastl::pair<unsigned int, unsigned short> const*>::operator->(local_30);
                    param_2 = param_2 - (*(ushort*)(lVar2 + 4) + 1);
                } else {
                    param_2 = param_2 - *(ushort*)(lVar2 + 4);
                }
            }
        }
        return param_2;
    }

    // 0x1009ef9d0, 512 bytes, base-object constructor, placed by class name
    // Js5Index::Js5Index(unsigned int, unsigned int, Array<unsigned char, eastl::allocator> const&, Array<unsigned char, eastl::allocator> const&, unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void Js5Index::Js5Index(uint param_1, uint param_2, Array* param_3, Array* param_4, uint param_5,
                            PacketT* param_6) {
        char cVar1;
        undefined8 uVar2;

        field_0 = param_2;
        new (&field_8, param_4) Array<unsigned char, eastl::allocator>();
        field_32 = param_5;
        field_36 = 0;
        field_40 = 0;
        new (&field_48) Array<unsigned int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>();
        field_136 = 4294967295;
        field_140 = 4294967295;
        field_144 = 0;
        new (&field_152) Array<int, eastl::allocator>();
        new (&field_176) Array<Array<unsigned char, eastl::allocator>, eastl::allocator>();
        new (&field_200) Array<int, eastl::allocator>();
        new (&field_224) Array<unsigned short, eastl::allocator>();
        new (&field_248)
            Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                  eastl::allocator>();
        if (param_1 == param_2) {
            cVar1 = param_4->empty();
            if ((cVar1 == '\0') && (cVar1 = Array<unsigned char, eastl::allocator>::operator==(
                                        (Array<unsigned char, eastl::allocator>*)param_3, param_4),
                                    cVar1 == '\0')) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(
                    uVar2, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 27,
                    "Js5Index: Invalid Js5 Index whirlpool");
                return;
            }
            LoadIndex(this, param_6, true);
        } else {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 21,
                "Js5Index: Invalid Js5 Index CRC: %u", param_1);
        }
    }

    // 0x1009efbe0, 1552 bytes, placed by class name
    // Js5Index::LoadIndex(PacketT<Array<unsigned char, eastl::allocator> >&, bool)
    void Js5Index::LoadIndex(PacketT* param_1, bool param_2) {
        undefined1* puVar1;
        undefined1* this_00;
        ushort uVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Array<unsigned int, eastl::allocator>* pAVar3;
        Js5Index* pJVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar5;
        byte bVar6;
        undefined1 uVar7;
        uint uVar8;
        int iVar9;
        undefined4 uVar10;
        int iVar11;
        undefined8 uVar12;
        uint* puVar13;
        int* piVar14;
        undefined4* puVar15;
        Array<unsigned char, eastl::allocator>* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        uchar* puVar16;
        void* pvVar17;
        undefined2* puVar18;
        ushort* puVar19;
        vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>* this_04;
        int iVar20;
        ulong uVar21;
        ulong uVar22;
        undefined8 uVar23;
        char* pcVar24;
        uint uVar25;
        ushort uVar26;
        undefined8 local_98[3];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_80;
        Array<unsigned short, eastl::allocator>* local_78;
        ulong local_70;
        Array<int, eastl::allocator>* local_68;
        Array<unsigned int, eastl::allocator>* local_60;
        Array<int, eastl::allocator>* local_58;
        Js5Index* local_50;
        ushort local_46;
        int local_44;
        ulong local_40;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* local_38;

        param_1->SetPos(0);
        bVar6 = param_1->g1();
        if (bVar6 == 7) {
            local_38 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1;
            uVar8 = param_1->g4();
            pPVar5 = local_38;
            if (param_2) {
                if (uVar8 != field_32) {
                    uVar12 = logger::default_logger();
                    pcVar24 = "Js5Index: Mismatched js5 index version, got: %u";
                    uVar23 = 107;
                    goto LAB_1009efc7c;
                }
            } else {
                field_32 = uVar8;
            }
            uVar7 = local_38->g1();
            local_40 = CONCAT71(local_40._1_7_, uVar7);
            uVar8 = pPVar5->gSmart2or4();
            field_40 = uVar8;
            puVar1 = &field_48;
            uVar25 = 0;
            puVar1->set_max_size((ulong)uVar8, 0);
            if (field_40 != 0) {
                uVar21 = 0;
                do {
                    iVar9 = local_38->gSmart2or4();
                    uVar25 = iVar9 + uVar25;
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)puVar1, uVar21);
                    *puVar13 = uVar25;
                    if ((int)field_140 < (int)uVar25) {
                        field_140 = uVar25;
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 < field_40);
            }
            uVar21 = (ulong)(field_140 + 1);
            local_68 = (Array<int, eastl::allocator>*)&field_152;
            local_68->set_max_size(uVar21, 0);
            if ((local_40 & 2) != 0) {
                (&field_176, uVar21, 0)->set_max_size();
            }
            local_58 = (Array<int, eastl::allocator>*)&field_200;
            local_58->set_max_size(uVar21, 0);
            local_78 = (Array<unsigned short, eastl::allocator>*)&field_224;
            local_78->set_max_size(uVar21, 0);
            local_50 = this;
            if ((local_40 & 1) != 0) {
                this_00 = &field_72;
                this_00->set_max_size(uVar21, 0);
                if (field_40 != 0) {
                    uVar22 = 0;
                    do {
                        iVar9 = local_38->g4s();
                        piVar14 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                 uVar22);
                        this = local_50;
                        *piVar14 = iVar9;
                        if (iVar9 == HASH_MAIN) {
                            puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                                (Array<unsigned int, eastl::allocator>*)puVar1, uVar22);
                            field_136 = *puVar13;
                        }
                        uVar22 = uVar22 + 1;
                    } while (uVar22 < field_40);
                }
            }
            pPVar5 = local_38;
            local_70 = uVar21;
            if (field_40 != 0) {
                uVar21 = 0;
                do {
                    uVar10 = pPVar5->g4s();
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)puVar1, uVar21);
                    puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, (ulong)*puVar13);
                    *puVar15 = uVar10;
                    uVar21 = uVar21 + 1;
                } while (uVar21 < field_40);
            }
            local_60 = (Array<unsigned int, eastl::allocator>*)puVar1;
            if (((local_40 & 8) != 0) && (field_40 != 0)) {
                uVar8 = 0;
                do {
                    pPVar5->g4s();
                    uVar8 = uVar8 + 1;
                } while (uVar8 < field_40);
            }
            pAVar3 = local_60;
            if (((local_40 & 2) != 0) && (local_50->field_40 != 0)) {
                puVar1 = &local_50->field_176;
                uVar21 = 0;
                do {
                    new (local_98) Array<unsigned char, eastl::allocator>(64);
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](pAVar3, uVar21);
                    this_02 = (Array<unsigned char, eastl::allocator>*)
                        Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)puVar1, (ulong)*puVar13);
                    Array<unsigned char, eastl::allocator>::operator=(this_02, (Array*)local_98);
                    local_98->~Array();
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](pAVar3, uVar21);
                    this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                     std::default_delete<LoadingScreenScript::AnimLayer>>,
                                     eastl::allocator>*)
                        Array<Array<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<unsigned char, eastl::allocator>, eastl::allocator>*)puVar1, (ulong)*puVar13);
                    puVar16 = (uchar*)this_03->data();
                    local_38->gArrayBuffer(puVar16, 0, 64);
                    uVar21 = uVar21 + 1;
                } while (uVar21 < local_50->field_40);
            }
            pPVar5 = local_38;
            pJVar4 = local_50;
            local_50->field_144 = 0;
            if (((local_40 & 4) != 0) && (local_50->field_40 != 0)) {
                uVar8 = 0;
                do {
                    iVar9 = pPVar5->g4s();
                    pJVar4->field_144 = pJVar4->field_144 + (long)iVar9;
                    pPVar5->g4s();
                    uVar8 = uVar8 + 1;
                } while (uVar8 < pJVar4->field_40);
            }
            if (pJVar4->field_40 != 0) {
                pvVar17 = (void*)Array<int, eastl::allocator>::operator[](local_58, 0);
                _memset(pvVar17, 255, local_70 * 4);
            }
            pAVar3 = local_60;
            if (pJVar4->field_40 != 0) {
                uVar21 = 0;
                do {
                    uVar10 = pPVar5->g4();
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](pAVar3, uVar21);
                    puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, (ulong)*puVar13);
                    *puVar15 = uVar10;
                    uVar21 = uVar21 + 1;
                } while (uVar21 < pJVar4->field_40);
            }
            if (pJVar4->field_40 != 0) {
                uVar21 = 0;
                do {
                    uVar8 = local_38->gSmart2or4();
                    if (65535 < uVar8) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("fileCount <= std::numeric_limits<uint16>::max()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/"
                                  "Js5Index.cpp",
                                  207, (char*)0);
                    }
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_60, uVar21);
                    puVar18 =
                        (undefined2*)Array<unsigned short, eastl::allocator>::operator[](local_78, (ulong)*puVar13);
                    *puVar18 = (short)uVar8;
                    uVar21 = uVar21 + 1;
                } while (uVar21 < pJVar4->field_40);
            }
            if (pJVar4->field_40 != 0) {
                local_80 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&pJVar4->field_248;
                local_40 = 0;
                do {
                    puVar13 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_60, local_40);
                    local_58 = (Array<int, eastl::allocator>*)(ulong)*puVar13;
                    puVar19 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](local_78, (ulong)local_58);
                    pPVar5 = local_38;
                    uVar2 = *puVar19;
                    uVar8 = (uint)uVar2;
                    uVar21 = local_38->size();
                    local_68 = (Array<int, eastl::allocator>*)CONCAT44(local_68._4_4_, (uint)uVar2);
                    if (uVar2 == 0) {
                        iVar9 = -1;
                    } else {
                        iVar20 = 0;
                        iVar9 = -1;
                        do {
                            iVar11 = pPVar5->gSmart2or4();
                            iVar20 = iVar20 + iVar11;
                            if (iVar9 < iVar20) {
                                iVar9 = iVar20;
                            }
                            uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                    }
                    this_01 = local_80;
                    iVar20 = (int)local_68;
                    uVar2 = local_46;
                    if (iVar9 + 1 != (int)local_68) {
                        uVar22 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_80);
                        if (uVar22 != local_70) {
                            this_01->set_max_size(local_70, 0);
                        }
                        local_38->SetPos(uVar21);
                        this_04 = (vector_map<
                                   unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>*)
                            Array<eastl::vector_map<
                                      unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                      eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                  eastl::allocator>::
                            operator[](
                                (Array<eastl::vector_map<
                                           unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                           eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                       eastl::allocator>*)this_01,
                                (ulong)local_58);
                        uVar2 = local_46;
                        if (iVar20 != 0) {
                            iVar20 = 0;
                            iVar9 = 0;
                            uVar26 = 0;
                            do {
                                local_46 = uVar2;
                                iVar11 = local_38->gSmart2or4();
                                local_58 = (Array<int, eastl::allocator>*)CONCAT44(local_58._4_4_, iVar20);
                                uVar2 = local_46;
                                local_46 = uVar26;
                                for (local_44 = (iVar9 + 1) - (uint)(iVar20 == 0); local_44 < iVar11 + iVar9;
                                     local_44 = local_44 + 1) {
                                    uVar26 = local_46 + 1;
                                    local_98[0] = eastl::make_pair<int&, unsigned short&>(&local_44, &local_46);
                                    eastl::vector_map<
                                        unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>::
                                        insert<eastl::pair<int, unsigned short>, void>(this_04, (pair*)local_98);
                                    uVar2 = local_46;
                                    local_46 = uVar26;
                                }
                                iVar20 = (int)local_58 + 1;
                                iVar9 = iVar11 + iVar9;
                                uVar26 = local_46;
                            } while (iVar20 != (int)local_68);
                        }
                    }
                    local_46 = uVar2;
                    local_40 = local_40 + 1;
                } while (local_40 < local_50->field_40);
            }
        } else {
            uVar12 = logger::default_logger();
            uVar8 = (uint)bVar6;
            pcVar24 = "Js5Index: Invalid Js5 Index file version: %d";
            uVar23 = 98;
        LAB_1009efc7c:
            logger::Logger::Log(
                uVar12, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", uVar23,
                pcVar24, uVar8);
        }
    }

    // 0x1009f01f0, 384 bytes, base-object constructor, placed by class name
    // Js5Index::Js5Index(unsigned int, Array<unsigned char, eastl::allocator> const&, PacketT<Array<unsigned char, eastl::allocator> >&)
    void Js5Index::Js5Index(uint param_1, Array* param_2, PacketT* param_3) {
        field_0 = 0;
        new (&field_8) Array<unsigned char, eastl::allocator>();
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        new (&field_48) Array<unsigned int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>();
        field_136 = 4294967295;
        field_140 = 0;
        field_144 = 0;
        new (&field_152) Array<int, eastl::allocator>();
        new (&field_176) Array<Array<unsigned char, eastl::allocator>, eastl::allocator>();
        new (&field_200) Array<int, eastl::allocator>();
        new (&field_224) Array<unsigned short, eastl::allocator>();
        new (&field_248)
            Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                  eastl::allocator>();
        Init(this, param_1, param_2, param_3);
    }

    // 0x1009f0370, 176 bytes, placed by class name
    // Js5Index::InitHashes()
    void Js5Index::InitHashes() {
        undefined1* this_00;
        undefined4 uVar1;
        char cVar2;
        long lVar3;
        undefined4* puVar4;
        int* piVar5;
        ulong uVar6;

        this_00 = &field_96;
        cVar2 = this_00->empty();
        if (cVar2 != '\0') {
            lVar3 = (&field_72)->end();
            if (lVar3 != 0) {
                this_00->reserve((ulong)(field_140 + 1));
                if (field_40 != 0) {
                    uVar6 = 0;
                    do {
                        puVar4 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)&field_48, uVar6);
                        uVar1 = *puVar4;
                        piVar5 = (int*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_72, uVar6);
                        puVar4 = (undefined4*)
                            eastl::vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>::
                            operator[](
                                (vector_map<int, unsigned int, eastl::less<int>, eastl::allocator,
                                            eastl::vector<eastl::pair<int, unsigned int>, eastl::allocator>>*)this_00,
                                piVar5);
                        *puVar4 = uVar1;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < field_40);
                }
            }
        }
    }

    // 0x1009f04f0, 128 bytes, placed by class name
    // Js5Index::GetGroupIDFromHash(unsigned int&, int)
    undefined* Js5Index::GetGroupIDFromHash(uint* param_1, int param_2) {
        uint uVar1;
        long lVar2;
        long lVar3;
        undefined** ppuVar4;
        int local_24;

        uVar1 = field_136;
        if (((int)uVar1 < 0) || (HASH_MAIN != param_2)) {
            InitHashes(this);
            lVar2 = (&field_96, &local_24)->find();
            lVar3 = (&field_96)->end();
            if (lVar2 == lVar3) {
                ppuVar4 = &DataStatus::MISSING;
                goto LAB_1009f0554;
            }
            uVar1 = *(uint*)(lVar2 + 4);
        }
        *param_1 = uVar1;
        ppuVar4 = &DataStatus::READY;
    LAB_1009f0554:
        return *ppuVar4;
    }

    // 0x1009f0780, 256 bytes, placed by class name
    // Js5Index::GetFileList(eastl::vector<unsigned int, BucketAllocatorEASTL>&, unsigned int) const
    void Js5Index::GetFileList(vector* param_1, uint param_2) {
        char cVar1;
        uint in_EAX;
        uint uVar2;
        uint uVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        ushort* puVar4;
        long lVar5;
        long lVar6;
        undefined8 uStack_38;

        uStack_38._0_4_ = in_EAX;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        cVar1 = DoesGroupExist(this, param_2);
        if (cVar1 != '\0') {
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)Array<
                eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                eastl::allocator>::
            operator[](
                (Array<eastl::vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                         eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                       eastl::allocator>*)&field_248,
                (ulong)param_2);
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00);
            if (cVar1 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/index/Js5Index.cpp", 287,
                    "Js5Index: Fix caller to first check IsFileListContiguous() before trying to get a file list that "
                    "is just a sequential list.");
            }
            puVar4 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                (Array<unsigned short, eastl::allocator>*)&field_224, (ulong)param_2);
            param_1->reserve((ulong)*puVar4);
            uVar2 = GetMaximumFileID(this, param_2);
            uStack_38 = (ulong)(uint)uStack_38;
            if (uVar2 != 0) {
                do {
                    lVar5 = this_00->find((uint*)((long)&uStack_38 + 4));
                    lVar6 = this_00->end();
                    if (lVar5 == lVar6) {
                        param_1->push_back((uint*)((long)&uStack_38 + 4));
                    }
                    uVar3 = uStack_38._4_4_ + 1;
                    uStack_38 = CONCAT44(uVar3, (uint)uStack_38);
                } while (uVar3 < uVar2);
            }
        }
    }

    // 0x100a0b8e0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132() {
        Js5Index::HASH_MAIN = stringtools::hash32("main");
    }

} // namespace jag
