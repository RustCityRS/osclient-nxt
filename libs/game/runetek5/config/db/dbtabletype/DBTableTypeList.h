// libs/game/runetek5/config/db/dbtabletype/DBTableTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x10057d980
    game::DBTableType* placement_new<game::DBTableType, game::BaseTemplateConfigTypeList<game::DBTableType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::DBTableType>*& arg2, int& arg3) {
        new (arg1) game::DBTableType(arg2, arg3);
        return arg1;
    }

    // 0x10057d9a0
    MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>*
    placement_new<MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>,
                  MakeSharedPool<game::DBTableType, 4>::RefCounterAndData*&, game::DBTableType*>(
        void* arg1, MakeSharedPool<game::DBTableType, 4>::RefCounterAndData*& arg2, game::DBTableType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>(arg2, arg3);
        return arg1;
    }

    // 0x10057d9c0
    void shared_ptr_do_enable_shared_from_this<game::DBTableType>(
        ref_counter_base* ref_counter_base, game::DBTableType* dbTableType,
        game::DBTableType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)dbTableType);
            local_38 = weak_ptr(local_48);
            dbTableType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10057ed00
    MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>::MakeSharedPoolRefCounter(
        void* arg1, game::DBTableType* dbTableType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee79f8 + 16;
        *(void**)(this + 16) = arg1;
        *(DBTableType**)(this + 24) = dbTableType;
    }

    // 0x10057ed40
    void MakeSharedPoolRefCounter<game::DBTableType, MakeSharedPool<game::DBTableType, 4>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::DBTableType, 4>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class DBTableTypeList {
    public:
        // virtual methods in vtable order
        virtual ~DBTableTypeList();
        DBTableTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                        const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x10057c820
    DBTableTypeList::DBTableTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                     const ModeGame* modeGame, const Language* language,
                                     Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<DBTableType>(configTypeListContainerStrategy, modeGame, language,
                                                  js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                  (Js5ConfigGroup*)Js5ConfigGroup::DBTABLETYPE, 4) {}

    // 0x10057cd10: DBTableTypeList::~DBTableTypeList() has the same machine code as BaseTemplateConfigTypeList<DBTableType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
