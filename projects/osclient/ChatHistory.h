// projects/osclient/ChatHistory.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ChatHistory {
    public:
        class HistoryBuffer;
        void AddChat(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3);
        auto GetNextUID();
        shared_ptr<dash3d::GroundDecor>* GetLine(int arg1, int arg2);
        ChatLine* GetLineByUID(int arg1);
        void GetHistoryLength(int arg1);
        void ResetHistory();
        void ResetFriendIndicators();
        void ResetIgnoreIndicators();
        void GetPreviousActiveUID(int arg1);
        void GetNextActiveUID(int arg1);
        auto GetCopyBuffer();
        void GetTimestampMode();
        void SetTimestampMode(ChatTimestampMode chatTimestampMode);
        static eastl::hash_map<int, std::unique_ptr<HistoryBuffer>> m_history;
        static eastl::list<int> m_activeUids; // = list<int>()
        static eastl::hash_map<int, shared_ptr<ChatLine>> m_historyByUid;
        static int64_t m_nextID;

        uint8_t _unknown_0[1];
    };

    class ChatHistory::HistoryBuffer {
    public:
        void AddChat(int arg1, const eastl::string& str1, const eastl::string& str2, const eastl::string& str3,
                     eastl::ListIterator<int, int*, int&>& listIterator);
        uint8_t* GetLine(int arg1);
        int GetLength();
        HistoryBuffer();
        ~HistoryBuffer();

    private:
        uint8_t _unknown_0[1600];
        int m_length;
        int field_1604;
        uint8_t _unknown_1608[4];
    };

    // 0x1001a77d0
    ChatHistory::HistoryBuffer::HistoryBuffer()
        : std::array<shared_ptr<ChatLine>, 100ul>(), m_length(0), field_1604(-1) {}

    // 0x1001a7960
    ChatHistory::HistoryBuffer::~HistoryBuffer() {}

} // namespace jag::oldscape
