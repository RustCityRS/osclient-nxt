// libs/oldscape/jagex3/js5/Js5.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Js5.h"

namespace jag::oldscape::jagex3 {
    // 0x1000694d0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    Js5::FileState::~FileState();

    // 0x1000782e0: the linker folded this into MinimapElement::~MinimapElement(), which has identical code
    Js5::FileState::~FileState();

    // 0x100106490: the linker folded this into InterfaceMouseEvent::InterfaceMouseEvent(), which has identical code
    Js5::FileState::FileState();

    // 0x10012e0e0: the linker folded this into InterfaceMouseEvent::InterfaceMouseEvent(), which has identical code
    Js5::FileState::FileState();

    // 0x1001b6e80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.185
    void ___cxx_global_var_init_185() {
        new (&js5::emptyArchiveSettings) Js5ArchiveSetSettings();
        ___cxa_atexit(Js5ArchiveSetSettings::~Js5ArchiveSetSettings, &js5::emptyArchiveSettings, 4294967296);
    }

    // 0x1002b5b90, 48 bytes, base-object destructor, placed by class name and debug map
    // Js5::DecompressedHelper::~DecompressedHelper()
    void Js5::DecompressedHelper::~DecompressedHelper() {
        char cVar1;

        cVar1 = field_0->IsValid();
        if (cVar1 != '\0') {
            (field_0, field_8)->SetPos();
        }
    }

    // 0x1002b5bc0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Js5::DecompressedHelper::~DecompressedHelper(): jumps straight to the base-object destructor

    // 0x1002b5bd0, 256 bytes, placed by class name and debug map
    // Js5::GetUncompressedPacket(PacketJ<Array<unsigned char, eastl::allocator> >&, PacketJ<Array<unsigned char, eastl::allocator> >&)
    Js5* Js5::GetUncompressedPacket(PacketJ* param_1, PacketJ* param_2) {
        char cVar1;
        uint uVar2;
        ulong uVar3;
        long lVar4;
        long lVar5;
        bool bVar6;
        VBOMapper local_60;
        void* local_40;
        int local_34;

        uVar3 = param_1->size();
        cVar1 = param_1->g1();
        if (cVar1 == '\0') {
            uVar2 = param_1->g4();
            uVar3 = (ulong)uVar2;
            param_2->Reserve(uVar3);
            local_40 = (void*)param_2->GetDataPtr();
            lVar4 = param_1->GetDataPtr();
            lVar5 = param_1->size();
            _memcpy(local_40, (void*)(lVar4 + lVar5), uVar3);
            bVar6 = true;
        } else {
            param_1->SetPos(uVar3);
            local_60.Decompress(param_1, (JS5DecompressionResult*)&local_34);
            PacketJ<Array<unsigned char, eastl::allocator>>::operator=(
                (PacketJ<Array<unsigned char, eastl::allocator>>*)param_2, (PacketJ*)&local_60);
            local_60.~VBOMapper();
            uVar3 = param_2->GetTextureAtlas();
            bVar6 = local_34 == 0;
        }
        new (this) DecompressedHelper(param_2, uVar3, bVar6);
        return this;
    }

    // 0x1002b5ce0, 1680 bytes, placed by class name and debug map
    // Js5::UnpackGroupData(Js5::GroupState&, std::array<int, 4ul> const*)
    /* Js5::UnpackGroupData(Js5::GroupState&,
   std::array<int, 4ul> const*) */

    GroupState* Js5::UnpackGroupData(GroupState* param_1, array* param_2) {
        byte bVar1;
        bool bVar2;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        GroupState* pGVar3;
        bool bVar4;
        char cVar5;
        bool bVar6;
        int iVar7;
        uint uVar8;
        undefined** ppuVar9;
        long lVar10;
        ulong uVar11;
        FileState* pFVar12;
        WindowSavedPosition* this_01;
        int* piVar13;
        PacketJ* pPVar14;
        TextureAtlasReference* this_02;
        long lVar15;
        long* plVar16;
        ulong* puVar17;
        undefined8* puVar18;
        undefined8 uVar19;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar20;
        NpcUID* extraout_RDX;
        GroupState* pGVar21;
        GroupState* pGVar22;
        uint uVar23;
        WindowSavedPosition* this_03;
        ulong uVar24;
        WindowSavedPosition local_108;
        WindowSavedPosition local_e8;
        undefined1 local_c8[24];
        shared_ptr local_b0;
        long local_98;
        shared_ptr local_90;
        ulong local_78;
        ulong local_70;
        ulong local_68;
        GroupState* local_60;
        shared_ptr* local_58;
        uint local_4c;
        GroupState* local_48;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        char local_31;

        local_58 = (shared_ptr*)&param_1->field_32;
        uVar23 = 0;
        bVar4 = operator==(local_58, (_func_decltype_nullptr*)0);
        if (bVar4) {
            ppuVar9 = &DataStatus::NOTLOADED;
        } else {
            local_40 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&param_1->field_48;
            local_60 = (GroupState*)param_2;
            local_48 = param_1;
            lVar10 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
            this_00 = local_40;
            bVar2 = true;
            bVar4 = true;
            if (lVar10 != 0) {
                uVar23 = 0;
                uVar11 = 0;
                uVar24 = 1;
                do {
                    pFVar12 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                        (Array<Js5::FileState, eastl::allocator>*)this_00, uVar11);
                    cVar5 = pFVar12->IsInvalid();
                    if (cVar5 == '\0') {
                        uVar23 = uVar23 + 1;
                        lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                            (Array<Js5::FileState, eastl::allocator>*)this_00, uVar11);
                        bVar6 = operator==((shared_ptr*)(lVar10 + 16), (_func_decltype_nullptr*)0);
                        bVar4 = bVar2;
                        if (bVar6) {
                            bVar4 = false;
                            bVar2 = bVar4;
                        }
                    }
                    uVar11 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                    bVar6 = uVar24 < uVar11;
                    uVar11 = uVar24;
                    uVar24 = (ulong)((int)uVar24 + 1);
                } while (bVar6);
            }
            pGVar21 = local_60;
            if (!bVar4) {
                this_03 = &local_108;
                new (this_03) PacketJ<Array<unsigned char, eastl::allocator>>();
                this_01 = (WindowSavedPosition*)local_58->end();
                this_01->SetPos(*(ulong*)((long)&local_48->field_9 + 7));
                if (((*(char*)((long)&local_48->field_17 + 7) != '\0') && (pGVar21 != (GroupState*)0)) &&
                    ((piVar13 = (int*)pGVar21->at(0),
                      *piVar13 != 0 || (((piVar13 = (int*)pGVar21->at(1),
                                          *piVar13 != 0 || (piVar13 = (int*)pGVar21->at(2), *piVar13 != 0)) ||
                                         (piVar13 = (int*)pGVar21->at(3), *piVar13 != 0)))))) {
                    cVar5 = local_58->unique();
                    if (cVar5 == '\0') {
                        pPVar14 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_58);
                        PacketJ<Array<unsigned char, eastl::allocator>>::operator=(
                            (PacketJ<Array<unsigned char, eastl::allocator>>*)this_03, pPVar14);
                    } else {
                        *(undefined1*)((long)&local_48->field_17 + 7) = 0;
                        this_03 = this_01;
                    }
                    this_02 =
                        (TextureAtlasReference*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                            (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_58);
                    uVar11 = this_02->GetTextureAtlas();
                    this_03->tinyKeyDecrypt(pGVar21, 5, uVar11);
                    this_01 = this_03;
                }
                new (&local_e8) PacketJ<Array<unsigned char, eastl::allocator>>();
                GetUncompressedPacket((Js5*)local_c8, (PacketJ*)this_01, (PacketJ*)&local_e8);
                local_31 = local_c8[16];
                if (local_c8[16] == false) {
                    pGVar21 = (GroupState*)DataStatus::MISSING;
                } else {
                    local_60 =
                        (GroupState*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
                    local_48 = (GroupState*)local_c8._0_8_;
                    if (uVar23 < 2) {
                        lVar10 = local_c8._0_8_->GetDataPtr();
                        pPVar20 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                                          (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_58);
                        lVar15 = pPVar20->GetDataPtr();
                        pGVar21 = (GroupState*)((long)&local_60[53687091].field_9 + 6);
                        uVar19 = local_48->size();
                        uVar11 = (ulong)pGVar21 & 4294967295;
                        if (lVar10 == lVar15) {
                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                                (Array<Js5::FileState, eastl::allocator>*)local_40, uVar11);
                            *(undefined8*)(lVar10 + 8) = uVar19;
                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                                (Array<Js5::FileState, eastl::allocator>*)local_40, uVar11);
                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(
                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(lVar10 + 16), local_58);
                        } else {
                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                                (Array<Js5::FileState, eastl::allocator>*)local_40, uVar11);
                            *(undefined8*)(lVar10 + 8) = uVar19;
                            make_shared<PacketJ<Array<unsigned char, eastl::allocator>>,
                                        PacketJ<Array<unsigned char, eastl::allocator>>>((jag*)&local_90,
                                                                                         (PacketJ*)local_48);
                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                                (Array<Js5::FileState, eastl::allocator>*)local_40, uVar11);
                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(
                                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(lVar10 + 16), &local_90);
                            local_90.~shared_ptr();
                        }
                    } else {
                        lVar10 = local_c8._0_8_->GetTextureAtlas();
                        lVar15 = local_c8._0_8_->GetDataPtr();
                        bVar1 = *(byte*)(lVar15 + lVar10 + -1);
                        local_98 = local_c8._0_8_->GetDataPtr();
                        uVar8 = (uint)bVar1;
                        uVar11 = (lVar10 + -1) - (ulong)(uVar23 * uVar8 * 4);
                        local_70 = local_c8._0_8_->size();
                        local_c8._0_8_->SetPos(uVar11);
                        local_78 = uVar11;
                        local_4c = uVar8;
                        eastl::destruct<highlight::NpcUID*>((eastl*)&local_b0, (NpcUID*)"EASTL vector", extraout_RDX);
                        new (&local_90) eastl::vector<unsigned long, BucketAllocatorEASTL>(
                            (ulong)uVar23, (BucketAllocatorEASTL*)&local_b0);
                        pGVar21 = (GroupState*)local_c8._0_8_;
                        if (local_4c != 0) {
                            local_68 = 0;
                            do {
                                pGVar21 = (GroupState*)0;
                                uVar11 = 0;
                                do {
                                    iVar7 = local_48->g4();
                                    plVar16 = (long*)eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                                        (vector<unsigned long, BucketAllocatorEASTL>*)&local_90, (ulong)pGVar21);
                                    uVar11 = (ulong)(uint)((int)uVar11 + iVar7);
                                    *plVar16 = *plVar16 + uVar11;
                                    pGVar21 = (GroupState*)((long)pGVar21 + 1);
                                } while ((GroupState*)(ulong)uVar23 != pGVar21);
                                uVar8 = (int)local_68 + 1;
                                local_68 = (ulong)uVar8;
                            } while (uVar8 != local_4c);
                        }
                        pGVar22 = local_48;
                        if (local_60 != (GroupState*)0) {
                            pGVar21 = (GroupState*)0;
                            uVar23 = 1;
                            uVar8 = 0;
                            do {
                                pFVar12 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                                    (Array<Js5::FileState, eastl::allocator>*)local_40, (ulong)pGVar21);
                                cVar5 = pFVar12->IsInvalid();
                                if (cVar5 == '\0') {
                                    puVar17 = (ulong*)eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                                        (vector<unsigned long, BucketAllocatorEASTL>*)&local_90, (ulong)uVar8);
                                    make_shared<PacketJ<Array<unsigned char, eastl::allocator>>, unsigned long&>(
                                        (jag*)&local_b0, puVar17);
                                    lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                                        (Array<Js5::FileState, eastl::allocator>*)local_40, (ulong)pGVar21);
                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(
                                        (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)(lVar10 + 16),
                                        &local_b0);
                                    local_b0.~shared_ptr();
                                    puVar18 =
                                        (undefined8*)eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                                            (vector<unsigned long, BucketAllocatorEASTL>*)&local_90, (ulong)uVar8);
                                    *puVar18 = 0;
                                    uVar8 = uVar8 + 1;
                                    pGVar22 = local_48;
                                }
                                pGVar21 = (GroupState*)(ulong)uVar23;
                                uVar23 = uVar23 + 1;
                            } while (pGVar21 < local_60);
                        }
                        pGVar22->SetPos(local_78);
                        if ((char)local_4c != '\0') {
                            local_98 = local_98 + local_70;
                            local_70 = local_70 & 18446744069414584320;
                            local_78 = local_78 & 18446744069414584320;
                            do {
                                if (local_60 != (GroupState*)0) {
                                    uVar23 = 0;
                                    local_68 = local_68 & 18446744069414584320;
                                    pGVar22 = (GroupState*)0;
                                    pGVar3 = (GroupState*)&DAT_00000001;
                                    do {
                                        pGVar21 = pGVar3;
                                        pFVar12 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                                            (Array<Js5::FileState, eastl::allocator>*)local_40, (ulong)pGVar22);
                                        cVar5 = pFVar12->IsInvalid();
                                        if (cVar5 == '\0') {
                                            iVar7 = local_48->g4();
                                            lVar10 = Array<Js5::FileState, eastl::allocator>::operator[](
                                                (Array<Js5::FileState, eastl::allocator>*)local_40, (ulong)pGVar22);
                                            pPVar20 =
                                                (PacketT<Array<unsigned char, eastl::allocator>>*)
                                                    shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::
                                                    operator->(
                                                        (shared_ptr<
                                                            PacketJ<Array<unsigned char, eastl::allocator>>>*)(lVar10 +
                                                                                                               16));
                                            lVar10 = pPVar20->GetDataPtr();
                                            uVar11 = local_68 & 4294967295;
                                            plVar16 =
                                                (long*)eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                                                    (vector<unsigned long, BucketAllocatorEASTL>*)&local_90, uVar11);
                                            uVar23 = iVar7 + uVar23;
                                            _memcpy((void*)(lVar10 + *plVar16),
                                                    (void*)((local_78 & 4294967295) + local_98), (ulong)uVar23);
                                            plVar16 =
                                                (long*)eastl::vector<unsigned long, BucketAllocatorEASTL>::operator[](
                                                    (vector<unsigned long, BucketAllocatorEASTL>*)&local_90, uVar11);
                                            *plVar16 = *plVar16 + (ulong)uVar23;
                                            local_78 = CONCAT44(local_78._4_4_, (int)local_78 + uVar23);
                                            local_68 = CONCAT44(local_68._4_4_, (int)local_68 + 1);
                                        }
                                        pGVar22 = pGVar21;
                                        pGVar3 = (GroupState*)(ulong)((int)pGVar21 + 1);
                                    } while (pGVar21 < local_60);
                                }
                                uVar23 = (int)local_70 + 1;
                                local_70 = CONCAT44(local_70._4_4_, uVar23);
                            } while (uVar23 != local_4c);
                        }
                        local_90.~vector();
                    }
                }
                local_c8->~DecompressedHelper();
                local_e8.~WindowSavedPosition();
                if (local_31 != '\0') {
                    if (((Js5*)this)->field_96 != '\0') {
                        shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::reset();
                    }
                    pGVar21 = (GroupState*)DataStatus::READY;
                }
                local_108.~WindowSavedPosition();
                return pGVar21;
            }
            ppuVar9 = &DataStatus::READY;
        }
        return (GroupState*)*ppuVar9;
    }

    // 0x1002b66e0, 80 bytes, placed by class name and debug map
    // Js5::GetGroupId(char const*) const
    undefined4 Js5::GetGroupId(char* param_1) {
        undefined4 uVar1;
        long lVar2;
        long lVar3;
        uint local_1c;

        local_1c = core::stringtools::general::CP1252Tools::ComputeLowerCp1252HashFromUtf8(param_1);
        lVar2 = (&field_56, &local_1c)->find();
        lVar3 = (&field_56)->end();
        if (lVar2 == lVar3) {
            uVar1 = 4294967295;
        } else {
            uVar1 = *(undefined4*)(lVar2 + 4);
        }
        return uVar1;
    }

    // 0x1002b6760, 112 bytes, placed by class name and debug map
    // Js5::GetFileId(int, char const*) const
    undefined4 Js5::GetFileId(int param_1, char* param_2) {
        undefined4 uVar1;
        undefined* puVar2;
        long lVar3;
        long lVar4;
        long local_20;
        uint local_14;

        puVar2 = (undefined*)CheckAndLookupGroupId(this, &local_20, param_1);
        uVar1 = 4294967295;
        if (puVar2 == DataStatus::READY) {
            local_14 = core::stringtools::general::CP1252Tools::ComputeLowerCp1252HashFromUtf8(param_2);
            lVar3 = ((local_20 + 72))->find(&local_14);
            lVar4 = ((local_20 + 72))->end();
            if (lVar3 == lVar4) {
                uVar1 = 4294967295;
            } else {
                uVar1 = *(undefined4*)(lVar3 + 4);
            }
        }
        return uVar1;
    }

    // 0x1002b67d0, 176 bytes, placed by class name and debug map
    // Js5::GetGroupList(eastl::vector<int, BucketAllocatorEASTL>&) const
    undefined* Js5::GetGroupList(vector* param_1) {
        bool bVar1;
        undefined8 in_RAX;
        undefined* puVar3;
        ulong uVar4;
        GroupState* this_00;
        ulong uVar5;
        ulong uVar6;
        undefined8 uStack_38;

        uStack_38 = in_RAX;
        puVar3 = (undefined*)GetIndexIsLoaded(this);
        if (puVar3 == DataStatus::READY) {
            uVar4 = (&field_32)->end();
            param_1->reserve(uVar4);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            if (uVar4 != 0) {
                uVar5 = 0;
                uVar6 = 1;
                do {
                    this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                        (Array<Js5::GroupState, eastl::allocator>*)&field_32, uVar5);
                    if (this_00->IsInvalid() == '\0') {
                        uStack_38 = CONCAT44((int)uVar6 + -1, (undefined4)uStack_38);
                        param_1->push_back((int*)((long)&uStack_38 + 4));
                    }
                    bVar1 = uVar6 < uVar4;
                    uVar5 = uVar6;
                    uVar6 = (ulong)((int)uVar6 + 1);
                } while (bVar1);
            }
            puVar3 = DataStatus::READY;
        }
        return puVar3;
    }

    // 0x1002b68c0, 208 bytes, placed by class name and debug map
    // Js5::GetFileList(eastl::vector<int, BucketAllocatorEASTL>&, int) const
    undefined* Js5::GetFileList(vector* param_1, int param_2) {
        bool bVar1;
        undefined* puVar3;
        ulong uVar4;
        FileState* this_00;
        ulong uVar5;
        ulong uVar6;
        undefined** ppuVar7;
        long local_40;
        int local_34;

        puVar3 = (undefined*)GetIndexIsLoaded(this);
        ppuVar7 = &DataStatus::READY;
        if (puVar3 == DataStatus::READY) {
            puVar3 = (undefined*)CheckAndLookupGroupId(this, &local_40, param_2);
            if (puVar3 == DataStatus::READY) {
                uVar4 = ((local_40 + 48))->end();
                if (uVar4 == 0) {
                    ppuVar7 = &DataStatus::NOTLOADED;
                } else {
                    param_1->reserve(uVar4);
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    uVar5 = 0;
                    uVar6 = 1;
                    do {
                        this_00 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                            (Array<Js5::FileState, eastl::allocator>*)(local_40 + 48), uVar5);
                        if (this_00->IsInvalid() == '\0') {
                            local_34 = (int)uVar6 + -1;
                            param_1->push_back(&local_34);
                        }
                        bVar1 = uVar6 < uVar4;
                        uVar5 = uVar6;
                        uVar6 = (ulong)((int)uVar6 + 1);
                    } while (bVar1);
                }
                puVar3 = *ppuVar7;
            }
        }
        return puVar3;
    }

    // 0x1002b6a10, 208 bytes, placed by class name and debug map
    // Js5::FetchFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, int, bool)
    void Js5::FetchFile(shared_ptr* param_1, int param_2, bool param_3) {
        long in_RAX;
        undefined* puVar1;
        long lVar2;
        int iVar3;
        long local_38;

        local_38 = in_RAX;
        puVar1 = (undefined*)GetIndexIsLoaded(this);
        if (puVar1 == DataStatus::READY) {
            lVar2 = (&field_32)->end();
            if (lVar2 == 1) {
                iVar3 = param_2;
                param_2 = 0;
            } else {
                puVar1 = (undefined*)CheckAndLookupGroupId(this, &local_38, param_2);
                if (puVar1 != DataStatus::READY) {
                    return;
                }
                lVar2 = ((local_38 + 48))->end();
                if (lVar2 != 1) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/js5/Js5.cpp",
                                    329, "Attempting to load id %d from js5 %d, but that was ambiguous!",
                                    (ulong)(uint)param_2, (ulong)field_16);
                }
                iVar3 = 0;
            }
            FetchFile(this, param_1, param_2, iVar3, 0, param_3);
        }
    }

    // 0x1002b6ae0, 384 bytes, placed by class name and debug map
    // Js5::FetchFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator> > >&, Js5GroupId, Js5FileId, std::array<int, 4ul>*, bool)
    /* Js5::FetchFile(shared_ptr<PacketJ<Array<unsigned
   char, eastl::allocator> > >&, Js5GroupId,
   Js5FileId, std::array<int, 4ul>*, bool) */

    undefined* Js5::FetchFile(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>* param_1, int param_3,
                              undefined4 param_4, array* param_5, undefined4 param_6) {
        shared_ptr* psVar1;
        long lVar2;
        bool bVar3;
        ulong uVar4;
        undefined* puVar5;
        undefined* puVar6;
        PacketT<Array<unsigned char, eastl::allocator>>* this_01;
        undefined** ppuVar7;
        GroupState* local_70;
        long local_68;
        shared_ptr* local_60;
        undefined4 local_58;
        undefined4 local_54;
        int local_50;
        long local_40;
        byte local_31;

        local_31 = field_97 != '\0';
        uVar4 = (&field_32)->end();
        if ((ulong)(long)param_3 < uVar4) {
            puVar5 = (undefined*)CheckAndLookupGroupIdAndFileId(this, &local_70, &local_68, param_3, param_4);
            if (puVar5 == DataStatus::READY) {
                local_40 = local_68;
                local_60 = (shared_ptr*)(local_68 + 16);
                bVar3 = operator==(local_60, (_func_decltype_nullptr*)0);
                if (bVar3) {
                    puVar5 = (undefined*)UnpackGroupData(this, local_70, param_5);
                    local_58 = 1;
                    local_54 = *(undefined4*)local_70;
                    local_50 = local_70->field_4;
                    if (puVar5 == DataStatus::NOTLOADED) {
                        puVar6 = (undefined*)(**(code**)(*field_8 + 40))(field_8, field_16, param_3, &local_58);
                        if (puVar6 == DataStatus::READY) {
                            puVar5 = (undefined*)UnpackGroupData(this, local_70, param_5);
                        }
                    }
                }
                psVar1 = local_60;
                ppuVar7 = &DataStatus::NOTLOADED;
                if (puVar5 == DataStatus::READY) {
                    bVar3 = operator!=(local_60, (_func_decltype_nullptr*)0);
                    if (bVar3) {
                        local_31 = local_31 & ((byte)param_6 ^ 1);
                        if (local_31 == 0) {
                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(param_1, psVar1);
                        } else {
                            shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator=(param_1, psVar1);
                        }
                        lVar2 = local_40;
                        this_01 = (PacketT<Array<unsigned char, eastl::allocator>>*)
                                      shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(param_1);
                        this_01->SetPos(*(ulong*)(lVar2 + 8));
                        ppuVar7 = &DataStatus::READY;
                    }
                }
                puVar5 = *ppuVar7;
            }
        } else {
            puVar5 = DataStatus::MISSING;
        }
        return puVar5;
    }

    // 0x1002b6ce0, 48 bytes, placed by class name and debug map
    // Js5::GetIndexPercentage() const
    undefined8 Js5::GetIndexPercentage() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = GetIndexIsReady(this);
        uVar2 = 100;
        if (cVar1 == '\0') {
            uVar2 = (**(code**)(*field_8 + 72))(field_8, field_16);
        }
        return uVar2;
    }

    // 0x1002b6d10, 112 bytes, placed by class name and debug map
    // Js5::GetGroupCount() const
    int Js5::GetGroupCount() {
        byte bVar1;
        long lVar2;
        StyleSheet* this_00;
        ulong uVar3;
        ulong uVar4;
        undefined1* this_01;
        int iVar5;

        this_01 = &field_32;
        lVar2 = this_01->end();
        if (lVar2 == 0) {
            iVar5 = 0;
        } else {
            uVar4 = 0;
            iVar5 = 0;
            do {
                this_00 = (StyleSheet*)Array<Js5::GroupState, eastl::allocator>::operator[](
                    (Array<Js5::GroupState, eastl::allocator>*)this_01, uVar4);
                bVar1 = this_00->HasParent();
                iVar5 = iVar5 + (uint)bVar1;
                uVar4 = uVar4 + 1;
                uVar3 = this_01->end();
            } while (uVar4 < uVar3);
        }
        return iVar5;
    }

    // 0x1002b6d90, 32 bytes, placed by class name and debug map
    // Js5::GetGroupCountInCache() const
    void Js5::GetGroupCountInCache() {
        (**(code**)(*field_8 + 64))(field_8, field_16);
    }

    // 0x1002b6db0, 64 bytes, placed by class name and debug map
    // Js5::GetGroupCrcInIndex(int) const
    undefined4 Js5::GetGroupCrcInIndex(int param_1) {
        undefined4 uVar1;
        undefined* puVar2;
        undefined4* local_10;

        local_10 = (undefined4*)0;
        puVar2 = (undefined*)CheckAndLookupGroupId(this, &local_10, param_1);
        uVar1 = 0;
        if (puVar2 == DataStatus::READY) {
            uVar1 = *local_10;
        }
        return uVar1;
    }

    // 0x1002b6df0, 64 bytes, placed by class name and debug map
    // Js5::GetGroupVersionInIndex(int) const
    undefined4 Js5::GetGroupVersionInIndex(int param_1) {
        undefined4 uVar1;
        undefined* puVar2;
        long local_10;

        local_10 = 0;
        puVar2 = (undefined*)CheckAndLookupGroupId(this, &local_10, param_1);
        uVar1 = 0;
        if (puVar2 == DataStatus::READY) {
            uVar1 = *(undefined4*)(local_10 + 4);
        }
        return uVar1;
    }

    // 0x1002b6e30, 32 bytes, placed by class name and debug map
    // Js5::UpdateCacheHint(int)
    void Js5::UpdateCacheHint(int param_1) {
        (**(code**)(*field_8 + 56))(field_8, field_16, param_1);
    }

    // 0x1002b6e50, 352 bytes, placed by class name and debug map
    // Js5::RequestGroupDownload(int)
    /* WARNING: Removing unreachable block (ram,4297813878) */
    /* Js5::RequestGroupDownload(int) */

    undefined* Js5::RequestGroupDownload(int param_1) {
        bool bVar1;
        char cVar2;
        undefined* puVar3;
        long lVar4;
        FileState* this_00;
        ulong uVar5;
        ulong uVar6;
        undefined* unaff_R12;
        uint uVar7;
        undefined4 local_48;
        undefined4 local_44;
        undefined4 local_40;
        undefined4* local_38;

        local_38 = (undefined4*)0;
        puVar3 = (undefined*)CheckAndLookupGroupId(this, &local_38, param_1);
        if (puVar3 == DataStatus::READY) {
            bVar1 = operator!=((shared_ptr*)(local_38 + 8), (_func_decltype_nullptr*)0);
            if ((!bVar1) && (lVar4 = ((local_38 + 12))->end(), lVar4 != 0)) {
                uVar6 = 0;
                do {
                    this_00 = (FileState*)Array<Js5::FileState, eastl::allocator>::operator[](
                        (Array<Js5::FileState, eastl::allocator>*)(local_38 + 12), uVar6);
                    cVar2 = this_00->IsInvalid();
                    uVar7 = 4;
                    if (cVar2 == '\0') {
                        uVar7 = 0;
                        bVar1 = operator==((shared_ptr*)&this_00->field_16, (_func_decltype_nullptr*)0);
                        if (bVar1) {
                            local_48 = 1;
                            local_44 = *local_38;
                            local_40 = local_38[1];
                            (**(code**)(*field_8 + 40))(field_8, field_16, param_1, &local_48);
                            uVar7 = 1;
                            unaff_R12 = DataStatus::NOTLOADED;
                        }
                    }
                    if ((uVar7 & 3) != 0) {
                        if (uVar7 != 2) {
                            return unaff_R12;
                        }
                        break;
                    }
                    uVar6 = uVar6 + 1;
                    uVar5 = ((local_38 + 12))->end();
                } while (uVar6 < uVar5);
            }
            puVar3 = DataStatus::READY;
        } else {
            puVar3 = DataStatus::MISSING;
        }
        return puVar3;
    }

    // 0x1002b6fb0, 160 bytes, placed by class name and debug map
    // Js5::RequestFullDownload()
    undefined* Js5::RequestFullDownload() {
        uint uVar2;
        GroupState* this_00;
        ulong uVar4;
        undefined* puVar5;

        uVar2 = (&field_32)->end();
        if (uVar2 == 0) {
            puVar5 = DataStatus::MISSING;
        } else {
            puVar5 = DataStatus::READY;
            if (0 < (int)uVar2) {
                uVar4 = 0;
                do {
                    this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                        (Array<Js5::GroupState, eastl::allocator>*)&field_32, uVar4);
                    if (this_00->IsInvalid() == '\0') {
                        if ((undefined*)RequestGroupDownload(this, (int)uVar4) != DataStatus::READY) {
                            puVar5 = DataStatus::NOTLOADED;
                        }
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar2 != uVar4);
            }
        }
        return puVar5;
    }

    // 0x1002b7050, 112 bytes, placed by class name and debug map
    // Js5::GetGroupLoadPercentage(int) const
    undefined8 Js5::GetGroupLoadPercentage(int param_1) {
        bool bVar1;
        undefined* puVar2;
        undefined8 uVar3;
        long local_20;

        local_20 = 0;
        puVar2 = (undefined*)CheckAndLookupGroupId(this, &local_20, param_1);
        uVar3 = 0;
        if (puVar2 == DataStatus::READY) {
            bVar1 = operator!=((shared_ptr*)(local_20 + 32), (_func_decltype_nullptr*)0);
            uVar3 = 100;
            if (!bVar1) {
                uVar3 = (**(code**)(*field_8 + 48))(field_8, field_16, param_1);
            }
        }
        return uVar3;
    }

    // 0x1002b70c0, 224 bytes, placed by class name and debug map
    // Js5::GetDataPercent() const
    ulong Js5::GetDataPercent() {
        uint uVar2;
        int iVar3;
        GroupState* this_00;
        long lVar4;
        ulong uVar5;
        long lVar6;
        ulong local_38;

        uVar2 = (&field_32)->end();
        if (uVar2 == 0) {
            local_38 = 0;
        } else {
            if ((int)uVar2 < 1) {
                local_38 = 1;
                lVar6 = 0;
            } else {
                local_38 = 1;
                uVar5 = 0;
                lVar6 = 0;
                do {
                    this_00 = (GroupState*)Array<Js5::GroupState, eastl::allocator>::operator[](
                        (Array<Js5::GroupState, eastl::allocator>*)&field_32, uVar5);
                    if (this_00->IsInvalid() == '\0') {
                        lVar4 = (&this_00->field_48)->end();
                        iVar3 = GetGroupLoadPercentage(this, (int)uVar5);
                        lVar6 = lVar6 + (ulong)((long)iVar3 * lVar4 * 1000) / 100;
                        local_38 = local_38 + lVar4 * 1000;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar2 != uVar5);
            }
            local_38 = (ulong)(lVar6 * 100) / local_38;
        }
        return local_38;
    }

    // 0x1002b71a0, 16 bytes, placed by class name and debug map
    // Js5::UrgentFetch(int)
    void Js5::UrgentFetch(int param_1) {
        RequestGroupDownload(this, param_1);
    }

    // 0x1002e0ca0: the linker folded this into Js5Loader::Js5ForLoader::~Js5ForLoader(), which has identical code
    Js5::~Js5();

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1002b6550, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >::type make_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> >, unsigned long&>(unsigned long&)
    jag* make_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>, unsigned long&>(ulong* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketJ* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>, unsigned long&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>, int,
                              oldscape::PacketJ<Array<unsigned char, eastl::allocator>>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002b6640, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >::type make_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator> >, oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&&)
    jag* jag::make_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>,
                          oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(PacketJ* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PacketJ* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>,
                                        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>, int,
                              oldscape::PacketJ<Array<unsigned char, eastl::allocator>>*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::js5 {
    // 0x103c05698, 56 bytes, __bss; set at startup by ___cxx_global_var_init.185
    Js5ArchiveSetSettings emptyArchiveSettings = Js5ArchiveSetSettings();

} // namespace jag::oldscape::js5
