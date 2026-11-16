// libs/game/runetek5/config/msitype/MSITypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MSITypeList {
    public:
        // virtual methods in vtable order
        virtual ~MSITypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        void FindCachedSprite(int);
        void CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int);
        MSITypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    // 0x1005185d0, 48 bytes, inline, placed by class name and debug map
    // MSITypeList::FindCachedSprite(int)
    void MSITypeList::FindCachedSprite(int param_1) {
        undefined4 in_register_0000003c;

        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Find(
            (ulonglong*)(CONCAT44(in_register_0000003c, param_1) + 112));
    }

    // 0x100518600, 48 bytes, inline, placed by class name and debug map
    // MSITypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int)
    void MSITypeList::CacheSprite(shared_ptr* param_1, int param_2) {
        ulonglong local_10;

        local_10 = (ulonglong)param_2;
        (&field_112, param_1, 1, &local_10)->Put();
    }

    // 0x1005b2690, 16 bytes, complete-object constructor, inline, placed by class name
    // MSITypeList::MSITypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005b26b0, 128 bytes, base-object constructor, inline, placed by class name
    // MSITypeList::MSITypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void MSITypeList::MSITypeList() {
        BaseTemplateConfigTypeList<MSIType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ee8 + 16;
        new (&field_112, 256, "MSITypeList")
            LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>();
    }

    // 0x1005b28b0, 16 bytes, complete-object destructor, inline, placed by class name
    // MSITypeList::~MSITypeList(): jumps straight to the base-object destructor

    // 0x1005b28c0, 32 bytes, deleting destructor, inline, placed by class name
    // MSITypeList::~MSITypeList()
    void MSITypeList::~MSITypeList() {
        ~MSITypeList(this);
        operator_delete(this);
    }

    // 0x1005b2930, 48 bytes, inline, placed by class name
    // MSITypeList::CacheReset()
    void MSITypeList::CacheReset() {
        CacheReset();
        (&field_112)->Reset();
    }

    // 0x1005b2960, 48 bytes, inline, placed by class name
    // MSITypeList::CacheClean(unsigned int)
    void MSITypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_112, (ulong)param_1)->Clean();
    }

    // 0x1005b80c0, 48 bytes, base-object destructor, inline, placed by class name
    // MSITypeList::~MSITypeList()
    void MSITypeList::~MSITypeList() {
        field_0 = PTR_vtable_100ee7ee8 + 16;
        (&field_112)->~LRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game
