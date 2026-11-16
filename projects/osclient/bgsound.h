// projects/osclient/bgsound.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class bgsound {
    public:
        void Reset();
        void RecalculateMultilocs();
        void RecalcSound();
        void AddSound(int arg1, int arg2, int arg3, const shared_ptr<configdecoder::LocType>& locType, int arg5);
        void DoMix(int arg1, int arg2, int arg3, int arg4);
        ~bgsound();
        bgsound();
        bgsound(bgsound&& bgsound);
        static int32_t m_verbose[7];               // = { 0, 16776960, 16711680, 65280, 65535, 16711935, 16777215 }
        static eastl::vector<bgsound> m_soundlist; // = vector<bgsound>()

    private:
        uint64_t field_0;
        uint8_t _unknown_8[4];
        uint64_t field_12;
        int field_20;
        int field_24;
        uint8_t _unknown_28[20];
        uint32_t field_48;
        uint32_t field_52;
        uint8_t _unknown_56[24];
        uint32_t field_80;
        uint8_t _unknown_84[28];
    };

    // 0x1001377f0
    bgsound::~bgsound() {
        field_104.~shared_ptr();
        field_88.~shared_ptr();
        field_56.~Array();
        field_32.~shared_ptr();
    }

    // 0x1001379c0
    bgsound::bgsound() : field_12(0), field_20(0), field_24(0), field_0(0) {
        *(uint64_t*)&field_8 = 0;
        new (&field_32) shared_ptr();
        field_48 = 0;
        field_52 = 0;
        new (&field_56) Array<int>();
        field_80 = 0;
        new (&field_88) shared_ptr();
        new (&field_104) shared_ptr();
    }

    // 0x100137c30
    bgsound::bgsound(bgsound&& bgsound) {
        uint64_t uVar1 = bgsound.field_0;
        uint64_t uVar2 = *(uint64_t*)&bgsound.field_8;
        int iVar3 = bgsound.field_20;
        int iVar4 = bgsound.field_24;
        field_12 = bgsound.field_12;
        field_20 = iVar3;
        field_24 = iVar4;
        field_0 = uVar1;
        *(uint64_t*)&field_8 = uVar2;
        field_32.shared_ptr<FileRSevenDebugPresetProvider, void>(bgsound.field_32);
        uint32_t uVar5 = bgsound.field_52;
        field_48 = bgsound.field_48;
        field_52 = uVar5;
        new (&field_56) Array<int>(&bgsound.field_56);
        field_80 = bgsound.field_80;
        field_88.shared_ptr<FileRSevenDebugPresetProvider, void>(bgsound.field_88);
        field_104.shared_ptr<FileRSevenDebugPresetProvider, void>(bgsound.field_104);
    }

} // namespace jag::oldscape
