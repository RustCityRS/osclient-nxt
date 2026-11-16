// libs/game/runetek5/config/db/dbrowtype/DBRowTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100577eb0
    game::DBRowType* placement_new<game::DBRowType, game::BaseTemplateConfigTypeList<game::DBRowType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::DBRowType>*& arg2, int& arg3) {
        new (arg1) game::DBRowType(arg2, arg3);
        return arg1;
    }

    // 0x100577ed0
    MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>*
    placement_new<MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>,
                  MakeSharedPool<game::DBRowType, 128>::RefCounterAndData*&, game::DBRowType*>(
        void* arg1, MakeSharedPool<game::DBRowType, 128>::RefCounterAndData*& arg2, game::DBRowType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>(arg2, arg3);
        return arg1;
    }

    // 0x100577ef0
    void
    shared_ptr_do_enable_shared_from_this<game::DBRowType>(ref_counter_base* ref_counter_base,
                                                           game::DBRowType* dbRowType,
                                                           game::DBRowType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)dbRowType);
            local_38 = weak_ptr(local_48);
            dbRowType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x100579630
    MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>::MakeSharedPoolRefCounter(
        void* arg1, game::DBRowType* dbRowType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b40 + 16;
        *(void**)(this + 16) = arg1;
        *(DBRowType**)(this + 24) = dbRowType;
    }

    // 0x100579670
    void MakeSharedPoolRefCounter<game::DBRowType, MakeSharedPool<game::DBRowType, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::DBRowType, 128>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class DBRowTypeList {
    public:
        // virtual methods in vtable order
        virtual ~DBRowTypeList();
        DBRowTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                      const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x100576d60
    DBRowTypeList::DBRowTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                 const ModeGame* modeGame, const Language* language,
                                 Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<DBRowType>(configTypeListContainerStrategy, modeGame, language,
                                                js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                (Js5ConfigGroup*)Js5ConfigGroup::DBROWTYPE, 128) {}

    // 0x100577250: DBRowTypeList::~DBRowTypeList() has the same machine code as BaseTemplateConfigTypeList<DBRowType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
