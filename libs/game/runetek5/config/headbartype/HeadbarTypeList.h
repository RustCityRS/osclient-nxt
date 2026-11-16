// libs/game/runetek5/config/headbartype/HeadbarTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class HeadbarTypeList {
    public:
        // virtual methods in vtable order
        virtual ~HeadbarTypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        void FindCachedSprite(int arg1);
        void CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2);
        HeadbarTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                        const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[112];
    };

    // 0x100544b40
    void HeadbarTypeList::FindCachedSprite(int arg1) {
        field_112.Find((unsigned long long)arg1);
    }

    // 0x100544e00
    void HeadbarTypeList::CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference,
                                      int arg2) {
        field_112.Put(spriteAtlasReference, 1, (unsigned long long)arg2);
    }

    // 0x1005a0f00
    HeadbarTypeList::HeadbarTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                     const ModeGame* modeGame, const Language* language,
                                     Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<HeadbarType>(configTypeListContainerStrategy, modeGame, language,
                                                  js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                  (Js5ConfigGroup*)Js5ConfigGroup::HEADBARTYPE, 32),
          field_112(32, "HeadbarTypeList") {}

    // 0x1005a1170
    void HeadbarTypeList::CacheReset() {
        CacheReset();
        field_112.Reset();
    }

    // 0x1005a11a0
    void HeadbarTypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_112.Clean((unsigned long)arg1);
    }

    // 0x1005a64a0
    HeadbarTypeList::~HeadbarTypeList() {
        field_112.~LRUHashCache();
    }

} // namespace jag::game
