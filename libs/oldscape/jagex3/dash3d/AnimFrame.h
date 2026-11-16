// libs/oldscape/jagex3/dash3d/AnimFrame.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::dash3d {
    class AnimFrame {
    public:
        AnimFrame(shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>, shared_ptr<AnimBase> const&);
        void ResizePrecise(int, int);
        AnimFrame* operator=(AnimFrame&&);
        ~AnimFrame();
        AnimFrame(AnimFrame const&);
        AnimFrame(AnimFrame&&);
        AnimFrame();
        static /* 3 bytes */ debug;                                  // = { 1, 0, 0 }
        static Array<int, eastl::allocator> /* 24 bytes */ m_tempTi; // = Array<int,eastl::allocator>(500)
        static Array<int, eastl::allocator> /* 24 bytes */ m_tempTx; // = Array<int,eastl::allocator>(500)
        static Array<int, eastl::allocator> /* 24 bytes */ m_tempTy; // = Array<int,eastl::allocator>(500)
        static Array<int, eastl::allocator> /* 24 bytes */ m_tempTz; // = Array<int,eastl::allocator>(500)

        // data members, from how the methods use this: 121 bytes
        char _unknown_0[8];
        long field_8;  // offset 8
        uint field_16; // offset 16
        char _unknown_20[100];
        undefined1 field_120; // offset 120
    };

    // 0x10034ab10, 96 bytes, inline, placed by class name
    // AnimFrame::operator=(AnimFrame&&)
    /* AnimFrame::TEMPNAMEPLACEHOLDERVALUE(AnimFrame&&) */

    AnimFrame* AnimFrame::operator=(AnimFrame* param_1) {
        shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_24, (Array*)&param_1->field_24);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_48, (Array*)&param_1->field_48);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_72, (Array*)&param_1->field_72);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_96, (Array*)&param_1->field_96);
        field_120 = param_1->field_120;
        return this;
    }

    // 0x10034ab70, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimFrame::~AnimFrame(): jumps straight to the base-object destructor

    // 0x10034f540, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimFrame::AnimFrame(AnimFrame const&): jumps straight to the base-object constructor

    // 0x1003710b0, 64 bytes, base-object destructor, inline, placed by class name
    // AnimFrame::~AnimFrame()
    void AnimFrame::~AnimFrame() {
        (&field_96)->~Array();
        (&field_72)->~Array();
        (&field_48)->~Array();
        (&field_24)->~Array();
        ~shared_ptr();
    }

    // 0x100371430, 176 bytes, base-object constructor, inline, placed by class name
    // AnimFrame::AnimFrame(AnimFrame const&)
    void AnimFrame::AnimFrame(AnimFrame* param_1) {
        new (this) shared_ptr<Decor>(param_1);
        field_16 = param_1->field_16;
        new (&field_24, (Array*)&param_1->field_24) Array<int, eastl::allocator>();
        new (&field_48, (Array*)&param_1->field_48) Array<int, eastl::allocator>();
        new (&field_72, (Array*)&param_1->field_72) Array<int, eastl::allocator>();
        new (&field_96, (Array*)&param_1->field_96) Array<int, eastl::allocator>();
        field_120 = param_1->field_120;
    }

    // 0x100376c20, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimFrame::AnimFrame(AnimFrame&&): jumps straight to the base-object constructor

    // 0x100376c30, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimFrame::AnimFrame(): jumps straight to the base-object constructor

    // 0x100376c40, 160 bytes, base-object constructor, inline, placed by class name
    // AnimFrame::AnimFrame()
    void AnimFrame::AnimFrame() {
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        field_16 = 4294967295;
        new (&field_24) Array<int, eastl::allocator>();
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        new (&field_96) Array<int, eastl::allocator>();
        field_120 = 0;
    }

    // 0x100376ce0, 96 bytes, base-object constructor, inline, placed by class name
    // AnimFrame::AnimFrame(AnimFrame&&)
    void AnimFrame::AnimFrame(AnimFrame* param_1) {
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        field_16 = param_1->field_16;
        new (&field_24, (Array*)&param_1->field_24) Array<int, eastl::allocator>();
        new (&field_48, (Array*)&param_1->field_48) Array<int, eastl::allocator>();
        new (&field_72, (Array*)&param_1->field_72) Array<int, eastl::allocator>();
        new (&field_96, (Array*)&param_1->field_96) Array<int, eastl::allocator>();
        field_120 = param_1->field_120;
    }

} // namespace jag::oldscape::dash3d

namespace jag::oldscape {
    // 0x100349ff0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::gSmart()
    int PacketJ<Array<unsigned char, eastl::allocator>>::gSmart(PacketJ<Array<unsigned char, eastl::allocator>>* this) {
        short sVar1;

        sVar1 = gSmart1or2s();
        return (int)sVar1;
    }

} // namespace jag::oldscape
