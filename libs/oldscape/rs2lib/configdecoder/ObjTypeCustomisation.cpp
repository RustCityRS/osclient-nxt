// libs/oldscape/rs2lib/configdecoder/ObjTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ObjTypeCustomisation.h"

namespace jag::oldscape::configdecoder {
    // 0x100233c20, 288 bytes, base-object constructor, placed by class name and debug map
    // ObjTypeCustomisation::ObjTypeCustomisation(int)
    void ObjTypeCustomisation::ObjTypeCustomisation(int param_1) {
        undefined1* this_00;
        char cVar1;
        ObjType* pOVar2;
        long lVar3;
        ulong uVar4;
        shared_ptr<ObjType> local_38[16];

        new (this) Array<short, eastl::allocator>();
        this_00 = &field_24;
        new (this_00) Array<short, eastl::allocator>();
        local_38->List(param_1);
        pOVar2 = (ObjType*)shared_ptr<ObjType>::operator->(local_38);
        cVar1 = pOVar2->CanBeRecoloured();
        if (cVar1 != '\0') {
            lVar3 = shared_ptr<ObjType>::operator->(local_38);
            uVar4 = ((lVar3 + 104))->end();
            set_max_size(uVar4, 3);
            lVar3 = shared_ptr<ObjType>::operator->(local_38);
            Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)this, (Array*)(lVar3 + 104));
        }
        pOVar2 = (ObjType*)shared_ptr<ObjType>::operator->(local_38);
        cVar1 = pOVar2->CanBeRetextured();
        if (cVar1 != '\0') {
            lVar3 = shared_ptr<ObjType>::operator->(local_38);
            uVar4 = ((lVar3 + 152))->end();
            this_00->set_max_size(uVar4, 3);
            lVar3 = shared_ptr<ObjType>::operator->(local_38);
            Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)this_00, (Array*)(lVar3 + 152));
        }
        local_38->~shared_ptr();
    }

    // 0x100233d80, 16 bytes, complete-object constructor, placed by class name
    // ObjTypeCustomisation::ObjTypeCustomisation(int): jumps straight to the base-object constructor

    // 0x100233d90, 240 bytes, base-object constructor, placed by class name
    // ObjTypeCustomisation::ObjTypeCustomisation(shared_ptr<ObjType>)
    void ObjTypeCustomisation::ObjTypeCustomisation(shared_ptr param_1) {
        undefined1* this_00;
        char cVar1;
        ObjType* pOVar2;
        long lVar3;
        ulong uVar4;
        shared_ptr<ObjType>* in_RSI;

        new (this) Array<short, eastl::allocator>();
        this_00 = &field_24;
        new (this_00) Array<short, eastl::allocator>();
        pOVar2 = (ObjType*)shared_ptr<ObjType>::operator->(in_RSI);
        cVar1 = pOVar2->CanBeRecoloured();
        if (cVar1 != '\0') {
            lVar3 = shared_ptr<ObjType>::operator->(in_RSI);
            uVar4 = ((lVar3 + 104))->end();
            set_max_size(uVar4, 3);
            lVar3 = shared_ptr<ObjType>::operator->(in_RSI);
            Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)this, (Array*)(lVar3 + 104));
        }
        pOVar2 = (ObjType*)shared_ptr<ObjType>::operator->(in_RSI);
        cVar1 = pOVar2->CanBeRetextured();
        if (cVar1 != '\0') {
            lVar3 = shared_ptr<ObjType>::operator->(in_RSI);
            uVar4 = ((lVar3 + 152))->end();
            this_00->set_max_size(uVar4, 3);
            lVar3 = shared_ptr<ObjType>::operator->(in_RSI);
            Array<short, eastl::allocator>::operator=((Array<short, eastl::allocator>*)this_00, (Array*)(lVar3 + 152));
        }
    }

    // 0x100233e80, 16 bytes, complete-object constructor, placed by class name
    // ObjTypeCustomisation::ObjTypeCustomisation(shared_ptr<ObjType>): jumps straight to the base-object constructor

    // 0x100233e90, 528 bytes, placed by class name
    // ObjTypeCustomisation::Unpack(int, PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    ObjTypeCustomisation* ObjTypeCustomisation::Unpack(int param_1, PacketJ* param_2) {
        byte bVar1;
        byte bVar2;
        char cVar3;
        undefined2 uVar4;
        uint* puVar5;
        Array<game::VarValue, eastl::allocator>* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar6;
        Array<short, eastl::allocator>* this_02;
        undefined2* puVar7;
        long lVar8;
        ulong uVar9;
        bool bVar10;
        bool bVar11;
        int local_54;
        array<int, 2ul> local_50[8];
        byte local_31;

        local_54 = param_1;
        bVar1 = param_2->g1();
        make_shared<ObjTypeCustomisation, int&>((jag*)this, &local_54);
        if ((bVar1 & 1) != 0) {
            bVar2 = param_2->g1();
            puVar5 = (uint*)std::array<int, 2ul>::operator[](local_50, 0);
            *puVar5 = bVar2 & 15;
            puVar5 = (uint*)std::array<int, 2ul>::operator[](local_50, 1);
            *puVar5 = (uint)(bVar2 >> 4);
            this_00 = (Array<game::VarValue, eastl::allocator>*)shared_ptr<ObjTypeCustomisation>::operator->(
                (shared_ptr<ObjTypeCustomisation>*)(ObjTypeCustomisation*)this);
            cVar3 = this_00->empty();
            local_31 = bVar1;
            if (cVar3 == '\0') {
                this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                              shared_ptr<ObjTypeCustomisation>::operator->(
                                  (shared_ptr<ObjTypeCustomisation>*)(ObjTypeCustomisation*)this);
                lVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                bVar11 = lVar8 == 2;
            } else {
                bVar11 = false;
            }
            uVar9 = 0;
            do {
                piVar6 = (int*)std::array<int, 2ul>::operator[](local_50, uVar9);
                if (*piVar6 != 15) {
                    uVar4 = param_2->g2();
                    if (bVar11) {
                        this_02 = (Array<short, eastl::allocator>*)shared_ptr<ObjTypeCustomisation>::operator->(
                            (shared_ptr<ObjTypeCustomisation>*)(ObjTypeCustomisation*)this);
                        puVar7 = (undefined2*)Array<short, eastl::allocator>::operator[](this_02, (long)*piVar6);
                        *puVar7 = uVar4;
                    }
                }
                bVar10 = uVar9 == 0;
                uVar9 = 1;
            } while (bVar10);
            bVar1 = local_31;
        }
        if ((bVar1 & 2) != 0) {
            bVar1 = param_2->g1();
            puVar5 = (uint*)std::array<int, 2ul>::operator[](local_50, 0);
            *puVar5 = bVar1 & 15;
            puVar5 = (uint*)std::array<int, 2ul>::operator[](local_50, 1);
            *puVar5 = (uint)(bVar1 >> 4);
            lVar8 = shared_ptr<ObjTypeCustomisation>::operator->(
                (shared_ptr<ObjTypeCustomisation>*)(ObjTypeCustomisation*)this);
            cVar3 = ((lVar8 + 24))->empty();
            if (cVar3 == '\0') {
                lVar8 = shared_ptr<ObjTypeCustomisation>::operator->(
                    (shared_ptr<ObjTypeCustomisation>*)(ObjTypeCustomisation*)this);
                lVar8 = ((lVar8 + 24))->end();
                bVar11 = lVar8 == 2;
            } else {
                bVar11 = false;
            }
            uVar9 = 0;
            do {
                piVar6 = (int*)std::array<int, 2ul>::operator[](local_50, uVar9);
                if (*piVar6 != 15) {
                    uVar4 = param_2->g2();
                    if (bVar11) {
                        lVar8 = shared_ptr<ObjTypeCustomisation>::operator->(
                            (shared_ptr<ObjTypeCustomisation>*)(ObjTypeCustomisation*)this);
                        puVar7 = (undefined2*)Array<short, eastl::allocator>::operator[](
                            (Array<short, eastl::allocator>*)(lVar8 + 24), (long)*piVar6);
                        *puVar7 = uVar4;
                    }
                }
                bVar10 = uVar9 == 0;
                uVar9 = 1;
            } while (bVar10);
        }
        return (ObjTypeCustomisation*)this;
    }

} // namespace jag::oldscape::configdecoder
