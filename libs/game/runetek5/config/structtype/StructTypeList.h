// libs/game/runetek5/config/structtype/StructTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005eae90
    game::StructType* placement_new<game::StructType, game::BaseTemplateConfigTypeList<game::StructType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::StructType>*& arg2, int& arg3) {
        new (arg1) game::StructType(arg2, arg3);
        return arg1;
    }

    // 0x1005eaeb0
    MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>*
    placement_new<MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>,
                  MakeSharedPool<game::StructType, 1024>::RefCounterAndData*&, game::StructType*>(
        void* arg1, MakeSharedPool<game::StructType, 1024>::RefCounterAndData*& arg2, game::StructType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>(arg2, arg3);
        return arg1;
    }

    // 0x1005eaed0
    void
    shared_ptr_do_enable_shared_from_this<game::StructType>(ref_counter_base* ref_counter_base,
                                                            game::StructType* structType,
                                                            game::StructType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)structType);
            local_38 = weak_ptr(local_48);
            structType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005ec1c0
    MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>::MakeSharedPoolRefCounter(
        void* arg1, game::StructType* structType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee79e8 + 16;
        *(void**)(this + 16) = arg1;
        *(StructType**)(this + 24) = structType;
    }

    // 0x1005ec200
    void MakeSharedPoolRefCounter<game::StructType, MakeSharedPool<game::StructType, 1024>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::StructType, 1024>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class StructTypeList {
    public:
        // virtual methods in vtable order
        virtual ~StructTypeList();
        StructTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                       const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005e9d40
    StructTypeList::StructTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                   const ModeGame* modeGame, const Language* language,
                                   Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<StructType>(configTypeListContainerStrategy, modeGame, language,
                                                 js5ResourceProvider, *(Js5Archive::JS5_CONFIG_STRUCT),
                                                 (Js5ConfigGroup*)Js5ConfigGroup::STRUCTTYPE, 128) {}

    // 0x1005ea230: StructTypeList::~StructTypeList() has the same machine code as BaseTemplateConfigTypeList<StructType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
