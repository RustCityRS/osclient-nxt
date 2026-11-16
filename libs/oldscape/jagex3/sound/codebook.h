// libs/oldscape/jagex3/sound/codebook.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class CodeBook {
    public:
        int Lookup1Values(int, int);
        CodeBook();
        void PrepareHuffman();
        uint DecodeScalar(BitUnpacker&) const;
        void DecodeVQ(BitUnpacker&) const;
        ~CodeBook();
        CodeBook(CodeBook&&);

        // data members, from how the methods use this: 88 bytes
        char _unknown_0[4];
        int field_4; // offset 4
        char _unknown_8[80];
    };

    // 0x1002aa290, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CodeBook::~CodeBook(): jumps straight to the base-object destructor

    // 0x1002aa2a0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // CodeBook::~CodeBook()
    void CodeBook::~CodeBook() {
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

    // 0x1002aa6d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CodeBook::CodeBook(CodeBook&&): jumps straight to the base-object constructor

    // 0x1002aa6e0, 96 bytes, base-object constructor, inline, placed by class name and debug map
    // CodeBook::CodeBook(CodeBook&&)
    void CodeBook::CodeBook(CodeBook* param_1) {
        int iVar1;

        iVar1 = param_1->field_4;
        *(undefined4*)&field_0 = *(undefined4*)&param_1->field_0;
        field_4 = iVar1;
        new (&field_8, (Array*)&param_1->field_8) Array<int, eastl::allocator>();
        new (&field_32, (Array*)&param_1->field_32) Array<int, eastl::allocator>();
        new (&field_56, (Array*)&param_1->field_56) Array<int, eastl::allocator>();
        new (&field_80, (Array*)&param_1->field_80) Array<Array<float, eastl::allocator>, eastl::allocator>();
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x1002abef0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::sound::PCMPlayer::PlayerTask* placement_new<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(void*, oldscape::sound::PCMPlayer&)
    PlayerTask* placement_new<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(void* param_1,
                                                                                                   PCMPlayer* param_2) {
        oldscape::sound::PCMPlayer::PlayerTask::PlayerTask(param_1, param_2);
        return param_1;
    }

    // 0x1002abf10, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>* placement_new<ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>, int, oldscape::sound::PCMPlayer::PlayerTask*&>(void*, int&&, oldscape::sound::PCMPlayer::PlayerTask*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>, int,
                                           oldscape::sound::PCMPlayer::PlayerTask*&>(void* param_1, int* param_2,
                                                                                     PlayerTask** param_3) {
        ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::ref_counter_shared(param_1, (long)*param_2,
                                                                                       *param_3);
        return param_1;
    }

    // 0x1002abf30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::ref_counter_shared(unsigned long, oldscape::sound::PCMPlayer::PlayerTask*): jumps straight to the base-object constructor

    // 0x1002abf40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::ref_counter_shared(unsigned long, oldscape::sound::PCMPlayer::PlayerTask*)
    void ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::ref_counter_shared(ulong param_1,
                                                                                        PlayerTask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7700 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PlayerTask**)(this + 24) = param_2;
    }

    // 0x1002abf80, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::DeleteData()
    /* ref_counter_shared<MixerWorker>::DeleteData() */

    void ref_counter_shared<MixerWorker>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 456;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
