// libs/game/runetek5/config/msitype/MSITypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MSITypeList {
    public:
        // virtual methods in vtable order
        virtual ~MSITypeList();
        virtual void CacheReset();
        virtual void CacheClean(unsigned int arg1);
        void FindCachedSprite(int arg1);
        void CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2);
        MSITypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider);

    private:
        uint8_t _unknown_8[112];
    };

    // 0x1005185d0
    void MSITypeList::FindCachedSprite(int arg1) {
        field_112.Find((unsigned long long)arg1);
    }

    // 0x100518600
    void MSITypeList::CacheSprite(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, int arg2) {
        field_112.Put(spriteAtlasReference, 1, (unsigned long long)arg2);
    }

    // 0x1005b26b0
    MSITypeList::MSITypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider)
        : BaseTemplateConfigTypeList<MSIType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG), (Js5ConfigGroup*)Js5ConfigGroup::MSITYPE, 256),
          field_112(256, "MSITypeList") {}

    // 0x1005b2930
    void MSITypeList::CacheReset() {
        CacheReset();
        field_112.Reset();
    }

    // 0x1005b2960
    void MSITypeList::CacheClean(unsigned int arg1) {
        CacheClean(arg1);
        field_112.Clean((unsigned long)arg1);
    }

    // 0x1005b80c0
    MSITypeList::~MSITypeList() {
        field_112.~LRUHashCache();
    }

} // namespace jag::game
