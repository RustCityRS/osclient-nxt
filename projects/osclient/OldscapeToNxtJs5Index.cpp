// projects/osclient/OldscapeToNxtJs5Index.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OldscapeToNxtJs5Index.h"

namespace jag::oldscape::js5 {
    // 0x10018ad80, 1056 bytes, base-object constructor, placed by class name and debug map
    // OldscapeToNxtJs5Index::OldscapeToNxtJs5Index(jagex3::Js5 const&)
    void OldscapeToNxtJs5Index::OldscapeToNxtJs5Index(Js5* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        Array<int, eastl::allocator>* this_02;
        undefined2 uVar2;
        undefined4 uVar3;
        uint uVar4;
        uint uVar5;
        long lVar6;
        undefined4* puVar7;
        ulong uVar8;
        uint* puVar9;
        void* pvVar10;
        undefined2* puVar11;
        vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                   eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>* this_03;
        int* piVar12;
        int iVar13;
        ulong uVar14;
        ushort uVar15;
        OldscapeToNxtJs5Index* pOVar16;
        undefined8 local_90;
        Array<unsigned short, eastl::allocator>* local_88;
        vector local_80[24];
        Array<int, eastl::allocator>* local_68;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_60;
        ulong local_58;
        Array<unsigned int, eastl::allocator>* local_50;
        Animation* local_48;
        ushort local_3e;
        int local_3c;
        OldscapeToNxtJs5Index* local_38;

        new (this) Js5Index();
        uVar3 = param_1->capacity();
        field_32 = uVar3;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        local_48 = (Animation*)param_1;
        local_38 = this;
        param_1->GetGroupList(local_80);
        uVar4 = local_80->size();
        field_40 = uVar4;
        local_50 = (Array<unsigned int, eastl::allocator>*)&field_48;
        local_50->set_max_size((ulong)uVar4, 0);
        lVar6 = local_80->size();
        if (lVar6 != 0) {
            uVar14 = 0;
            do {
                puVar7 = (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                    (vector<int, BucketAllocatorEASTL>*)local_80, uVar14);
                uVar3 = *puVar7;
                puVar7 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](local_50, uVar14);
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
                uVar8 = local_80->size();
            } while (uVar14 < uVar8);
        }
        local_80->~vector_set();
        uVar4 = local_48->GetRT5FrameCount();
        pOVar16 = local_38;
        this_00 = &local_38->field_152;
        uVar14 = (ulong)uVar4;
        this_00->set_max_size(uVar14, 0);
        this_01 = &pOVar16->field_200;
        this_01->set_max_size(uVar14, 0);
        local_88 = (Array<unsigned short, eastl::allocator>*)&pOVar16->field_224;
        local_88->set_max_size(uVar14, 0);
        (&pOVar16->field_72, uVar14, 0)->set_max_size();
        local_68 = (Array<int, eastl::allocator>*)this_01;
        local_58 = uVar14;
        if (pOVar16->field_40 != 0) {
            uVar14 = 0;
            do {
                puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_50, uVar14);
                uVar4 = *puVar9;
                uVar3 = local_48->GetGroupHash(uVar4);
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&pOVar16->field_72, (ulong)uVar4);
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
            } while (uVar14 < local_38->field_40);
        }
        this_02 = local_68;
        uVar4 = 0;
        if (local_38->field_40 != 0) {
            uVar14 = 0;
            do {
                puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_50, uVar14);
                uVar4 = *puVar9;
                uVar3 = local_48->GetGroupCrcInIndex(uVar4);
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                               (ulong)uVar4);
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
                uVar4 = local_38->field_40;
            } while (uVar14 < uVar4);
        }
        pOVar16 = local_38;
        if (uVar4 != 0) {
            pvVar10 = (void*)Array<int, eastl::allocator>::operator[](this_02, 0);
            _memset(pvVar10, 255, local_58 * 4);
        }
        if (pOVar16->field_40 != 0) {
            uVar14 = 0;
            do {
                puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_50, uVar14);
                uVar4 = *puVar9;
                uVar3 = local_48->GetGroupVersionInIndex(uVar4);
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](this_02, (ulong)uVar4);
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
            } while (uVar14 < local_38->field_40);
        }
        if (local_38->field_40 != 0) {
            local_60 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_248;
            local_68 = (Array<int, eastl::allocator>*)0;
            pOVar16 = local_38;
            do {
                puVar9 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_50, (ulong)local_68);
                uVar4 = *puVar9;
                eastl::vector<int, BucketAllocatorEASTL>::vector();
                local_48->GetFileList(local_80, uVar4);
                uVar2 = local_80->size();
                puVar11 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](local_88, (ulong)uVar4);
                *puVar11 = uVar2;
                uVar14 = local_80->size();
                uVar5 = local_48->GetFileIdLimit(uVar4);
                if (uVar14 != uVar5) {
                    uVar14 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_60);
                    if (uVar14 != local_58) {
                        local_60->set_max_size(local_58, 0);
                    }
                    this_03 = (vector_map<unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>*)
                        Array<eastl::vector_map<
                                  unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                              eastl::allocator>::
                        operator[](
                            (Array<eastl::vector_map<
                                       unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                       eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>,
                                   eastl::allocator>*)local_60,
                            (ulong)uVar4);
                    lVar6 = local_80->size();
                    if (lVar6 != 0) {
                        uVar14 = 0;
                        uVar15 = 0;
                        iVar13 = 0;
                        do {
                            piVar12 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                                (vector<int, BucketAllocatorEASTL>*)local_80, uVar14);
                            iVar1 = *piVar12;
                            for (local_3c = (iVar13 + 1) - (uint)((int)uVar14 == 0); local_3c < iVar1;
                                 local_3c = local_3c + 1) {
                                local_3e = uVar15;
                                local_90 = eastl::make_pair<int&, unsigned short&>(&local_3c, &local_3e);
                                eastl::vector_map<
                                    unsigned int, unsigned short, eastl::less<unsigned int>, eastl::allocator,
                                    eastl::vector<eastl::pair<unsigned int, unsigned short>, eastl::allocator>>::
                                    insert<eastl::pair<int, unsigned short>, void>(this_03, (pair*)&local_90);
                                uVar15 = uVar15 + 1;
                            }
                            uVar14 = (ulong)((int)uVar14 + 1);
                            uVar8 = local_80->size();
                            pOVar16 = local_38;
                            iVar13 = iVar1;
                        } while (uVar14 < uVar8);
                    }
                }
                local_80->~vector_set();
                local_68 = (Array<int, eastl::allocator>*)((long)local_68 + 1);
            } while (local_68 < (ulong)pOVar16->field_40);
        }
    }

    // 0x10018ba90, 16 bytes, complete-object constructor, placed by class name
    // OldscapeToNxtJs5Index::OldscapeToNxtJs5Index(jagex3::Js5 const&): jumps straight to the base-object constructor

    // 0x10019c210: the linker folded this into Js5Index::~Js5Index(), which has identical code
    OldscapeToNxtJs5Index::~OldscapeToNxtJs5Index();

} // namespace jag::oldscape::js5
