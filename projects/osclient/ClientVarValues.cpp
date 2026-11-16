// projects/osclient/ClientVarValues.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ClientVarValues.h"

namespace jag::oldscape {
    // 0x100181e00
    ClientVarValues::ClientVarValues() : Array<bool>(), field_88(0), field_96(0) {
        InitVarcs();
        InitVarcStrings();
        InitVeccs();
        LoadPermVars();
    }

    // 0x100181f20
    void ClientVarValues::InitVarcs() {
        uint8_t uVar1;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        uint8_t* puVar3;
        unsigned long arg1;
        shared_ptr<dash3d::Decor> local_40;

        unsigned int uVar2 = (configdecoder::VarcType::m_pConfigClient)->GetFileIdLimit(19);
        if (0 < (int)uVar2) {
            set_max_size((long)(int)uVar2, 5);
            arg1 = 0;
            do {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::VarcType::List((int)arg1);
                local_40 = shared_ptr(groundDecor);
                puVar3 = (uint8_t*)local_40.operator->();
                uVar1 = *puVar3;
                puVar3 = (uint8_t*)(*this)[arg1];
                *puVar3 = uVar1;
                arg1 = arg1 + 1;
            } while (uVar2 != arg1);
        }
    }

    // 0x100181fd0
    void ClientVarValues::InitVarcStrings() {
        bool cVar1 = (configdecoder::VarcType::m_pConfigClient)->GetGroupIsValid(15);
        int iVar2 = 0;
        if (cVar1) {
            iVar2 = (configdecoder::VarcType::m_pConfigClient)->GetFileIdLimit(15);
        }
        if (0 < iVar2) {
            field_64.set_max_size((long)iVar2, 1);
        }
    }

    // 0x100182020
    void ClientVarValues::InitVeccs() {
        uint8_t uVar1;
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        uint8_t* puVar3;
        unsigned long arg1;
        shared_ptr<dash3d::Decor> local_40;

        unsigned int uVar2 = (configdecoder::VeccType::m_pConfigClient)->GetFileIdLimit(37);
        if (0 < (int)uVar2) {
            field_104.set_max_size((long)(int)uVar2, 5);
            arg1 = 0;
            do {
                groundDecor = (shared_ptr<dash3d::GroundDecor>*)configdecoder::VeccType::List((int)arg1);
                local_40 = shared_ptr(groundDecor);
                puVar3 = (uint8_t*)local_40.operator->();
                uVar1 = *puVar3;
                puVar3 = &field_104[arg1];
                *puVar3 = uVar1;
                arg1 = arg1 + 1;
            } while (uVar2 != arg1);
        }
    }

    // 0x1001820d0
    void ClientVarValues::LoadPermVars() {
        unsigned int uVar1;
        uint8_t bVar4;
        unsigned short uVar5;
        int iVar6;
        int iVar7;
        char* pcVar10;
        HookArg* pHVar11;
        StringVector* this_01;
        void* in_RSI;
        ClientVarValues* pCVar13;
        unsigned int uVar14;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_160;
        HookArg local_140;
        HookArg local_f8;
        unsigned int local_b0[8];
        vector_map<int, rs2lib::StringVector>* local_90;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        WindowSavedPosition local_80;
        uint32_t local_5c;
        vector_map<int, HookArg>* local_58;
        ReturnValue local_50;
        unsigned int local_48;
        unsigned int local_44;
        ClientVarValues* local_40;

        GetPrefsFileForRead(&local_50);
        if (&local_50 == in_RSI)
            goto LAB_100182554;
        char cVar3 = ((ClientCompositeZone*)local_50.operator->())->IsValid();
        if (!cVar3)
            goto LAB_100182554;
        Error local_38;
        auto pFVar8 = local_50.operator->();
        unsigned long arg1 = pFVar8->length(&local_38);
        cVar3 = local_38.IsValid();
        if ((cVar3) || (arg1 < 3))
            goto LAB_100182554;
        local_80.PacketT(arg1);
        pFVar8 = (File*)local_50.operator->();
        unsigned long uVar9 = pFVar8->read((unsigned char*)local_80.GetDataPtr(), (unsigned int)arg1, 0, &local_38);
        if ((arg1 <= uVar9) && ((cVar3 = local_38.IsValid(), !cVar3 && (bVar4 = local_80.g1(), bVar4 < 4)))) {
            local_40 = this;
            if (bVar4 < 2) {
                uVar5 = local_80.g2();
                if (uVar5 != 0) {
                    uVar14 = (unsigned int)uVar5;
                    local_58 = (vector_map<int, HookArg>*)&local_40->field_24;
                    do {
                        uVar5 = local_80.g2();
                        local_f8.m_argType = (unsigned int)uVar5;
                        iVar6 = local_80.g4();
                        uVar1 = local_f8.m_argType;
                        if (((-1 < (int)local_f8.m_argType) && (iVar7 = local_40->end(), (int)uVar1 < iVar7)) &&
                            (pcVar10 = (char*)(*local_40)[(long)(int)local_f8.m_argType], *pcVar10 != '\0')) {
                            local_140 = HookArg(iVar6);
                            pHVar11 = (HookArg*)(*local_58)[local_f8];
                            *pHVar11 = local_140;
                        }
                        uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                }
                uVar5 = local_80.g2();
                pCVar13 = local_40;
                if (uVar5 != 0) {
                    uVar14 = (unsigned int)uVar5;
                    do {
                        local_80.g2();
                        PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                            &local_160, (uint8_t)(&local_80));
                        uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                }
            } else {
                uVar5 = local_80.g2();
                local_5c = (uint32_t)(((uint64_t)((int64_t)((unsigned long)0 >> 8)) << 8) | (uint8_t)(uVar5 != 0));
                if (uVar5 != 0) {
                    local_44 = (((uint32_t)local_44._1_3_ << 8) | (uint8_t)bVar4);
                    uVar14 = (unsigned int)uVar5;
                    local_58 = (vector_map<int, HookArg>*)&field_24;
                    do {
                        uVar5 = local_80.g2();
                        local_48 = (unsigned int)uVar5;
                        cVar3 = local_80.g1();
                        local_140 = HookArg();
                        if (!cVar3) {
                            iVar6 = local_80.g4();
                            local_f8 = HookArg(iVar6);
                            local_140 = local_f8;
                        } else {
                            if (cVar3 != '\x02') {
                                goto LAB_10018254b;
                            }
                            local_b0->gStringCP1252ToUTF8<eastl::string>((uint8_t)(&local_80));
                            local_f8 = HookArg(local_b0);
                            local_140 = local_f8;
                        }
                        uVar1 = local_48;
                        if (((-1 < (int)local_48) && (iVar6 = local_40->end(), (int)uVar1 < iVar6)) &&
                            (pcVar10 = (char*)(*local_40)[(long)(int)local_48], *pcVar10 != '\0')) {
                            pHVar11 = (HookArg*)(*local_58)[local_48];
                            *pHVar11 = local_140;
                        }
                        uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                    local_5c = 0;
                    bVar4 = (uint8_t)local_44;
                }
                if ((2 < bVar4) && (uVar5 = local_80.g2(), uVar5 != 0)) {
                    local_44 = (unsigned int)uVar5;
                    local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_104;
                    local_90 = (vector_map<int, rs2lib::StringVector>*)&local_40->field_128;
                    uVar14 = 0;
                    do {
                        uVar5 = local_80.g2();
                        local_b0[0] = (unsigned int)uVar5;
                        uVar5 = local_80.g2();
                        local_140 = rs2lib::StringVector();
                        local_58 = (vector_map<int, HookArg>*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar14);
                        if (uVar5 != 0) {
                            uVar14 = (unsigned int)uVar5;
                            do {
                                local_f8.gStringCP1252ToUTF8<eastl::string>((uint8_t)(&local_80));
                                local_140.Append(local_f8);
                                uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                        }
                        uVar14 = local_b0[0];
                        if (((-1 < (int)local_b0[0]) && (iVar6 = local_88->end(), (int)uVar14 < iVar6)) &&
                            (pcVar10 = (char*)(*local_88)[(long)(int)local_b0[0]], *pcVar10 != '\0')) {
                            local_140.MarkClean();
                            this_01 = (StringVector*)(*local_90)[*local_b0];
                            *this_01 = local_140;
                        }
                        uVar14 = (int)local_58 + 1;
                    } while (uVar14 != local_44);
                }
                pCVar13 = local_40;
                if ((char)local_5c != '\0')
                    goto LAB_10018254b;
            }
            pFVar8 = (File*)local_50.operator->();
            pFVar8->close(nullptr);
            pCVar13->field_88 = 0;
        }
    LAB_10018254b:
    LAB_100182554:
    }

    // 0x100182940
    void ClientVarValues::SetVarValueInt(int arg1, int arg2) {
        HookArg local_60(arg2);
        HookArg* this_00 = &field_24[arg1];
        *this_00 = local_60;
        char* pcVar1 = (char*)(*this)[(long)arg1];
        if (*pcVar1 != '\0') {
            field_88 = 1;
        }
    }

    // 0x100182af0
    uint32_t ClientVarValues::GetVarValueInt(int arg1) const {
        long lVar3 = eastl::vector_map<int, HookArg>::find(field_24);
        long lVar4 = field_24.end();
        uint32_t uVar2 = 4294967295;
        if (lVar3 != lVar4) {
            if (((lVar3 + 8))->GetX() == 1) {
                uVar2 = ((lVar3 + 8))->IntValue();
            }
        }
        return uVar2;
    }

    // 0x100182bc0
    void ClientVarValues::SetVarValueString(int arg1, const eastl::string& str) {
        HookArg local_60(str);
        HookArg* this_00 = &field_24[arg1];
        *this_00 = local_60;
    }

    // 0x100182c30
    void ClientVarValues::SetVarValueString(int arg1, eastl::string&& str) {
        HookArg local_60(str);
        HookArg* this_00 = &field_24[arg1];
        *this_00 = local_60;
    }

    // 0x100182c90
    uint8_t* ClientVarValues::getVarValueString(int arg1) const {
        long lVar2 = eastl::vector_map<int, HookArg>::find(field_24);
        long lVar3 = field_24.end();
        uint8_t* puVar4 = &eastl::EMPTY_STRING;
        if (lVar2 != lVar3) {
            if (((lVar2 + 8))->GetX() == 2) {
                puVar4 = (uint8_t*)((lVar2 + 8))->StrValue();
            }
        }
        return puVar4;
    }

    // 0x100182d40
    void ClientVarValues::ResetForNewLogin() {
        unsigned long arg1;

        field_24.clear();
        field_128.clear();
        uint8_t* this_00 = &field_64;
        int iVar1 = this_00->end();
        if (0 < iVar1) {
            arg1 = 0;
            do {
                ((eastl::string*)(*this_00)[arg1])->clear();
                arg1 = arg1 + 1;
                iVar1 = this_00->end();
            } while ((long)arg1 < (long)iVar1);
        }
        field_88 = 0;
        field_96 = 0;
    }

    // 0x100182e20
    void ClientVarValues::ResetTempVars() {
        char* pcVar2;
        unsigned long arg1;

        int local_2c = 0;
        int iVar1 = end();
        if (0 < iVar1) {
            do {
                pcVar2 = (char*)(*this)[(long)local_2c];
                if (*pcVar2 == '\0') {
                    eastl::vector_map<int, HookArg>::erase(field_24);
                }
                local_2c = local_2c + 1;
                iVar1 = end();
            } while (local_2c < iVar1);
        }
        uint8_t* this_01 = &field_64;
        iVar1 = this_01->end();
        if (0 < iVar1) {
            arg1 = 0;
            do {
                ((eastl::string*)(*this_01)[arg1])->clear();
                arg1 = arg1 + 1;
                iVar1 = this_01->end();
            } while ((long)arg1 < (long)iVar1);
        }
    }

    // 0x100182f20
    void ClientVarValues::SavePermVars() const {
        int* piVar1;
        Layout* pLVar2;
        int iVar5;
        unsigned int uVar6;
        int iVar7;
        unsigned int uVar8;
        pair<int, HookArg>* ppVar9;
        pair<int, HookArg>* ppVar10;
        char* pcVar11;
        eastl::string* pbVar12;
        pair<int, rs2lib::StringVector>* ppVar13;
        File* pFVar14;
        unsigned char* arg1;
        void* in_RSI;
        int iVar16;
        ReturnValue local_f8;
        Layout* local_d8;
        Layout* local_d0;
        unsigned int local_c8[2];
        HookArg local_c0;
        WindowSavedPosition local_78;
        pair<int, rs2lib::StringVector>* local_58;
        ReturnValue local_50;
        uint64_t local_48;
        int local_34;

        ClientVarValues* local_40 = this;
        GetPrefsFileForWrite(&local_50);
        if (!&local_50 == in_RSI) {
            if (((ClientCompositeZone*)local_50.operator->())->IsValid() != '\0') {
                piVar1 = &local_40->field_24;
                ppVar9 = (pair<int, HookArg>*)piVar1->HeapBeginPtr();
                local_d8 = (Layout*)piVar1;
                ppVar10 = (pair<int, HookArg>*)piVar1->end();
                local_48 = (pair<int, rs2lib::StringVector>*)((unsigned long)local_48._4_4_ << 32);
                if (ppVar9 == ppVar10) {
                    iVar16 = 3;
                    local_34 = 0;
                } else {
                    iVar16 = 3;
                    local_34 = 0;
                    do {
                        new (local_c8) eastl::pair<int, HookArg>(*ppVar9);
                        uVar8 = local_c8[0];
                        pcVar11 = (char*)(*local_40)[(long)(int)local_c8[0]];
                        if (*pcVar11 != '\0') {
                            iVar5 = local_c0.GetX();
                            if (iVar5 == 1) {
                                iVar16 = iVar16 + 7;
                            } else {
                                if (iVar5 != 2) {
                                    uVar6 = local_c0.GetX();
                                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/ClientVarValues.cpp",
                                                    169, "Unsupported variable type %d id %d", (unsigned long)uVar6,
                                                    (unsigned long)uVar8);
                                }
                                pbVar12 = (eastl::string*)local_c0.StrValue();
                                iVar5 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                                    *pbVar12, false);
                                iVar16 = iVar16 + 3 + iVar5;
                            }
                            local_34 = local_34 + 1;
                        }
                        ppVar9 = ppVar9 + 80;
                    } while (ppVar9 != ppVar10);
                }
                iVar16 = iVar16 + 2;
                piVar1 = &local_40->field_128;
                ppVar13 = (pair<int, rs2lib::StringVector>*)piVar1->HeapBeginPtr();
                local_d0 = (Layout*)piVar1;
                local_58 = (pair<int, rs2lib::StringVector>*)piVar1->end();
                if (ppVar13 != local_58) {
                    local_48 = (pair<int, rs2lib::StringVector>*)((unsigned long)local_48 & 18446744069414584320);
                    do {
                        new (local_c8) eastl::pair<int, rs2lib::StringVector>(*ppVar13);
                        iVar5 = local_c0.Size();
                        if (0 < iVar5) {
                            local_48 = (pair<int, rs2lib::StringVector>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                          (uint32_t)((int)local_48 + 1));
                            iVar16 = iVar16 + 4;
                            for (iVar5 = 0; iVar7 = local_c0.Size(), iVar5 < iVar7; iVar5 = iVar5 + 1) {
                                local_78 = local_c0.GetIndex(iVar5);
                                iVar7 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
                                    local_78, false);
                                iVar16 = iVar16 + iVar7;
                            }
                        }
                        ppVar13 = ppVar13 + 48;
                    } while (ppVar13 != local_58);
                }
                local_78.PacketT((long)iVar16);
                local_78.p1<unsigned long>(3);
                local_78.p2<unsigned long>((unsigned short)local_34);
                pLVar2 = local_d8;
                ppVar9 = (pair<int, HookArg>*)local_d8->HeapBeginPtr();
                ppVar10 = (pair<int, HookArg>*)pLVar2->end();
                if (ppVar9 != ppVar10) {
                    do {
                        new (local_c8) eastl::pair<int, HookArg>(*ppVar9);
                        uVar8 = local_c8[0];
                        pcVar11 = (char*)(*local_40)[(long)(int)local_c8[0]];
                        if (*pcVar11 != '\0') {
                            local_78.p2<unsigned long>((unsigned short)uVar8);
                            iVar16 = local_c0.GetX();
                            if (iVar16 == 1) {
                                local_78.p1<unsigned long>(0);
                                uVar8 = local_c0.IntValue();
                                local_78.p4<int>(uVar8);
                            } else if (iVar16 == 2) {
                                local_78.p1<unsigned long>(2);
                                pbVar12 = (eastl::string*)local_c0.StrValue();
                                local_78.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*pbVar12,
                                                                                                              false);
                            }
                        }
                        ppVar9 = ppVar9 + 80;
                    } while (ppVar9 != ppVar10);
                }
                local_78.p2<unsigned long>((unsigned short)local_48);
                pLVar2 = local_d0;
                ppVar13 = (pair<int, rs2lib::StringVector>*)local_d0->HeapBeginPtr();
                local_48 = (pair<int, rs2lib::StringVector>*)pLVar2->end();
                if (ppVar13 != local_48) {
                    do {
                        local_58 = ppVar13;
                        new (local_c8) eastl::pair<int, rs2lib::StringVector>(*ppVar13);
                        uVar8 = local_c8[0];
                        iVar16 = local_c0.Size();
                        if (0 < iVar16) {
                            local_78.p2<unsigned long>((unsigned short)uVar8);
                            local_78.p2<unsigned long>((unsigned short)iVar16);
                            iVar5 = 0;
                            do {
                                local_f8 = local_c0.GetIndex(iVar5);
                                local_78.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(local_f8,
                                                                                                              false);
                                iVar5 = iVar5 + 1;
                            } while (iVar16 != iVar5);
                        }
                        ppVar13 = local_58 + 48;
                    } while (ppVar13 != local_48);
                }
                pFVar14 = (File*)local_50.operator->();
                arg1 = (unsigned char*)local_78.GetDataPtr();
                uVar8 = local_78.size();
                pFVar14->write(arg1, uVar8, nullptr);
                pFVar14 = (File*)local_50.operator->();
                pFVar14->close(nullptr);
                local_40->field_88 = 0;
                local_40->field_96 = game::TimeTools::ActualTimeInMillis();
            }
        }
    }

    // 0x100183450
    auto ClientVarValues::GetPrefsFileForWrite() {
        uint8_t local_280[312];

        new (local_280) callstack::Callstack();
        *((local_280 + 8)) = GameShell3Cache::GetAccountDirectory();
        auto local_2a0 = GameShell3Cache::GetPrefFilePostfix("2");
        auto local_148 = (*((local_280 + 8))) / &local_2a0;
        ((local_280 + 8))->~pair();
        auto result = GameShell3Cache::OpenPrefsForWrite(local_148, *local_280);
        return result;
    }

    // 0x100183740
    auto ClientVarValues::GetPrefsFileForRead() {
        uint8_t local_288[312];

        new (local_288) callstack::Callstack();
        *((local_288 + 8)) = GameShell3Cache::GetAccountDirectory();
        auto local_2a8 = GameShell3Cache::GetPrefFilePostfix("2");
        auto local_150 = (*((local_288 + 8))) / &local_2a8;
        ((local_288 + 8))->~pair();
        auto str = constants::ContentModeInternalName(Client::Instance()->GetContentMode());
        new ((local_288 + 8)) eastl::string(str);
        auto result = GameShell3Cache::OpenPrefsForRead(local_150, "2", *((local_288 + 8)), *local_288);
        ((local_288 + 8))->~basic_string();
        return result;
    }

    // 0x1001839f0
    void ClientVarValues::Service() {
        unsigned long uVar1 = field_96;
        long lVar3 = game::TimeTools::ActualTimeInMillis();
        if (uVar1 < lVar3 - 10000U) {
            if (ArePermVarsModified() != '\0') {
                SavePermVars();
            }
        }
    }

    // 0x100183a30
    bool ClientVarValues::ArePermVarsModified() const {
        uint32_t extraout_var;
        __0* arg3;

        auto arg1 = field_128.HeapBeginPtr();
        auto arg2 = field_128.end();
        bool bVar1 = std::any_of<eastl::pair<int, rs2lib::StringVector> const*,
                                 ClientVarValues::ArePermVarsModified() const ::__0>(arg1, arg2, arg3);
        uint32_t uVar2 = (((uint32_t)extraout_var << 8) | (uint8_t)1);
        if (!bVar1) {
            uVar2 = (((uint32_t)extraout_var << 8) | (uint8_t)(field_88 != '\0'));
        }
        return uVar2;
    }

    // 0x100183c20
    StringVector* ClientVarValues::GetVeccValue(int arg1) {
        long lVar2;
        long lVar3;
        StringVector* pSVar4;
        int* this_00;
        StringVector local_78;
        pair<int, rs2lib::StringVector> local_50;

        int iVar1 = field_104.end();
        if (arg1 < iVar1) {
            this_00 = &field_128;
            lVar2 = eastl::vector_map<int, rs2lib::StringVector>::find(*this_00);
            lVar3 = this_00->end();
            if (lVar2 == lVar3) {
                local_78 = rs2lib::StringVector();
                local_50.pair<int&, void>(arg1, local_78);
                this_00->insert(local_50);
                pSVar4 = (StringVector*)(*this_00)[arg1];
            } else {
                pSVar4 = (StringVector*)(lVar2 + 8);
            }
        } else {
            pSVar4 = nullptr;
        }
        return pSVar4;
    }

} // namespace jag::oldscape

namespace jag::hal::audio::decoders::vorbis {
    // 0x100183720: VorbisDecoderPacket::~VorbisDecoderPacket() has the same machine code as oldscape::PacketJ<Array<unsigned char>>::~PacketJ()

} // namespace jag::hal::audio::decoders::vorbis
