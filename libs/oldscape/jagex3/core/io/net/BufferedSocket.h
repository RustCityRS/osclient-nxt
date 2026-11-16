// libs/oldscape/jagex3/core/io/net/BufferedSocket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jagex3 {
    class BufferedSocket {
    public:
        void SetSocketConnectTimeOut(int arg1);
        ~BufferedSocket();
        void IsOpen() const;
        void SetSocketRecvTimeOut(int arg1);
        BufferedSocket(unsigned int arg1);
        uint8_t Initialize();
        uint32_t Connect(const char* str, Error* error);
        void Close();
        bool Write(const unsigned char* arg1, unsigned int arg2, Error* error);
        unsigned int Read(unsigned char* arg1, unsigned int arg2, Error* error);
        void PeekByte(unsigned char* arg1, Error* error);

    private:
        int field_0;
        int field_4;
        int field_8;
        uint8_t _unknown_12[116];
        uint8_t field_128;
        uint8_t field_129;
        uint8_t _unknown_130[30];
        unsigned int field_160;
        uint8_t _unknown_164[36];
        unsigned int field_200;
        unsigned int field_204;
        uint8_t _unknown_208[4];
    };

    // 0x1000bb3c0
    void BufferedSocket::SetSocketConnectTimeOut(int arg1) {
        SetSocketConnectTimeOut(arg1);
    }

    // 0x1000bb7d0
    void BufferedSocket::IsOpen() const {
        IsOpen();
    }

    // 0x1000bd010
    void BufferedSocket::SetSocketRecvTimeOut(int arg1) {
        SetSocketRecvTimeOut(arg1);
    }

    // 0x100126070
    BufferedSocket::~BufferedSocket() {
        field_168.~basic_string();
        field_136.~Array();
    }

} // namespace jag::oldscape::jagex3
