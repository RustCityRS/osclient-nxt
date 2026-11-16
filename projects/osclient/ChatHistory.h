// projects/osclient/ChatHistory.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class ChatHistory {
    public:
        class HistoryBuffer;
        void AddChat(int, eastl::string const&, eastl::string const&, eastl::string const&);
        ChatHistory* GetNextUID();
        GetLine(int, int);
        GetLineByUID(int);
        GetHistoryLength(int);
        void ResetHistory();
        void ResetFriendIndicators();
        void ResetIgnoreIndicators();
        GetPreviousActiveUID(int);
        GetNextActiveUID(int);
        ChatHistory* GetCopyBuffer();
        void GetTimestampMode();
        void SetTimestampMode(ChatTimestampMode);
        static /* 56 bytes */ m_history;
        static eastl::list<int, eastl::allocator> /* 32 bytes */ m_activeUids; // = list<int,eastl::allocator>()
        static /* 56 bytes */ m_historyByUid;
        static /* 8 bytes */ m_nextID;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class ChatHistory::HistoryBuffer {
    public:
        void AddChat(int, eastl::string const&, eastl::string const&, eastl::string const&,
                     eastl::ListIterator<int, int*, int&>&);
        GetLine(int);
        int GetLength();
        HistoryBuffer();
        ~HistoryBuffer();

        // data members, from how the methods use this: 1612 bytes
        char _unknown_0[1600];
        int m_length;   // offset 1600
        int field_1604; // offset 1604
        char _unknown_1608[4];
    };

    // 0x1001a77b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ChatHistory::HistoryBuffer::HistoryBuffer(): jumps straight to the base-object constructor

    // 0x1001a77d0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // ChatHistory::HistoryBuffer::HistoryBuffer()
    void ChatHistory::HistoryBuffer::HistoryBuffer() {
        std::array<shared_ptr<ChatLine>, 100ul>::array();
        m_length = 0;
        field_1604 = -1;
    }

    // 0x1001a7950, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ChatHistory::HistoryBuffer::~HistoryBuffer(): jumps straight to the base-object destructor

    // 0x1001a7960, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ChatHistory::HistoryBuffer::~HistoryBuffer()
    void ChatHistory::HistoryBuffer::~HistoryBuffer() {
        ~array();
    }

} // namespace jag::oldscape
