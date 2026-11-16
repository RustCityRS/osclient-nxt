// libs/game/runetek5/config/headbartype/HeadbarTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class HeadbarTypeList {
    public:
        // virtual methods in vtable order
        virtual ~HeadbarTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int);
        void FindCachedSprite(int);
        void CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int);
        HeadbarTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[112];
    };

    // 0x100544b40, 48 bytes, inline, placed by class name and debug map
    // HeadbarTypeList::FindCachedSprite(int)
    /* HitmarkTypeList::FindCachedSprite(int) */

    void HitmarkTypeList::FindCachedSprite(int param_1) {
        undefined4 in_register_0000003c;

        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Find(
            (ulonglong*)(CONCAT44(in_register_0000003c, param_1) + 112));
    }

    // 0x100544e00, 48 bytes, inline, placed by class name and debug map
    // HeadbarTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference> const&, int)
    /* HitmarkTypeList::CacheSprite(shared_ptr<graphics::SpriteAtlasReference>
   const&, int) */

    void HitmarkTypeList::CacheSprite(shared_ptr* param_1, int param_2) {
        ulonglong local_10;

        local_10 = (ulonglong)param_2;
        (&field_112, param_1, 1, &local_10)->Put();
    }

    // 0x1005a0ee0, 16 bytes, complete-object constructor, inline, placed by class name
    // HeadbarTypeList::HeadbarTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&): jumps straight to the base-object constructor

    // 0x1005a0f00, 128 bytes, base-object constructor, inline, placed by class name
    // HeadbarTypeList::HeadbarTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&)
    void HeadbarTypeList::HeadbarTypeList() {
        BaseTemplateConfigTypeList<HeadbarType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7f80 + 16;
        new (&field_112, 32, "HeadbarTypeList")
            LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>();
    }

    // 0x1005a10f0, 16 bytes, complete-object destructor, inline, placed by class name
    // HeadbarTypeList::~HeadbarTypeList(): jumps straight to the base-object destructor

    // 0x1005a1100, 32 bytes, deleting destructor, inline, placed by class name
    // HeadbarTypeList::~HeadbarTypeList()
    void HeadbarTypeList::~HeadbarTypeList() {
        ~HeadbarTypeList(this);
        operator_delete(this);
    }

    // 0x1005a1170, 48 bytes, inline, placed by class name
    // HeadbarTypeList::CacheReset()
    void HeadbarTypeList::CacheReset() {
        CacheReset();
        (&field_112)->Reset();
    }

    // 0x1005a11a0, 48 bytes, inline, placed by class name
    // HeadbarTypeList::CacheClean(unsigned int)
    void HeadbarTypeList::CacheClean(uint param_1) {
        CacheClean(param_1);
        (&field_112, (ulong)param_1)->Clean();
    }

    // 0x1005a64a0, 48 bytes, base-object destructor, inline, placed by class name
    // HeadbarTypeList::~HeadbarTypeList()
    void HeadbarTypeList::~HeadbarTypeList() {
        field_0 = PTR_vtable_100ee7f80 + 16;
        (&field_112)->~LRUHashCache();
        ~BaseTemplateConfigTypeList();
    }

} // namespace jag::game
