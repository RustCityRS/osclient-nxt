// libs/oldscape/jagex3/client/clientlocanim.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "clientlocanim.h"

namespace jag::oldscape {
    // 0x100029ea0: ClientLocAnim::IsLit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: ClientLocAnim::IsUnlit() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: ClientLocAnim::IsClientLocAnim() const has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x100347af0
    ClientLocAnim::ClientLocAnim(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, bool arg8,
                                 shared_ptr<dash3d::ModelSource> modelSource, int arg10)
        : dash3d::ModelSource() {
        bool bVar1;
        int iVar3;
        unsigned int uVar4;
        long lVar5;
        long* plVar6;
        SeqType* pSVar8;
        int* piVar9;
        ReturnValue local_40;

        uint8_t* this_00 = &field_40;
        new (this_00) shared_ptr();
        field_16 = arg1;
        field_20 = arg2;
        field_24 = arg3;
        field_28 = arg4;
        field_32 = arg5;
        field_36 = arg6;
        if (arg7 != -1) {
            local_40 = configdecoder::SeqType::List(arg7);
            *this_00 = local_40;
            field_56 = 0;
            field_60 = arg10 - 1;
            lVar5 = (*this_00).operator->();
            if ((*(int*)(lVar5 + 256) == 0) && (bVar1 = *modelSource != nullptr, bVar1)) {
                plVar6 = (long*)(*modelSource).operator->();
                if ((**(void (**)(...))(*plVar6 + 40))(plVar6)) {
                    static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>(&local_40);
                    if ((ClientLocAnim*)local_40.operator->() == this) {
                        lVar5 = local_40.operator->();
                        field_56 = *(unsigned int*)(lVar5 + 56);
                        lVar5 = local_40.operator->();
                        field_60 = *(int*)(lVar5 + 60);
                        return;
                    }
                }
            }
            if ((arg8) && (lVar5 = (*this_00).operator->(), *(int*)(lVar5 + 168) != -1)) {
                pSVar8 = (SeqType*)(*this_00).operator->();
                if (!(pSVar8->IsKeyFramed())) {
                    lVar5 = (*this_00).operator->();
                    iVar3 = ((lVar5 + 72))->end();
                    uVar4 = ((Random*)&jag::math::g_Rand)->Rand(iVar3);
                    field_56 = uVar4;
                    lVar5 = (*this_00).operator->();
                    piVar9 = (int*)(*((lVar5 + 120)))[(long)(int)field_56];
                    iVar3 = ((Random*)&jag::math::g_Rand)->Rand(*piVar9);
                    field_60 = field_60 - iVar3;
                } else {
                    pSVar8 = (SeqType*)(*this_00).operator->();
                    iVar3 = pSVar8->GetDuration();
                    uVar4 = ((Random*)&jag::math::g_Rand)->Rand(iVar3);
                    field_56 = uVar4;
                }
            }
        }
    }

    // 0x100347dc0
    void ClientLocAnim::Hmap(int arg1, int arg2) {
        ClientBuild::Read3DArray<int>((Array<int>*)&ClientBuild::m_groundh, field_28, arg1, arg2);
    }

    // 0x100347de0
    auto ClientLocAnim::GetTempModel(int arg1) {
        int arg4;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int arg1_00;
        int arg8;
        long lVar8;
        SeqType* pSVar9;
        LocType* this_00;
        shared_ptr<configdecoder::LocType>* locType;
        unsigned int uVar10;
        int* piVar11;
        int iVar12;
        int iVar13;
        unsigned int uVar14;
        int iVar15;
        int iVar16;
        int iVar17;
        uint32_t in_stack_ffffffffffffff74;

        uint8_t* midiPlayerMainThread = &field_40;
        if (*midiPlayerMainThread != nullptr) {
            iVar16 = arg1 - field_60;
            if ((100 < iVar16) && (lVar8 = (*midiPlayerMainThread).operator->(), 0 < *(int*)(lVar8 + 168))) {
                iVar16 = 100;
            }
            pSVar9 = (SeqType*)(*midiPlayerMainThread).operator->();
            if (pSVar9->IsKeyFramed() == '\0') {
                do {
                    do {
                        lVar8 = (*midiPlayerMainThread).operator->();
                        piVar11 = (int*)(*((lVar8 + 120)))[(long)(int)field_56];
                        if (iVar16 <= *piVar11)
                            goto LAB_100347f4a;
                        lVar8 = (*midiPlayerMainThread).operator->();
                        piVar11 = (int*)(*((lVar8 + 120)))[(long)(int)field_56];
                        iVar16 = iVar16 - *piVar11;
                        uVar10 = field_56 + 1;
                        field_56 = uVar10;
                        lVar8 = (*midiPlayerMainThread).operator->();
                        iVar3 = ((lVar8 + 72))->end();
                    } while ((int)uVar10 < iVar3);
                    lVar8 = (*midiPlayerMainThread).operator->();
                    uVar10 = field_56 - *(int*)(lVar8 + 168);
                    field_56 = uVar10;
                    if ((int)uVar10 < 0)
                        break;
                    lVar8 = (*midiPlayerMainThread).operator->();
                    iVar3 = ((lVar8 + 72))->end();
                } while ((int)uVar10 < iVar3);
                local_40 = shared_ptr();
                *midiPlayerMainThread = local_40;
            } else {
                pSVar9 = (SeqType*)(*midiPlayerMainThread).operator->();
                iVar3 = pSVar9->GetDuration();
                uVar10 = iVar16 + field_56;
                field_56 = uVar10;
                iVar16 = 0;
                if (iVar3 <= (int)uVar10) {
                    lVar8 = (*midiPlayerMainThread).operator->();
                    uVar10 = *(unsigned int*)(lVar8 + 168);
                    uVar14 = iVar3 - uVar10;
                    field_56 = uVar14;
                    if ((int)(uVar14 | uVar10) < 0) {
                        midiPlayerMainThread->reset();
                    }
                }
            }
        LAB_100347f4a:
            field_60 = arg1 - iVar16;
        }
        auto groundDecor = configdecoder::LocType::List(field_16);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_40(groundDecor);
        lVar8 = local_40.operator->();
        lVar8 = ((lVar8 + 488))->end();
        if (lVar8 != 0) {
            this_00 = (LocType*)local_40.operator->();
            locType = (shared_ptr<configdecoder::LocType>*)this_00->GetMultiLoc();
            local_40 = *locType;
        }
        if (local_40 == nullptr) {
            auto result;
        } else {
            if ((field_24 | 2U) == 3) {
                lVar8 = local_40.operator->();
                iVar16 = *(int*)(lVar8 + 188);
                lVar8 = local_40.operator->();
                piVar11 = (int*)(lVar8 + 184);
            } else {
                lVar8 = local_40.operator->();
                iVar16 = *(int*)(lVar8 + 184);
                lVar8 = local_40.operator->();
                piVar11 = (int*)(lVar8 + 188);
            }
            iVar3 = *piVar11;
            iVar15 = field_32;
            iVar13 = field_36;
            iVar17 = (iVar16 >> 1) + iVar15;
            iVar12 = (iVar3 >> 1) + iVar13;
            iVar4 = Hmap(iVar17, iVar12);
            iVar15 = iVar15 + (iVar16 + 1 >> 1);
            iVar5 = Hmap(iVar15, iVar12);
            iVar13 = iVar13 + (iVar3 + 1 >> 1);
            iVar6 = Hmap(iVar17, iVar13);
            iVar7 = Hmap(iVar15, iVar13);
            iVar15 = field_32;
            iVar13 = field_36;
            arg1_00 = local_40.operator->();
            iVar12 = field_20;
            iVar17 = field_24;
            arg4 = field_28;
            arg8 = midiPlayerMainThread->end();
            result.GetTempModel(
                arg1_00, iVar12, iVar17, arg4, iVar16 * 64 + iVar15 * 128, iVar5 + iVar4 + iVar6 + iVar7 >> 2,
                (SeqType*)(((uint64_t)in_stack_ffffffffffffff74 << 32) | (uint32_t)(iVar3 * 64 + iVar13 * 128)), arg8);
        }
        return result;
    }

} // namespace jag::oldscape
