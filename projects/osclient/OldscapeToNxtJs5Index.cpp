// projects/osclient/OldscapeToNxtJs5Index.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OldscapeToNxtJs5Index.h"

namespace jag::oldscape::js5 {
    // 0x10018ad80
    OldscapeToNxtJs5Index::OldscapeToNxtJs5Index(const jagex3::Js5& js5) : Js5Index() {
        int iVar1;
        uint16_t uVar2;
        unsigned int uVar5;
        uint32_t* puVar7;
        unsigned long uVar8;
        unsigned int* puVar9;
        uint16_t* puVar11;
        vector_map<unsigned int, unsigned short>* this_03;
        int* piVar12;
        int iVar13;
        unsigned long uVar14;
        unsigned short uVar15;
        uint64_t local_90;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_60;
        unsigned short local_3e;
        int local_3c;

        uint32_t uVar3 = js5.capacity();
        field_32 = uVar3;
        vector<int, BucketAllocatorEASTL> local_80;
        OldscapeToNxtJs5Index* local_38 = this;
        js5.GetGroupList(local_80);
        unsigned int uVar4 = local_80.size();
        field_40 = uVar4;
        Array<unsigned int>* local_50 = (Array<unsigned int>*)&field_48;
        local_50->set_max_size((unsigned long)uVar4, 0);
        long lVar6 = local_80.size();
        if (lVar6 != 0) {
            uVar14 = 0;
            do {
                puVar7 = &local_80[uVar14];
                uVar3 = *puVar7;
                puVar7 = (uint32_t*)(*local_50)[uVar14];
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
                uVar8 = local_80.size();
            } while (uVar14 < uVar8);
        }
        uVar4 = js5.GetRT5FrameCount();
        OldscapeToNxtJs5Index* pOVar16 = local_38;
        uint8_t* this_00 = &local_38->field_152;
        uVar14 = (unsigned long)uVar4;
        this_00->set_max_size(uVar14, 0);
        uint8_t* this_01 = &pOVar16->field_200;
        this_01->set_max_size(uVar14, 0);
        Array<unsigned short>* local_88 = (Array<unsigned short>*)&pOVar16->field_224;
        local_88->set_max_size(uVar14, 0);
        pOVar16->field_72.set_max_size(uVar14, 0);
        Array<int>* local_68 = (Array<int>*)this_01;
        unsigned long local_58 = uVar14;
        if (pOVar16->field_40 != 0) {
            uVar14 = 0;
            do {
                puVar9 = (unsigned int*)(*local_50)[uVar14];
                uVar4 = *puVar9;
                uVar3 = ((Js5*)(Animation*)js5)->GetGroupHash(uVar4);
                puVar7 = &pOVar16->field_72[(unsigned long)uVar4];
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
            } while (uVar14 < local_38->field_40);
        }
        Array<int>* this_02 = local_68;
        uVar4 = 0;
        if (local_38->field_40 != 0) {
            uVar14 = 0;
            do {
                puVar9 = (unsigned int*)(*local_50)[uVar14];
                uVar4 = *puVar9;
                uVar3 = ((Js5*)(Animation*)js5)->GetGroupCrcInIndex(uVar4);
                puVar7 = (uint32_t*)(*this_00)[(unsigned long)uVar4];
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
                uVar4 = local_38->field_40;
            } while (uVar14 < uVar4);
        }
        pOVar16 = local_38;
        if (uVar4 != 0) {
            _memset((void*)(*this_02)[0], 255, local_58 * 4);
        }
        if (pOVar16->field_40 != 0) {
            uVar14 = 0;
            do {
                puVar9 = (unsigned int*)(*local_50)[uVar14];
                uVar4 = *puVar9;
                uVar3 = ((Js5*)(Animation*)js5)->GetGroupVersionInIndex(uVar4);
                puVar7 = (uint32_t*)(*this_02)[(unsigned long)uVar4];
                *puVar7 = uVar3;
                uVar14 = uVar14 + 1;
            } while (uVar14 < local_38->field_40);
        }
        if (local_38->field_40 != 0) {
            local_60 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_248;
            local_68 = nullptr;
            pOVar16 = local_38;
            do {
                puVar9 = (unsigned int*)(*local_50)[(unsigned long)local_68];
                uVar4 = *puVar9;
                local_80 = eastl::vector<int, BucketAllocatorEASTL>();
                ((Js5*)(Animation*)js5)->GetFileList(local_80, uVar4);
                uVar2 = local_80.size();
                puVar11 = (uint16_t*)(*local_88)[(unsigned long)uVar4];
                *puVar11 = uVar2;
                uVar14 = local_80.size();
                uVar5 = ((Js5*)(Animation*)js5)->GetFileIdLimit(uVar4);
                if (uVar14 != uVar5) {
                    uVar14 = local_60->end();
                    if (uVar14 != local_58) {
                        local_60->set_max_size(local_58, 0);
                    }
                    this_03 = (vector_map<unsigned int, unsigned short>*)(*local_60)[(unsigned long)uVar4];
                    lVar6 = local_80.size();
                    if (lVar6 != 0) {
                        uVar14 = 0;
                        uVar15 = 0;
                        iVar13 = 0;
                        do {
                            piVar12 = &local_80[uVar14];
                            iVar1 = *piVar12;
                            for (local_3c = (iVar13 + 1) - (unsigned int)((int)uVar14 == 0); local_3c < iVar1;
                                 local_3c = local_3c + 1) {
                                local_3e = uVar15;
                                local_90 = eastl::make_pair<int&, unsigned short&>(local_3c, local_3e);
                                this_03->insert<eastl::pair<int, unsigned short>, void>(local_90);
                                uVar15 = uVar15 + 1;
                            }
                            uVar14 = (unsigned long)((int)uVar14 + 1);
                            uVar8 = local_80.size();
                            pOVar16 = local_38;
                            iVar13 = iVar1;
                        } while (uVar14 < uVar8);
                    }
                }
                local_68 = (Array<int>*)((long)local_68 + 1);
            } while (local_68 < (unsigned long)pOVar16->field_40);
        }
    }

    // 0x10019c210: OldscapeToNxtJs5Index::~OldscapeToNxtJs5Index() has the same machine code as Js5Index::~Js5Index()

} // namespace jag::oldscape::js5
