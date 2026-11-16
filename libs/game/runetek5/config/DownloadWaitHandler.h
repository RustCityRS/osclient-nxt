// libs/game/runetek5/config/DownloadWaitHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class DownloadWaitHandler {
    public:
        ~DownloadWaitHandler();
        bool IsComplete(int arg1) const;
        unsigned long CanCheck(int arg1);
        void SetExists(int arg1);
        void SetFlag(unsigned char& arg1, DownloadFlags downloadFlags);
        uint8_t GetFlag(unsigned char arg1);
        uint8_t GetTick(unsigned char arg1);
        void SetTick(unsigned char& arg1, unsigned int arg2);
        void Completed(int arg1);
        void Request(int arg1);
        DownloadWaitHandler(int arg1);

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[16];
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x1004daa10
    DownloadWaitHandler::~DownloadWaitHandler() {}

    // 0x1004dabb0
    bool DownloadWaitHandler::IsComplete(int arg1) const {
        unsigned char* puVar1 = (unsigned char*)(*this)[(long)arg1];
        return GetFlag(*puVar1) == 3;
    }

    // 0x1004dabd0
    unsigned long DownloadWaitHandler::CanCheck(int arg1) {
        unsigned int arg2;
        uint64_t unaff_R14;
        unsigned long uVar3;

        unsigned char* puVar2 = (unsigned char*)(*this)[(long)arg1];
        int iVar1 = GetFlag(*puVar2);
        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        if (iVar1 == 1) {
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        } else if (iVar1 == 2) {
            puVar2 = (unsigned char*)(*this)[(long)arg1];
            iVar1 = GetTick(*puVar2);
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(iVar1 == 0));
            if (iVar1 == 0) {
                arg2 = field_32;
            } else {
                arg2 = iVar1 - 1;
            }
            SetTick(puVar2, arg2);
        } else {
            uVar3 = 0;
        }
        return uVar3 & 4294967295;
    }

    // 0x1004dae40
    void DownloadWaitHandler::SetExists(int arg1) {
        SetFlag((unsigned char*)(*this)[(long)arg1], 1);
    }

    // 0x1004dae60
    void DownloadWaitHandler::SetFlag(unsigned char& arg1, DownloadWaitHandler::DownloadFlags downloadFlags) {
        arg1 = (char)downloadFlags << 6 | arg1 & 63;
    }

    // 0x1004dae80
    uint8_t DownloadWaitHandler::GetFlag(unsigned char arg1) {
        return arg1 >> 6;
    }

    // 0x1004daed0
    uint8_t DownloadWaitHandler::GetTick(unsigned char arg1) {
        return arg1 & 63;
    }

    // 0x1004daee0
    void DownloadWaitHandler::SetTick(unsigned char& arg1, unsigned int arg2) {
        arg1 = (uint8_t)arg2 & 63 | arg1 & 192;
    }

    // 0x1004daf30
    void DownloadWaitHandler::Completed(int arg1) {
        SetFlag((unsigned char*)(*this)[(long)arg1], 3);
    }

    // 0x1004dc8a0
    void DownloadWaitHandler::Request(int arg1) {
        unsigned char* arg1_00 = (unsigned char*)(*this)[(long)arg1];
        SetFlag(arg1_00, 2);
        SetTick(arg1_00, field_32);
    }

} // namespace jag
