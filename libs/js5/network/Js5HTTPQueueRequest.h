// libs/js5/network/Js5HTTPQueueRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5HTTPQueueRequest {
    public:
        GetPriority() const;
        void SetProxyPassword(char const*);
        Js5HTTPQueueRequest(
            unsigned int, unsigned int, int, int, unsigned int, bool,
            std::function<void(unsigned int, unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&,
                               PacketT<Array<unsigned char, eastl::allocator>>&&, bool)>,
            std::function<void(unsigned int, unsigned int, bool)>, PacketT<Array<unsigned char, eastl::allocator>>&&,
            Priority const*);
        void SetProxyUserName(char const*);
        uint GetKey() const;
        ~Js5HTTPQueueRequest();
        void Service();
        char IsComplete();
        bool IsFailed();
        void Send(eastl::string const&);
        void DownloadComplete();
        void DownloadFailed();

        // data members, from how the methods use this: 224 bytes
        undefined4 field_0;  // offset 0
        undefined4 field_4;  // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        bool field_16;       // offset 16
        char _unknown_17[3];
        undefined4 field_20;   // offset 20
        VBOMapper field_24;    // offset 24
        undefined8 m_priority; // offset 56
        char _unknown_64[104];
        VBOMapper field_168; // offset 168
        char m_complete;     // offset 200
        char field_201;      // offset 201
        char _unknown_202[6];
        char* m_pProxyUserName; // offset 208
        char* m_pProxyPassword; // offset 216
    };

    // 0x1009f1790, 16 bytes, inline, placed by class name and debug map
    // Js5HTTPQueueRequest::SetProxyUserName(char const*)
    void Js5HTTPQueueRequest::SetProxyUserName(char* param_1) {
        m_pProxyUserName = param_1;
    }

    // 0x1009f17a0, 16 bytes, inline, placed by class name and debug map
    // Js5HTTPQueueRequest::GetKey() const
    uint Js5HTTPQueueRequest::GetKey() {
        return field_4 << 8 | field_0;
    }

} // namespace jag
