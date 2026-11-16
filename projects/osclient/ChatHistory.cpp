// projects/osclient/ChatHistory.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ChatHistory.h"

namespace jag::oldscape {
    // 0x100f8ad20
    eastl::hash_map<int, std::unique_ptr<ChatHistory::HistoryBuffer>> ChatHistory::m_history;

    // 0x100f8ad58, set at startup by ___cxx_global_var_init.44
    eastl::list<int> ChatHistory::m_activeUids = list<int>();

    // 0x100f8ad78
    eastl::hash_map<int, shared_ptr<ChatLine>> ChatHistory::m_historyByUid;

    // 0x100f8adb0
    int64_t ChatHistory::m_nextID;

    // 0x10017ce70
    void ChatHistory::AddChat(int arg1, const eastl::string& str1, const eastl::string& str2,
                              const eastl::string& str3) {
        unique_ptr<ChatHistory::HistoryBuffer>* puVar2;
        int* piVar3;
        ListIterator<int, int const*, int const&>* local_58;

        auto local_48 = m_history.find(arg1);
        auto local_70 = m_history.end();
        if (local_48 == local_70) {
            local_48 = std::make_unique<ChatHistory::HistoryBuffer>();
            puVar2 = &m_history[arg1];
            *puVar2 = local_48;
        }
        puVar2 = &m_history[arg1];
        auto historyBuffer = puVar2->get();
        local_70 = m_activeUids.end();
        auto groundDecor = historyBuffer->AddChat(arg1, str1, str2, str3, local_70);
        local_48 = shared_ptr(groundDecor);
        auto local_60 = m_activeUids.end();
        if (local_70 != local_60) {
            piVar3 = (int*)*local_70;
            m_historyByUid.erase(*piVar3);
            new (&local_58) eastl::ListIterator(&local_70);
            local_60 = m_activeUids.erase(local_58);
        }
        auto this_00 = local_48.operator->();
        piVar3 = (int*)**this_00;
        shared_ptr<ChatLine>* this_01 = &m_historyByUid[*piVar3];
        *this_01 = local_48;
        Client::Instance()->TriggerOnChatTransmitHook();
    }

    // 0x10017d100
    void ChatHistory::HistoryBuffer::AddChat(int arg1, const eastl::string& str1, const eastl::string& str2,
                                             const eastl::string& str3,
                                             eastl::ListIterator<int, int*, int&>& listIterator) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<ChatLine>* psVar3;
        uint64_t* puVar4;
        ReturnValue local_48;

        int iVar2 = field_1604 + ((field_1604 + 1) / 100) * -100 + 1;
        field_1604 = iVar2;
        int local_34 = arg1;
        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(*this)[(long)iVar2];
        if (*midiPlayerMainThread != nullptr) {
            psVar3 = (shared_ptr<ChatLine>*)(*this)[(long)field_1604];
            puVar4 = (uint64_t*)(*psVar3).operator->();
            *(uint64_t*)listIterator = *puVar4;
            psVar3 = (shared_ptr<ChatLine>*)(*this)[(long)field_1604];
            ((ChatLine*)(*psVar3).operator->())->ReUse(local_34, str1, str3, str2);
        } else {
            make_shared<ChatLine, int&, eastl::stringconst&, eastl::stringconst&, eastl::stringconst&>(
                &local_48, &local_34, str1, str3, str2);
            psVar3 = (shared_ptr<ChatLine>*)(*this)[(long)field_1604];
            *psVar3 = local_48;
        }
        if (m_length < 100) {
            m_length = m_length + 1;
        }
        (*this)[(long)field_1604];
    }

    // 0x10017d430
    auto ChatHistory::GetNextUID() {
        int local_24 = m_nextID;
        m_nextID = m_nextID + 1;
        m_activeUids.push_back(local_24);
        auto local_30 = m_activeUids.end();
        EntityWithCoord<dash3d::Wall>** arg1 = (EntityWithCoord<dash3d::Wall>**)--local_30;
        return auto(arg1);
    }

    // 0x10017d500
    shared_ptr<dash3d::GroundDecor>* ChatHistory::GetLine(int arg1, int arg2) {
        shared_ptr<dash3d::GroundDecor>* psVar3;
        long lVar4;
        HistoryBuffer* historyBuffer;

        if (GetLine(int, int)::nullLine == '\0') {
            if (___cxa_guard_acquire(&GetLine(int, int)::nullLine) != 0) {
                new ((shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&GetLine(int, int)::nullLine) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5528, &GetLine(int, int)::nullLine, 4294967296);
                ___cxa_guard_release(&GetLine(int, int)::nullLine);
            }
        }
        auto local_40 = m_history.find(arg1);
        auto local_50 = m_history.end();
        if (local_40 == local_50 == '\0') {
            lVar4 = local_40.HeapBeginPtr();
            historyBuffer = (HistoryBuffer*)(*((lVar4 + 8))).operator->();
            psVar3 = (shared_ptr<dash3d::GroundDecor>*)historyBuffer->GetLine(arg2);
        } else {
            psVar3 = (shared_ptr<dash3d::GroundDecor>*)&GetLine(int, int)::nullLine;
        }
        return psVar3;
    }

    // 0x10017d600
    uint8_t* ChatHistory::HistoryBuffer::GetLine(int arg1) {
        if (GetLine(int)::nullLine == '\0') {
            if (___cxa_guard_acquire(&GetLine(int)::nullLine) != 0) {
                new ((shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>*)&GetLine(int)::nullLine) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5528, &GetLine(int)::nullLine, 4294967296);
                ___cxa_guard_release(&GetLine(int)::nullLine);
            }
        }
        uint8_t* puVar2 = &GetLine(int)::nullLine;
        if ((-1 < arg1) && (arg1 < m_length)) {
            puVar2 = (uint8_t*)(*this)[(long)(((field_1604 - arg1) + 100) % 100)];
        }
        return puVar2;
    }

    // 0x10017d6c0
    ChatLine* ChatHistory::GetLineByUID(int arg1) {
        long lVar2;
        ChatLine* pCVar3;

        auto local_38 = m_historyByUid.find(arg1);
        auto local_48 = m_historyByUid.end();
        if (local_38 != local_48 == '\0') {
            pCVar3 = nullptr;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            pCVar3 = (ChatLine*)((lVar2 + 8))->end();
        }
        return pCVar3;
    }

    // 0x10017d730
    void ChatHistory::GetHistoryLength(int arg1) {
        long lVar2;

        auto local_38 = m_history.find(arg1);
        auto local_48 = m_history.end();
        bool cVar1 = local_38 == local_48;
        uint64_t uVar3 = 0;
        if (!cVar1) {
            lVar2 = local_38.HeapBeginPtr();
            uVar3 = ((HistoryBuffer*)(*((lVar2 + 8))).operator->())->GetLength();
        }
        return uVar3;
    }

    // 0x10017d7b0
    int ChatHistory::HistoryBuffer::GetLength() {
        return m_length;
    }

    // 0x10017d7c0
    void ChatHistory::ResetHistory() {
        m_history.clear();
        m_historyByUid.clear();
        m_activeUids.clear();
        m_nextID = 0;
    }

    // 0x10017d860
    void ChatHistory::ResetFriendIndicators() {
        long lVar2;

        auto local_40 = m_historyByUid.begin();
        auto local_30 = m_historyByUid.end();
        bool cVar1 = local_40 != local_30;
        if (cVar1) {
            do {
                lVar2 = local_40.HeapBeginPtr();
                ((ChatLine*)(*((lVar2 + 8))).operator->())->ResetFriendIndicator();
                ++local_40;
                cVar1 = local_40 != local_30;
            } while (cVar1);
        }
    }

    // 0x10017d920
    void ChatHistory::ResetIgnoreIndicators() {
        long lVar2;

        auto local_40 = m_historyByUid.begin();
        auto local_30 = m_historyByUid.end();
        bool cVar1 = local_40 != local_30;
        if (cVar1) {
            do {
                lVar2 = local_40.HeapBeginPtr();
                ((ChatLine*)(*((lVar2 + 8))).operator->())->ResetIgnoreIndicator();
                ++local_40;
                cVar1 = local_40 != local_30;
            } while (cVar1);
        }
    }

    // 0x10017d9c0
    void ChatHistory::GetPreviousActiveUID(int arg1) {
        long lVar3;
        EntityWithCoord<dash3d::Wall>** arg1_00;
        uint32_t* puVar4;
        ReturnValue local_40;

        auto local_50 = m_historyByUid.find(arg1);
        auto local_38 = m_historyByUid.end();
        bool cVar1 = local_50 == local_38;
        uint32_t uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = local_50.HeapBeginPtr();
            arg1_00 = (EntityWithCoord<dash3d::Wall>**)(*((lVar3 + 8))).operator->();
            local_38 = eastl::ListIterator(arg1_00);
            local_40 = m_activeUids.begin();
            cVar1 = local_38 == local_40;
            uVar2 = 4294967295;
            if (!cVar1) {
                --local_38;
                puVar4 = (uint32_t*)*local_38;
                uVar2 = *puVar4;
            }
        }
        return uVar2;
    }

    // 0x10017da80
    void ChatHistory::GetNextActiveUID(int arg1) {
        long lVar3;
        EntityWithCoord<dash3d::Wall>** arg1_00;
        uint32_t* puVar4;
        ReturnValue local_40;

        auto local_50 = m_historyByUid.find(arg1);
        auto local_38 = m_historyByUid.end();
        bool cVar1 = local_50 == local_38;
        uint32_t uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = local_50.HeapBeginPtr();
            arg1_00 = (EntityWithCoord<dash3d::Wall>**)(*((lVar3 + 8))).operator->();
            local_38 = eastl::ListIterator(arg1_00);
            ++local_38;
            local_40 = m_activeUids.end();
            cVar1 = local_38 == local_40;
            uVar2 = 4294967295;
            if (!cVar1) {
                puVar4 = (uint32_t*)*local_38;
                uVar2 = *puVar4;
            }
        }
        return uVar2;
    }

    // 0x10017db40
    auto ChatHistory::GetCopyBuffer() {
        bool cVar1;
        long lVar2;
        char* pcVar3;
        basic_ostream<char, std::char_traits<char> _>* pbVar4;
        shared_ptr<ChatLine>* shared_ptr;
        basic_ostream<char, std::char_traits<char> _> local_160;

        stringstream local_170;
        auto local_48 = m_historyByUid.begin();
        auto local_58 = m_historyByUid.end();
        while (true) {
            cVar1 = local_48 != local_58;
            if (!cVar1)
                break;
            lVar2 = local_48.HeapBeginPtr();
            shared_ptr = (shared_ptr<ChatLine>*)(lVar2 + 8);
            lVar2 = (*shared_ptr).operator->();
            cVar1 = ((lVar2 + 88))->empty();
            if (!cVar1) {
                (*shared_ptr).operator->();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pbVar4 = std::operator<<(&local_160, pcVar3);
                std::operator<<(pbVar4, ':');
            }
            (*shared_ptr).operator->();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pbVar4 = std::operator<<(&local_160, pcVar3);
            std::operator<<(pbVar4, '\n');
            ++local_48;
        }
        std::stringstream::str(&local_48, &local_170);
        pcVar3 = (char*)std::string::c_str(&local_48);
        eastl::destruct<highlight::NpcUID*>(&local_58);
        auto result(pcVar3, &local_58);
        std::string::~string(&local_48);
        std::stringstream::~stringstream(&local_170);
        return result;
    }

    // 0x10017dfe0
    void ChatHistory::GetTimestampMode() {
        auto pCVar1 = Client::Instance();
        ((GameOptions*)pCVar1->field_8384.operator->())->GetChatTimestampMode();
    }

    // 0x10017e030
    void ChatHistory::SetTimestampMode(ChatTimestampMode chatTimestampMode) {
        long lVar3;

        auto pCVar2 = Client::Instance();
        ((GameOptions*)pCVar2->field_8384.operator->())->SetChatTimestampMode(chatTimestampMode);
        auto local_40 = m_historyByUid.begin();
        auto local_30 = m_historyByUid.end();
        bool cVar1 = local_40 != local_30;
        if (cVar1) {
            do {
                lVar3 = local_40.HeapBeginPtr();
                ((ChatLine*)(*((lVar3 + 8))).operator->())->ApplyTimeStamp();
                ++local_40;
                cVar1 = local_40 != local_30;
            } while (cVar1);
        }
    }

} // namespace jag::oldscape
