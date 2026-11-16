// libs/oldscape/jagex3/dash3d/AnimFrame.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::dash3d {
    class AnimFrame {
    public:
        AnimFrame(shared_ptr<PacketJ<Array<unsigned char>>> packetJ, const shared_ptr<AnimBase>& animBase);
        void ResizePrecise(int arg1, int arg2);
        AnimFrame* operator=(AnimFrame&& animFrame);
        ~AnimFrame();
        AnimFrame(const AnimFrame& animFrame);
        AnimFrame(AnimFrame&& animFrame);
        AnimFrame();
        static uint8_t debug[3];    // = { 1, 0, 0 }
        static Array<int> m_tempTi; // = Array<int>(500)
        static Array<int> m_tempTx; // = Array<int>(500)
        static Array<int> m_tempTy; // = Array<int>(500)
        static Array<int> m_tempTz; // = Array<int>(500)

    private:
        uint8_t _unknown_0[8];
        long field_8;
        unsigned int field_16;
        uint8_t _unknown_20[100];
        uint8_t field_120;
    };

    // 0x10034ab10
    AnimFrame* AnimFrame::operator=(AnimFrame&& animFrame) {
        *this = animFrame;
        field_16 = animFrame.field_16;
        field_24 = animFrame.field_24;
        field_48 = animFrame.field_48;
        field_72 = animFrame.field_72;
        field_96 = animFrame.field_96;
        field_120 = animFrame.field_120;
        return this;
    }

    // 0x1003710b0
    AnimFrame::~AnimFrame() {
        field_96.~Array();
        field_72.~Array();
        field_48.~Array();
        field_24.~Array();
    }

    // 0x100371430
    AnimFrame::AnimFrame(const AnimFrame& animFrame)
        : shared_ptr(animFrame), field_16(animFrame.field_16), field_24(&animFrame.field_24),
          field_48(&animFrame.field_48), field_72(&animFrame.field_72), field_96(&animFrame.field_96),
          field_120(animFrame.field_120) {}

    // 0x100376c40
    AnimFrame::AnimFrame() : shared_ptr(), field_16(4294967295), field_120(0) {}

    // 0x100376ce0
    AnimFrame::AnimFrame(AnimFrame&& animFrame) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(animFrame);
        field_16 = animFrame.field_16;
        new (&field_24) Array<int>(&animFrame.field_24);
        new (&field_48) Array<int>(&animFrame.field_48);
        new (&field_72) Array<int>(&animFrame.field_72);
        new (&field_96) Array<int>(&animFrame.field_96);
        field_120 = animFrame.field_120;
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x100349ff0
    int PacketJ<Array<unsigned char>>::gSmart() {
        short sVar1 = gSmart1or2s();
        return (int)sVar1;
    }

} // namespace jag::oldscape
