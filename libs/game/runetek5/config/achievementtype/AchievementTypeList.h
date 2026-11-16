// libs/game/runetek5/config/achievementtype/AchievementTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x1005f0520
    game::AchievementType*
    placement_new<game::AchievementType, game::BaseTemplateConfigTypeList<game::AchievementType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::AchievementType>*& arg2, int& arg3) {
        new (arg1) game::AchievementType(arg2, arg3);
        return arg1;
    }

    // 0x1005f0540
    MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>*
    placement_new<MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>,
                  MakeSharedPool<game::AchievementType, 256>::RefCounterAndData*&, game::AchievementType*>(
        void* arg1, MakeSharedPool<game::AchievementType, 256>::RefCounterAndData*& arg2,
        game::AchievementType*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x1005f0560
    void shared_ptr_do_enable_shared_from_this<game::AchievementType>(
        ref_counter_base* ref_counter_base, game::AchievementType* achievementType,
        game::AchievementType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)achievementType);
            local_38 = weak_ptr(local_48);
            achievementType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005f2120
    MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>::
        MakeSharedPoolRefCounter(void* arg1, game::AchievementType* achievementType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a38 + 16;
        *(void**)(this + 16) = arg1;
        *(AchievementType**)(this + 24) = achievementType;
    }

    // 0x1005f2160
    void MakeSharedPoolRefCounter<game::AchievementType, MakeSharedPool<game::AchievementType, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::AchievementType, 256>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class AchievementTypeList {
    public:
        // virtual methods in vtable order
        virtual ~AchievementTypeList();
        ConfigProvider* GetConfigProvider();
        AchievementTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                            const Language* language, Js5ResourceProvider& js5ResourceProvider,
                            ConfigProvider& configProvider);

    private:
        uint8_t _unknown_8[104];
        ConfigProvider* m_configProvider;
    };

    // 0x1004c5ce0: AchievementTypeList::GetConfigProvider() has the same machine code as VarBitTypeList::GetConfigProvider()

    // 0x1005ef3d0
    AchievementTypeList::AchievementTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                             const ModeGame* modeGame, const Language* language,
                                             Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider)
        : BaseTemplateConfigTypeList<AchievementType>(configTypeListContainerStrategy, modeGame, language,
                                                      js5ResourceProvider, *(Js5Archive::JS5_CONFIG_ACHIEVEMENT),
                                                      (Js5ConfigGroup*)Js5ConfigGroup::ACHIEVEMENTTYPE, 256),
          m_configProvider(configProvider) {}

    // 0x1005ef8d0: AchievementTypeList::~AchievementTypeList() has the same machine code as BaseTemplateConfigTypeList<AchievementType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
