// libs/oldscape/rs2lib/configdecoder/SeqType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "SeqType.h"

namespace jag::oldscape::configdecoder {
    // 0x10166f228
    int64_t SeqType::m_pConfigClient;

    // 0x10166f230
    int64_t SeqType::m_pAnims;

    // 0x10166f238
    int64_t SeqType::m_pBases;

    // 0x10166f240
    LRUHashCache<SeqType, 64ul, 65ul, false, unsigned long long> SeqType::m_recentUse;

    // 0x101670740
    LRUHashCache<dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long> SeqType::m_framesetCache;

    // 0x101672780
    LRUHashCache<graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>
        SeqType::m_keyFrameSetCache;

    // 0x10022b5d0
    auto SeqType::AnimateModel90(dash3d::ModelLit& modelLit, int arg2, int arg3, int arg4) const {
        auto result;
        unsigned int uVar1;
        uint8_t bVar4;
        unsigned int* puVar5;
        ReturnValue local_58;
        uint8_t local_40[16];

        int local_44 = arg3;
        if (IsKeyFramed() == '\0') {
            puVar5 = &field_72[(long)arg2];
            uVar1 = *puVar5;
            Get(&local_58, (int)uVar1 >> 16);
            if (local_58 == nullptr) {
                (modelLit._vptr[5]._dtor)(&result, modelLit, 1, (unsigned long)(unsigned int)arg4);
            }
            bVar4 = ((AnimFrameSet*)local_58.operator->())->GetAnimateTransparencies(uVar1 & 65535);
            (modelLit._vptr[5]._dtor)(local_40, modelLit, (unsigned long)(bVar4 ^ 1),
                                      (unsigned long)(unsigned int)arg4);
        }
        GetKeyFrameSet(&local_58, field_0);
        if (local_58 == nullptr) {
            (modelLit._vptr[5]._dtor)(&result, modelLit, 1, (unsigned long)(unsigned int)arg4);
        }
        bVar4 = ((OldscapeAnimKeyFrameSet*)local_58.operator->())->GetTransAnim();
        (modelLit._vptr[5]._dtor)(local_40, modelLit, (unsigned long)(bVar4 ^ 1), (unsigned long)(unsigned int)arg4);
    }

    // 0x10022b9d0
    bool IsWallShape(int arg1) {
        return arg1 == 9 || arg1 < 4;
    }

    // 0x10022f120
    void SeqType::SplitAnimateModel(dash3d::ModelLit& modelLit, int arg2, SeqType& seqType, int arg4) {
        uint32_t in_register_00000014;
        uint8_t local_60[16];

        SeqType* local_50 = this;
        (**(void (**)(...))(*(long*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2) + 80))(
            local_60, (long*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2), 0, 1);
    }

    // 0x10022f650
    auto SeqType::AnimateModel(dash3d::ModelLit& modelLit, int arg2, int arg3) const {
        auto result;
        unsigned int uVar1;
        uint8_t bVar4;
        unsigned int* puVar5;
        ReturnValue local_50;
        uint8_t local_40[16];

        if (IsKeyFramed() == '\0') {
            puVar5 = &field_72[(long)arg2];
            uVar1 = *puVar5;
            Get(&local_50, (int)uVar1 >> 16);
            if (local_50 == nullptr) {
                (modelLit._vptr[5]._dtor)(&result, modelLit, 1, (unsigned long)(unsigned int)arg3);
            }
            bVar4 = ((AnimFrameSet*)local_50.operator->())->GetAnimateTransparencies(uVar1 & 65535);
            (modelLit._vptr[5]._dtor)(local_40, modelLit, (unsigned long)(bVar4 ^ 1),
                                      (unsigned long)(unsigned int)arg3);
        }
        GetKeyFrameSet(&local_50, field_0);
        if (local_50 == nullptr) {
            (modelLit._vptr[5]._dtor)(&result, modelLit, 1, (unsigned long)(unsigned int)arg3);
        }
        bVar4 = ((OldscapeAnimKeyFrameSet*)local_50.operator->())->GetTransAnim();
        (modelLit._vptr[5]._dtor)(local_40, modelLit, (unsigned long)(bVar4 ^ 1), (unsigned long)(unsigned int)arg3);
    }

    // 0x100234870
    void SeqType::Init(jagex3::Js5* js51, jagex3::Js5* js52, jagex3::Js5* js53) {
        m_pConfigClient = js51;
        m_pAnims = js52;
        m_pBases = js53;
    }

    // 0x100234890
    auto SeqType::List(int arg1) {
        SeqType* pSVar2;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 12, arg1, nullptr);
            make_shared<SeqType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                pSVar2 = (SeqType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(pSVar2, packetJ);
            }
            pSVar2 = (SeqType*)(result).operator->();
            PostDecode(pSVar2);
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100234af0
    void SeqType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100234b30
    void SeqType::PostDecode() {
        bool cVar1;
        uint8_t bVar2;
        unsigned int uVar3;

        if (field_248 == 4294967295) {
            cVar1 = field_176.empty();
            uVar3 = 2;
            if (cVar1) {
                bVar2 = field_200.empty();
                uVar3 = (unsigned int)(bVar2 ^ 1) * 2;
            }
            field_248 = uVar3;
            uVar3 = field_252;
        } else {
            uVar3 = field_252;
        }
        if (uVar3 == 4294967295) {
            cVar1 = field_176.empty();
            uVar3 = 2;
            if (cVar1) {
                bVar2 = field_200.empty();
                uVar3 = (unsigned int)(bVar2 ^ 1) * 2;
            }
            field_252 = uVar3;
        }
    }

    // 0x100234cb0
    void SeqType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        int iVar3;
        int iVar4;
        uint32_t uVar5;
        uint8_t* puVar7;
        unsigned long uVar8;
        unsigned int* puVar9;
        int* piVar10;
        uint32_t* puVar11;
        unsigned int uVar12;
        unsigned long uVar13;
        uint8_t* puVar14;
        unsigned int local_78[14];
        Array<int>* local_38;

        switch (arg2) {
        case 1:
            uVar2 = packetJ.g2();
            local_38 = (Array<int>*)&field_120;
            uVar13 = (unsigned long)uVar2;
            local_38->set_max_size(uVar13, 5);
            if (uVar2 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = packetJ.g2();
                    puVar9 = (unsigned int*)(*local_38)[uVar8];
                    *puVar9 = (unsigned int)uVar2;
                    uVar8 = uVar8 + 1;
                } while (uVar13 != uVar8);
            }
            puVar14 = &field_72;
            puVar14->set_max_size(uVar13, 5);
            if (uVar13 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = packetJ.g2();
                    puVar9 = (unsigned int*)(*puVar14)[uVar8];
                    *puVar9 = (unsigned int)uVar2;
                    uVar8 = uVar8 + 1;
                } while (uVar13 != uVar8);
                uVar8 = 0;
                do {
                    iVar3 = packetJ.g2();
                    piVar10 = (int*)(*puVar14)[uVar8];
                    iVar4 = *piVar10;
                    piVar10 = (int*)(*puVar14)[uVar8];
                    *piVar10 = iVar3 * 65536 + iVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar13 != uVar8);
            }
            break;
        case 2:
            uVar2 = packetJ.g2();
            field_168 = (unsigned int)uVar2;
            break;
        case 3:
            bVar1 = packetJ.g1();
            uVar13 = (unsigned long)bVar1;
            puVar14 = &field_176;
            puVar14->set_max_size(uVar13 + 1, 5);
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    bVar1 = packetJ.g1();
                    puVar9 = (unsigned int*)(*puVar14)[uVar8];
                    *puVar9 = (unsigned int)bVar1;
                    uVar8 = uVar8 + 1;
                } while (uVar13 != uVar8);
            }
            puVar11 = (uint32_t*)(*puVar14)[uVar13];
            *puVar11 = 9999999;
            break;
        case 4:
            field_224 = 1;
            break;
        case 5:
            bVar1 = packetJ.g1();
            field_228 = (unsigned int)bVar1;
            break;
        case 6:
            uVar2 = packetJ.g2();
            field_232 = (unsigned int)uVar2;
            break;
        case 7:
            uVar2 = packetJ.g2();
            field_236 = (unsigned int)uVar2;
            break;
        case 8:
            bVar1 = packetJ.g1();
            field_240 = (unsigned int)bVar1;
            field_244 = 1;
            break;
        case 9:
            bVar1 = packetJ.g1();
            field_248 = (unsigned int)bVar1;
            break;
        case 10:
            bVar1 = packetJ.g1();
            field_252 = (unsigned int)bVar1;
            break;
        case 11:
            bVar1 = packetJ.g1();
            field_256 = (unsigned int)bVar1;
            break;
        case 12:
            bVar1 = packetJ.g1();
            puVar14 = &field_96;
            uVar13 = (unsigned long)bVar1;
            puVar14->set_max_size(uVar13, 5);
            if (bVar1 != 0) {
                uVar8 = 0;
                do {
                    uVar2 = packetJ.g2();
                    puVar9 = (unsigned int*)(*puVar14)[uVar8];
                    *puVar9 = (unsigned int)uVar2;
                    uVar8 = uVar8 + 1;
                } while (uVar13 != uVar8);
                uVar8 = 0;
                do {
                    iVar3 = packetJ.g2();
                    piVar10 = (int*)(*puVar14)[uVar8];
                    iVar4 = *piVar10;
                    piVar10 = (int*)(*puVar14)[uVar8];
                    *piVar10 = iVar3 * 65536 + iVar4;
                    uVar8 = uVar8 + 1;
                } while (uVar13 != uVar8);
            }
            break;
        case 13:
            bVar1 = packetJ.g1();
            field_144.set_max_size((unsigned long)bVar1, 5);
            if (bVar1 != 0) {
                uVar13 = 0;
                do {
                    uVar5 = packetJ.g3();
                    puVar11 = &field_144[uVar13];
                    *puVar11 = uVar5;
                    uVar13 = uVar13 + 1;
                } while (bVar1 != uVar13);
            }
            break;
        case 14:
            iVar4 = packetJ.g4();
            field_0 = iVar4;
            break;
        case 15:
            uVar12 = packetJ.g2();
            new (local_78) eastl::hash_map(local_40);
            field_8 = *local_78;
            uVar12 = uVar12 & 65535;
            if (uVar12 != 0) {
                do {
                    uVar2 = packetJ.g2();
                    local_78[0] = (unsigned int)uVar2;
                    uVar5 = packetJ.g3();
                    puVar11 = &field_8[*local_78];
                    *puVar11 = uVar5;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            break;
        case 16:
            uVar2 = packetJ.g2();
            m_start = (unsigned int)uVar2;
            uVar2 = packetJ.g2();
            m_end = (unsigned int)uVar2;
            break;
        case 17:
            puVar14 = &field_200;
            puVar14->set_max_size(256, 5);
            if (puVar14->end() != 0) {
                uVar13 = 0;
                do {
                    puVar7 = (uint8_t*)(*puVar14)[uVar13];
                    *puVar7 = 0;
                    uVar13 = uVar13 + 1;
                    uVar8 = puVar14->end();
                } while (uVar13 < uVar8);
            }
            bVar1 = packetJ.g1();
            if (bVar1 != 0) {
                uVar12 = (unsigned int)bVar1;
                do {
                    bVar1 = packetJ.g1();
                    puVar7 = (uint8_t*)(*puVar14)[(unsigned long)bVar1];
                    *puVar7 = 1;
                    uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
            }
            break;
        default:
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/SeqType.cpp",
                      209, "Error unrecognised .seq config code: %i", arg2);
        }
    }

    // 0x1002351f0
    bool SeqType::IsKeyFramed() const {
        return -1 < field_0;
    }

    // 0x100235200
    auto SeqType::Get(int arg1) {
        unsigned long long local_30[2];

        local_30[0] = (long)arg1;
        auto groundDecor = m_framesetCache.Find(*local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30->Load(*m_pAnims, *m_pBases, arg1, false);
            result = *local_30;
            if (result != nullptr) {
                local_30[0] = (long)arg1;
                m_framesetCache.Put(result, 1, *local_30);
            }
        }
        return result;
    }

    // 0x1002353e0
    auto SeqType::GetKeyFrameSet() const {
        if (IsKeyFramed() == '\0') {
            auto result;
        } else {
            GetKeyFrameSet(&result, field_0);
        }
        return result;
    }

    // 0x1002354b0
    SeqType* SeqType::SplitAnimateModelNoKeyFrameSet(dash3d::ModelLit& modelLit, int arg2, SeqType& seqType, int arg4) {
        uint8_t bVar3;
        AnimFrameSet* pAVar6;
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        int in_R9D;
        uint8_t local_70[16];
        ReturnValue local_60;
        ReturnValue local_50;

        ModelLit* local_40 = (ModelLit*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned int* puVar5 = (unsigned int*)(*((Array<int>*)((long)&modelLit[4]._vptr + 4)))[(long)(int)seqType];
        unsigned int uVar7 = *puVar5;
        Get(&local_50, (int)uVar7 >> 16);
        bool bVar2 = local_50 == nullptr;
        if (bVar2) {
            *this = ((SeqType*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4))
                        ->AnimateModel(*local_40, in_R9D, 1);
            return this;
        }
        puVar5 = (unsigned int*)(*((Array<int>*)&((SeqType*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4))
                                       ->field_72))[(long)in_R9D];
        unsigned int uVar1 = *puVar5;
        Get(&local_60, (int)uVar1 >> 16);
        bVar2 = local_60 == nullptr;
        uVar7 = uVar7 & 65535;
        if (bVar2) {
            pAVar6 = (AnimFrameSet*)local_50.operator->();
            bVar3 = pAVar6->GetAnimateTransparencies(uVar7);
            (*local_40->_vptr[5]._dtor)(this, local_40, (unsigned long)(bVar3 ^ 1), 1);
        }
        pAVar6 = (AnimFrameSet*)local_50.operator->();
        bVar3 = pAVar6->GetAnimateTransparencies(uVar7);
        pAVar6 = (AnimFrameSet*)local_60.operator->();
        uint8_t bVar4 = pAVar6->GetAnimateTransparencies(uVar1 & 65535);
        (*local_40->_vptr[5]._dtor)(local_70, local_40, (unsigned long)(uint8_t)((bVar3 | bVar4) ^ 1), 1);
    }

    // 0x1002356a0
    unsigned long SeqType::Compare(Array<int> arg1, Array<int> arg2, int arg3, int arg4) {
        int iVar1;
        int* piVar3;
        int iVar4;
        unsigned long uVar5;
        bool bVar6;
        uint64_t unaff_R13;

        bool cVar2 = arg1->empty();
        if (cVar2) {
            cVar2 = arg2->empty();
            uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R13 >> 8)) << 8) | (uint8_t)1);
            if (cVar2)
                goto LAB_1002357b4;
        }
        cVar2 = arg1->empty();
        if (!cVar2) {
            cVar2 = arg2->empty();
            uVar5 = 0;
            if ((!cVar2) && (arg3 == arg4)) {
                bVar6 = 0 < arg3;
                if (0 < arg3) {
                    iVar4 = 0;
                    piVar3 = (int*)(*arg1)[0];
                    iVar1 = *piVar3;
                    piVar3 = (int*)(*arg2)[0];
                    bVar6 = true;
                    if (iVar1 == *piVar3) {
                        uVar5 = 1;
                        do {
                            bVar6 = (long)uVar5 < (long)arg3;
                            if ((unsigned int)arg3 == uVar5)
                                goto LAB_1002357b0;
                            piVar3 = (int*)(*arg1)[uVar5];
                            iVar1 = *piVar3;
                            piVar3 = (int*)(*arg2)[uVar5];
                            uVar5 = uVar5 + 1;
                        } while (iVar1 == *piVar3);
                        iVar4 = (int)uVar5 - 1;
                    }
                    (logger::default_logger())
                        ->Log(false, 3,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                              "configdecoder/SeqType.cpp",
                              535, "FAILED AT %i", iVar4);
                }
            LAB_1002357b0:
                uVar5 = (unsigned long)bVar6 ^ 1;
            }
        } else {
            uVar5 = 0;
        }
    LAB_1002357b4:
        return uVar5 & 4294967295;
    }

    // 0x1002357d0
    auto SeqType::AnimateModelWithExtra(dash3d::ModelLit& modelLit, int arg2) const {
        auto result;
        uint8_t bVar3;
        int iVar5;
        AnimFrameSet* pAVar8;
        ReturnValue local_68;
        ReturnValue local_40;

        if (IsKeyFramed() != '\0') {
            AnimateModel(&result, this, modelLit, arg2, 1);
            return result;
        }
        unsigned int* puVar6 = &field_72[(long)arg2];
        unsigned int local_44 = *puVar6;
        Get(&local_68, (int)local_44 >> 16);
        bool bVar2 = local_68 == nullptr;
        if (bVar2) {
            (modelLit._vptr[5]._dtor)(&result, modelLit, 1, 1);
        }
        unsigned int uVar9 = 0;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        uint8_t* this_00 = &field_96;
        if (this_00->end() != 0) {
            iVar5 = this_00->end();
            if (arg2 < iVar5) {
                puVar6 = (unsigned int*)(*this_00)[(long)arg2];
                uVar9 = *puVar6;
                Get(&local_40, (int)uVar9 >> 16);
                local_58 = local_40;
                uVar9 = uVar9 & 65535;
            }
        }
        bVar2 = local_58 == nullptr;
        unsigned int arg1 = local_44 & 65535;
        if (bVar2 || uVar9 == 65535) {
            pAVar8 = (AnimFrameSet*)local_68.operator->();
            bVar3 = pAVar8->GetAnimateTransparencies(arg1);
            (modelLit._vptr[5]._dtor)(&result, modelLit, (unsigned long)(bVar3 ^ 1), 1);
        }
        pAVar8 = (AnimFrameSet*)local_68.operator->();
        bVar3 = pAVar8->GetAnimateTransparencies(arg1);
        pAVar8 = (AnimFrameSet*)local_58.operator->();
        uint8_t bVar4 = pAVar8->GetAnimateTransparencies(uVar9);
        (modelLit._vptr[5]._dtor)(&local_40, modelLit, (unsigned long)(uint8_t)((bVar3 | bVar4) ^ 1), 1);
    }

    // 0x100235a40
    unsigned int SeqType::GetEnd() const {
        return m_end;
    }

    // 0x100235a50
    unsigned int SeqType::GetStart() const {
        return m_start;
    }

    // 0x100235a60
    int SeqType::GetDuration() const {
        return m_end - m_start;
    }

    // 0x100235c00
    uint8_t* SeqType::GetKeyFrameSetStatus() const {
        uint8_t* puVar2;

        if (IsKeyFramed() == '\0') {
            puVar2 = DataStatus::MISSING;
        } else {
            puVar2 = (uint8_t*)GetKeyFrameSetStatus(field_0);
        }
        return puVar2;
    }

    // 0x100235c30
    void SeqType::GetKeyFrameSetStatus(int arg1) {
        OldscapeAnimKeyFrameSet* oldscapeAnimKeyFrameSet;
        uint8_t* puVar2;
        ReturnValue local_28;

        local_28[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_keyFrameSetCache.Find(local_28);
        shared_ptr<dash3d::Decor> local_38(groundDecor);
        if (local_38 == nullptr) {
            GetKeyFrameSetInner(&local_28, arg1);
            local_38 = local_28;
        }
        if (local_38 == nullptr) {
            puVar2 = DataStatus::MISSING;
        } else {
            oldscapeAnimKeyFrameSet = (OldscapeAnimKeyFrameSet*)local_38.operator->();
            puVar2 = (uint8_t*)oldscapeAnimKeyFrameSet->GetStatus();
        }
        return puVar2;
    }

    // 0x100235da0
    auto SeqType::GetKeyFrameSetInner(int arg1) {
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_keyFrameSetCache.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = graphics::animation::OldscapeAnimKeyFrameSet::Load(*m_pAnims, *m_pBases, arg1, false);
            result = local_30;
            if (result != nullptr) {
                local_30[0] = (ReturnValue)(long)arg1;
                m_keyFrameSetCache.Put(result, 1, local_30);
            }
        }
        return result;
    }

    // 0x100235fb0
    void SeqType::ResetCache() {
        m_recentUse.Reset();
        m_framesetCache.Reset();
        m_keyFrameSetCache.Reset();
    }

    // 0x100236020
    bool SeqType::IsInitComplete() {
        bool bVar1 = false;
        if ((m_pConfigClient != 0) && (m_pAnims != 0)) {
            bVar1 = m_pBases != 0;
        }
        return bVar1;
    }

    // 0x100236050
    void SeqType::GetNumFrames() {
        field_72.end();
    }

} // namespace jag::oldscape::configdecoder
