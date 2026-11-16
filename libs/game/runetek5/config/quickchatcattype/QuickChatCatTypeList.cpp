// libs/game/runetek5/config/quickchatcattype/QuickChatCatTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "QuickChatCatTypeList.h"

namespace jag::game {
    // 0x1004f5a10
    QuickChatCatTypeList::QuickChatCatTypeList(Array<eastl::vector<PacketT<Array<unsigned char>>>>& arg1)
        : LRUCache<QuickChatCatType>(64, "LRUCache"), field_3336(arg1) {}

    // 0x1004f5a60
    auto QuickChatCatTypeList::GetQuickChatCatType(unsigned int arg1) {
        vector<PacketT<Array<unsigned char>>>* this_00;
        PacketJ<Array<unsigned char> _>* packetJ;
        VBOMapper local_68;
        ReturnValue local_38;

        unsigned int local_24 = arg1;
        auto psVar2 = Find((unsigned long)arg1);
        shared_ptr local_48(psVar2);
        if (shared_ptr::operator_cast_to_bool(&local_48) == '\0') {
            this_00 = (vector<PacketT<Array<unsigned char>>>*)(*field_3336)[0];
            packetJ = (PacketJ<Array<unsigned char> _>*)(*this_00)[(unsigned long)local_24];
            local_68 = PacketT(packetJ);
            local_68.SetPos(0);
            make_shared<QuickChatCatType, unsigned int&>(&local_38, &local_24);
            ((QuickChatCatType*)local_38.operator->())->Decode(local_68);
            psVar2 = (shared_ptr<oldscape::dash3d::GroundDecor>*)Put(local_38, 1, (unsigned long)local_24);
            auto result(psVar2);
        } else {
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
        }
        return result;
    }

} // namespace jag::game

namespace jag {
    // 0x1004f5c20
    shared_ptr_if_not_array<game::QuickChatCatType>::type
    make_shared<game::QuickChatCatType, unsigned int&>(unsigned int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        QuickChatCatType* local_30[2];

        auto arg1_00 = aligned_alloc(136, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::QuickChatCatType>::type result;
        } else {
            local_30[0] = placement_new<game::QuickChatCatType, unsigned int&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::QuickChatCatType>, int, game::QuickChatCatType*&>(
                    arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
