// libs/game/runetek5/config/loctype/LocTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LocTypeList {
    public:
        // virtual methods in vtable order
        virtual ~LocTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        bool IsMembersServer() const;
        LocTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider, bool arg5);
        void SetMembersServer(bool arg1);

    private:
        uint8_t _unknown_8[104];
        bool m_membersServer;
        uint8_t _unknown_113[15];
    };

    // 0x100518780
    void LocTypeList::CacheReset() {
        CacheReset();
        field_120.Reset();
    }

    // 0x1005187b0
    void LocTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_120.Clean((unsigned long)arg1);
    }

    // 0x1005190c0
    Triangulate::SourcePoint::SourcePoint(const math::Point<int>& point, int arg2)
        : math::Point(point), m_index(arg2) {}

    // 0x1005217b0
    Triangulate::SourcePoint::SourcePoint(Triangulate::SourcePoint&& sourcePoint)
        : math::Point(sourcePoint), m_index(sourcePoint.m_index) {}

    // 0x1005219c0
    SourcePoint* Triangulate::SourcePoint::operator=(Triangulate::SourcePoint&& sourcePoint) {

        Point<int> local_28(sourcePoint);
        *this = &local_28;
        m_index = sourcePoint.m_index;
        return this;
    }

    // 0x100521a00
    LocTypeList::~LocTypeList() {
        field_120.~AssetLRUHashCache();
    }

    // 0x1005654b0
    void LocTypeList::SetMembersServer(bool arg1) {
        m_membersServer = arg1;
    }

} // namespace jag::game

namespace jag {
    // 0x10051aa40
    game::LocType* placement_new<game::LocType, game::BaseTemplateConfigTypeList<game::LocType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::LocType>*& arg2, int& arg3) {
        new (arg1) game::LocType(arg2, arg3);
        return arg1;
    }

    // 0x10051aa60
    MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>*
    placement_new<MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>,
                  MakeSharedPool<game::LocType, 256>::RefCounterAndData*&, game::LocType*>(
        void* arg1, MakeSharedPool<game::LocType, 256>::RefCounterAndData*& arg2, game::LocType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x10051aa80
    void shared_ptr_do_enable_shared_from_this<game::LocType>(ref_counter_base* ref_counter_base,
                                                              game::LocType* locType,
                                                              game::LocType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)locType);
            local_38 = weak_ptr(local_48);
            locType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10051b630
    MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>::MakeSharedPoolRefCounter(
        void* arg1, game::LocType* locType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b00 + 16;
        *(void**)(this + 16) = arg1;
        *(LocType**)(this + 24) = locType;
    }

    // 0x10051b670
    void MakeSharedPoolRefCounter<game::LocType, MakeSharedPool<game::LocType, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::LocType, 256>::deallocate(arg1);
    }

} // namespace jag
