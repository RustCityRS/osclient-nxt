// libs/oldscape/jagex3/sound/codebook.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1002abef0
    oldscape::sound::PCMPlayer::PlayerTask*
    placement_new<oldscape::sound::PCMPlayer::PlayerTask, oldscape::sound::PCMPlayer&>(
        void* arg1, oldscape::sound::PCMPlayer& pcmPlayer) {
        new (arg1) oldscape::sound::PCMPlayer::PlayerTask(pcmPlayer);
        return arg1;
    }

    // 0x1002abf10
    ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>*
    placement_new<ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>, int,
                  oldscape::sound::PCMPlayer::PlayerTask*&>(void* arg1, int&& arg2,
                                                            oldscape::sound::PCMPlayer::PlayerTask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002abf40
    ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::ref_counter_shared(
        unsigned long arg1, oldscape::sound::PCMPlayer::PlayerTask* playerTask)
        : ref_counter_base() {}

    // 0x1002abf80
    void ref_counter_shared<oldscape::sound::PCMPlayer::PlayerTask>::DeleteData() {
        long lVar1;
        ref_counter_shared<MixerWorker> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<MixerWorker> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 456;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::sound {
    class CodeBook {
    public:
        int Lookup1Values(int arg1, int arg2);
        CodeBook();
        void PrepareHuffman();
        unsigned int DecodeScalar(BitUnpacker& bitUnpacker) const;
        Array<float>* DecodeVQ(BitUnpacker& bitUnpacker) const;
        ~CodeBook();
        CodeBook(CodeBook&& codeBook);

    private:
        uint8_t _unknown_0[4];
        int field_4;
        uint8_t _unknown_8[80];
    };

    // 0x1002aa2a0
    CodeBook::~CodeBook() {
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
        field_8.~Array();
    }

    // 0x1002aa6e0
    CodeBook::CodeBook(CodeBook&& codeBook) {
        int iVar1 = codeBook.field_4;
        *(uint32_t*)&field_0 = *(uint32_t*)&codeBook.field_0;
        field_4 = iVar1;
        new (&field_8) Array<int>(&codeBook.field_8);
        new (&field_32) Array<int>(&codeBook.field_32);
        new (&field_56) Array<int>(&codeBook.field_56);
        new (&field_80) Array<Array<float>>(&codeBook.field_80);
    }

} // namespace jag::oldscape::sound
