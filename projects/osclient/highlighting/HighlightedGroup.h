// projects/osclient/highlighting/HighlightedGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightedGroup {
    public:
        void CacheEntity(const NpcUID& npcUID);
        void CacheEntity(const EntityWithCoord<dash3d::Wall>& entityWithCoord);
        void CacheEntity(const EntityWithCoord<dash3d::Decor>& entityWithCoord);
        void CacheEntity(const EntityWithCoord<dash3d::Sprite>& entityWithCoord);
        void CacheEntity(const EntityWithCoord<dash3d::GroundDecor>& entityWithCoord);
        void CacheEntity(const EntityWithCoord<ClientObj>& entityWithCoord);
        void ForEachNPC(std::function<void(ClientNpc const&)> callback,
                        const std::array<shared_ptr<ClientNpc>, 65536ul>& clientNpcs);
        void ForEachWall(std::function<void(EntityWithCoord<dash3d::Wall>&)> callback);
        void ForEachDecor(std::function<void(EntityWithCoord<dash3d::Decor>&)> callback);
        void ForEachGroundDecor(std::function<void(EntityWithCoord<dash3d::GroundDecor>&)> callback);
        void ForEachScenery(std::function<void(EntityWithCoord<dash3d::Sprite>&)> callback);
        void ForEachObj(std::function<void(EntityWithCoord<ClientObj>&)> callback);
        void ForEachStaticEntity<dash3d::Wall>(std::function<void(EntityWithCoord<dash3d::Wall>&)> callback,
                                               eastl::vector<EntityWithCoord<dash3d::Wall>>& entityWithCoords);
        void ForEachStaticEntity<dash3d::Decor>(std::function<void(EntityWithCoord<dash3d::Decor>&)> callback,
                                                eastl::vector<EntityWithCoord<dash3d::Decor>>& entityWithCoords);
        void
        ForEachStaticEntity<dash3d::GroundDecor>(std::function<void(EntityWithCoord<dash3d::GroundDecor>&)> callback,
                                                 eastl::vector<EntityWithCoord<dash3d::GroundDecor>>& entityWithCoords);
        void ForEachStaticEntity<dash3d::Sprite>(std::function<void(EntityWithCoord<dash3d::Sprite>&)> callback,
                                                 eastl::vector<EntityWithCoord<dash3d::Sprite>>& entityWithCoords);
        void ForEachStaticEntity<ClientObj>(std::function<void(EntityWithCoord<ClientObj>&)> callback,
                                            eastl::vector<EntityWithCoord<ClientObj>>& entityWithCoords);
        ~HighlightedGroup();
        HighlightedGroup();

        uint8_t _unknown_0[176];
    };

    class NpcUID {
    public:
        NpcUID(int arg1, int arg2);
        NpcUID(int arg1);

    private:
        unsigned int field_0;
    };

    // 0x1000117b0
    void HighlightedGroup::CacheEntity(const NpcUID& npcUID) {
        field_8.push_back(npcUID);
    }

    // 0x100011cc0
    void HighlightedGroup::CacheEntity(const EntityWithCoord<dash3d::Wall>& entityWithCoord) {
        field_40.push_back(entityWithCoord);
    }

    // 0x100011d00
    void HighlightedGroup::CacheEntity(const EntityWithCoord<dash3d::Decor>& entityWithCoord) {
        field_72.push_back(entityWithCoord);
    }

    // 0x100011d10
    void HighlightedGroup::CacheEntity(const EntityWithCoord<dash3d::Sprite>& entityWithCoord) {
        field_136.push_back(entityWithCoord);
    }

    // 0x100011d30
    void HighlightedGroup::CacheEntity(const EntityWithCoord<dash3d::GroundDecor>& entityWithCoord) {
        field_104.push_back(entityWithCoord);
    }

    // 0x100011fb0
    void HighlightedGroup::CacheEntity(const EntityWithCoord<ClientObj>& entityWithCoord) {
        field_168.push_back(entityWithCoord);
    }

    // 0x100013b70
    void HighlightedGroup::ForEachWall(std::function<void(EntityWithCoord<dash3d::Wall>&)> callback) {
        function<void(EntityWithCoord<dash3d::Wall>&)> local_58[56];
        long local_20;

        new (local_58) std::function<void(EntityWithCoord<dash3d::Wall>&)>(*callback);
        ForEachStaticEntity<dash3d::Wall>(this, (function<void_(EntityWithCoord<dash3d::Wall>&)>*)local_58,
                                          (vector<EntityWithCoord<dash3d::Wall>>*)&field_40);
    }

    // 0x100013c10
    void HighlightedGroup::ForEachDecor(std::function<void(EntityWithCoord<dash3d::Decor>&)> callback) {
        function<void(EntityWithCoord<dash3d::Decor>&)> local_58[56];
        long local_20;

        new (local_58) std::function<void(EntityWithCoord<dash3d::Decor>&)>(*callback);
        ForEachStaticEntity<dash3d::Decor>(this, (function<void_(EntityWithCoord<dash3d::Decor>&)>*)local_58,
                                           (vector<EntityWithCoord<dash3d::Decor>>*)&field_72);
    }

    // 0x100013cb0
    void HighlightedGroup::ForEachGroundDecor(std::function<void(EntityWithCoord<dash3d::GroundDecor>&)> callback) {
        function<void(EntityWithCoord<dash3d::GroundDecor>&)> local_58[56];
        long local_20;

        new (local_58) std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>(*callback);
        ForEachStaticEntity<dash3d::GroundDecor>(this,
                                                 (function<void_(EntityWithCoord<dash3d::GroundDecor>&)>*)local_58,
                                                 (vector<EntityWithCoord<dash3d::GroundDecor>>*)&field_104);
    }

    // 0x100013d50
    void HighlightedGroup::ForEachScenery(std::function<void(EntityWithCoord<dash3d::Sprite>&)> callback) {
        function<void(EntityWithCoord<dash3d::Sprite>&)> local_58[56];
        long local_20;

        new (local_58) std::function<void(EntityWithCoord<dash3d::Sprite>&)>(*callback);
        ForEachStaticEntity<dash3d::Sprite>(this, (function<void_(EntityWithCoord<dash3d::Sprite>&)>*)local_58,
                                            (vector<EntityWithCoord<dash3d::Sprite>>*)&field_136);
    }

    // 0x100013df0
    void HighlightedGroup::ForEachObj(std::function<void(EntityWithCoord<ClientObj>&)> callback) {
        function<void(EntityWithCoord<ClientObj>&)> local_58[56];
        long local_20;

        new (local_58) std::function<void(EntityWithCoord<ClientObj>&)>(*callback);
        ForEachStaticEntity<ClientObj>(this, (function<void_(EntityWithCoord<ClientObj>&)>*)local_58,
                                       (vector<EntityWithCoord<ClientObj>>*)&field_168);
    }

    // 0x10002afb0
    NpcUID::NpcUID(int arg1, int arg2) {
        field_0 = (short)arg1;
        field_2 = (short)arg2;
    }

    // 0x10002bb40
    void HighlightedGroup::ForEachStaticEntity<dash3d::Wall>(
        std::function<void(EntityWithCoord<dash3d::Wall>&)> callback,
        eastl::vector<EntityWithCoord<dash3d::Wall>>& entityWithCoords) {
        EntityWithCoord<dash3d::Wall>* entityWithCoord;
        unsigned long uVar2;
        unsigned long arg1;

        long lVar1 = entityWithCoords.size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar1 = entityWithCoords[arg1];
                if (((lVar1 + 8))->expired() == '\0') {
                    entityWithCoord = (EntityWithCoord<dash3d::Wall>*)entityWithCoords[arg1];
                    std::function<void(EntityWithCoord<dash3d::Wall>&)>::operator()(
                        (function<void(EntityWithCoord<dash3d::Wall>&)>*)callback, entityWithCoord);
                } else {
                    lVar1 = entityWithCoords.HeapBeginPtr();
                    entityWithCoords.erase((lVar1 + arg1 * 24));
                    arg1 = arg1 - 1;
                }
                arg1 = arg1 + 1;
                uVar2 = entityWithCoords.size();
            } while (arg1 < uVar2);
        }
    }

    // 0x10002bf90
    void HighlightedGroup::ForEachStaticEntity<dash3d::Decor>(
        std::function<void(EntityWithCoord<dash3d::Decor>&)> callback,
        eastl::vector<EntityWithCoord<dash3d::Decor>>& entityWithCoords) {
        EntityWithCoord<dash3d::Decor>* entityWithCoord;
        unsigned long uVar2;
        unsigned long arg1;

        long lVar1 = entityWithCoords.size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar1 = entityWithCoords[arg1];
                if (((lVar1 + 8))->expired() == '\0') {
                    entityWithCoord = (EntityWithCoord<dash3d::Decor>*)entityWithCoords[arg1];
                    std::function<void(EntityWithCoord<dash3d::Decor>&)>::operator()(
                        (function<void(EntityWithCoord<dash3d::Decor>&)>*)callback, entityWithCoord);
                } else {
                    lVar1 = entityWithCoords.HeapBeginPtr();
                    entityWithCoords.erase((lVar1 + arg1 * 24));
                    arg1 = arg1 - 1;
                }
                arg1 = arg1 + 1;
                uVar2 = entityWithCoords.size();
            } while (arg1 < uVar2);
        }
    }

    // 0x10002c360
    void HighlightedGroup::ForEachStaticEntity<dash3d::GroundDecor>(
        std::function<void(EntityWithCoord<dash3d::GroundDecor>&)> callback,
        eastl::vector<EntityWithCoord<dash3d::GroundDecor>>& entityWithCoords) {
        EntityWithCoord<dash3d::GroundDecor>* entityWithCoord;
        unsigned long uVar2;
        unsigned long arg1;

        long lVar1 = entityWithCoords.size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar1 = entityWithCoords[arg1];
                if (((lVar1 + 8))->expired() == '\0') {
                    entityWithCoord = (EntityWithCoord<dash3d::GroundDecor>*)entityWithCoords[arg1];
                    std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::operator()(
                        (function<void(EntityWithCoord<dash3d::GroundDecor>&)>*)callback, entityWithCoord);
                } else {
                    lVar1 = entityWithCoords.HeapBeginPtr();
                    entityWithCoords.erase((lVar1 + arg1 * 24));
                    arg1 = arg1 - 1;
                }
                arg1 = arg1 + 1;
                uVar2 = entityWithCoords.size();
            } while (arg1 < uVar2);
        }
    }

    // 0x10002c730
    void HighlightedGroup::ForEachStaticEntity<dash3d::Sprite>(
        std::function<void(EntityWithCoord<dash3d::Sprite>&)> callback,
        eastl::vector<EntityWithCoord<dash3d::Sprite>>& entityWithCoords) {
        EntityWithCoord<dash3d::Sprite>* entityWithCoord;
        unsigned long uVar2;
        unsigned long arg1;

        long lVar1 = entityWithCoords.size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar1 = entityWithCoords[arg1];
                if (((lVar1 + 8))->expired() == '\0') {
                    entityWithCoord = (EntityWithCoord<dash3d::Sprite>*)entityWithCoords[arg1];
                    std::function<void(EntityWithCoord<dash3d::Sprite>&)>::operator()(
                        (function<void(EntityWithCoord<dash3d::Sprite>&)>*)callback, entityWithCoord);
                } else {
                    lVar1 = entityWithCoords.HeapBeginPtr();
                    entityWithCoords.erase((lVar1 + arg1 * 24));
                    arg1 = arg1 - 1;
                }
                arg1 = arg1 + 1;
                uVar2 = entityWithCoords.size();
            } while (arg1 < uVar2);
        }
    }

    // 0x10002cb00
    void HighlightedGroup::ForEachStaticEntity<ClientObj>(std::function<void(EntityWithCoord<ClientObj>&)> callback,
                                                          eastl::vector<EntityWithCoord<ClientObj>>& entityWithCoords) {
        EntityWithCoord<ClientObj>* entityWithCoord;
        unsigned long uVar2;
        unsigned long arg1;

        long lVar1 = entityWithCoords.size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar1 = entityWithCoords[arg1];
                if (((lVar1 + 8))->expired() == '\0') {
                    entityWithCoord = (EntityWithCoord<ClientObj>*)entityWithCoords[arg1];
                    std::function<void(EntityWithCoord<ClientObj>&)>::operator()(
                        (function<void(EntityWithCoord<ClientObj>&)>*)callback, entityWithCoord);
                } else {
                    lVar1 = entityWithCoords.HeapBeginPtr();
                    entityWithCoords.erase((lVar1 + arg1 * 24));
                    arg1 = arg1 - 1;
                }
                arg1 = arg1 + 1;
                uVar2 = entityWithCoords.size();
            } while (arg1 < uVar2);
        }
    }

    // 0x10002cea0
    NpcUID::NpcUID(int arg1) {
        field_0 = (unsigned int)arg1 >> 16 | arg1 << 16;
    }

    // 0x100031550
    HighlightedGroup::~HighlightedGroup() {
        field_168.~vector();
        field_136.~vector();
        field_104.~vector();
        field_72.~vector();
        field_40.~vector();
        field_8.~vector();
    }

    // 0x100034420
    HighlightedGroup::HighlightedGroup() {
        new (&field_8) eastl::vector<NpcUID>();
        new (&field_40) eastl::vector<EntityWithCoord<dash3d::Wall>>();
        new (&field_72) eastl::vector<EntityWithCoord<dash3d::Decor>>();
        new (&field_104) eastl::vector<EntityWithCoord<dash3d::GroundDecor>>();
        new (&field_136) eastl::vector<EntityWithCoord<dash3d::Sprite>>();
        new (&field_168) eastl::vector<EntityWithCoord<ClientObj>>();
    }

} // namespace jag::oldscape::highlight
