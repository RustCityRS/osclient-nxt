// libs/game/runetek5/config/enumtype/EnumType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EnumType.h"

namespace jag::game {
    // 0x1004c8de0: EnumType::GetOutputType() const has the same machine code as VarType::GetDataType() const

    // 0x100543db0
    uint8_t* EnumType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t* this_00;
        PacketT<Array<unsigned char> _>* pPVar1;
        EnumType* pEVar2;
        unsigned char uVar3;
        unsigned short uVar4;
        int arg1_00;
        unsigned int uVar5;
        int iVar6;
        uint64_t uVar7;
        VarValue* pVVar8;
        int iVar9;
        VarValue local_c0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_a0;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_88;
        int local_70[8];
        hash_map<VarValue, VarValue>* local_50;

        EnumType* local_38 = this;
        switch (arg2) {
        case 1:
            uVar3 = arg1.g1();
            uVar7 = ScriptVarType::GetByChar(uVar3);
            goto LAB_10054403e;
        case 2:
            uVar3 = arg1.g1();
            uVar7 = ScriptVarType::GetByChar(uVar3);
        LAB_100544058:
            local_38->m_outputType = uVar7;
            break;
        case 3:
            local_70->gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>((uint8_t)arg1);
            field_104.Set<eastl::basic_string<char, BucketAllocatorEASTL>>(*local_70);
            break;
        case 4:
            local_70[0] = arg1.g4s();
            field_72.Set<int>(*local_70);
            break;
        case 5:
        case 6:
            uVar4 = arg1.g2();
            local_38->field_216 = (unsigned int)uVar4;
            if (uVar4 != 0) {
                local_50 = (hash_map<VarValue, VarValue>*)&local_38->field_136;
                iVar9 = 0;
                do {
                    pPVar1 = arg1;
                    iVar6 = arg1.g4s();
                    new (local_70) VarValue();
                    if ((int)(unsigned long)arg2 == 5) {
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(&local_88, (uint8_t)pPVar1);
                        *local_70 = &local_88;
                    } else {
                        arg1_00 = pPVar1->g4s();
                        *local_70 = arg1_00;
                    }
                    local_c0 = VarValue(iVar6);
                    pVVar8 = (VarValue*)(*local_50)[local_c0];
                    *pVVar8 = local_70;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < (int)local_38->field_216);
            }
            break;
        case 7:
        case 8:
            uVar5 = arg1.g2();
            uVar4 = arg1.g2();
            pEVar2 = local_38;
            local_38->field_216 = (unsigned int)uVar4;
            this_00 = &local_38->field_192;
            iVar9 = 0;
            this_00->set_max_size((unsigned long)uVar5 & 65535, 0);
            if (0 < (int)pEVar2->field_216) {
                do {
                    pPVar1 = arg1;
                    uVar4 = arg1.g2();
                    if ((int)(unsigned long)arg2 == 7) {
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(&local_a0, (uint8_t)pPVar1);
                        pVVar8 = (VarValue*)(*this_00)[(unsigned long)uVar4];
                        *pVVar8 = &local_a0;
                    } else {
                        iVar6 = pPVar1->g4s();
                        pVVar8 = (VarValue*)(*this_00)[(unsigned long)uVar4];
                        *pVVar8 = iVar6;
                    }
                    iVar9 = iVar9 + 1;
                } while (iVar9 < (int)local_38->field_216);
            }
            break;
        default:
            if (arg2 != 101) {
                if (arg2 != 102) {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/enumtype/EnumType.cpp",
                              85, "Unrecognised .enum config code: %u in enum %d", arg2, local_38->field_32);
                    return DataStatus::READY;
                }
                uVar4 = arg1.gSmart1or2();
                uVar7 = ScriptVarType::GetByID((unsigned int)uVar4);
                goto LAB_100544058;
            }
            uVar4 = arg1.gSmart1or2();
            uVar7 = ScriptVarType::GetByID((unsigned int)uVar4);
        LAB_10054403e:
            local_38->field_56 = uVar7;
        }
        return DataStatus::READY;
    }

    // 0x1005441d0
    void EnumType::PostDecode() {}

    // 0x1005441e0
    uint8_t* EnumType::GetOutputInner(bool& arg1, int arg2) const {
        int iVar3;
        long lVar4;
        VarValue* this_00;
        uint8_t local_58[2][16];
        uint8_t local_38[16];

        uint8_t* puVar5 = &field_192;
        int local_24 = arg2;
        if (!(puVar5->empty())) {
            if (ArrayValidPosition<Array<VarValue>, int>(
                    (Array<std::array<std::array<HeightOffset, _64ul>, _64ul>>*)puVar5, &local_24)) {
                this_00 = (VarValue*)(*puVar5)[(long)local_24];
                if (!(this_00->IsUndefined())) {
                    arg1 = true;
                    puVar5 = (uint8_t*)(*puVar5)[(long)local_24];
                    return puVar5;
                }
            }
        } else {
            puVar5 = &field_136;
            if (!(puVar5->empty())) {
                new (local_58) VarValue(local_24);
                local_38 = puVar5->find(*local_58);
                local_58[0] = puVar5->end();
                if (*local_38 != *local_58) {
                    arg1 = true;
                    lVar4 = local_38->HeapBeginPtr();
                    return (uint8_t*)(lVar4 + 32);
                }
            }
        }
        arg1 = false;
        if (GetOutputInner(bool&, int)::emptyVarValue == '\0') {
            iVar3 = ___cxa_guard_acquire(&GetOutputInner(bool&, int)::emptyVarValue);
            if (iVar3 != 0) {
                new ((VarValue*)&GetOutputInner(bool&, int)::emptyVarValue) VarValue();
                ___cxa_atexit(PTR__VarValue_100ee6658, &GetOutputInner(bool&, int)::emptyVarValue, 4294967296);
                ___cxa_guard_release(&GetOutputInner(bool&, int)::emptyVarValue);
            }
        }
        return &GetOutputInner(bool&, int)::emptyVarValue;
    }

    // 0x1005443f0
    uint32_t EnumType::GetReverseLookup(eastl::vector<VarValue>*& arg1, const VarValue& varValue) {
        uint8_t* this_00;
        uint32_t uVar2;
        long lVar3;
        ReturnValue local_50;
        ReturnValue local_40;

        arg1 = nullptr;
        if (field_216 == 0) {
            uVar2 = 0;
        } else {
            this_00 = &field_224;
            if (this_00->empty() != '\0') {
                BuildOptionsReverse();
            }
            local_40 = this_00->find(varValue);
            local_50 = this_00->end();
            uVar2 = local_40 != local_50;
            if ((char)uVar2 != '\0') {
                lVar3 = local_40.HeapBeginPtr();
                arg1 = (vector<VarValue>*)(lVar3 + 32);
            }
        }
        return uVar2;
    }

    // 0x100544490
    void EnumType::BuildOptionsReverse() {
        int iVar2;
        long lVar3;
        vector<VarValue>* pvVar4;
        unsigned long arg1;
        VarValue* pVVar5;
        uint8_t* puVar6;
        ReturnValue local_90;
        ReturnValue local_80;
        ReturnValue local_70;
        ReturnValue local_50;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        EnumType* local_38;

        Array<VarValue>* this_01 = (Array<VarValue>*)&field_192;
        bool cVar1 = this_01->empty();
        if (!cVar1) {
            local_38 = this;
            iVar2 = this_01->end();
            if (0 < iVar2) {
                puVar6 = &local_38->field_224;
                arg1 = 0;
                local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01;
                local_38 = (EnumType*)puVar6;
                do {
                    pVVar5 = (VarValue*)(*this_01)[arg1];
                    cVar1 = pVVar5->IsUndefined();
                    if (!cVar1) {
                        pVVar5 = (VarValue*)(*this_01)[arg1];
                        local_50 = puVar6->find(*pVVar5);
                        local_70 = puVar6->end();
                        cVar1 = local_50 == local_70;
                        if (!cVar1) {
                            lVar3 = local_50.HeapBeginPtr();
                            pvVar4 = (vector<VarValue>*)(lVar3 + 32);
                        } else {
                            local_70 = eastl::vector<VarValue>();
                            pvVar4 = (vector<VarValue>*)(*puVar6)[*pVVar5];
                            *pvVar4 = local_70;
                            pvVar4 = (vector<VarValue>*)(*puVar6)[*pVVar5];
                        }
                        local_70 = VarValue((int)arg1);
                        pvVar4->push_back(local_70);
                        this_01 = (Array<VarValue>*)local_40;
                    }
                    arg1 = arg1 + 1;
                    iVar2 = this_01->end();
                } while ((long)arg1 < (long)iVar2);
            }
        } else {
            puVar6 = &field_136;
            cVar1 = puVar6->empty();
            if (!cVar1) {
                local_50 = puVar6->end();
                local_90 = puVar6->begin();
                cVar1 = local_90 != local_50;
                if (cVar1) {
                    puVar6 = &field_224;
                    do {
                        lVar3 = local_90.HeapBeginPtr();
                        pVVar5 = (VarValue*)(lVar3 + 32);
                        local_80 = puVar6->find(*pVVar5);
                        local_70 = puVar6->end();
                        cVar1 = local_80 == local_70;
                        if (!cVar1) {
                            lVar3 = local_80.HeapBeginPtr();
                            pvVar4 = (vector<VarValue>*)(lVar3 + 32);
                        } else {
                            local_70 = eastl::vector<VarValue>();
                            pvVar4 = (vector<VarValue>*)(*puVar6)[*pVVar5];
                            *pvVar4 = local_70;
                            pvVar4 = (vector<VarValue>*)(*puVar6)[*pVVar5];
                        }
                        pVVar5 = (VarValue*)local_90.HeapBeginPtr();
                        pvVar4->push_back(*pVVar5);
                        ++local_90;
                        cVar1 = local_90 != local_50;
                    } while (cVar1);
                }
            } else {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "enumtype/EnumType.cpp",
                          188,
                          "EnumType: Could not find m_OptionsArray or m_OptionsMap when doing buildOptionsReverse");
            }
        }
    }

} // namespace jag::game
