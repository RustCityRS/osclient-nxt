// projects/osclient/ClientVarValues.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "ClientVarValues.h"

namespace jag::oldscape {
    // 0x100181e00, 224 bytes, base-object constructor, placed by class name and debug map
    // ClientVarValues::ClientVarValues()
    void ClientVarValues::ClientVarValues() {
        new (this) Array<bool, eastl::allocator>();
        new (&field_24) eastl::vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>();
        new (&field_64) Array<eastl::string, eastl::allocator>();
        field_88 = 0;
        field_96 = 0;
        new (&field_104) Array<bool, eastl::allocator>();
        new (&field_128) eastl::vector_map<int, rs2lib::StringVector, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, rs2lib::StringVector>, eastl::allocator>>();
        InitVarcs(this);
        InitVarcStrings(this);
        InitVeccs(this);
        LoadPermVars(this);
    }

    // 0x100181f20, 176 bytes, placed by class name and debug map
    // ClientVarValues::InitVarcs()
    void ClientVarValues::InitVarcs() {
        undefined1 uVar1;
        uint uVar2;
        shared_ptr* psVar3;
        undefined1* puVar4;
        ulong uVar5;
        shared_ptr<dash3d::Decor> local_40[16];

        uVar2 = (configdecoder::VarcType::m_pConfigClient)->GetFileIdLimit(19);
        if (0 < (int)uVar2) {
            set_max_size((long)(int)uVar2, 5);
            uVar5 = 0;
            do {
                psVar3 = (shared_ptr*)configdecoder::VarcType::List((int)uVar5);
                shared_ptr<dash3d::Decor>::shared_ptr(local_40, psVar3);
                puVar4 = (undefined1*)shared_ptr<configdecoder::VarcType>::operator->(
                    (shared_ptr<configdecoder::VarcType>*)local_40);
                uVar1 = *puVar4;
                puVar4 =
                    (undefined1*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this, uVar5);
                *puVar4 = uVar1;
                local_40->~shared_ptr();
                uVar5 = uVar5 + 1;
            } while (uVar2 != uVar5);
        }
    }

    // 0x100181fd0, 80 bytes, placed by class name and debug map
    // ClientVarValues::InitVarcStrings()
    void ClientVarValues::InitVarcStrings() {
        char cVar1;
        int iVar2;

        cVar1 = (configdecoder::VarcType::m_pConfigClient)->GetGroupIsValid(15);
        iVar2 = 0;
        if (cVar1 != '\0') {
            iVar2 = (configdecoder::VarcType::m_pConfigClient)->GetFileIdLimit(15);
        }
        if (0 < iVar2) {
            (&field_64, (long)iVar2, 1)->set_max_size();
        }
    }

    // 0x100182020, 176 bytes, placed by class name and debug map
    // ClientVarValues::InitVeccs()
    void ClientVarValues::InitVeccs() {
        undefined1 uVar1;
        uint uVar2;
        shared_ptr* psVar3;
        undefined1* puVar4;
        ulong uVar5;
        shared_ptr<dash3d::Decor> local_40[16];

        uVar2 = (configdecoder::VeccType::m_pConfigClient)->GetFileIdLimit(37);
        if (0 < (int)uVar2) {
            (&field_104, (long)(int)uVar2, 5)->set_max_size();
            uVar5 = 0;
            do {
                psVar3 = (shared_ptr*)configdecoder::VeccType::List((int)uVar5);
                shared_ptr<dash3d::Decor>::shared_ptr(local_40, psVar3);
                puVar4 = (undefined1*)shared_ptr<configdecoder::VeccType>::operator->(
                    (shared_ptr<configdecoder::VeccType>*)local_40);
                uVar1 = *puVar4;
                puVar4 = (undefined1*)Array<bool, eastl::allocator>::operator[](
                    (Array<bool, eastl::allocator>*)&field_104, uVar5);
                *puVar4 = uVar1;
                local_40->~shared_ptr();
                uVar5 = uVar5 + 1;
            } while (uVar2 != uVar5);
        }
    }

    // 0x1001820d0, 1392 bytes, placed by class name and debug map
    // ClientVarValues::LoadPermVars()
    void ClientVarValues::LoadPermVars() {
        uint uVar1;
        bool bVar2;
        char cVar3;
        byte bVar4;
        ushort uVar5;
        int iVar6;
        int iVar7;
        ClientCompositeZone* this_00;
        File* pFVar8;
        ulong uVar9;
        uchar* puVar10;
        ulong uVar11;
        char* pcVar12;
        HookArg* pHVar13;
        StringVector* this_01;
        undefined8 uVar14;
        _func_decltype_nullptr* in_RSI;
        ClientVarValues* pCVar15;
        uint uVar16;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_160[32];
        HookArg local_140;
        HookArg local_f8;
        uint local_b0[8];
        vector_map<int, rs2lib::StringVector, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, rs2lib::StringVector>, eastl::allocator>>* local_90;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        WindowSavedPosition local_80;
        undefined4 local_5c;
        vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>* local_58;
        unique_ptr<File, std::default_delete<File>> local_50[8];
        uint local_48;
        uint local_44;
        ClientVarValues* local_40;
        Error local_38[2];

        GetPrefsFileForRead((ClientVarValues*)local_50);
        bVar2 = std::operator==((unique_ptr*)local_50, in_RSI);
        if (bVar2)
            goto LAB_100182554;
        this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
        cVar3 = this_00->IsValid();
        if (cVar3 == '\0')
            goto LAB_100182554;
        new (local_38) callstack::Callstack();
        pFVar8 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
        uVar9 = pFVar8->length(local_38);
        cVar3 = local_38->IsValid();
        if ((cVar3 != '\0') || (uVar9 < 3))
            goto LAB_100182554;
        local_80.PacketT(uVar9);
        pFVar8 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
        puVar10 = (uchar*)local_80.GetDataPtr();
        uVar14 = 0;
        uVar11 = pFVar8->read(puVar10, (uint)uVar9, 0, local_38);
        if ((uVar9 <= uVar11) && ((cVar3 = local_38->IsValid(), cVar3 == '\0' && (bVar4 = local_80.g1(), bVar4 < 4)))) {
            local_40 = this;
            if (bVar4 < 2) {
                uVar5 = local_80.g2();
                if (uVar5 != 0) {
                    uVar16 = (uint)uVar5;
                    local_58 =
                        (vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>*)&local_40->field_24;
                    do {
                        uVar5 = local_80.g2();
                        local_f8.field_0 = (uint)uVar5;
                        iVar6 = local_80.g4();
                        uVar1 = local_f8.field_0;
                        if (((-1 < (int)local_f8.field_0) && (iVar7 = local_40->end(), (int)uVar1 < iVar7)) &&
                            (pcVar12 = (char*)Array<bool, eastl::allocator>::operator[](
                                 (Array<bool, eastl::allocator>*)local_40, (long)(int)local_f8.field_0),
                             *pcVar12 != '\0')) {
                            new (&local_140) HookArg(iVar6);
                            pHVar13 = (HookArg*)
                                eastl::vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                                  eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>::
                                operator[](local_58, (int*)&local_f8);
                            HookArg::operator=(pHVar13, &local_140);
                            local_140.~LanguageMessage();
                        }
                        uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                }
                uVar5 = local_80.g2();
                pCVar15 = local_40;
                if (uVar5 != 0) {
                    uVar16 = (uint)uVar5;
                    do {
                        local_80.g2();
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::string>(local_160, SUB81(&local_80, 0));
                        local_160->~basic_string();
                        uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                }
            } else {
                uVar5 = local_80.g2();
                local_5c = (undefined4)CONCAT71((int7)((ulong)uVar14 >> 8), uVar5 != 0);
                if (uVar5 != 0) {
                    local_44 = CONCAT31(local_44._1_3_, bVar4);
                    uVar16 = (uint)uVar5;
                    local_58 = (vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>*)&field_24;
                    do {
                        uVar5 = local_80.g2();
                        local_48 = (uint)uVar5;
                        cVar3 = local_80.g1();
                        new (&local_140) HookArg();
                        if (cVar3 == '\0') {
                            iVar6 = local_80.g4();
                            new (&local_f8) HookArg(iVar6);
                            HookArg::operator=(&local_140, &local_f8);
                            local_f8.~LanguageMessage();
                        } else {
                            if (cVar3 != '\x02') {
                                local_140.~LanguageMessage();
                                goto LAB_10018254b;
                            }
                            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                eastl::string>(
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_b0,
                                SUB81(&local_80, 0));
                            new (&local_f8) HookArg(local_b0);
                            HookArg::operator=(&local_140, &local_f8);
                            local_f8.~LanguageMessage();
                            local_b0->~basic_string();
                        }
                        uVar1 = local_48;
                        if (((-1 < (int)local_48) && (iVar6 = local_40->end(), (int)uVar1 < iVar6)) &&
                            (pcVar12 = (char*)Array<bool, eastl::allocator>::operator[](
                                 (Array<bool, eastl::allocator>*)local_40, (long)(int)local_48),
                             *pcVar12 != '\0')) {
                            pHVar13 = (HookArg*)
                                eastl::vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                                  eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>::
                                operator[](local_58, (int*)&local_48);
                            HookArg::operator=(pHVar13, &local_140);
                        }
                        local_140.~LanguageMessage();
                        uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                    local_5c = 0;
                    bVar4 = (byte)local_44;
                }
                if ((2 < bVar4) && (uVar5 = local_80.g2(), uVar5 != 0)) {
                    local_44 = (uint)uVar5;
                    local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_104;
                    local_90 =
                        (vector_map<int, rs2lib::StringVector, eastl::less<int>, eastl::allocator,
                                    eastl::vector<eastl::pair<int, rs2lib::StringVector>, eastl::allocator>>*)&local_40
                            ->field_128;
                    uVar16 = 0;
                    do {
                        uVar5 = local_80.g2();
                        local_b0[0] = (uint)uVar5;
                        uVar5 = local_80.g2();
                        new (&local_140) rs2lib::StringVector();
                        local_58 = (vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                               eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>*)
                            CONCAT44(local_58._4_4_, uVar16);
                        if (uVar5 != 0) {
                            uVar16 = (uint)uVar5;
                            do {
                                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                                    eastl::string>(
                                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_f8,
                                    SUB81(&local_80, 0));
                                local_140.Append((basic_string*)&local_f8);
                                local_f8.~basic_string();
                                uVar16 = uVar16 - 1;
                            } while (uVar16 != 0);
                        }
                        uVar16 = local_b0[0];
                        if (((-1 < (int)local_b0[0]) &&
                             (iVar6 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_88),
                              (int)uVar16 < iVar6)) &&
                            (pcVar12 = (char*)Array<bool, eastl::allocator>::operator[](
                                 (Array<bool, eastl::allocator>*)local_88, (long)(int)local_b0[0]),
                             *pcVar12 != '\0')) {
                            local_140.MarkClean();
                            this_01 = (StringVector*)
                                eastl::vector_map<int, rs2lib::StringVector, eastl::less<int>, eastl::allocator,
                                                  eastl::vector<eastl::pair<int, rs2lib::StringVector>,
                                                                eastl::allocator>>::operator[](local_90,
                                                                                               (int*)local_b0);
                            rs2lib::StringVector::operator=(this_01, (StringVector*)&local_140);
                        }
                        local_140.~StringVector();
                        uVar16 = (int)local_58 + 1;
                    } while (uVar16 != local_44);
                }
                pCVar15 = local_40;
                if ((char)local_5c != '\0')
                    goto LAB_10018254b;
            }
            pFVar8 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
            pFVar8->close(0);
            pCVar15->field_88 = 0;
        }
    LAB_10018254b:
        local_80.~WindowSavedPosition();
    LAB_100182554:
        std::unique_ptr<File, std::default_delete<File>>::~unique_ptr(local_50);
    }

    // 0x100182670, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClientVarValues::ClientVarValues(): jumps straight to the base-object constructor

    // 0x100182940, 112 bytes, placed by class name and debug map
    // ClientVarValues::SetVarValueInt(int, int)
    void ClientVarValues::SetVarValueInt(int param_1, int param_2) {
        HookArg* this_00;
        char* pcVar1;
        HookArg local_60;
        int local_14;

        local_14 = param_1;
        new (&local_60) HookArg(param_2);
        this_00 = (HookArg*)eastl::vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>::
        operator[]((vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>*)&field_24,
                   &local_14);
        HookArg::operator=(this_00, &local_60);
        local_60.~LanguageMessage();
        pcVar1 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this, (long)local_14);
        if (*pcVar1 != '\0') {
            field_88 = 1;
        }
    }

    // 0x100182af0, 96 bytes, placed by class name and debug map
    // ClientVarValues::GetVarValueInt(int) const
    undefined4 ClientVarValues::GetVarValueInt(int param_1) {
        undefined4 uVar2;
        long lVar3;
        long lVar4;
        int local_24;

        lVar3 = (&field_24, &local_24)->find();
        lVar4 = (&field_24)->end();
        uVar2 = 4294967295;
        if (lVar3 != lVar4) {
            if (((lVar3 + 8))->GetX() == 1) {
                uVar2 = ((lVar3 + 8))->IntValue();
            }
        }
        return uVar2;
    }

    // 0x100182bc0, 96 bytes, placed by class name and debug map
    // ClientVarValues::SetVarValueString(int, eastl::string const&)
    void ClientVarValues::SetVarValueString(int param_1, basic_string* param_2) {
        HookArg* this_00;
        HookArg local_60;
        int local_14;

        local_14 = param_1;
        new (&local_60) HookArg(param_2);
        this_00 = (HookArg*)eastl::vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>::
        operator[]((vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>*)&field_24,
                   &local_14);
        HookArg::operator=(this_00, &local_60);
        local_60.~LanguageMessage();
    }

    // 0x100182c30, 96 bytes, placed by class name and debug map
    // ClientVarValues::SetVarValueString(int, eastl::string&&)
    void ClientVarValues::SetVarValueString(int param_1, basic_string* param_2) {
        HookArg* this_00;
        HookArg local_60;
        int local_14;

        local_14 = param_1;
        new (&local_60) HookArg(param_2);
        this_00 = (HookArg*)eastl::vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>::
        operator[]((vector_map<int, HookArg, eastl::less<int>, eastl::allocator,
                               eastl::vector<eastl::pair<int, HookArg>, eastl::allocator>>*)&field_24,
                   &local_14);
        HookArg::operator=(this_00, &local_60);
        local_60.~LanguageMessage();
    }

    // 0x100182c90, 112 bytes, placed by class name and debug map
    // ClientVarValues::getVarValueString(int) const
    undefined1* ClientVarValues::getVarValueString(int param_1) {
        long lVar2;
        long lVar3;
        undefined1* puVar4;
        int local_24;

        lVar2 = (&field_24, &local_24)->find();
        lVar3 = (&field_24)->end();
        puVar4 = &eastl::EMPTY_STRING;
        if (lVar2 != lVar3) {
            if (((lVar2 + 8))->GetX() == 2) {
                puVar4 = (undefined1*)((lVar2 + 8))->StrValue();
            }
        }
        return puVar4;
    }

    // 0x100182d40, 128 bytes, placed by class name and debug map
    // ClientVarValues::ResetForNewLogin()
    void ClientVarValues::ResetForNewLogin() {
        undefined1* this_00;
        int iVar1;
        ulong uVar2;

        (&field_24)->clear();
        (&field_128)->clear();
        this_00 = &field_64;
        iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar2 = 0;
            do {
                Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)this_00,
                                                                   uVar2);
                eastl::string::clear();
                uVar2 = uVar2 + 1;
                iVar1 = this_00->end();
            } while ((long)uVar2 < (long)iVar1);
        }
        field_88 = 0;
        field_96 = 0;
    }

    // 0x100182e20, 192 bytes, placed by class name and debug map
    // ClientVarValues::ResetTempVars()
    void ClientVarValues::ResetTempVars() {
        int iVar1;
        char* pcVar2;
        int iVar3;
        ulong uVar4;
        undefined1* this_00;
        int local_2c;

        local_2c = 0;
        iVar1 = end();
        if (0 < iVar1) {
            do {
                pcVar2 = (char*)Array<bool, eastl::allocator>::operator[]((Array<bool, eastl::allocator>*)this,
                                                                          (long)local_2c);
                if (*pcVar2 == '\0') {
                    (&field_24, &local_2c)->erase();
                }
                iVar3 = local_2c + 1;
                local_2c = iVar3;
                iVar1 = end();
            } while (iVar3 < iVar1);
        }
        this_00 = &field_64;
        iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar4 = 0;
            do {
                Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)this_00,
                                                                   uVar4);
                eastl::string::clear();
                uVar4 = uVar4 + 1;
                iVar1 = this_00->end();
            } while ((long)uVar4 < (long)iVar1);
        }
    }

    // 0x100182f20, 1328 bytes, placed by class name and debug map
    // ClientVarValues::SavePermVars() const
    void ClientVarValues::SavePermVars() {
        undefined1* puVar1;
        undefined8 this_00;
        Layout* this_01;
        int iVar4;
        int iVar5;
        uint uVar6;
        ClientCompositeZone* this_02;
        pair* ppVar7;
        pair* ppVar8;
        char* pcVar9;
        basic_string* pbVar10;
        File* pFVar11;
        uchar* puVar12;
        _func_decltype_nullptr* in_RSI;
        int iVar14;
        uint uVar15;
        undefined1 local_f8[40];
        Layout* local_d0;
        uint local_c8[2];
        HookArg local_c0;
        undefined1 local_78[40];
        unique_ptr<File, std::default_delete<File>> local_50[8];
        undefined8 local_48;
        ClientVarValues* local_40;
        uint local_34;

        local_40 = this;
        GetPrefsFileForWrite((ClientVarValues*)local_50);
        if (!std::operator==((unique_ptr*)local_50, in_RSI)) {
            this_02 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
            if (this_02->IsValid() != '\0') {
                puVar1 = &local_40->field_24;
                ppVar7 = (pair*)puVar1->HeapBeginPtr();
                local_f8._32_8_ = puVar1;
                ppVar8 = (pair*)puVar1->end();
                local_48 = (pair*)((ulong)local_48._4_4_ << 32);
                if (ppVar7 == ppVar8) {
                    iVar14 = 3;
                    local_34 = 0;
                } else {
                    iVar14 = 3;
                    local_34 = 0;
                    do {
                        new (local_c8) eastl::pair<int, HookArg>(ppVar7);
                        uVar15 = local_c8[0];
                        pcVar9 = (char*)Array<bool, eastl::allocator>::operator[](
                            (Array<bool, eastl::allocator>*)local_40, (long)(int)local_c8[0]);
                        if (*pcVar9 != '\0') {
                            iVar4 = local_c0.GetX();
                            if (iVar4 == 1) {
                                iVar14 = iVar14 + 7;
                            } else {
                                if (iVar4 != 2) {
                                    uVar6 = local_c0.GetX();
                                    /* WARNING: Subroutine does not return */
                                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/ClientVarValues.cpp",
                                                    169, "Unsupported variable type %d id %d", (ulong)uVar6,
                                                    (ulong)uVar15);
                                }
                                pbVar10 = (basic_string*)local_c0.StrValue();
                                iVar4 =
                                    PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                                        eastl::string>(pbVar10, false);
                                iVar14 = iVar14 + 3 + iVar4;
                            }
                            local_34 = local_34 + 1;
                        }
                        local_c8->~pair();
                        ppVar7 = ppVar7 + 80;
                    } while (ppVar7 != ppVar8);
                }
                iVar14 = iVar14 + 2;
                puVar1 = &local_40->field_128;
                ppVar7 = (pair*)puVar1->HeapBeginPtr();
                local_d0 = (Layout*)puVar1;
                local_78._32_8_ = puVar1->end();
                if (ppVar7 != (pair*)local_78._32_8_) {
                    local_48 = (pair*)((ulong)local_48 & 18446744069414584320);
                    do {
                        new (local_c8) eastl::pair<int, rs2lib::StringVector>(ppVar7);
                        iVar4 = local_c0.Size();
                        if (0 < iVar4) {
                            local_48 = (pair*)CONCAT44(local_48._4_4_, (int)local_48 + 1);
                            iVar14 = iVar14 + 4;
                            for (iVar4 = 0; iVar5 = local_c0.Size(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
                                local_78->GetIndex((int)&local_c0);
                                iVar5 =
                                    PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                                        eastl::string>((basic_string*)local_78, false);
                                iVar14 = iVar14 + iVar5;
                                local_78->~basic_string();
                            }
                        }
                        local_c8->~pair();
                        ppVar7 = ppVar7 + 48;
                    } while (ppVar7 != (pair*)local_78._32_8_);
                }
                local_78->PacketT((long)iVar14);
                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, 3);
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, (ulong)local_34);
                this_00 = local_f8._32_8_;
                ppVar7 = (pair*)local_f8._32_8_->HeapBeginPtr();
                ppVar8 = (pair*)this_00->end();
                if (ppVar7 != ppVar8) {
                    do {
                        new (local_c8) eastl::pair<int, HookArg>(ppVar7);
                        uVar15 = local_c8[0];
                        pcVar9 = (char*)Array<bool, eastl::allocator>::operator[](
                            (Array<bool, eastl::allocator>*)local_40, (long)(int)local_c8[0]);
                        if (*pcVar9 != '\0') {
                            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, (ulong)uVar15);
                            iVar14 = local_c0.GetX();
                            if (iVar14 == 1) {
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, 0);
                                iVar14 = local_c0.IntValue();
                                PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, iVar14);
                            } else if (iVar14 == 2) {
                                PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, 2);
                                pbVar10 = (basic_string*)local_c0.StrValue();
                                PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252<
                                    eastl::basic_string<char, BucketAllocatorEASTL>>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, pbVar10, false);
                            }
                        }
                        local_c8->~pair();
                        ppVar7 = ppVar7 + 80;
                    } while (ppVar7 != ppVar8);
                }
                PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, (ulong)local_48 & 4294967295);
                this_01 = local_d0;
                ppVar7 = (pair*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_d0);
                local_48 = (pair*)this_01->end();
                if (ppVar7 != local_48) {
                    do {
                        local_78._32_8_ = ppVar7;
                        new (local_c8) eastl::pair<int, rs2lib::StringVector>(ppVar7);
                        uVar15 = local_c8[0];
                        uVar6 = local_c0.Size();
                        if (0 < (int)uVar6) {
                            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, (ulong)uVar15);
                            PacketT<Array<unsigned char, eastl::allocator>>::p2<unsigned long>(
                                (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, (ulong)uVar6);
                            uVar15 = 0;
                            do {
                                local_f8->GetIndex((int)&local_c0);
                                PacketT<Array<unsigned char, eastl::allocator>>::pStringUTF8ToCP1252<
                                    eastl::basic_string<char, BucketAllocatorEASTL>>(
                                    (PacketT<Array<unsigned char, eastl::allocator>>*)local_78, (basic_string*)local_f8,
                                    false);
                                local_f8->~basic_string();
                                uVar15 = uVar15 + 1;
                            } while (uVar6 != uVar15);
                        }
                        local_c8->~pair();
                        ppVar7 = (pair*)(local_78._32_8_ + 48);
                    } while (ppVar7 != local_48);
                }
                pFVar11 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
                puVar12 = (uchar*)local_78->GetDataPtr();
                uVar15 = local_78->size();
                pFVar11->write(puVar12, uVar15, 0);
                pFVar11 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(local_50);
                pFVar11->close(0);
                local_40->field_88 = 0;
                local_40->field_96 = game::TimeTools::ActualTimeInMillis();
                local_78->~WindowSavedPosition();
            }
        }
        std::unique_ptr<File, std::default_delete<File>>::~unique_ptr(local_50);
    }

    // 0x100183450, 256 bytes, placed by class name and debug map
    // ClientVarValues::GetPrefsFileForWrite()
    ClientVarValues* ClientVarValues::GetPrefsFileForWrite() {
        GameShell3Cache local_2a0;
        undefined1 local_280[8];
        GameShell3Cache local_278[12];
        Filename local_148[19];
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_280) callstack::Callstack();
        ((local_280 + 8))->GetAccountDirectory();
        local_2a0.GetPrefFilePostfix("2");
        Filename::operator/(local_148, (Filename*)(local_280 + 8), (fixed_string*)&local_2a0);
        local_2a0.~basic_string();
        ((local_280 + 8))->~pair();
        OpenPrefsForWrite(local_148, local_280);
        local_148->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100183740, 368 bytes, placed by class name and debug map
    // ClientVarValues::GetPrefsFileForRead()
    ClientVarValues* ClientVarValues::GetPrefsFileForRead() {
        undefined4 uVar1;
        Client* this_00;
        char* pcVar2;
        GameShell3Cache local_2a8;
        undefined1 local_288[8];
        GameShell3Cache local_280[12];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (local_288) callstack::Callstack();
        ((local_288 + 8))->GetAccountDirectory();
        local_2a8.GetPrefFilePostfix("2");
        Filename::operator/(local_150, (Filename*)(local_288 + 8), (fixed_string*)&local_2a8);
        local_2a8.~basic_string();
        ((local_288 + 8))->~pair();
        this_00 = (Client*)Client::Instance();
        uVar1 = this_00->GetContentMode();
        pcVar2 = (char*)constants::ContentModeInternalName(uVar1);
        new (&local_2a8) eastl::allocator("EASTL basic_string");
        new ((local_288 + 8)) eastl::string(pcVar2, (allocator*)&local_2a8);
        OpenPrefsForRead(local_150, "2", (basic_string*)(local_288 + 8), local_288);
        ((local_288 + 8))->~basic_string();
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1001839f0, 64 bytes, placed by class name
    // ClientVarValues::Service()
    void ClientVarValues::Service() {
        ulong uVar1;
        long lVar3;

        uVar1 = field_96;
        lVar3 = game::TimeTools::ActualTimeInMillis();
        if (uVar1 < lVar3 - 10000U) {
            if (ArePermVarsModified(this) != '\0') {
                SavePermVars(this);
            }
        }
    }

    // 0x100183a30, 80 bytes, placed by class name
    // ClientVarValues::ArePermVarsModified() const
    undefined4 ClientVarValues::ArePermVarsModified() {
        undefined8 uVar1;
        undefined8 uVar2;
        bool bVar3;
        undefined3 extraout_var;
        undefined4 uVar4;

        uVar1 = (&field_128)->HeapBeginPtr();
        uVar2 = (&field_128)->end();
        bVar3 = std::any_of<eastl::pair<int, rs2lib::StringVector> const*,
                            ClientVarValues::ArePermVarsModified() const ::__0>(uVar1, uVar2);
        uVar4 = CONCAT31(extraout_var, 1);
        if (!bVar3) {
            uVar4 = CONCAT31(extraout_var, field_88 != '\0');
        }
        return uVar4;
    }

    // 0x100183c20, 208 bytes, placed by class name
    // ClientVarValues::GetVeccValue(int)
    long ClientVarValues::GetVeccValue(int param_1) {
        int iVar1;
        long lVar2;
        long lVar3;
        undefined1* this_00;
        StringVector local_78;
        pair<int, rs2lib::StringVector> local_50[52];
        int local_1c;

        local_1c = param_1;
        iVar1 = (&field_104)->end();
        if (param_1 < iVar1) {
            this_00 = &field_128;
            lVar2 = this_00->find(&local_1c);
            lVar3 = this_00->end();
            if (lVar2 == lVar3) {
                new (&local_78) rs2lib::StringVector();
                eastl::pair<int, rs2lib::StringVector>::pair<int&, void>(local_50, &local_1c, &local_78);
                this_00->insert(local_50);
                eastl::pair<int, rs2lib::StringVector>::~pair(local_50);
                local_78.~StringVector();
                lVar2 = eastl::vector_map<int, rs2lib::StringVector, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, rs2lib::StringVector>, eastl::allocator>>::
                operator[](
                    (vector_map<int, rs2lib::StringVector, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, rs2lib::StringVector>, eastl::allocator>>*)this_00,
                    &local_1c);
            } else {
                lVar2 = lVar2 + 8;
            }
        } else {
            lVar2 = 0;
        }
        return lVar2;
    }

} // namespace jag::oldscape

namespace jag::hal::audio::decoders::vorbis {
    // 0x100183720: the linker folded this into oldscape::PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(), which has identical code
    VorbisDecoderPacket::~VorbisDecoderPacket();

} // namespace jag::hal::audio::decoders::vorbis
