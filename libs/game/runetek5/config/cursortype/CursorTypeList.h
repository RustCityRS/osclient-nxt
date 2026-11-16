// libs/game/runetek5/config/cursortype/CursorTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005d3ef0
    game::CursorType* placement_new<game::CursorType, game::BaseTemplateConfigTypeList<game::CursorType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::CursorType>*& arg2, int& arg3) {
        new (arg1) game::CursorType(arg2, arg3);
        return arg1;
    }

    // 0x1005d3f10
    MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>*
    placement_new<MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>,
                  MakeSharedPool<game::CursorType, 64>::RefCounterAndData*&, game::CursorType*>(
        void* arg1, MakeSharedPool<game::CursorType, 64>::RefCounterAndData*& arg2, game::CursorType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x1005d3f30
    void
    shared_ptr_do_enable_shared_from_this<game::CursorType>(ref_counter_base* ref_counter_base,
                                                            game::CursorType* cursorType,
                                                            game::CursorType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)cursorType);
            local_38 = weak_ptr(local_48);
            cursorType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005d5220
    MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>::MakeSharedPoolRefCounter(
        void* arg1, game::CursorType* cursorType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee79d8 + 16;
        *(void**)(this + 16) = arg1;
        *(CursorType**)(this + 24) = cursorType;
    }

    // 0x1005d5260
    void MakeSharedPoolRefCounter<game::CursorType, MakeSharedPool<game::CursorType, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::CursorType, 64>::deallocate(arg1);
    }

    // 0x1005d94b0
    game::WorldAreaType*
    placement_new<game::WorldAreaType, game::BaseTemplateConfigTypeList<game::WorldAreaType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::WorldAreaType>*& arg2, int& arg3) {
        new (arg1) game::WorldAreaType(arg2, arg3);
        return arg1;
    }

    // 0x1005d94d0
    MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>*
    placement_new<MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>,
                  MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData*&, game::WorldAreaType*>(
        void* arg1, MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData*& arg2, game::WorldAreaType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>(arg2, arg3);
        return arg1;
    }

    // 0x1005d94f0
    void shared_ptr_do_enable_shared_from_this<game::WorldAreaType>(
        ref_counter_base* ref_counter_base, game::WorldAreaType* worldAreaType,
        game::WorldAreaType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)worldAreaType);
            local_38 = weak_ptr(local_48);
            worldAreaType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005da800
    MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>::MakeSharedPoolRefCounter(
        void* arg1, game::WorldAreaType* worldAreaType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a20 + 16;
        *(void**)(this + 16) = arg1;
        *(WorldAreaType**)(this + 24) = worldAreaType;
    }

    // 0x1005da840
    void MakeSharedPoolRefCounter<game::WorldAreaType, MakeSharedPool<game::WorldAreaType, 1024>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::WorldAreaType, 1024>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class CursorTypeList {
    public:
        // virtual methods in vtable order
        virtual ~CursorTypeList();
        CursorTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                       const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005d2db0
    CursorTypeList::CursorTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                   const ModeGame* modeGame, const Language* language,
                                   Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<CursorType>(configTypeListContainerStrategy, modeGame, language,
                                                 js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                 (Js5ConfigGroup*)Js5ConfigGroup::CURSORTYPE, 64) {}

    // 0x1005d32a0: CursorTypeList::~CursorTypeList() has the same machine code as BaseTemplateConfigTypeList<CursorType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
