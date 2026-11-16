// libs/game/runetek5/config/objtype/ObjTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1004f8860
    game::ObjType* placement_new<game::ObjType, game::BaseTemplateConfigTypeList<game::ObjType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::ObjType>*& arg2, int& arg3) {
        new (arg1) game::ObjType(arg2, arg3);
        return arg1;
    }

    // 0x1004f8880
    MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>*
    placement_new<MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>,
                  MakeSharedPool<game::ObjType, 96>::RefCounterAndData*&, game::ObjType*>(
        void* arg1, MakeSharedPool<game::ObjType, 96>::RefCounterAndData*& arg2, game::ObjType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>(arg2, arg3);
        return arg1;
    }

    // 0x1004f88a0
    void shared_ptr_do_enable_shared_from_this<game::ObjType>(ref_counter_base* ref_counter_base,
                                                              game::ObjType* objType,
                                                              game::ObjType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)objType);
            local_38 = weak_ptr(local_48);
            objType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1004f9180
    MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>::MakeSharedPoolRefCounter(
        void* arg1, game::ObjType* objType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b18 + 16;
        *(void**)(this + 16) = arg1;
        *(ObjType**)(this + 24) = objType;
    }

    // 0x1004f91c0
    void MakeSharedPoolRefCounter<game::ObjType, MakeSharedPool<game::ObjType, 96>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::ObjType, 96>::deallocate(arg1);
    }

    // 0x1004fcf50
    shared_ptr_if_not_array<eastl::vector_map<int, game::VarValue>>::type
    make_shared<eastl::vector_map<int, game::VarValue>>() {
        ref_counter_shared<eastl::vector_map<int, game::VarValue> _>* ref_counter_shared;
        int local_2c;
        vector_map<int, game::VarValue>* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::vector_map<int, game::VarValue>>::type result;
        } else {
            local_28[0] = placement_new<eastl::vector_map<int, game::VarValue>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared = placement_new<ref_counter_shared<eastl::vector_map<int, game::VarValue>>, int,
                                               eastl::vector_map<int, game::VarValue>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1004fd1c0
    eastl::vector_map<int, game::VarValue>* placement_new<eastl::vector_map<int, game::VarValue>>(void* arg1) {
        new (arg1) eastl::vector_map<int, game::VarValue>();
        return arg1;
    }

    // 0x1004fd1e0
    ref_counter_shared<eastl::vector_map<int, game::VarValue>>*
    placement_new<ref_counter_shared<eastl::vector_map<int, game::VarValue>>, int,
                  eastl::vector_map<int, game::VarValue>*&>(void* arg1, int&& arg2,
                                                            eastl::vector_map<int, game::VarValue>*& arg3) {
        new (arg1) ref_counter_shared<eastl::vector_map<int, game::VarValue>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1004fd370
    ref_counter_shared<eastl::vector_map<int, game::VarValue>>::ref_counter_shared(
        unsigned long arg1, eastl::vector_map<int, game::VarValue>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7198 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(vector_map<int, game::VarValue>**)(this + 24) = arg2;
    }

    // 0x1004fd3b0
    void ref_counter_shared<eastl::vector_map<int, game::VarValue>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((vector_map<int, game::VarValue>*)(*(long*)(this + 24) + lVar2))->~vector_map();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 40;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1004fedb0
    game::QuickChatCatType* placement_new<game::QuickChatCatType, unsigned int&>(void* arg1, unsigned int& arg2) {
        new (arg1) game::QuickChatCatType(arg2);
        return arg1;
    }

    // 0x1004fedd0
    ref_counter_shared<game::QuickChatCatType>*
    placement_new<ref_counter_shared<game::QuickChatCatType>, int, game::QuickChatCatType*&>(
        void* arg1, int&& arg2, game::QuickChatCatType*& arg3) {
        new (arg1) ref_counter_shared<game::QuickChatCatType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    class ObjTypeList {
    public:
        // virtual methods in vtable order
        virtual ~ObjTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        virtual uint8_t* ListPostDecode(const shared_ptr<ObjType>& objType);
        uint8_t* GetModelCache();
        bool IsMembersServer() const;
        ObjTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                    bool arg6);
        uint8_t* GetDefaultOps() const;
        uint8_t* GetDefaultIops() const;
        void SetMembersServer(bool arg1);

    private:
        uint8_t _unknown_8[48];
        uint64_t field_56;
        uint8_t _unknown_64[48];
        ConfigProvider* field_112;
        bool m_membersServer;
        uint8_t _unknown_121[1295];
        uint8_t m_defaultIops;
        uint8_t _unknown_1417[7];
    };

    // 0x1004f6aa0
    void ObjTypeList::CacheReset() {
        CacheReset();
        field_128.Reset();
    }

    // 0x1004f6ad0
    void ObjTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_128.Clean((unsigned long)arg1);
    }

    // 0x1004f7150
    ObjTypeList::~ObjTypeList() {
        field_1224.~array();
        field_128.~AssetLRUHashCache();
    }

    // 0x100506170
    uint8_t* ObjTypeList::GetDefaultOps() const {
        return &field_1224;
    }

    // 0x100506180
    uint8_t* ObjTypeList::GetDefaultIops() const {
        return &m_defaultIops;
    }

    // 0x1005654e0
    void ObjTypeList::SetMembersServer(bool arg1) {
        m_membersServer = arg1;
        CacheReset();
    }

} // namespace jag::game
