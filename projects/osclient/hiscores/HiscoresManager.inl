// projects/osclient/hiscores/HiscoresManager.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class HiscoresManager {
    public:
        void UnpackHiscoresPacket(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        void UnpackHiscoresPacketInner(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        void OnHiscoresPacketError(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        void RaiseCriticalError(ErrorCapture& errorCapture, const eastl::string& str);
        uint64_t UnpackEntriesFromServerPacket(int arg1, eastl::hash_map<int, HiscoresEntry>& arg2,
                                               PacketJ<Array<unsigned char>>& packetJ);
        uint32_t UnpackOverallEntryFromServerPacket(PacketJ<Array<unsigned char>>& packetJ);
        void RaiseError(const eastl::string& str);
        void RequestFromP2PService(const eastl::string& str, HiscoresInstance hiscoresInstance);
        void RequestFromHTTP(const eastl::string& str, HiscoresInstance hiscoresInstance);
        void ServiceHTTPRequests();
        void UnpackLiteResponse(const eastl::string& str);
        void RequestHiscoresData(const eastl::string& str, HiscoresInstance hiscoresInstance);
        void GetSkillEntry(HiscoresEntry& hiscoresEntry, const eastl::string& str) const;
        void GetActivityEntry(HiscoresEntry& hiscoresEntry, const eastl::string& str) const;
        void GetSkillEntry(HiscoresEntry& hiscoresEntry, int arg2) const;
        void GetActivityEntry(HiscoresEntry& hiscoresEntry, int arg2) const;
        void GetOverallRank(HiscoresEntry& hiscoresEntry) const;
        char GetStatus() const;
        void Reset();
        void GetErrorString(eastl::string& str) const;
        void SetDataSource(HiscoresDataSource hiscoresDataSource);
        void ResetPendingRequests();
        void GetEntry(HiscoresEntry& hiscoresEntry, const eastl::hash_map<int, HiscoresEntry>& arg2,
                      const eastl::hash_map<eastl::string, int>& arg3, const eastl::string& str) const;
        void GetEntry(HiscoresEntry& hiscoresEntry, const eastl::hash_map<int, HiscoresEntry>& arg2, int arg3) const;
        HiscoresManager();
        ~HiscoresManager();
        static HiscoresEntry NULL_ENTRY; // = HiscoresEntry()

    private:
        uint8_t _unknown_0[8];
        hash_node<eastl::pair<int const, HiscoresEntry>, false>** field_8;
        unsigned long field_16;
        uint64_t field_24;
        uint8_t _unknown_32[80];
        int field_112;
        uint32_t field_116;
        long long field_120;
        uint8_t _unknown_128[112];
        uint8_t field_240;
        uint8_t _unknown_241[39];
        uint8_t field_280;
        uint8_t field_281;
        uint8_t _unknown_282[14];
        uint32_t m_dataSource;
        uint8_t _unknown_300[4];
    };

    // 0x1000170f0
    void HiscoresManager::OnHiscoresPacketError(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                ErrorCapture& errorCapture) {
        field_240 = 1;
        packetJ.gStringCP1252ToUTF8<eastl::string>(&field_248, false);
        errorCapture.Raise((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

    // 0x100017140
    void HiscoresManager::RaiseCriticalError(ErrorCapture& errorCapture, const eastl::string& str) {
        RaiseError(str);
        errorCapture.Raise((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

    // 0x100017220
    uint32_t
    HiscoresManager::UnpackOverallEntryFromServerPacket(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        long long lVar4;

        unsigned long uVar3 = packetJ.GetSpace();
        uint32_t uVar2 = (uint32_t)uVar3;
        if (11 < uVar3) {
            field_112 = packetJ.g4();
            lVar4 = packetJ.g8();
            uVar2 = (uint32_t)lVar4;
            field_120 = lVar4;
        }
        return 11 < uVar3;
    }

    // 0x100017270
    void HiscoresManager::RaiseError(const eastl::string& str) {
        Reset();
        field_240 = 1;
        field_248 = str;
    }

    // 0x1000bacb0
    void HiscoresManager::RequestHiscoresData(const eastl::string& str, HiscoresInstance hiscoresInstance) {
        ResetPendingRequests();
        if (m_dataSource == 0) {
            RequestFromP2PService(str, hiscoresInstance);
        } else {
            RequestFromHTTP(str, hiscoresInstance);
        }
    }

    // 0x1000bad00
    void HiscoresManager::GetSkillEntry(HiscoresEntry& hiscoresEntry, const eastl::string& str) const {
        GetEntry(hiscoresEntry, *this, field_128, str);
    }

    // 0x1000bad20
    void HiscoresManager::GetActivityEntry(HiscoresEntry& hiscoresEntry, const eastl::string& str) const {
        GetEntry(hiscoresEntry, field_56, field_184, str);
    }

    // 0x1000bad40
    void HiscoresManager::GetSkillEntry(HiscoresEntry& hiscoresEntry, int arg2) const {
        GetEntry(hiscoresEntry, *this, arg2);
    }

    // 0x1000bad50
    void HiscoresManager::GetActivityEntry(HiscoresEntry& hiscoresEntry, int arg2) const {
        GetEntry(hiscoresEntry, field_56, arg2);
    }

    // 0x1000bad70
    void HiscoresManager::GetOverallRank(HiscoresEntry& hiscoresEntry) const {
        uint32_t uVar2 = field_116;
        long long lVar1 = field_120;
        hiscoresEntry.field_0 = field_112;
        *(uint32_t*)&hiscoresEntry.field_4 = uVar2;
        hiscoresEntry.field_8 = lVar1;
    }

    // 0x1000bad80
    char HiscoresManager::GetStatus() const {
        char cVar2;
        long lVar3;
        void* in_RSI;

        if (&field_288 != in_RSI) {
            cVar2 = ((HTTPRequest*)field_288.operator->())->IsRequestComplete();
            if (!cVar2) {
                return '\x01';
            }
        }
        cVar2 = '\x01';
        if ((field_280 == '\0') && (cVar2 = '\x03', field_240 == '\0')) {
            lVar3 = size();
            cVar2 = '\x02';
            if (lVar3 == 0) {
                lVar3 = field_56.size();
                cVar2 = (lVar3 != 0) * '\x02';
            }
        }
        return cVar2;
    }

    // 0x1000bae10
    void HiscoresManager::Reset() {
        clear();
        field_56.clear();
        field_128.clear();
        field_184.clear();
        long long lVar2 = NULL_ENTRY.field_8;
        uint32_t uVar1 = NULL_ENTRY_4;
        field_112 = NULL_ENTRY;
        field_116 = uVar1;
        field_120 = lVar2;
        field_240 = 0;
        (&field_248)->assign("");
    }

    // 0x1000bae80
    void HiscoresManager::GetErrorString(eastl::string& str) const {
        str = &field_248;
    }

    // 0x1000baea0
    void HiscoresManager::SetDataSource(HiscoresDataSource hiscoresDataSource) {
        m_bodytype = hiscoresDataSource;
    }

} // namespace jag::oldscape
