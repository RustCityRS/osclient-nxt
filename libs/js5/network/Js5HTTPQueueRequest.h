// libs/js5/network/Js5HTTPQueueRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5HTTPQueueRequest {
    public:
        Priority* GetPriority() const;
        void SetProxyPassword(const char* configProvider);
        Js5HTTPQueueRequest(unsigned int arg1, unsigned int arg2, int arg3, int arg4, unsigned int arg5, bool arg6,
                            std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char>>&,
                                               PacketT<Array<unsigned char>>&&, bool)>
                                callback1,
                            std::function<void(unsigned int, unsigned int, bool)> callback2,
                            PacketT<Array<unsigned char>>&& arg9, const Priority* priority);
        void SetProxyUserName(const char* str);
        unsigned int GetKey() const;
        ~Js5HTTPQueueRequest();
        void Service();
        bool IsComplete();
        bool IsFailed();
        void Send(const eastl::string& str);
        void DownloadComplete();
        void DownloadFailed();

    private:
        unsigned int field_0;
        unsigned int field_4;
        int field_8;
        int field_12;
        bool field_16;
        uint8_t _unknown_17[3];
        unsigned int field_20;
        VBOMapper field_24;
        Priority* m_pPriority;
        uint8_t _unknown_64[96];
        uint8_t field_160;
        uint8_t _unknown_161[7];
        VBOMapper field_168;
        char m_complete;
        char field_201;
        uint8_t _unknown_202[6];
        char* m_pProxyUserName;
        ConfigProvider* m_pProxyPassword;
    };

    // 0x1009f1790
    void Js5HTTPQueueRequest::SetProxyUserName(const char* str) {
        m_pProxyUserName = str;
    }

    // 0x1009f17a0
    unsigned int Js5HTTPQueueRequest::GetKey() const {
        return field_4 << 8 | field_0;
    }

} // namespace jag
