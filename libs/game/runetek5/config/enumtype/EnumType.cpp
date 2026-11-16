// libs/game/runetek5/config/enumtype/EnumType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EnumType.h"

namespace jag::game {
    // 0x1004c8de0: the linker folded this into VarType::GetDataType() const, which has identical code
    EnumType::GetOutputType() const;

    // 0x100543db0, 928 bytes, placed by class name and debug map
    // EnumType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* EnumType::DecodeType(PacketT* param_1, uint param_2) {
        undefined1* this_00;
        PacketT* pPVar1;
        EnumType* pEVar2;
        uchar uVar3;
        ushort uVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        undefined8 uVar8;
        VarValue* pVVar9;
        int iVar10;
        VarValue local_c0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_a0[24];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_88[24];
        int local_70[8];
        hash_map<VarValue, VarValue, eastl::hash<VarValue>, eastl::equal_to<VarValue>, eastl::allocator, false>*
            local_50;
        PacketT* local_48;
        ulong local_40;
        EnumType* local_38;

        local_40 = (ulong)param_2;
        local_48 = param_1;
        local_38 = this;
        switch (param_2) {
        case 1:
            uVar3 = param_1->g1();
            uVar8 = ScriptVarType::GetByChar(uVar3);
            goto LAB_10054403e;
        case 2:
            uVar3 = param_1->g1();
            uVar8 = ScriptVarType::GetByChar(uVar3);
        LAB_100544058:
            local_38->m_outputType = uVar8;
            break;
        case 3:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_70, SUB81(param_1, 0));
            VarValue::Set<eastl::basic_string<char, BucketAllocatorEASTL>>((VarValue*)&field_104,
                                                                           (basic_string*)local_70);
            local_70->~basic_string();
            break;
        case 4:
            local_70[0] = param_1->g4s();
            VarValue::Set<int>((VarValue*)&field_72, local_70);
            break;
        case 5:
        case 6:
            uVar4 = param_1->g2();
            local_38->field_216 = (uint)uVar4;
            if (uVar4 != 0) {
                local_50 = (hash_map<VarValue, VarValue, eastl::hash<VarValue>, eastl::equal_to<VarValue>,
                                     eastl::allocator, false>*)&local_38->field_136;
                iVar10 = 0;
                do {
                    pPVar1 = local_48;
                    iVar7 = local_48->g4s();
                    new (local_70) VarValue();
                    if ((int)local_40 == 5) {
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(local_88, SUB81(pPVar1, 0));
                        VarValue::operator=((VarValue*)local_70, (basic_string<char, BucketAllocatorEASTL>*)local_88);
                        local_88->~basic_string();
                    } else {
                        iVar5 = pPVar1->g4s();
                        VarValue::operator=((VarValue*)local_70, iVar5);
                    }
                    VarValue::VarValue(local_c0, iVar7);
                    pVVar9 =
                        (VarValue*)eastl::hash_map<VarValue, VarValue, eastl::hash<VarValue>, eastl::equal_to<VarValue>,
                                                   eastl::allocator, false>::operator[](local_50, local_c0);
                    VarValue::operator=(pVVar9, (VarValue*)local_70);
                    local_c0->~VarValue();
                    local_70->~VarValue();
                    iVar10 = iVar10 + 1;
                } while (iVar10 < (int)local_38->field_216);
            }
            break;
        case 7:
        case 8:
            uVar6 = param_1->g2();
            uVar4 = param_1->g2();
            pEVar2 = local_38;
            local_38->field_216 = (uint)uVar4;
            this_00 = &local_38->field_192;
            iVar10 = 0;
            this_00->set_max_size((ulong)uVar6 & 65535, 0);
            if (0 < (int)pEVar2->field_216) {
                do {
                    pPVar1 = local_48;
                    uVar4 = local_48->g2();
                    if ((int)local_40 == 7) {
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::basic_string<char, BucketAllocatorEASTL>>(local_a0, SUB81(pPVar1, 0));
                        pVVar9 = (VarValue*)Array<VarValue, eastl::allocator>::operator[](
                            (Array<VarValue, eastl::allocator>*)this_00, (ulong)uVar4);
                        VarValue::operator=(pVVar9, local_a0);
                        local_a0->~basic_string();
                    } else {
                        iVar7 = pPVar1->g4s();
                        pVVar9 = (VarValue*)Array<VarValue, eastl::allocator>::operator[](
                            (Array<VarValue, eastl::allocator>*)this_00, (ulong)uVar4);
                        VarValue::operator=(pVVar9, iVar7);
                    }
                    iVar10 = iVar10 + 1;
                } while (iVar10 < (int)local_38->field_216);
            }
            break;
        default:
            if (param_2 != 101) {
                if (param_2 != 102) {
                    uVar8 = logger::default_logger();
                    logger::Logger::Log(uVar8, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/enumtype/EnumType.cpp",
                                        85, "Unrecognised .enum config code: %u in enum %d", param_2,
                                        local_38->field_32);
                    return DataStatus::READY;
                }
                uVar4 = param_1->gSmart1or2();
                uVar8 = ScriptVarType::GetByID((uint)uVar4);
                goto LAB_100544058;
            }
            uVar4 = param_1->gSmart1or2();
            uVar8 = ScriptVarType::GetByID((uint)uVar4);
        LAB_10054403e:
            local_38->field_56 = uVar8;
        }
        return DataStatus::READY;
    }

    // 0x1005441d0, 16 bytes, placed by class name and debug map
    // EnumType::PostDecode()
    void EnumType::PostDecode() {}

    // 0x1005441e0, 384 bytes, placed by class name and debug map
    // EnumType::GetOutputInner(bool&, int) const
    undefined1* EnumType::GetOutputInner(bool* param_1, int param_2) {
        char cVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        VarValue* this_00;
        undefined1* puVar5;
        undefined1 local_58[2][16];
        undefined1 local_38[16];
        int local_24;

        puVar5 = &field_192;
        local_24 = param_2;
        cVar1 = puVar5->empty();
        if (cVar1 == '\0') {
            bVar2 = ArrayValidPosition<Array<VarValue, eastl::allocator>, int>((Array*)puVar5, &local_24);
            if (bVar2) {
                this_00 = (VarValue*)Array<VarValue, eastl::allocator>::operator[](
                    (Array<VarValue, eastl::allocator>*)puVar5, (long)local_24);
                cVar1 = this_00->IsUndefined();
                if (cVar1 == '\0') {
                    *param_1 = true;
                    puVar5 = (undefined1*)Array<VarValue, eastl::allocator>::operator[](
                        (Array<VarValue, eastl::allocator>*)puVar5, (long)local_24);
                    return puVar5;
                }
            }
        } else {
            puVar5 = &field_136;
            cVar1 = puVar5->empty();
            if (cVar1 == '\0') {
                new (local_58) VarValue(local_24);
                local_38 = puVar5->find(local_58);
                local_58->~VarValue();
                local_58[0] = puVar5->end();
                bVar2 = eastl::operator!=((eastl*)local_38, (hashtable_iterator_base*)local_58, local_58[0]._8_8_);
                if (bVar2) {
                    *param_1 = true;
                    lVar4 = local_38->HeapBeginPtr();
                    return (undefined1*)(lVar4 + 32);
                }
            }
        }
        *param_1 = false;
        if (GetOutputInner(bool&, int)::emptyVarValue == '\0') {
            iVar3 = ___cxa_guard_acquire(&GetOutputInner(bool&, int)::emptyVarValue);
            if (iVar3 != 0) {
                new (&GetOutputInner(bool&, int)::emptyVarValue) VarValue();
                ___cxa_atexit(PTR__VarValue_100ee6658, &GetOutputInner(bool&, int)::emptyVarValue, 4294967296);
                ___cxa_guard_release(&GetOutputInner(bool&, int)::emptyVarValue);
            }
        }
        return &GetOutputInner(bool&, int)::emptyVarValue;
    }

    // 0x1005443f0, 160 bytes, placed by class name and debug map
    // EnumType::GetReverseLookup(eastl::vector<VarValue, eastl::allocator>*&, VarValue const&)
    ulong EnumType::GetReverseLookup(vector** param_1, VarValue* param_2) {
        char cVar1;
        bool bVar2;
        undefined7 extraout_var;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar4;
        hashtable_iterator_base local_50[16];
        VarValue local_40[16];

        *(undefined8*)param_2 = 0;
        if (*(int*)(param_1 + 27) == 0) {
            uVar4 = 0;
        } else {
            cVar1 = ((param_1 + 28))->empty();
            if (cVar1 != '\0') {
                BuildOptionsReverse((EnumType*)param_1);
            }
            eastl::hashtable<VarValue, eastl::pair<VarValue_const, eastl::vector<VarValue, eastl::allocator>>,
                             eastl::allocator,
                             eastl::use_first<eastl::pair<VarValue_const, eastl::vector<VarValue, eastl::allocator>>>,
                             eastl::equal_to<VarValue>, eastl::hash<VarValue>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_40);
            eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                             eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                             eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
            bVar2 = eastl::operator!=((eastl*)local_40, local_50, extraout_RDX);
            uVar4 = CONCAT71(extraout_var, bVar2) & 4294967295;
            if (bVar2) {
                lVar3 = local_40->HeapBeginPtr();
                *(long*)param_2 = lVar3 + 32;
            }
        }
        return uVar4;
    }

    // 0x100544490, 704 bytes, placed by class name and debug map
    // EnumType::BuildOptionsReverse()
    void EnumType::BuildOptionsReverse() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        undefined8 uVar4;
        VarValue* pVVar5;
        long lVar6;
        vector<VarValue, eastl::allocator>* pvVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* extraout_RDX_01;
        hashtable_iterator_base* extraout_RDX_02;
        ulong uVar8;
        Array<VarValue, eastl::allocator>* this_01;
        eastl local_90[16];
        Layout local_80[16];
        hashtable_iterator_base local_70[32];
        VarValue local_50[16];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        EnumType* local_38;

        this_01 = (Array<VarValue, eastl::allocator>*)&field_192;
        cVar1 = this_01->empty();
        if (cVar1 == '\0') {
            local_38 = this;
            iVar3 = this_01->end();
            if (0 < iVar3) {
                this_00 = &local_38->field_224;
                uVar8 = 0;
                local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01;
                local_38 = (EnumType*)this_00;
                do {
                    pVVar5 = (VarValue*)Array<VarValue, eastl::allocator>::operator[](this_01, uVar8);
                    cVar1 = pVVar5->IsUndefined();
                    if (cVar1 == '\0') {
                        pVVar5 = (VarValue*)Array<VarValue, eastl::allocator>::operator[](this_01, uVar8);
                        eastl::hashtable<
                            VarValue, eastl::pair<VarValue_const, eastl::vector<VarValue, eastl::allocator>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<VarValue_const, eastl::vector<VarValue, eastl::allocator>>>,
                            eastl::equal_to<VarValue>, eastl::hash<VarValue>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_50);
                        eastl::hashtable<
                            int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                            eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                        bVar2 = eastl::operator==((eastl*)local_50, local_70, extraout_RDX);
                        if (bVar2) {
                            new (local_70) eastl::vector<VarValue, eastl::allocator>();
                            pvVar7 = (vector<VarValue, eastl::allocator>*)eastl::hash_map<
                                VarValue, eastl::vector<VarValue, eastl::allocator>, eastl::hash<VarValue>,
                                eastl::equal_to<VarValue>, eastl::allocator,
                                false>::operator[]((hash_map<VarValue, eastl::vector<VarValue, eastl::allocator>,
                                                             eastl::hash<VarValue>, eastl::equal_to<VarValue>,
                                                             eastl::allocator, false>*)this_00,
                                                   pVVar5);
                            eastl::vector<VarValue, eastl::allocator>::operator=(pvVar7, (vector*)local_70);
                            local_70->~vector();
                            pvVar7 = (vector<VarValue, eastl::allocator>*)eastl::hash_map<
                                VarValue, eastl::vector<VarValue, eastl::allocator>, eastl::hash<VarValue>,
                                eastl::equal_to<VarValue>, eastl::allocator,
                                false>::operator[]((hash_map<VarValue, eastl::vector<VarValue, eastl::allocator>,
                                                             eastl::hash<VarValue>, eastl::equal_to<VarValue>,
                                                             eastl::allocator, false>*)this_00,
                                                   pVVar5);
                        } else {
                            lVar6 = local_50->HeapBeginPtr();
                            pvVar7 = (vector<VarValue, eastl::allocator>*)(lVar6 + 32);
                        }
                        new (local_70) VarValue((int)uVar8);
                        eastl::vector<VarValue, eastl::allocator>::push_back(pvVar7, (VarValue*)local_70);
                        local_70->~VarValue();
                        this_01 = (Array<VarValue, eastl::allocator>*)local_40;
                    }
                    uVar8 = uVar8 + 1;
                    iVar3 = this_01->end();
                } while ((long)uVar8 < (long)iVar3);
            }
        } else {
            cVar1 = (&field_136)->empty();
            if (cVar1 == '\0') {
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                                 eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
                bVar2 = eastl::operator!=(local_90, (hashtable_iterator_base*)local_50, extraout_RDX_00);
                if (bVar2) {
                    do {
                        lVar6 = local_90->HeapBeginPtr();
                        eastl::hashtable<
                            VarValue, eastl::pair<VarValue_const, eastl::vector<VarValue, eastl::allocator>>,
                            eastl::allocator,
                            eastl::use_first<eastl::pair<VarValue_const, eastl::vector<VarValue, eastl::allocator>>>,
                            eastl::equal_to<VarValue>, eastl::hash<VarValue>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((VarValue*)local_80);
                        eastl::hashtable<
                            int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                            eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                        bVar2 = eastl::operator==((eastl*)local_80, local_70, extraout_RDX_02);
                        if (bVar2) {
                            new (local_70) eastl::vector<VarValue, eastl::allocator>();
                            pvVar7 = (vector<VarValue, eastl::allocator>*)eastl::hash_map<
                                VarValue, eastl::vector<VarValue, eastl::allocator>, eastl::hash<VarValue>,
                                eastl::equal_to<VarValue>, eastl::allocator,
                                false>::operator[]((hash_map<VarValue, eastl::vector<VarValue, eastl::allocator>,
                                                             eastl::hash<VarValue>, eastl::equal_to<VarValue>,
                                                             eastl::allocator, false>*)&field_224,
                                                   (VarValue*)(lVar6 + 32));
                            eastl::vector<VarValue, eastl::allocator>::operator=(pvVar7, (vector*)local_70);
                            local_70->~vector();
                            pvVar7 = (vector<VarValue, eastl::allocator>*)eastl::hash_map<
                                VarValue, eastl::vector<VarValue, eastl::allocator>, eastl::hash<VarValue>,
                                eastl::equal_to<VarValue>, eastl::allocator,
                                false>::operator[]((hash_map<VarValue, eastl::vector<VarValue, eastl::allocator>,
                                                             eastl::hash<VarValue>, eastl::equal_to<VarValue>,
                                                             eastl::allocator, false>*)&field_224,
                                                   (VarValue*)(lVar6 + 32));
                        } else {
                            lVar6 = eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(local_80);
                            pvVar7 = (vector<VarValue, eastl::allocator>*)(lVar6 + 32);
                        }
                        pVVar5 = (VarValue*)local_90->HeapBeginPtr();
                        eastl::vector<VarValue, eastl::allocator>::push_back(pvVar7, pVVar5);
                        eastl::hashtable_iterator<
                            eastl::pair<unsigned long long const,
                                        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
                            false, false>::
                        operator++((hashtable_iterator<
                                    eastl::pair<unsigned long long const,
                                                LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
                                    false, false>*)local_90);
                        bVar2 = eastl::operator!=(local_90, (hashtable_iterator_base*)local_50, extraout_RDX_01);
                    } while (bVar2);
                }
            } else {
                uVar4 = logger::default_logger();
                logger::Logger::Log(
                    uVar4, 0, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                    "enumtype/EnumType.cpp",
                    188, "EnumType: Could not find m_OptionsArray or m_OptionsMap when doing buildOptionsReverse");
            }
        }
    }

} // namespace jag::game
