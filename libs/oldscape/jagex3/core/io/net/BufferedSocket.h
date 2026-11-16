// libs/oldscape/jagex3/core/io/net/BufferedSocket.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class BufferedSocket {
    public:
        void SetSocketConnectTimeOut(int);
        ~BufferedSocket();
        void IsOpen() const;
        void SetSocketRecvTimeOut(int);
        BufferedSocket(unsigned int);
        Initialize();
        Connect(char const*, Error*);
        void Close();
        bool Write(unsigned char const*, unsigned int, Error*);
        uint Read(unsigned char*, unsigned int, Error*);
        void PeekByte(unsigned char*, Error*);

        // data members, from how the methods use this: 212 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        int field_8; // offset 8
        char _unknown_12[116];
        undefined1 field_128; // offset 128
        undefined1 field_129; // offset 129
        char _unknown_130[30];
        uint field_160; // offset 160
        char _unknown_164[36];
        uint field_200; // offset 200
        uint field_204; // offset 204
        char _unknown_208[4];
    };

    // 0x1000bb3c0, 16 bytes, inline, placed by class name and debug map
    // BufferedSocket::SetSocketConnectTimeOut(int)
    void BufferedSocket::SetSocketConnectTimeOut(int param_1) {
        SetSocketConnectTimeOut(param_1);
    }

    // 0x1000bb3e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BufferedSocket::~BufferedSocket(): jumps straight to the base-object destructor

    // 0x1000bb7d0, 16 bytes, inline, placed by class name and debug map
    // BufferedSocket::IsOpen() const
    void BufferedSocket::IsOpen() {
        IsOpen();
    }

    // 0x1000bd010, 16 bytes, inline, placed by class name
    // BufferedSocket::SetSocketRecvTimeOut(int)
    void BufferedSocket::SetSocketRecvTimeOut(int param_1) {
        SetSocketRecvTimeOut(param_1);
    }

    // 0x100126070, 48 bytes, base-object destructor, inline, placed by class name
    // BufferedSocket::~BufferedSocket()
    void BufferedSocket::~BufferedSocket() {
        (&field_168)->~basic_string();
        (&field_136)->~Array();
        ~ClientSocket();
    }

} // namespace jag::oldscape::jagex3
