// libs/game/runetek5/config/hitmarktype/HitmarkTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x10059d0a0
    game::HitmarkType* placement_new<game::HitmarkType, game::BaseTemplateConfigTypeList<game::HitmarkType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::HitmarkType>*& arg2, int& arg3) {
        new (arg1) game::HitmarkType(arg2, arg3);
        return arg1;
    }

    // 0x10059d0c0
    MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>,
                  MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData*&, game::HitmarkType*>(
        void* arg1, MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData*& arg2, game::HitmarkType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x10059d0e0
    void shared_ptr_do_enable_shared_from_this<game::HitmarkType>(
        ref_counter_base* ref_counter_base, game::HitmarkType* hitmarkType,
        game::HitmarkType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)hitmarkType);
            local_38 = weak_ptr(local_48);
            hitmarkType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10059d890
    MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::HitmarkType* hitmarkType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a08 + 16;
        *(void**)(this + 16) = arg1;
        *(HitmarkType**)(this + 24) = hitmarkType;
    }

    // 0x10059d8d0
    void MakeSharedPoolRefCounter<game::HitmarkType, MakeSharedPool<game::HitmarkType, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::HitmarkType, 32>::deallocate(arg1);
    }

    // 0x1005a20f0
    game::HeadbarType* placement_new<game::HeadbarType, game::BaseTemplateConfigTypeList<game::HeadbarType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::HeadbarType>*& arg2, int& arg3) {
        new (arg1) game::HeadbarType(arg2, arg3);
        return arg1;
    }

    // 0x1005a2110
    MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>,
                  MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData*&, game::HeadbarType*>(
        void* arg1, MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData*& arg2, game::HeadbarType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x1005a2130
    void shared_ptr_do_enable_shared_from_this<game::HeadbarType>(
        ref_counter_base* ref_counter_base, game::HeadbarType* headbarType,
        game::HeadbarType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)headbarType);
            local_38 = weak_ptr(local_48);
            headbarType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005a3450
    MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>::MakeSharedPoolRefCounter(
        void* arg1, game::HeadbarType* headbarType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a00 + 16;
        *(void**)(this + 16) = arg1;
        *(HeadbarType**)(this + 24) = headbarType;
    }

    // 0x1005a3490
    void MakeSharedPoolRefCounter<game::HeadbarType, MakeSharedPool<game::HeadbarType, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::HeadbarType, 32>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class HitmarkTypeList {
    public:
        // virtual methods in vtable order
        virtual ~HitmarkTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        void FindCachedSprite(int arg1);
        void CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2);
        HitmarkTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                        const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[112];
    };

    // 0x100544b40: HitmarkTypeList::FindCachedSprite(int) has the same machine code as HeadbarTypeList::FindCachedSprite(int)

    // 0x100544e00: HitmarkTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int) has the same machine code as HeadbarTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int)

    // 0x10059be80
    HitmarkTypeList::HitmarkTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                     const ModeGame* modeGame, const Language* language,
                                     Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<HitmarkType>(configTypeListContainerStrategy, modeGame, language,
                                                  js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                  (Js5ConfigGroup*)Js5ConfigGroup::HITMARKTYPE, 32),
          field_112(32, "HitmarkTypeList") {}

    // 0x10059c100
    void HitmarkTypeList::CacheReset() {
        CacheReset();
        field_112.Reset();
    }

    // 0x10059c130
    void HitmarkTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_112.Clean((unsigned long)arg1);
    }

    // 0x1005a0dc0
    HitmarkTypeList::~HitmarkTypeList() {
        field_112.~LRUHashCache();
    }

} // namespace jag::game
