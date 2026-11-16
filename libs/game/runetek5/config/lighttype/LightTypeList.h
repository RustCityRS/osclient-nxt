// libs/game/runetek5/config/lighttype/LightTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005c4630
    game::LightType* placement_new<game::LightType, game::BaseTemplateConfigTypeList<game::LightType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::LightType>*& arg2, int& arg3) {
        new (arg1) game::LightType(arg2, arg3);
        return arg1;
    }

    // 0x1005c4650
    MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>,
                  MakeSharedPool<game::LightType, 32>::RefCounterAndData*&, game::LightType*>(
        void* arg1, MakeSharedPool<game::LightType, 32>::RefCounterAndData*& arg2, game::LightType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x1005c4670
    void
    shared_ptr_do_enable_shared_from_this<game::LightType>(ref_counter_base* ref_counter_base,
                                                           game::LightType* lightType,
                                                           game::LightType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)lightType);
            local_38 = weak_ptr(local_48);
            lightType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005c5990
    MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::LightType* lightType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b48 + 16;
        *(void**)(this + 16) = arg1;
        *(LightType**)(this + 24) = lightType;
    }

    // 0x1005c59d0
    void MakeSharedPoolRefCounter<game::LightType, MakeSharedPool<game::LightType, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::LightType, 32>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class LightTypeList {
    public:
        // virtual methods in vtable order
        virtual ~LightTypeList();
        LightTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                      const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[97];
    };

    // 0x1005c34e0
    LightTypeList::LightTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                 const ModeGame* modeGame, const Language* language,
                                 Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<LightType>(configTypeListContainerStrategy, modeGame, language,
                                                js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                (Js5ConfigGroup*)Js5ConfigGroup::LIGHTTYPE, 32) {}

    // 0x1005c39d0: LightTypeList::~LightTypeList() has the same machine code as BaseTemplateConfigTypeList<LightType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
