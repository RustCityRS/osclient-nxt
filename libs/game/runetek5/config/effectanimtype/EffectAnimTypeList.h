// libs/game/runetek5/config/effectanimtype/EffectAnimTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game {
    class EffectAnimTypeList {
    public:
        // virtual methods in vtable order
        virtual ~EffectAnimTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        uint8_t* GetModelCache();
        EffectAnimTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                           const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[112];
    };

    // 0x1001fb280: EffectAnimTypeList::GetModelCache() has the same machine code as http::CRMData::GetActionInfo() const

    // 0x1005e3f10
    EffectAnimTypeList::EffectAnimTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                           const ModeGame* modeGame, const Language* language,
                                           Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<EffectAnimType>(configTypeListContainerStrategy, modeGame, language,
                                                     js5ResourceProvider, *(Js5Archive::JS5_CONFIG_SPOT),
                                                     (Js5ConfigGroup*)Js5ConfigGroup::SPOTTYPE, 256),
          field_112(64, "EffectAnimTypeList") {}

    // 0x1005e4190
    void EffectAnimTypeList::CacheReset() {
        CacheReset();
        field_112.Reset();
    }

    // 0x1005e41c0
    void EffectAnimTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_112.Clean((unsigned long)arg1);
    }

    // 0x1005e9a60
    EffectAnimTypeList::~EffectAnimTypeList() {
        field_112.~LRUHashCache();
    }

} // namespace jag::game

namespace jag {
    // 0x1005e5160
    game::EffectAnimType*
    placement_new<game::EffectAnimType, game::BaseTemplateConfigTypeList<game::EffectAnimType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::EffectAnimType>*& arg2, int& arg3) {
        new (arg1) game::EffectAnimType(arg2, arg3);
        return arg1;
    }

    // 0x1005e5180
    MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>*
    placement_new<MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>,
                  MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData*&, game::EffectAnimType*>(
        void* arg1, MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData*& arg2, game::EffectAnimType*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x1005e51a0
    void shared_ptr_do_enable_shared_from_this<game::EffectAnimType>(
        ref_counter_base* ref_counter_base, game::EffectAnimType* effectAnimType,
        game::EffectAnimType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)effectAnimType);
            local_38 = weak_ptr(local_48);
            effectAnimType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005e6570
    MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>::MakeSharedPoolRefCounter(
        void* arg1, game::EffectAnimType* effectAnimType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a28 + 16;
        *(void**)(this + 16) = arg1;
        *(EffectAnimType**)(this + 24) = effectAnimType;
    }

    // 0x1005e65b0
    void MakeSharedPoolRefCounter<game::EffectAnimType, MakeSharedPool<game::EffectAnimType, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::EffectAnimType, 256>::deallocate(arg1);
    }

} // namespace jag
