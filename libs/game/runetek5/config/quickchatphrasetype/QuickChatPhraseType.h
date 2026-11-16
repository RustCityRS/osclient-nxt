// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhraseType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class QuickChatPhraseType {
    public:
        bool IsSearchable() const;
        QuickChatPhraseType(int arg1, QuickChatPhraseTypeList& quickChatPhraseTypeList);
        ~QuickChatPhraseType();
        void Decode(PacketT<Array<unsigned char>>& arg1);
        void DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2);
        uint64_t GetDynamicCommand(int arg1) const;
        uint32_t GetDynamicCommandParameter(int arg1, int arg2) const;
        uint32_t GetAutoResponseId(int arg1) const;
        QuickChatPhraseType* GetText(PacketT<Array<unsigned char>>& arg1);
        auto GetTextDisplay();
        void PackTransmitValues(PacketT<Array<unsigned char>>& arg1, const eastl::vector<int>& arg2);

    private:
        long field_0;
        eastl::string* field_8;
        uint8_t _unknown_16[112];
        uint8_t m_searchable;
        uint8_t _unknown_129[3];
        int field_132;
        QuickChatPhraseTypeList* field_136;
    };

    // 0x1004dd430
    bool QuickChatPhraseType::IsSearchable() const {
        return m_requested;
    }

    // 0x1004e2ad0
    QuickChatPhraseType::QuickChatPhraseType(int arg1, QuickChatPhraseTypeList& quickChatPhraseTypeList)
        : MakeSharedPool<QuickChatPhraseType, 0>(), eastl::vector<eastl::basic_string<char, BucketAllocatorEASTL>>(),
          m_searchable(1), field_132(arg1), field_136(quickChatPhraseTypeList) {}

    // 0x1004e3cc0
    QuickChatPhraseType::~QuickChatPhraseType() {
        field_96.~vector();
        field_64.~vector();
        field_32.~vector();
    }

} // namespace jag::game

namespace jag {
    // 0x1004dd4e0
    shared_ptr_if_not_array<game::QuickChatPhraseType>::type
    make_shared<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(
        unsigned int& arg1, game::QuickChatPhraseTypeList& quickChatPhraseTypeList) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        QuickChatPhraseType* local_38[2];

        auto arg1_00 = aligned_alloc(176, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::QuickChatPhraseType>::type result;
        } else {
            local_38[0] = placement_new<game::QuickChatPhraseType, unsigned int&, game::QuickChatPhraseTypeList&>(
                (void*)((long)arg1_00 + 32), arg1, quickChatPhraseTypeList);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::QuickChatPhraseType>, int, game::QuickChatPhraseType*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1004dd740
    eastl::basic_string<char, BucketAllocatorEASTL>
    ToString<eastl::basic_string<char, BucketAllocatorEASTL>, int>(const int& arg1, unsigned int arg2) {
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        eastl local_70;
        char local_68[64];

        ToText(local_68, 64, *(int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), in_EDX);
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_70);
        new (arg1) eastl::basic_string<char, BucketAllocatorEASTL>(local_68, &local_70);
        return arg1;
    }

} // namespace jag
