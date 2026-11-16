// libs/game/runetek5/config/questtype/QuestTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005b9310
    game::QuestType* placement_new<game::QuestType, game::BaseTemplateConfigTypeList<game::QuestType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::QuestType>*& arg2, int& arg3) {
        new (arg1) game::QuestType(arg2, arg3);
        return arg1;
    }

    // 0x1005b9330
    MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>*
    placement_new<MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>,
                  MakeSharedPool<game::QuestType, 128>::RefCounterAndData*&, game::QuestType*>(
        void* arg1, MakeSharedPool<game::QuestType, 128>::RefCounterAndData*& arg2, game::QuestType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>(arg2, arg3);
        return arg1;
    }

    // 0x1005b9350
    void
    shared_ptr_do_enable_shared_from_this<game::QuestType>(ref_counter_base* ref_counter_base,
                                                           game::QuestType* questType,
                                                           game::QuestType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)questType);
            local_38 = weak_ptr(local_48);
            questType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005babb0
    MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>::MakeSharedPoolRefCounter(
        void* arg1, game::QuestType* questType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b60 + 16;
        *(void**)(this + 16) = arg1;
        *(QuestType**)(this + 24) = questType;
    }

    // 0x1005babf0
    void MakeSharedPoolRefCounter<game::QuestType, MakeSharedPool<game::QuestType, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::QuestType, 128>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class QuestTypeList {
    public:
        // virtual methods in vtable order
        virtual ~QuestTypeList();
        ConfigProvider* GetConfigProvider();
        QuestTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                      const Language* language, Js5ResourceProvider& js5ResourceProvider,
                      ConfigProvider& configProvider);

    private:
        uint8_t _unknown_8[104];
        ConfigProvider* m_configProvider;
    };

    // 0x1004c5ce0: QuestTypeList::GetConfigProvider() has the same machine code as VarBitTypeList::GetConfigProvider()

    // 0x1005b8200
    QuestTypeList::QuestTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                 const ModeGame* modeGame, const Language* language,
                                 Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider)
        : BaseTemplateConfigTypeList<QuestType>(configTypeListContainerStrategy, modeGame, language,
                                                js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                (Js5ConfigGroup*)Js5ConfigGroup::QUESTTYPE, 32),
          m_configProvider(configProvider) {}

    // 0x1005b8700: QuestTypeList::~QuestTypeList() has the same machine code as BaseTemplateConfigTypeList<QuestType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
