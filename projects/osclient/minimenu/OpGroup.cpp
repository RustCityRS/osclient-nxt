// projects/osclient/minimenu/OpGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OpGroup.h"

namespace jag::oldscape {
    // 0x100f8a730, 32 bytes, __common; set at startup by ___cxx_global_var_init.349
    eastl::vector<char, eastl::allocator> OpGroup::m_reservedChars;

    // 0x1000743f0, 144 bytes, placed by class name and debug map
    // OpGroup::IsBlank() const
    ulong OpGroup::IsBlank() {
        char cVar1;
        long lVar2;
        long lVar3;
        undefined1* this_00;
        ulong uVar4;

        if ((field_0 == 0) &&
            (cVar1 = eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty(),
             cVar1 != '\0')) {
            this_00 = &field_40;
            lVar2 = this_00->begin();
            lVar3 = this_00->end();
            uVar4 = CONCAT71((int7)((ulong)this_00 >> 8), lVar2 == lVar3);
            if (lVar2 != lVar3) {
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                while (cVar1 != '\0') {
                    lVar2 = lVar2 + 32;
                    uVar4 = CONCAT71((int7)(uVar4 >> 8), lVar2 == lVar3);
                    if (lVar2 == lVar3)
                        break;
                    cVar1 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                }
            }
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

    // 0x1000747c0, 96 bytes, placed by class name and debug map
    // OpGroup::MatchPattern(OpGroup const&, bool)
    undefined8 OpGroup::MatchPattern(OpGroup* param_1, bool param_2) {
        bool bVar1;
        undefined8 uVar2;

        if (((param_1->field_0 == 0) || (field_0 == param_1->field_0)) &&
            (bVar1 =
                 core::stringtools::general::StringTools::MatchPattern<eastl::basic_string<char, BucketAllocatorEASTL>>(
                     (basic_string*)&param_1->field_8, (basic_string*)&field_8),
             bVar1)) {
            if (param_2) {
                uVar2 = MatchOpsExact(param_1, this);
                return uVar2;
            }
            uVar2 = MatchOps(param_1, this);
            return uVar2;
        }
        return 0;
    }

    // 0x100074820, 224 bytes, placed by class name and debug map
    // OpGroup::MakeCommon(minimenu::MinimenuSubjType, eastl::string const&, eastl::fixed_vector<eastl::string, 5ul, true, eastl::allocator> const&)
    OpGroup*
    OpGroup::MakeCommon(undefined4 param_2, basic_string* param_3,
                        vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* param_4) {
        basic_string* pbVar2;
        eastl::string* this_00;
        ulong uVar3;
        ulong uVar4;

        OpGroup(this);
        field_0 = param_2;
        eastl::string::operator=((eastl::string*)&field_8, param_3);
        core::stringtools::general::StringTools::ReplaceCharsWithSubstitute((basic_string*)&field_8,
                                                                            (vector*)&m_reservedChars, '_');
        if (eastl::vector<Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(param_4) !=
            0) {
            uVar4 = 0;
            do {
                pbVar2 = (basic_string*)eastl::vector<
                    eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::string, eastl::fixed_vector_allocator<32ul, 5ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_4,
                    uVar4);
                this_00 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](
                    (array<eastl::string, 10ul>*)&field_40, uVar4);
                eastl::string::operator=(this_00, pbVar2);
                core::stringtools::general::StringTools::ReplaceCharsWithSubstitute((basic_string*)this_00,
                                                                                    (vector*)&m_reservedChars, '_');
                uVar4 = uVar4 + 1;
                uVar3 = eastl::vector<
                    Nullable<Array<shared_ptr<rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(param_4);
            } while (uVar4 < uVar3);
        }
        return this;
    }

    // 0x100074920, 64 bytes, placed by class name
    // OpGroup::Create(configdecoder::LocType const&)
    OpGroup* OpGroup::Create(LocType* param_1) {
        long lVar1;

        lVar1 = param_1->GetMultiLocOrThis();
        MakeCommon(this, 3, lVar1 + 56, lVar1 + 232);
        return this;
    }

    // 0x100074960, 112 bytes, placed by class name
    // OpGroup::Create(configdecoder::NpcType const&)
    OpGroup* OpGroup::Create(NpcType* param_1) {
        NpcType* pNVar1;
        eastl::string local_38[32];

        pNVar1 = (NpcType*)param_1->GetMultiNpcOrThis();
        local_38->GetNpcOpBase(pNVar1, -1);
        MakeCommon(this, 2, &pNVar1->field_8, &pNVar1->field_256);
        eastl::string::~basic_string(local_38);
        return this;
    }

    // 0x1000749d0, 48 bytes, placed by class name
    // OpGroup::Create(configdecoder::ObjType const&)
    OpGroup* OpGroup::Create(ObjType* param_1) {
        MakeCommon(this, 4, &param_1->field_8, &param_1->field_224);
        return this;
    }

    // 0x100074a00, 288 bytes, placed by class name
    // OpGroup::Create(shared_ptr<rs2lib::IfType> const&)
    OpGroup* OpGroup::Create(shared_ptr* param_1) {
        long lVar1;
        ulong uVar2;
        basic_string* pbVar3;
        eastl::string* this_00;
        ulong uVar4;

        OpGroup(this);
        field_0 = 7;
        lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        eastl::string::operator=((eastl::string*)&field_8, (basic_string*)(lVar1 + 704));
        core::stringtools::general::StringTools::ReplaceCharsWithSubstitute((basic_string*)&field_8,
                                                                            (vector*)&m_reservedChars, '_');
        lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
        uVar2 = ((lVar1 + 736))->end();
        uVar2 = eastl::min_alt<unsigned long>(uVar2, 10);
        if (uVar2 != 0) {
            uVar4 = 0;
            do {
                lVar1 = shared_ptr<rs2lib::IfType>::operator->((shared_ptr<rs2lib::IfType>*)param_1);
                pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)(lVar1 + 736), uVar4);
                this_00 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](
                    (array<eastl::string, 10ul>*)&field_40, uVar4);
                eastl::string::operator=(this_00, pbVar3);
                core::stringtools::general::StringTools::ReplaceCharsWithSubstitute((basic_string*)this_00,
                                                                                    (vector*)&m_reservedChars, '_');
                uVar4 = uVar4 + 1;
            } while (uVar2 != uVar4);
        }
        return this;
    }

    // 0x100074b20, 192 bytes, placed by class name
    // OpGroup::Create(ClientNpc const&)
    OpGroup* OpGroup::Create(ClientNpc* param_1) {
        NpcType* pNVar1;
        OpGroup local_1a8;
        eastl::string local_40[32];

        OpGroup(&local_1a8);
        pNVar1 = (NpcType*)shared_ptr<configdecoder::NpcType>::operator->(
            (shared_ptr<configdecoder::NpcType>*)&param_1->field_1024);
        pNVar1 = (NpcType*)pNVar1->GetMultiNpcOrThis();
        local_40->GetNpcOpBase(param_1, pNVar1, -1);
        MakeCommon(this, 2, local_40, &pNVar1->field_256);
        eastl::string::~basic_string(local_40);
        ~OpGroup(&local_1a8);
        return this;
    }

    // 0x100074be0, 160 bytes, placed by class name
    // OpGroup::Create(ClientObj const&)
    OpGroup* OpGroup::Create(ClientObj* param_1) {
        long lVar2;
        long lVar3;
        shared_ptr<configdecoder::ObjType> local_28[16];

        local_28->List(*(int*)&param_1->field_24);
        if (operator==((shared_ptr*)local_28, (_func_decltype_nullptr*)0)) {
            ___bzero(this, 360);
            OpGroup(this);
        } else {
            lVar2 = shared_ptr<configdecoder::ObjType>::operator->(local_28);
            lVar3 = shared_ptr<configdecoder::ObjType>::operator->(local_28);
            MakeCommon(this, 4, lVar2 + 8, lVar3 + 224);
        }
        local_28->~shared_ptr();
        return this;
    }

    // 0x100074c80, 672 bytes, placed by class name
    // OpGroup::Create(eastl::string const&, bool)
    OpGroup* OpGroup::Create(basic_string* param_1, bool param_2) {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* this_00;
        char cVar1;
        char* pcVar2;
        long lVar3;
        eastl::string* pbVar4;
        basic_string* pbVar5;
        undefined7 in_register_00000011;
        ulong uVar6;
        undefined4 uVar7;
        ulong uVar8;
        bool bVar9;
        undefined1 local_1d0[40];
        array<eastl::string, 10ul> local_1a8[320];
        OpGroup* local_68;
        basic_string local_60[32];
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* local_40;
        undefined4 local_34;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            pcVar2 = (char*)eastl::string::operator[]((eastl::string*)param_1, 0);
            cVar1 = core::stringtools::general::StringTools::IsASCIINumeric((short)*pcVar2);
            if (cVar1 != '\0') {
                local_34 = (undefined4)CONCAT71(in_register_00000011, param_2);
                pcVar2 = (char*)eastl::string::operator[]((eastl::string*)param_1, 0);
                cVar1 = *pcVar2;
                if ((byte)(cVar1 - 49U) < 8) {
                    OpGroup((OpGroup*)local_1d0);
                    local_1d0._0_4_ = cVar1 + -48;
                    lVar3 = param_1->find('|', 0);
                    if ((lVar3 != -1) && (lVar3 = param_1->find('|', lVar3 + 1), lVar3 != -1)) {
                        eastl::string::substr((ulong)local_60, (ulong)param_1);
                        local_68 = this;
                        eastl::string::operator=((eastl::string*)(local_1d0 + 8), local_60);
                        uVar7 = local_34;
                        local_60->~basic_string();
                        local_40 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                                param_1;
                        lVar3 = param_1->find('|', lVar3 + 1);
                        this_00 = local_40;
                        if (lVar3 == -1) {
                            uVar6 = 0;
                        } else {
                            uVar8 = 0;
                            do {
                                eastl::string::substr((ulong)local_60, (ulong)this_00);
                                pbVar4 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_1a8, uVar8);
                                eastl::string::operator=(pbVar4, local_60);
                                local_60->~basic_string();
                                lVar3 = eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                                    find(this_00, '|', lVar3 + 1);
                                uVar6 = uVar8 + 1;
                                if (lVar3 == -1)
                                    break;
                                bVar9 = uVar8 < 8;
                                uVar8 = uVar6;
                            } while (bVar9);
                            uVar7 = local_34;
                        }
                        this = local_68;
                        if ((uint)uVar6 < 10) {
                            eastl::string::substr((ulong)local_60, (ulong)local_40);
                            pbVar4 = (eastl::string*)std::array<eastl::string, 10ul>::operator[](local_1a8,
                                                                                                 uVar6 & 4294967295);
                            eastl::string::operator=(pbVar4, local_60);
                            local_60->~basic_string();
                        }
                        if ((char)uVar7 != '\0') {
                            core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(
                                (basic_string*)(local_1d0 + 8), (vector*)&m_reservedChars, '_');
                            uVar6 = 0;
                            do {
                                pbVar5 = (basic_string*)std::array<eastl::string, 10ul>::operator[](local_1a8, uVar6);
                                core::stringtools::general::StringTools::ReplaceCharsWithSubstitute(
                                    pbVar5, (vector*)&m_reservedChars, '_');
                                uVar6 = uVar6 + 1;
                            } while (uVar6 != 10);
                        }
                    }
                    OpGroup(this, (OpGroup*)local_1d0);
                    ~OpGroup((OpGroup*)local_1d0);
                    return this;
                }
            }
        }
        ___bzero(this, 360);
        OpGroup(this);
        return this;
    }

    // 0x100074f30, 432 bytes, placed by class name
    // OpGroup::ToString() const
    OpGroup* OpGroup::ToString() {
        uint uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        array<eastl::string, 10ul>* this_00;
        uint* in_RSI;

        new (this) eastl::string();
        uVar1 = *in_RSI;
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00 = (array<eastl::string, 10ul>*)(in_RSI + 10);
        std::array<eastl::string, 10ul>::operator[](this_00, 0);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 1);
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 2);
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 3);
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 4);
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 5);
        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 6);
        uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 7);
        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 8);
        uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::array<eastl::string, 10ul>::operator[](this_00, 9);
        uVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string::append_sprintf((char*)this, "%d|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s|%s", (ulong)uVar1, uVar2, uVar3,
                                      uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12);
        return this;
    }

    // 0x1000b3480, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.349
    void ___cxx_global_var_init_349() {
        allocator local_28[12];
        undefined4 local_1c;

        local_1c = 623518588;
        eastl::allocator::allocator(local_28, "EASTL vector");
        new (&OpGroup::m_reservedChars) eastl::vector<char, eastl::allocator>(&local_1c, 4, local_28);
        ___cxa_atexit(PTR__vector_100ee6d70, &OpGroup::m_reservedChars, 4294967296);
    }

} // namespace jag::oldscape
