// libs/oldscape/rs2lib/configdecoder/ObjTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ObjTypeCustomisation.h"

namespace jag::oldscape::configdecoder {
    // 0x100233c20
    ObjTypeCustomisation::ObjTypeCustomisation(int arg1) : Array<short>() {
        long lVar3;
        unsigned long uVar4;

        uint8_t* this_00 = &field_24;
        new (this_00) Array<short>();
        auto local_38 = ObjType::List(arg1);
        auto pOVar2 = local_38.operator->();
        if (pOVar2->CanBeRecoloured()) {
            lVar3 = local_38.operator->();
            uVar4 = ((lVar3 + 104))->end();
            set_max_size(uVar4, 3);
            lVar3 = local_38.operator->();
            *this = (*((lVar3 + 104)));
        }
        pOVar2 = (ObjType*)local_38.operator->();
        if (pOVar2->CanBeRetextured()) {
            lVar3 = local_38.operator->();
            uVar4 = ((lVar3 + 152))->end();
            this_00->set_max_size(uVar4, 3);
            lVar3 = local_38.operator->();
            *this_00 = (*((lVar3 + 152)));
        }
    }

    // 0x100233d90
    ObjTypeCustomisation::ObjTypeCustomisation(shared_ptr<ObjType> objType) : Array<short>() {
        long lVar3;
        unsigned long uVar4;

        uint8_t* this_00 = &field_24;
        new (this_00) Array<short>();
        ObjType* pOVar2 = (ObjType*)(*objType).operator->();
        if (pOVar2->CanBeRecoloured()) {
            lVar3 = (*objType).operator->();
            uVar4 = ((lVar3 + 104))->end();
            set_max_size(uVar4, 3);
            lVar3 = (*objType).operator->();
            *this = (*((lVar3 + 104)));
        }
        pOVar2 = (ObjType*)(*objType).operator->();
        if (pOVar2->CanBeRetextured()) {
            lVar3 = (*objType).operator->();
            uVar4 = ((lVar3 + 152))->end();
            this_00->set_max_size(uVar4, 3);
            lVar3 = (*objType).operator->();
            *this_00 = (*((lVar3 + 152)));
        }
    }

    // 0x100233e90
    ObjTypeCustomisation* ObjTypeCustomisation::Unpack(int arg1,
                                                       PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        uint8_t bVar2;
        bool cVar3;
        uint16_t uVar4;
        unsigned int* puVar5;
        int* piVar6;
        Array<short>* this_02;
        uint16_t* puVar7;
        long lVar8;
        unsigned long uVar9;
        bool bVar10;
        bool bVar11;
        array<int, 2ul> local_50;
        uint8_t local_31;

        int local_54 = arg1;
        uint8_t bVar1 = packetJ.g1();
        make_shared<ObjTypeCustomisation, int&>((ReturnValue*)this, &local_54);
        if ((bVar1 & 1) != 0) {
            bVar2 = packetJ.g1();
            puVar5 = &local_50[0];
            *puVar5 = bVar2 & 15;
            puVar5 = &local_50[1];
            *puVar5 = (unsigned int)(bVar2 >> 4);
            cVar3 = ((Array<game::VarValue>*)(*this).operator->())->empty();
            local_31 = bVar1;
            if (!cVar3) {
                lVar8 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this).operator->())->end();
                bVar11 = lVar8 == 2;
            } else {
                bVar11 = false;
            }
            uVar9 = 0;
            do {
                piVar6 = &local_50[uVar9];
                if (*piVar6 != 15) {
                    uVar4 = packetJ.g2();
                    if (bVar11) {
                        this_02 = (Array<short>*)(*this).operator->();
                        puVar7 = (uint16_t*)(*this_02)[(long)*piVar6];
                        *puVar7 = uVar4;
                    }
                }
                bVar10 = uVar9 == 0;
                uVar9 = 1;
            } while (bVar10);
            bVar1 = local_31;
        }
        if ((bVar1 & 2) != 0) {
            bVar1 = packetJ.g1();
            puVar5 = &local_50[0];
            *puVar5 = bVar1 & 15;
            puVar5 = &local_50[1];
            *puVar5 = (unsigned int)(bVar1 >> 4);
            lVar8 = (*this).operator->();
            cVar3 = ((lVar8 + 24))->empty();
            if (!cVar3) {
                lVar8 = (*this).operator->();
                lVar8 = ((lVar8 + 24))->end();
                bVar11 = lVar8 == 2;
            } else {
                bVar11 = false;
            }
            uVar9 = 0;
            do {
                piVar6 = &local_50[uVar9];
                if (*piVar6 != 15) {
                    uVar4 = packetJ.g2();
                    if (bVar11) {
                        lVar8 = (*this).operator->();
                        puVar7 = (uint16_t*)(*((lVar8 + 24)))[(long)*piVar6];
                        *puVar7 = uVar4;
                    }
                }
                bVar10 = uVar9 == 0;
                uVar9 = 1;
            } while (bVar10);
        }
        return this;
    }

} // namespace jag::oldscape::configdecoder
