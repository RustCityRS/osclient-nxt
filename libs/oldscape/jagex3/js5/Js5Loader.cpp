// libs/oldscape/jagex3/js5/Js5Loader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5Loader.h"

namespace jag::oldscape::jagex3 {
    // 0x1002b7670, 32 bytes, placed by debug map only (low confidence)
    // V7_Smart2(PacketJ<Array<unsigned char, eastl::allocator> >&, int)
    ulong V7_Smart2(PacketJ* param_1, int param_2) {
        ushort uVar1;
        ulong uVar2;

        if (param_2 < 7) {
            uVar1 = param_1->g2();
            return (ulong)uVar1;
        }
        uVar2 = param_1->gSmart2or4();
        return uVar2;
    }

    // 0x1002b7690, 1632 bytes, placed by class name and debug map
    // Js5Loader::Js5ForLoader::LoadIndex(PacketJ<Array<unsigned char, eastl::allocator> >&&)
    ulong Js5Loader::Js5ForLoader::LoadIndex(PacketJ* param_1) {
        TextureAtlasReference* this_00;
        byte bVar1;
        undefined4 uVar3;
        int iVar4;
        uint uVar5;
        uchar* puVar6;
        ulong uVar7;
        int* piVar8;
        uint* puVar9;
        long lVar10;
        long lVar11;
        ulong uVar12;
        FileState* this_01;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        NpcUID* pNVar13;
        NpcUID* extraout_RDX_01;
        ulong uVar14;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Array<Js5::FileState, eastl::allocator>* this_03;
        int iVar15;
        uint uVar16;
        undefined1 auVar17[16];
        WindowSavedPosition local_e8;
        undefined1 local_c8[24];
        ulong local_b0;
        uint local_a8[6];
        eastl local_90[24];
        vector<unsigned int, BucketAllocatorEASTL> local_78[24];
        Array<Js5::GroupState, eastl::allocator>* local_60;
        uint local_54;
        uint local_50[2];
        ulong local_48;
        TextureAtlasReference* local_40;
        uint local_38;
        byte local_31;

        puVar6 = (uchar*)param_1->GetDataPtr();
        uVar7 = param_1->GetTextureAtlas();
        uVar3 = CRC32(puVar6, uVar7, 4294967295);
        field_20 = uVar3;
        new (&local_e8) PacketJ<Array<unsigned char, eastl::allocator>>();
        local_c8->GetUncompressedPacket(param_1, (PacketJ*)&local_e8);
        if (local_c8[16] == false) {
            field_24 = 4294901761;
            uVar7 = 0;
            goto LAB_1002b7c1e;
        }
        local_40 = (TextureAtlasReference*)local_c8._0_8_;
        bVar1 = local_c8._0_8_->g1();
        uVar7 = 0;
        uVar3 = 0;
        if (2 < (byte)(bVar1 - 5))
            goto LAB_1002b7c1e;
        local_54 = (uint)bVar1;
        field_24 = local_54;
        if (5 < bVar1) {
            uVar3 = local_40->g4();
        }
        field_28 = uVar3;
        local_31 = local_40->g1();
        if (1 < local_31) {
            field_24 = 8;
            uVar7 = 0;
            goto LAB_1002b7c1e;
        }
        local_38 = V7_Smart2((PacketJ*)local_40, local_54);
        eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
        uVar16 = local_38;
        local_48 = (ulong)local_38;
        eastl::vector<unsigned int, BucketAllocatorEASTL>::resize_uninitialized((ulong)local_78);
        if (uVar16 == 0) {
            iVar15 = 0;
        } else {
            uVar7 = 0;
            iVar15 = 0;
            do {
                iVar4 = V7_Smart2((PacketJ*)local_40, local_54);
                piVar8 = (int*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_78, uVar7);
                iVar15 = iVar15 + iVar4;
                *piVar8 = iVar15;
                uVar7 = uVar7 + 1;
            } while (local_48 != uVar7);
        }
        uVar16 = iVar15 + 1;
        if (local_38 == 0) {
            uVar16 = 0;
        }
        uVar7 = (ulong)uVar16;
        local_60 = (Array<Js5::GroupState, eastl::allocator>*)&field_32;
        local_60->set_max_size(uVar7, 1);
        pNVar13 = extraout_RDX;
        if (local_31 == 0) {
        LAB_1002b786d:
            if (local_38 != 0) {
                uVar14 = 0;
                do {
                    puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_78, uVar14);
                    uVar16 = *puVar9;
                    uVar3 = local_40->g4();
                    auVar17 = Array<Js5::GroupState, eastl::allocator>::operator[](local_60, (ulong)uVar16);
                    pNVar13 = auVar17._8_8_;
                    *auVar17._0_8_ = uVar3;
                    uVar14 = uVar14 + 1;
                } while (local_48 != uVar14);
            }
        } else {
            (&field_56, local_48)->reserve();
            pNVar13 = extraout_RDX_00;
            if (local_38 != 0) {
                uVar14 = 0;
                do {
                    puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_78, uVar14);
                    uVar16 = *puVar9;
                    uVar5 = local_40->g4();
                    local_a8[0] = uVar5;
                    lVar10 = Array<Js5::GroupState, eastl::allocator>::operator[](local_60, (ulong)uVar16);
                    *(uint*)(lVar10 + 8) = uVar5;
                    auVar17 =
                        eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::
                        operator[](
                            (vector_map<
                                unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>*)&field_56,
                            local_a8);
                    pNVar13 = auVar17._8_8_;
                    *auVar17._0_8_ = uVar16;
                    uVar14 = uVar14 + 1;
                } while (local_48 != uVar14);
                goto LAB_1002b786d;
            }
        }
        if (uVar7 == 0) {
            uVar16 = 0;
        } else {
            uVar14 = 0;
            uVar12 = 0;
            do {
                puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_78, uVar12);
                if (uVar14 == *puVar9) {
                    uVar3 = local_40->g4();
                    auVar17 = Array<Js5::GroupState, eastl::allocator>::operator[](local_60, uVar14);
                    pNVar13 = auVar17._8_8_;
                    *(undefined4*)(auVar17._0_8_ + 4) = uVar3;
                    uVar12 = (ulong)((int)uVar12 + 1);
                } else {
                    auVar17 = Array<Js5::GroupState, eastl::allocator>::operator[](local_60, uVar14);
                    pNVar13 = auVar17._8_8_;
                    *(undefined4*)(auVar17._0_8_ + 4) = 4294967295;
                }
                uVar16 = (uint)uVar12;
                uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
        }
        if (uVar16 != local_38) {
            /* WARNING: Subroutine does not return */
            LogAssert("groupIndex == numGroups",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5Loader.cpp",
                      103, (char*)0);
        }
        eastl::destruct<highlight::NpcUID*>(local_90, (NpcUID*)"EASTL vector", pNVar13);
        new (local_a8) eastl::vector<unsigned int, BucketAllocatorEASTL>(local_48, local_90);
        eastl::destruct<highlight::NpcUID*>((eastl*)local_50, (NpcUID*)"EASTL vector", extraout_RDX_01);
        new (local_90) eastl::vector<unsigned int, BucketAllocatorEASTL>(10000, local_50);
        eastl::vector<unsigned int, BucketAllocatorEASTL>::resize_uninitialized((ulong)local_a8);
        if (local_38 != 0) {
            uVar7 = 0;
            do {
                uVar16 = local_40->g2();
                puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                    (vector<unsigned int, BucketAllocatorEASTL>*)local_a8, uVar7);
                *puVar9 = uVar16 & 65535;
                uVar7 = uVar7 + 1;
            } while (local_48 != uVar7);
            uVar7 = 0;
            do {
                puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_78, uVar7);
                lVar10 = Array<Js5::GroupState, eastl::allocator>::operator[](local_60, (ulong)*puVar9);
                puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                    (vector<unsigned int, BucketAllocatorEASTL>*)local_a8, uVar7);
                uVar16 = *puVar9;
                eastl::vector<unsigned int, BucketAllocatorEASTL>::resize_uninitialized((ulong)local_90);
                local_b0 = uVar7;
                if ((ulong)uVar16 == 0) {
                    iVar15 = 0;
                } else {
                    uVar7 = 0;
                    iVar15 = 0;
                    do {
                        iVar4 = V7_Smart2((PacketJ*)local_40, local_54);
                        piVar8 = (int*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                            (vector<unsigned int, BucketAllocatorEASTL>*)local_90, uVar7);
                        iVar15 = iVar15 + iVar4;
                        *piVar8 = iVar15;
                        uVar7 = uVar7 + 1;
                    } while (uVar16 != uVar7);
                }
                uVar7 = (ulong)(iVar15 + 1);
                this_03 = (Array<Js5::FileState, eastl::allocator>*)(lVar10 + 48);
                this_03->set_max_size(uVar7, 3);
                if (uVar7 != 0) {
                    uVar14 = 0;
                    uVar16 = 0;
                    do {
                        puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](
                            (vector<unsigned int, BucketAllocatorEASTL>*)local_90, (ulong)uVar16);
                        if (uVar14 == *puVar9) {
                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](this_03, uVar14);
                            *(undefined8*)(lVar10 + 8) = 0;
                            uVar16 = uVar16 + 1;
                        } else {
                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](this_03, uVar14);
                            *(undefined8*)(lVar10 + 8) = 18446744073709551615;
                        }
                        uVar14 = uVar14 + 1;
                    } while (uVar7 != uVar14);
                }
                uVar7 = local_b0 + 1;
            } while (uVar7 != local_48);
        }
        if ((local_31 != 0) && (local_38 != 0)) {
            uVar7 = 0;
            do {
                puVar9 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](local_78, uVar7);
                lVar10 = Array<Js5::GroupState, eastl::allocator>::operator[](local_60, (ulong)*puVar9);
                this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(lVar10 + 48);
                uVar14 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                ((lVar10 + 72))->reserve(uVar14);
                lVar11 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                if (lVar11 != 0) {
                    uVar16 = 1;
                    uVar14 = 0;
                    do {
                        this_01 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                            (Array<Js5::FileState, eastl::allocator>*)this_02, uVar14);
                        if (this_01->IsInvalid() == '\0') {
                            local_50[0] = local_40->g4();
                            *(uint*)this_01 = local_50[0];
                            piVar8 = (int*)eastl::vector_map<
                                unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>::
                            operator[](
                                (vector_map<
                                    unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>*)(lVar10 +
                                                                                                                72),
                                local_50);
                            *piVar8 = uVar16 - 1;
                        }
                        uVar14 = (ulong)uVar16;
                        uVar12 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                        uVar16 = uVar16 + 1;
                    } while (uVar14 < uVar12);
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 != local_48);
        }
        this_00 = local_40;
        uVar7 = local_40->size();
        uVar14 = this_00->GetTextureAtlas();
        uVar7 = CONCAT71((int7)((ulong)this_00 >> 8), uVar7 <= uVar14);
        local_90->~vector();
        local_a8->~vector();
        eastl::vector<unsigned int, BucketAllocatorEASTL>::~vector(local_78);
    LAB_1002b7c1e:
        local_c8->~DecompressedHelper();
        local_e8.~WindowSavedPosition();
        return uVar7 & 4294967295;
    }

    // 0x1002b80e0, 80 bytes, placed by class name and debug map
    // Js5Loader::Js5ForLoader::SetGroupData(Js5GroupId, shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&&)
    void Js5Loader::Js5ForLoader::SetGroupData(uint param_2, shared_ptr* param_3) {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        undefined8 uVar1;
        bool bVar2;
        long lVar3;

        lVar3 = Array<Js5::GroupState, eastl::allocator>::operator[](
            (Array<Js5::GroupState, eastl::allocator>*)&field_32, (ulong)param_2);
        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(
            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(lVar3 + 32), param_3);
        bVar2 = operator!=(param_3, (_func_decltype_nullptr*)0);
        if (bVar2) {
            this_00 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)param_3);
            uVar1 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_00);
            *(undefined8*)(lVar3 + 16) = uVar1;
        }
        *(undefined1*)(lVar3 + 24) = 1;
    }

    // 0x1002b8130, 128 bytes, placed by class name and debug map
    // Js5Loader::GetOrQueueGroupData(Js5ArchiveId, Js5GroupId, Js5RequestParameters const&)
    undefined* Js5Loader::GetOrQueueGroupData(uint param_2, int param_3, Js5RequestParameters* param_4) {
        int iVar2;
        shared_ptr* psVar3;
        uint local_38;
        int local_34;

        iVar2 = (&field_8)->end();
        if (((int)param_2 < iVar2) && (param_3 != -1)) {
            psVar3 = (shared_ptr*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                (Array<shared_ptr<Js5>, eastl::allocator>*)&field_8, (ulong)param_2);
            if (!operator==(psVar3, (_func_decltype_nullptr*)0)) {
                local_34 = param_3;
                local_38 = param_2;
                return (undefined*)QueueGroupKey(this, (Js5RequestKey*)&local_38, param_4);
            }
        }
        return DataStatus::MISSING;
    }

    // 0x1002b8230, 368 bytes, placed by class name and debug map
    // Js5Loader::QueueGroupKey(Js5RequestKey const&, Js5RequestParameters const&)
    undefined* Js5Loader::QueueGroupKey(Js5RequestKey* param_1, Js5RequestParameters* param_2) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        undefined* puVar4;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined8 local_50;
        hashtable_iterator_base local_48[8];
        ListIterator<console::Line, console::Line*, console::Line&> local_38[8];

        this_00 = &field_32;
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::find(
            (Js5RequestKey*)local_38);
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
        bVar1 = eastl::operator==((eastl*)local_38, local_48, extraout_RDX);
        if ((bVar1) || (lVar3 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(local_38),
                        *(int*)(lVar3 + 8) < *(int*)param_2)) {
            eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
            bVar1 = eastl::operator!=((eastl*)local_38, local_48, extraout_RDX_00);
            if (bVar1) {
                lVar3 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(local_38);
                if ((*(byte*)(lVar3 + 9) & 1) != 0) {
                    return DataStatus::NOTLOADED;
                }
                if (*(int*)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("params.m_priority == Js5FetchPriority::URGENT",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "js5/Js5Loader.cpp",
                              215, (char*)0);
                }
                new (&local_50) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                    shared_ptr<rs2lib::worldmap::MapElement> const&>(local_38);
                eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>,
                                eastl::allocator>::erase(local_48, this_00, local_50);
            }
            if ((*(int*)param_2 == 1) &&
                (puVar4 = (undefined*)(*(code*)field_0[10])(this, param_1, param_2), puVar4 == DataStatus::READY)) {
                return DataStatus::READY;
            }
            if (*(int*)param_2 == 1) {
                cVar2 = this_00->push_front(param_1, param_2);
            } else {
                cVar2 = this_00->push_back(param_1, param_2);
            }
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("bQueued",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                          "Js5Loader.cpp",
                          237, (char*)0);
            }
        }
        return DataStatus::NOTLOADED;
    }

    // 0x1002b8520, 192 bytes, placed by class name
    // Js5Loader::PrefetchFile(Js5ArchiveId)
    void Js5Loader::PrefetchFile(uint param_2) {
        shared_ptr<Js5>* this_00;
        int iVar2;
        Animation* this_01;
        int iVar3;
        undefined4 local_48;
        undefined4 local_44;
        undefined4 local_40;
        uint local_38;
        int local_34;

        iVar2 = (&field_8)->end();
        if ((int)param_2 < iVar2) {
            this_00 = (shared_ptr<Js5>*)Array<shared_ptr<Js5>, eastl::allocator>::operator[](
                (Array<shared_ptr<Js5>, eastl::allocator>*)&field_8, (ulong)param_2);
            this_01 = (Animation*)shared_ptr<Js5>::operator*(this_00);
            iVar2 = this_01->GetRT5FrameCount();
            if (0 < iVar2) {
                iVar3 = 0;
                do {
                    if (this_01->GetGroupIsValid(iVar3) != '\0') {
                        local_48 = 0;
                        local_38 = param_2;
                        local_34 = iVar3;
                        local_44 = this_01->GetGroupCrcInIndex(iVar3);
                        local_40 = this_01->GetGroupVersionInIndex(iVar3);
                        QueueGroupKey(this, (Js5RequestKey*)&local_38, (Js5RequestParameters*)&local_48);
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar2 != iVar3);
            }
        }
    }

    // 0x1002b85e0, 224 bytes, placed by class name
    // Js5Loader::UpdateCacheHint(Js5ArchiveId, Js5GroupId)
    void Js5Loader::UpdateCacheHint(int param_2, int param_3) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1 local_50[8];
        undefined8 local_48;
        undefined4 local_40;
        undefined4 local_38;
        undefined1 local_30[16];

        local_30._0_4_ = param_2;
        local_30._4_4_ = param_3;
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::find(
            (Js5RequestKey*)(local_30 + 8));
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
        bVar1 = eastl::operator!=((eastl*)(local_30 + 8), (hashtable_iterator_base*)&local_40, extraout_RDX);
        if (bVar1) {
            lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                (ListIterator<console::Line, console::Line*, console::Line&>*)(local_30 + 8));
            if ((*(byte*)(lVar2 + 8) & 1) == 0) {
                lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)(local_30 + 8));
                if ((*(byte*)(lVar2 + 9) & 1) == 0) {
                    lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)(local_30 + 8));
                    local_38 = *(undefined4*)(lVar2 + 16);
                    _local_40 = CONCAT44((int)((ulong) * (undefined8*)(lVar2 + 8) >> 32), 1);
                    new (&local_48) eastl::ListIterator<shared_ptr<rs2lib::worldmap::MapElement>,
                                                        shared_ptr<rs2lib::worldmap::MapElement> const*,
                                                        shared_ptr<rs2lib::worldmap::MapElement> const&>(
                        (ListIterator*)(local_30 + 8));
                    eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>,
                                    eastl::allocator>::erase(local_50, &field_32, local_48);
                    (&field_32, (Js5RequestKey*)local_30, (Js5RequestParameters*)&local_40)->push_front();
                } else {
                    lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                        (ListIterator<console::Line, console::Line*, console::Line&>*)(local_30 + 8));
                    *(undefined4*)(lVar2 + 8) = 257;
                }
            }
        }
    }

    // 0x1002b86c0, 160 bytes, placed by class name
    // Js5Loader::HasUrgentInProgress()
    ulong Js5Loader::HasUrgentInProgress() {
        bool bVar1;
        undefined7 extraout_var;
        long lVar2;
        undefined7 extraout_var_00;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        ulong uVar3;
        hashtable_iterator_base local_30[8];
        eastl local_28[8];

        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::begin();
        eastl::list_map<Js5RequestKey, Js5RequestParameters, eastl::less<Js5RequestKey>, eastl::allocator>::end();
        bVar1 = eastl::operator!=(local_28, local_30, extraout_RDX);
        uVar3 = CONCAT71(extraout_var, bVar1) & 4294967295;
        if ((bVar1) && (lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                            (ListIterator<console::Line, console::Line*, console::Line&>*)local_28),
                        (~*(uint*)(lVar2 + 8) & 257) != 0)) {
            do {
                eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator++(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_28);
                bVar1 = eastl::operator!=(local_28, local_30, extraout_RDX_00);
                uVar3 = CONCAT71(extraout_var_00, bVar1) & 4294967295;
                if (!bVar1) {
                    return uVar3;
                }
                lVar2 = eastl::ListIterator<console::Line, console::Line*, console::Line&>::operator*(
                    (ListIterator<console::Line, console::Line*, console::Line&>*)local_28);
            } while ((~*(uint*)(lVar2 + 8) & 257) != 0);
        }
        return uVar3;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Js5Loader::~Js5Loader();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Js5Loader::~Js5Loader();

} // namespace jag::oldscape::jagex3
