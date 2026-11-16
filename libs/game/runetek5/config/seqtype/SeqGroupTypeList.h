// libs/game/runetek5/config/seqtype/SeqGroupTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class SeqGroupTypeList {
    public:
        // virtual methods in vtable order
        virtual ~SeqGroupTypeList();
        SeqGroupTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                         const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005bdda0
    SeqGroupTypeList::SeqGroupTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                       const ModeGame* modeGame, const Language* language,
                                       Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<SeqGroupType>(configTypeListContainerStrategy, modeGame, language,
                                                   js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                   (Js5ConfigGroup*)Js5ConfigGroup::SEQGROUPTYPE, 64) {}

    // 0x1005be290: SeqGroupTypeList::~SeqGroupTypeList() has the same machine code as BaseTemplateConfigTypeList<SeqGroupType>::~BaseTemplateConfigTypeList()

} // namespace jag::game

namespace jag {
    // 0x1005bef00
    game::SeqGroupType* placement_new<game::SeqGroupType, game::BaseTemplateConfigTypeList<game::SeqGroupType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::SeqGroupType>*& arg2, int& arg3) {
        new (arg1) game::SeqGroupType(arg2, arg3);
        return arg1;
    }

    // 0x1005bef20
    MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>*
    placement_new<MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>,
                  MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData*&, game::SeqGroupType*>(
        void* arg1, MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData*& arg2, game::SeqGroupType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::SeqGroupType, MakeSharedPool<game::SeqGroupType, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x1005bef40
    void shared_ptr_do_enable_shared_from_this<game::SeqGroupType>(
        ref_counter_base* ref_counter_base, game::SeqGroupType* seqGroupType,
        game::SeqGroupType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)seqGroupType);
            local_38 = weak_ptr(local_48);
            seqGroupType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

} // namespace jag
