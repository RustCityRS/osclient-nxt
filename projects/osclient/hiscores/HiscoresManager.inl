// projects/osclient/hiscores/HiscoresManager.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class HiscoresManager {
    public:
        void UnpackHiscoresPacket(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, ErrorCapture&);
        void UnpackHiscoresPacketInner(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, ErrorCapture&);
        void OnHiscoresPacketError(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, ErrorCapture&);
        void RaiseCriticalError(ErrorCapture&, eastl::string const&);
        UnpackEntriesFromServerPacket(
            int, eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
            PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        UnpackOverallEntryFromServerPacket(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void RaiseError(eastl::string const&);
        void RequestFromP2PService(eastl::string const&, HiscoresInstance);
        void RequestFromHTTP(eastl::string const&, HiscoresInstance);
        void ServiceHTTPRequests();
        void UnpackLiteResponse(eastl::string const&);
        void RequestHiscoresData(eastl::string const&, HiscoresInstance);
        void GetSkillEntry(HiscoresEntry&, eastl::string const&) const;
        void GetActivityEntry(HiscoresEntry&, eastl::string const&) const;
        void GetSkillEntry(HiscoresEntry&, int) const;
        void GetActivityEntry(HiscoresEntry&, int) const;
        void GetOverallRank(HiscoresEntry&) const;
        char GetStatus() const;
        void Reset();
        void GetErrorString(eastl::string&) const;
        SetDataSource(HiscoresDataSource);
        void ResetPendingRequests();
        void GetEntry(
            HiscoresEntry&,
            eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
            eastl::hash_map<eastl::string, int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                            eastl::allocator, false> const&,
            eastl::string const&) const;
        void GetEntry(
            HiscoresEntry&,
            eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&,
            int) const;
        HiscoresManager();
        ~HiscoresManager();
        static HiscoresEntry /* 16 bytes */ NULL_ENTRY; // = HiscoresEntry()

        // data members, from how the methods use this: 304 bytes
        char _unknown_0[8];
        hash_node** field_8; // offset 8
        ulong field_16;      // offset 16
        undefined8 field_24; // offset 24
        char _unknown_32[80];
        int field_112;        // offset 112
        undefined4 field_116; // offset 116
        longlong field_120;   // offset 120
        char _unknown_128[112];
        undefined1 field_240; // offset 240
        char _unknown_241[39];
        undefined1 field_280; // offset 280
        char field_281;       // offset 281
        char _unknown_282[14];
        undefined4 field_296; // offset 296
        char _unknown_300[4];
    };

    // 0x1000170f0, 80 bytes, inline, placed by class name and debug map
    // HiscoresManager::OnHiscoresPacketError(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, ErrorCapture&)
    void HiscoresManager::OnHiscoresPacketError(PacketJ* param_1, ErrorCapture* param_2) {
        char* pcVar1;

        field_240 = 1;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
            (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1, (basic_string*)&field_248,
            false);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_2->Raise(pcVar1);
    }

    // 0x100017140, 48 bytes, inline, placed by class name and debug map
    // HiscoresManager::RaiseCriticalError(ErrorCapture&, eastl::string const&)
    void HiscoresManager::RaiseCriticalError(ErrorCapture* param_1, basic_string* param_2) {
        char* pcVar1;

        RaiseError(this, param_2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->Raise(pcVar1);
    }

    // 0x100017220, 80 bytes, inline, placed by class name and debug map
    // HiscoresManager::UnpackOverallEntryFromServerPacket(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    undefined4 HiscoresManager::UnpackOverallEntryFromServerPacket(PacketJ* param_1) {
        int iVar1;
        undefined4 uVar2;
        ulong uVar3;
        longlong lVar4;

        uVar3 = param_1->GetSpace();
        uVar2 = (undefined4)uVar3;
        if (11 < uVar3) {
            iVar1 = param_1->g4();
            field_112 = iVar1;
            lVar4 = param_1->g8();
            uVar2 = (undefined4)lVar4;
            field_120 = lVar4;
        }
        return CONCAT31((int3)((uint)uVar2 >> 8), 11 < uVar3);
    }

    // 0x100017270, 48 bytes, inline, placed by class name and debug map
    // HiscoresManager::RaiseError(eastl::string const&)
    void HiscoresManager::RaiseError(basic_string* param_1) {
        Reset(this);
        field_240 = 1;
        eastl::string::operator=((eastl::string*)&field_248, param_1);
    }

    // 0x1000bacb0, 80 bytes, inline, placed by class name and debug map
    // HiscoresManager::RequestHiscoresData(eastl::string const&, HiscoresInstance)
    void HiscoresManager::RequestHiscoresData(undefined8 param_1, undefined4 param_3) {
        ResetPendingRequests(this);
        if (field_296 == 0) {
            RequestFromP2PService(this, param_1, param_3);
        } else {
            RequestFromHTTP(this, param_1, param_3);
        }
    }

    // 0x1000bad00, 32 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetSkillEntry(HiscoresEntry&, eastl::string const&) const
    void HiscoresManager::GetSkillEntry(HiscoresEntry* param_1, basic_string* param_2) {
        GetEntry(this, param_1, (hash_map*)this, (hash_map*)&field_128, param_2);
    }

    // 0x1000bad20, 32 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetActivityEntry(HiscoresEntry&, eastl::string const&) const
    void HiscoresManager::GetActivityEntry(HiscoresEntry* param_1, basic_string* param_2) {
        GetEntry(this, param_1, (hash_map*)&field_56, (hash_map*)&field_184, param_2);
    }

    // 0x1000bad40, 16 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetSkillEntry(HiscoresEntry&, int) const
    void HiscoresManager::GetSkillEntry(HiscoresEntry* param_1, int param_2) {
        GetEntry(this, param_1, (hash_map*)this, param_2);
    }

    // 0x1000bad50, 32 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetActivityEntry(HiscoresEntry&, int) const
    void HiscoresManager::GetActivityEntry(HiscoresEntry* param_1, int param_2) {
        GetEntry(this, param_1, (hash_map*)&field_56, param_2);
    }

    // 0x1000bad70, 16 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetOverallRank(HiscoresEntry&) const
    void HiscoresManager::GetOverallRank(HiscoresEntry* param_1) {
        longlong lVar1;
        undefined4 uVar2;

        uVar2 = field_116;
        lVar1 = field_120;
        param_1->field_0 = field_112;
        *(undefined4*)&param_1->field_4 = uVar2;
        param_1->field_8 = lVar1;
    }

    // 0x1000bad80, 144 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetStatus() const
    char HiscoresManager::GetStatus() {
        char cVar2;
        HTTPRequest* this_00;
        long lVar3;
        _func_decltype_nullptr* in_RSI;

        if (std::operator!=((unique_ptr*)&field_288, in_RSI)) {
            this_00 =
                (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_288);
            cVar2 = this_00->IsRequestComplete();
            if (cVar2 == '\0') {
                return '\x01';
            }
        }
        cVar2 = '\x01';
        if ((field_280 == '\0') && (cVar2 = '\x03', field_240 == '\0')) {
            lVar3 = size();
            cVar2 = '\x02';
            if (lVar3 == 0) {
                lVar3 = (&field_56)->size();
                cVar2 = (lVar3 != 0) * '\x02';
            }
        }
        return cVar2;
    }

    // 0x1000bae10, 112 bytes, inline, placed by class name and debug map
    // HiscoresManager::Reset()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* HiscoresManager::Reset() */

    void HiscoresManager::Reset() {
        undefined4 uVar1;
        longlong lVar2;

        clear();
        (&field_56)->clear();
        (&field_128)->clear();
        (&field_184)->clear();
        lVar2 = lRam0000000100f8a640;
        uVar1 = NULL_ENTRY_4;
        field_112 = _NULL_ENTRY;
        field_116 = uVar1;
        field_120 = lVar2;
        field_240 = 0;
        (&field_248, "")->assign();
    }

    // 0x1000bae80, 32 bytes, inline, placed by class name and debug map
    // HiscoresManager::GetErrorString(eastl::string&) const
    void HiscoresManager::GetErrorString(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)param_1, (basic_string*)&field_248);
    }

    // 0x1000baea0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HiscoresManager::SetDataSource(HiscoresDataSource)
    /* rs2lib::PlayerModel::SetBodytype(int) */

    void rs2lib::PlayerModel::SetBodytype(int param_1) {
        m_bodytype = param_1;
    }

} // namespace jag::oldscape
