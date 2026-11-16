// libs/game/runetek5/config/skyboxtype/SkyBoxTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game {
    class SkyBoxTypeList {
    public:
        // virtual methods in vtable order
        virtual ~SkyBoxTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        uint8_t* GetModelCache();
        SkyBoxTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                       const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[112];
    };

    // 0x1001fb280: SkyBoxTypeList::GetModelCache() has the same machine code as http::CRMData::GetActionInfo() const

    // 0x1005c8b80
    SkyBoxTypeList::SkyBoxTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                   const ModeGame* modeGame, const Language* language,
                                   Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<SkyBoxType>(configTypeListContainerStrategy, modeGame, language,
                                                 js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                 (Js5ConfigGroup*)Js5ConfigGroup::SKYBOXTYPE, 4),
          field_112(4, "SkyBoxTypeList") {}

    // 0x1005c8e00
    void SkyBoxTypeList::CacheReset() {
        CacheReset();
        field_112.Reset();
    }

    // 0x1005c8e30
    void SkyBoxTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_112.Clean((unsigned long)arg1);
    }

    // 0x1005ce670
    SkyBoxTypeList::~SkyBoxTypeList() {
        field_112.~AssetLRUCache();
    }

} // namespace jag::game

namespace jag {
    // 0x1005c9dc0
    game::SkyBoxType* placement_new<game::SkyBoxType, game::BaseTemplateConfigTypeList<game::SkyBoxType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::SkyBoxType>*& arg2, int& arg3) {
        new (arg1) game::SkyBoxType(arg2, arg3);
        return arg1;
    }

    // 0x1005c9de0
    MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>*
    placement_new<MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>,
                  MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData*&, game::SkyBoxType*>(
        void* arg1, MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData*& arg2, game::SkyBoxType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>(arg2, arg3);
        return arg1;
    }

    // 0x1005c9e00
    void
    shared_ptr_do_enable_shared_from_this<game::SkyBoxType>(ref_counter_base* ref_counter_base,
                                                            game::SkyBoxType* skyBoxType,
                                                            game::SkyBoxType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)skyBoxType);
            local_38 = weak_ptr(local_48);
            skyBoxType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1005cb120
    MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>::MakeSharedPoolRefCounter(
        void* arg1, game::SkyBoxType* skyBoxType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee79e0 + 16;
        *(void**)(this + 16) = arg1;
        *(SkyBoxType**)(this + 24) = skyBoxType;
    }

    // 0x1005cb160
    void MakeSharedPoolRefCounter<game::SkyBoxType, MakeSharedPool<game::SkyBoxType, 16>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::SkyBoxType, 16>::deallocate(arg1);
    }

} // namespace jag
