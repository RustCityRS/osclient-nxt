// libs/game/runetek5/config/DownloadWaitHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class DownloadWaitHandler {
    public:
        ~DownloadWaitHandler();
        bool IsComplete(int) const;
        ulong CanCheck(int);
        void SetExists(int);
        void SetFlag(unsigned char&, DownloadFlags);
        byte GetFlag(unsigned char);
        byte GetTick(unsigned char);
        void SetTick(unsigned char&, unsigned int);
        void Completed(int);
        void Request(int);
        DownloadWaitHandler(int);

        // data members, from how the methods use this: 40 bytes
        long field_0; // offset 0
        long field_8; // offset 8
        char _unknown_16[16];
        uint field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x1004daa00, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // DownloadWaitHandler::~DownloadWaitHandler(): jumps straight to the base-object destructor

    // 0x1004daa10, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DownloadWaitHandler::~DownloadWaitHandler()
    /* eastl::ring_buffer<unsigned char, eastl::vector<unsigned char, eastl::allocator>,
   eastl::allocator>::~ring_buffer() */

    void eastl::ring_buffer<unsigned char, eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::
        ~ring_buffer(
            ring_buffer<unsigned char, eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* this) {
        ~vector();
    }

    // 0x1004dabb0, 32 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::IsComplete(int) const
    bool DownloadWaitHandler::IsComplete(int param_1) {
        uchar* puVar1;

        puVar1 = (uchar*)eastl::vector<unsigned char, eastl::allocator>::operator[](
            (vector<unsigned char, eastl::allocator>*)this, (long)param_1);
        return GetFlag(*puVar1) == 3;
    }

    // 0x1004dabd0, 128 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::CanCheck(int)
    ulong DownloadWaitHandler::CanCheck(int param_1) {
        int iVar1;
        uint uVar2;
        uchar* puVar3;
        undefined8 unaff_R14;
        undefined7 uVar5;
        ulong uVar4;

        puVar3 = (uchar*)eastl::vector<unsigned char, eastl::allocator>::operator[](
            (vector<unsigned char, eastl::allocator>*)this, (long)param_1);
        iVar1 = GetFlag(*puVar3);
        uVar5 = (undefined7)((ulong)unaff_R14 >> 8);
        if (iVar1 == 1) {
            uVar4 = CONCAT71(uVar5, 1);
        } else if (iVar1 == 2) {
            puVar3 = (uchar*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                (vector<unsigned char, eastl::allocator>*)this, (long)param_1);
            iVar1 = GetTick(*puVar3);
            uVar4 = CONCAT71(uVar5, iVar1 == 0);
            if (iVar1 == 0) {
                uVar2 = field_32;
            } else {
                uVar2 = iVar1 - 1;
            }
            SetTick(puVar3, uVar2);
        } else {
            uVar4 = 0;
        }
        return uVar4 & 4294967295;
    }

    // 0x1004dae40, 32 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::SetExists(int)
    void DownloadWaitHandler::SetExists(int param_1) {
        undefined8 uVar1;

        uVar1 = eastl::vector<unsigned char, eastl::allocator>::operator[](
            (vector<unsigned char, eastl::allocator>*)this, (long)param_1);
        SetFlag(uVar1, 1);
    }

    // 0x1004dae60, 32 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::SetFlag(unsigned char&, DownloadWaitHandler::DownloadFlags)
    void DownloadWaitHandler::SetFlag(byte* param_1, char param_2) {
        *param_1 = param_2 << 6 | *param_1 & 63;
    }

    // 0x1004dae80, 16 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::GetFlag(unsigned char)
    byte DownloadWaitHandler::GetFlag(uchar param_1) {
        return param_1 >> 6;
    }

    // 0x1004daed0, 16 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::GetTick(unsigned char)
    byte DownloadWaitHandler::GetTick(uchar param_1) {
        return param_1 & 63;
    }

    // 0x1004daee0, 32 bytes, inline, placed by class name and debug map
    // DownloadWaitHandler::SetTick(unsigned char&, unsigned int)
    void DownloadWaitHandler::SetTick(uchar* param_1, uint param_2) {
        *param_1 = (byte)param_2 & 63 | *param_1 & 192;
    }

    // 0x1004daf30, 32 bytes, inline, placed by class name
    // DownloadWaitHandler::Completed(int)
    void DownloadWaitHandler::Completed(int param_1) {
        undefined8 uVar1;

        uVar1 = eastl::vector<unsigned char, eastl::allocator>::operator[](
            (vector<unsigned char, eastl::allocator>*)this, (long)param_1);
        SetFlag(uVar1, 3);
    }

    // 0x1004dc8a0, 64 bytes, inline, placed by class name
    // DownloadWaitHandler::Request(int)
    void DownloadWaitHandler::Request(int param_1) {
        uchar* puVar1;

        puVar1 = (uchar*)eastl::vector<unsigned char, eastl::allocator>::operator[](
            (vector<unsigned char, eastl::allocator>*)this, (long)param_1);
        SetFlag(puVar1, 2);
        SetTick(puVar1, field_32);
    }

} // namespace jag
