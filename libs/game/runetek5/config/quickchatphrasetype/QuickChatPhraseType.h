// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhraseType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class QuickChatPhraseType {
    public:
        IsSearchable() const;
        QuickChatPhraseType(int, QuickChatPhraseTypeList&);
        ~QuickChatPhraseType();
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        void DecodeType(PacketT<Array<unsigned char, eastl::allocator>>&, unsigned int);
        GetDynamicCommand(int) const;
        GetDynamicCommandParameter(int, int) const;
        GetAutoResponseId(int) const;
        GetText(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        GetTextDisplay();
        void PackTransmitValues(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                eastl::vector<int, eastl::allocator> const&);

        // data members, from how the methods use this: 144 bytes
        undefined8 field_0;    // offset 0
        basic_string* field_8; // offset 8
        char _unknown_16[16];
        undefined1 field_32; // offset 32
        char _unknown_33[63];
        undefined1 field_96; // offset 96
        char _unknown_97[31];
        undefined1 field_128; // offset 128
        char _unknown_129[3];
        int field_132;                      // offset 132
        QuickChatPhraseTypeList* field_136; // offset 136
    };

    // 0x1004dd430, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // QuickChatPhraseType::IsSearchable() const
    /* Js5NetQueueRequest::IsRequested() const */

    undefined1 Js5NetQueueRequest::IsRequested() {
        return m_requested;
    }

    // 0x1004e2ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // QuickChatPhraseType::QuickChatPhraseType(int, QuickChatPhraseTypeList&): jumps straight to the base-object constructor

    // 0x1004e2ad0, 160 bytes, base-object constructor, inline, placed by class name
    // QuickChatPhraseType::QuickChatPhraseType(int, QuickChatPhraseTypeList&)
    void QuickChatPhraseType::QuickChatPhraseType(int param_1, QuickChatPhraseTypeList* param_2) {
        new (this) MakeSharedPool<QuickChatPhraseType, 0>();
        new (this) eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>, eastl::allocator>();
        new (&field_32) eastl::vector<int, eastl::allocator>();
        new (&field_64) eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>();
        new (&field_96) eastl::vector<int, eastl::allocator>();
        field_128 = 1;
        field_132 = param_1;
        field_136 = param_2;
    }

    // 0x1004e3cb0, 16 bytes, complete-object destructor, inline, placed by class name
    // QuickChatPhraseType::~QuickChatPhraseType(): jumps straight to the base-object destructor

    // 0x1004e3cc0, 64 bytes, base-object destructor, inline, placed by class name
    // QuickChatPhraseType::~QuickChatPhraseType()
    void QuickChatPhraseType::~QuickChatPhraseType() {
        (&field_96)->~vector();
        (&field_64)->~vector();
        (&field_32)->~vector();
        ~vector();
    }

} // namespace jag::game

namespace jag {
    // 0x1004dd4e0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::QuickChatPhraseType>::type make_shared<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(unsigned int&, game::QuickChatPhraseTypeList&)
    jag* make_shared<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(
        uint* param_1, QuickChatPhraseTypeList* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        QuickChatPhraseType* local_38[2];

        pvVar1 = (void*)aligned_alloc(176, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<game::QuickChatPhraseType>, int, game::QuickChatPhraseType*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1004dd740, 128 bytes, inline, placed by debug map only (low confidence)
    // eastl::basic_string<char, BucketAllocatorEASTL> ToString<eastl::basic_string<char, BucketAllocatorEASTL>, int>(int const&, unsigned int)
    jag* ToString<eastl::basic_string<char, BucketAllocatorEASTL>, int>(int* param_1, uint param_2) {
        NpcUID* extraout_RDX;
        eastl local_70[8];
        BucketAllocatorEASTL local_68[64];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ToText((char*)local_68, 64, *param_1, param_2);
        eastl::destruct<oldscape::highlight::NpcUID*>(local_70, (NpcUID*)"EASTL basic_string", extraout_RDX);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)this, local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag
