// projects/osclient/ScriptRunnerImpl_4200To4299.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ScriptRunnerImpl.h"

namespace jag::oldscape {
    // 0x100165a40, 2224 bytes, placed by class name and debug map
    // ScriptRunnerImpl::ExecuteCommand4200To4299(ScriptOp, ClientScript const&, bool)
    undefined8 ScriptRunnerImpl::ExecuteCommand4200To4299(long param_1, undefined4 param_2) {
        ushort uVar1;
        undefined4 uVar2;
        int iVar3;
        char cVar4;
        int iVar5;
        Client* pCVar6;
        eastl::string* pbVar7;
        basic_string* pbVar8;
        ushort* puVar9;
        ObjType* this;
        int* piVar10;
        long lVar11;
        uint* puVar12;
        undefined4* puVar13;
        uint uVar14;
        ulong uVar15;
        eastl::string local_70[32];
        shared_ptr<configdecoder::ObjType> local_50[32];

        pCVar6 = (Client*)Client::Instance();
        switch (param_2) {
        case 4200:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
            pbVar7 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::operator=(pbVar7, (basic_string*)(lVar11 + 8));
            goto LAB_100166172;
        case 4201:
            iVar5 = *(int*)(param_1 + 104092);
            uVar15 = (long)iVar5 - 2;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar3 = *piVar10;
            piVar10 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar5 - 1);
            iVar5 = *piVar10;
            local_50->List(iVar3);
            uVar14 = iVar5 - 1;
            if (uVar14 < 5) {
                lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
                eastl::vector<eastl::string,
                              eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string,
                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar11 + 224),
                    (ulong)uVar14);
                cVar4 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar4 == '\0') {
                    lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
                    pbVar8 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar11 +
                                                                                                              224),
                        (ulong)uVar14);
                    iVar5 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar5 + 1;
                    pbVar7 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
                    eastl::string::operator=(pbVar7, pbVar8);
                    goto LAB_100166172;
                }
            }
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
            pbVar7 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::assign(pbVar7, "");
            goto LAB_100166172;
        case 4202:
            iVar5 = *(int*)(param_1 + 104092);
            uVar15 = (long)iVar5 - 2;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar3 = *piVar10;
            piVar10 =
                (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar5 - 1);
            iVar5 = *piVar10;
            local_50->List(iVar3);
            uVar14 = iVar5 - 1;
            if (uVar14 < 5) {
                lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
                eastl::vector<eastl::string,
                              eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string,
                            eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar11 + 424),
                    (ulong)uVar14);
                cVar4 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar4 == '\0') {
                    lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
                    pbVar8 = (basic_string*)eastl::vector<
                        eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::string,
                                eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar11 +
                                                                                                              424),
                        (ulong)uVar14);
                    iVar5 = *(int*)(param_1 + 136096);
                    *(int*)(param_1 + 136096) = iVar5 + 1;
                    pbVar7 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                        (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
                    eastl::string::operator=(pbVar7, pbVar8);
                    goto LAB_100166172;
                }
            }
            iVar5 = *(int*)(param_1 + 136096);
            *(int*)(param_1 + 136096) = iVar5 + 1;
            pbVar7 = (eastl::string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), (long)iVar5);
            eastl::string::assign(pbVar7, "");
            goto LAB_100166172;
        case 4203:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = *(uint*)(lVar11 + 204);
            break;
        case 4204:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = (uint)(*(int*)(lVar11 + 200) == 1);
            goto LAB_100165fba;
        case 4205:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar5 = *piVar10;
            local_50->List(iVar5);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            if ((*(int*)(lVar11 + 732) == -1) &&
                (lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50), -1 < *(int*)(lVar11 + 728))) {
                lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            LAB_100165d91:
                iVar5 = *(int*)(lVar11 + 728);
            }
            goto LAB_100166156;
        case 4206:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar5 = *piVar10;
            local_50->List(iVar5);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            if ((-1 < *(int*)(lVar11 + 732)) &&
                (lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50), -1 < *(int*)(lVar11 + 728))) {
                lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
                goto LAB_100165d91;
            }
            goto LAB_100166156;
        case 4207:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = (uint) * (byte*)(lVar11 + 220);
            break;
        case 4208:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar5 = *piVar10;
            local_50->List(iVar5);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            if ((*(int*)(lVar11 + 840) == -1) &&
                (lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50), -1 < *(int*)(lVar11 + 836))) {
                lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            LAB_10016614f:
                iVar5 = *(int*)(lVar11 + 836);
            }
            goto LAB_100166156;
        case 4209:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar5 = *piVar10;
            local_50->List(iVar5);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            if ((-1 < *(int*)(lVar11 + 840)) &&
                (lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50), -1 < *(int*)(lVar11 + 836))) {
                lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
                goto LAB_10016614f;
            }
        LAB_100166156:
            iVar3 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar3 + 1;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar3);
            *piVar10 = iVar5;
            goto LAB_100166172;
        case 4210:
            uVar15 = (long)*(int*)(param_1 + 136096) - 1;
            *(int*)(param_1 + 136096) = (int)uVar15;
            pbVar8 = (basic_string*)std::array<eastl::string, 1000ul>::operator[](
                (array<eastl::string, 1000ul>*)(param_1 + 104096), uVar15);
            new (local_50) eastl::string(pbVar8);
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            iVar5 = *piVar10;
            eastl::string::basic_string(local_70, (basic_string*)local_50);
            pCVar6->FindObjects(local_70, iVar5 == 1);
            eastl::string::~basic_string(local_70);
            uVar2 = *(undefined4*)((long)&pCVar6->field_52912 + 4);
            iVar5 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar5 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar5);
            *puVar13 = uVar2;
            local_50->~basic_string();
            return 1;
        case 4211:
            cVar4 = (&pCVar6->field_52880)->empty();
            if (cVar4 == '\0') {
                iVar5 = *(int*)&pCVar6->field_52912;
                if (iVar5 < *(int*)((long)&pCVar6->field_52912 + 4)) {
                    *(int*)&pCVar6->field_52912 = iVar5 + 1;
                    puVar9 = (ushort*)eastl::vector<short, eastl::allocator>::operator[](
                        (vector<short, eastl::allocator>*)&pCVar6->field_52880, (long)iVar5);
                    uVar1 = *puVar9;
                    iVar5 = *(int*)(param_1 + 104092);
                    *(int*)(param_1 + 104092) = iVar5 + 1;
                    puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092),
                                                                         (long)iVar5);
                    *puVar12 = (uint)uVar1;
                    return 1;
                }
            }
            iVar5 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar5 + 1;
            puVar13 =
                (undefined4*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar5);
            *puVar13 = 4294967295;
            return 1;
        case 4212:
            *(undefined4*)&pCVar6->field_52912 = 0;
            return 1;
        case 4213:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            this = (ObjType*)shared_ptr<configdecoder::ObjType>::operator->(local_50);
            iVar5 = GetShiftClickIOp();
            uVar14 = 4294967295;
            if (iVar5 + 1U != 0) {
                uVar14 = iVar5 + 1U;
            }
        LAB_100165fba:
            iVar5 = *(int*)(param_1 + 104092);
            *(int*)(param_1 + 104092) = iVar5 + 1;
            goto LAB_1001660e4;
        case 4214:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = *(uint*)(lVar11 + 208);
            break;
        case 4215:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = *(uint*)(lVar11 + 212);
            break;
        case 4216:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = *(uint*)(lVar11 + 216);
            break;
        case 4217:
            uVar15 = (long)*(int*)(param_1 + 104092) - 1;
            *(int*)(param_1 + 104092) = (int)uVar15;
            piVar10 = (int*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), uVar15);
            local_50->List(*piVar10);
            lVar11 = shared_ptr<configdecoder::ObjType>::operator->(local_50);
            uVar14 = *(uint*)(lVar11 + 760);
            break;
        default:
            return 2;
        }
        iVar5 = *(int*)(param_1 + 104092);
        *(int*)(param_1 + 104092) = iVar5 + 1;
    LAB_1001660e4:
        puVar12 = (uint*)std::array<int, 1000ul>::operator[]((array<int, 1000ul>*)(param_1 + 100092), (long)iVar5);
        *puVar12 = uVar14;
    LAB_100166172:
        local_50->~shared_ptr();
        return 1;
    }

} // namespace jag::oldscape
