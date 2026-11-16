// projects/osclient/highlighting/HighlightedGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::highlight {
    class HighlightedGroup {
    public:
        void CacheEntity(NpcUID const&);
        void CacheEntity(EntityWithCoord<dash3d::Wall> const&);
        void CacheEntity(EntityWithCoord<dash3d::Decor> const&);
        void CacheEntity(EntityWithCoord<dash3d::Sprite> const&);
        void CacheEntity(EntityWithCoord<dash3d::GroundDecor> const&);
        void CacheEntity(EntityWithCoord<ClientObj> const&);
        void ForEachNPC(std::function<void(ClientNpc const&)>, std::array<shared_ptr<ClientNpc>, 65536ul> const&);
        void ForEachWall(std::function<void(EntityWithCoord<dash3d::Wall>&)>);
        void ForEachDecor(std::function<void(EntityWithCoord<dash3d::Decor>&)>);
        void ForEachGroundDecor(std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>);
        void ForEachScenery(std::function<void(EntityWithCoord<dash3d::Sprite>&)>);
        void ForEachObj(std::function<void(EntityWithCoord<ClientObj>&)>);
        void ForEachStaticEntity<dash3d::Wall>(std::function<void(EntityWithCoord<dash3d::Wall>&)>,
                                               eastl::vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>&);
        void ForEachStaticEntity<dash3d::Decor>(std::function<void(EntityWithCoord<dash3d::Decor>&)>,
                                                eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>&);
        void ForEachStaticEntity<dash3d::GroundDecor>(
            std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>,
            eastl::vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>&);
        void ForEachStaticEntity<dash3d::Sprite>(std::function<void(EntityWithCoord<dash3d::Sprite>&)>,
                                                 eastl::vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>&);
        void ForEachStaticEntity<ClientObj>(std::function<void(EntityWithCoord<ClientObj>&)>,
                                            eastl::vector<EntityWithCoord<ClientObj>, eastl::allocator>&);
        ~HighlightedGroup();
        HighlightedGroup();

        // data members, from how the methods use this: 176 bytes
        char _unknown_0[40];
        undefined1 field_40; // offset 40
        char _unknown_41[31];
        undefined1 field_72; // offset 72
        char _unknown_73[31];
        undefined1 field_104; // offset 104
        char _unknown_105[31];
        undefined1 field_136; // offset 136
        char _unknown_137[31];
        undefined1 field_168; // offset 168
        char _unknown_169[7];
    };

    class NpcUID {
    public:
        NpcUID(int, int);
        NpcUID(int);

        // data members, from how the methods use this: 4 bytes
        uint field_0; // offset 0
    };

    // 0x1000117b0, 16 bytes, inline, placed by class name and debug map
    // HighlightedGroup::CacheEntity(NpcUID const&)
    void HighlightedGroup::CacheEntity(NpcUID* param_1) {
        (&field_8, param_1)->push_back();
    }

    // 0x1000117c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // NpcUID::NpcUID(int, int): jumps straight to the base-object constructor

    // 0x100011cc0, 16 bytes, inline, placed by class name and debug map
    // HighlightedGroup::CacheEntity(EntityWithCoord<dash3d::Wall> const&)
    void HighlightedGroup::CacheEntity(EntityWithCoord* param_1) {
        (&field_40, param_1)->push_back();
    }

    // 0x100011d00, 16 bytes, inline, placed by class name
    // HighlightedGroup::CacheEntity(EntityWithCoord<dash3d::Decor> const&)
    void HighlightedGroup::CacheEntity(EntityWithCoord* param_1) {
        (&field_72, param_1)->push_back();
    }

    // 0x100011d10, 32 bytes, inline, placed by class name
    // HighlightedGroup::CacheEntity(EntityWithCoord<dash3d::Sprite> const&)
    void HighlightedGroup::CacheEntity(EntityWithCoord* param_1) {
        (&field_136, param_1)->push_back();
    }

    // 0x100011d30, 16 bytes, inline, placed by class name
    // HighlightedGroup::CacheEntity(EntityWithCoord<dash3d::GroundDecor> const&)
    void HighlightedGroup::CacheEntity(EntityWithCoord* param_1) {
        (&field_104, param_1)->push_back();
    }

    // 0x100011fb0, 32 bytes, inline, placed by class name
    // HighlightedGroup::CacheEntity(EntityWithCoord<ClientObj> const&)
    void HighlightedGroup::CacheEntity(EntityWithCoord* param_1) {
        (&field_168, param_1)->push_back();
    }

    // 0x100013b70, 128 bytes, inline, placed by class name
    // HighlightedGroup::ForEachWall(std::function<void (EntityWithCoord<dash3d::Wall>&)>)
    /* HighlightedGroup::ForEachWall(std::function<void
   (EntityWithCoord<dash3d::Wall>&)>) */

    void HighlightedGroup::ForEachWall(function* param_2) {
        function<void(EntityWithCoord<dash3d::Wall>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(EntityWithCoord<dash3d::Wall>&)>::function(local_58, param_2);
        ForEachStaticEntity<dash3d::Wall>(this, local_58, &field_40);
        std::function<void(EntityWithCoord<dash3d::Wall>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100013c10, 128 bytes, inline, placed by class name
    // HighlightedGroup::ForEachDecor(std::function<void (EntityWithCoord<dash3d::Decor>&)>)
    /* HighlightedGroup::ForEachDecor(std::function<void
   (EntityWithCoord<dash3d::Decor>&)>) */

    void HighlightedGroup::ForEachDecor(function* param_2) {
        function<void(EntityWithCoord<dash3d::Decor>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(EntityWithCoord<dash3d::Decor>&)>::function(local_58, param_2);
        ForEachStaticEntity<dash3d::Decor>(this, local_58, &field_72);
        std::function<void(EntityWithCoord<dash3d::Decor>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100013cb0, 128 bytes, inline, placed by class name
    // HighlightedGroup::ForEachGroundDecor(std::function<void (EntityWithCoord<dash3d::GroundDecor>&)>)
    /* HighlightedGroup::ForEachGroundDecor(std::function<void
   (EntityWithCoord<dash3d::GroundDecor>&)>) */

    void HighlightedGroup::ForEachGroundDecor(function* param_2) {
        function<void(EntityWithCoord<dash3d::GroundDecor>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::function(local_58, param_2);
        ForEachStaticEntity<dash3d::GroundDecor>(this, local_58, &field_104);
        std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100013d50, 128 bytes, inline, placed by class name
    // HighlightedGroup::ForEachScenery(std::function<void (EntityWithCoord<dash3d::Sprite>&)>)
    /* HighlightedGroup::ForEachScenery(std::function<void
   (EntityWithCoord<dash3d::Sprite>&)>) */

    void HighlightedGroup::ForEachScenery(function* param_2) {
        function<void(EntityWithCoord<dash3d::Sprite>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(EntityWithCoord<dash3d::Sprite>&)>::function(local_58, param_2);
        ForEachStaticEntity<dash3d::Sprite>(this, local_58, &field_136);
        std::function<void(EntityWithCoord<dash3d::Sprite>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100013df0, 128 bytes, inline, placed by class name
    // HighlightedGroup::ForEachObj(std::function<void (EntityWithCoord<ClientObj>&)>)
    /* HighlightedGroup::ForEachObj(std::function<void
   (EntityWithCoord<ClientObj>&)>) */

    void HighlightedGroup::ForEachObj(function* param_2) {
        function<void(EntityWithCoord<ClientObj>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(EntityWithCoord<ClientObj>&)>::function(local_58, param_2);
        ForEachStaticEntity<ClientObj>(this, local_58, &field_168);
        std::function<void(EntityWithCoord<ClientObj>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100014230, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // NpcUID::NpcUID(int): jumps straight to the base-object constructor

    // 0x10002afb0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NpcUID::NpcUID(int, int)
    /* dash3d::AnimateBaseOperation::SeparatedIndexCount::SeparatedIndexCount(unsigned
   long, unsigned long) */

    void dash3d::AnimateBaseOperation::SeparatedIndexCount::SeparatedIndexCount(ulong param_1, ulong param_2) {
        field_0 = (short)param_1;
        field_2 = (short)param_2;
    }

    // 0x10002bb40, 160 bytes, inline, placed by class name
    // void HighlightedGroup::ForEachStaticEntity<dash3d::Wall>(std::function<void (EntityWithCoord<dash3d::Wall>&)>, eastl::vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>&)
    /* void 
   HighlightedGroup::ForEachStaticEntity<dash3d::Wall>(std::function<void
   (EntityWithCoord<dash3d::Wall>&)>,
   eastl::vector<EntityWithCoord<dash3d::Wall>,
   eastl::allocator>&) */

    void HighlightedGroup::ForEachStaticEntity<dash3d::Wall>(
        undefined8 param_1, function<void(EntityWithCoord<dash3d::Wall>&)>* param_2,
        vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>* param_3) {
        long lVar1;
        EntityWithCoord* pEVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar5;

        lVar1 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                lVar1 = eastl::vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>::operator[](
                    (vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>*)param_3, uVar5);
                cVar4 = ((lVar1 + 8))->expired();
                if (cVar4 == '\0') {
                    pEVar2 =
                        (EntityWithCoord*)eastl::vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>::operator[](
                            (vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>*)param_3, uVar5);
                    std::function<void(EntityWithCoord<dash3d::Wall>&)>::operator()(param_2, pEVar2);
                } else {
                    lVar1 = param_3->HeapBeginPtr();
                    param_3->erase((EntityWithCoord*)(lVar1 + uVar5 * 24));
                    uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
            } while (uVar5 < uVar3);
        }
    }

    // 0x10002bf90, 160 bytes, inline, placed by class name
    // void HighlightedGroup::ForEachStaticEntity<dash3d::Decor>(std::function<void (EntityWithCoord<dash3d::Decor>&)>, eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>&)
    /* void 
   HighlightedGroup::ForEachStaticEntity<dash3d::Decor>(std::function<void
   (EntityWithCoord<dash3d::Decor>&)>,
   eastl::vector<EntityWithCoord<dash3d::Decor>,
   eastl::allocator>&) */

    void HighlightedGroup::ForEachStaticEntity<dash3d::Decor>(
        undefined8 param_1, function<void(EntityWithCoord<dash3d::Decor>&)>* param_2,
        vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>* param_3) {
        long lVar1;
        EntityWithCoord* pEVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar5;

        lVar1 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                lVar1 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::operator[](param_3, uVar5);
                cVar4 = ((lVar1 + 8))->expired();
                if (cVar4 == '\0') {
                    pEVar2 =
                        (EntityWithCoord*)eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::operator[](
                            param_3, uVar5);
                    std::function<void(EntityWithCoord<dash3d::Decor>&)>::operator()(param_2, pEVar2);
                } else {
                    lVar1 = param_3->HeapBeginPtr();
                    eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::erase(
                        param_3, (EntityWithCoord*)(lVar1 + uVar5 * 24));
                    uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
            } while (uVar5 < uVar3);
        }
    }

    // 0x10002c360, 160 bytes, inline, placed by class name
    // void HighlightedGroup::ForEachStaticEntity<dash3d::GroundDecor>(std::function<void (EntityWithCoord<dash3d::GroundDecor>&)>, eastl::vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>&)
    /* void 
   HighlightedGroup::ForEachStaticEntity<dash3d::GroundDecor>(std::function<void
   (EntityWithCoord<dash3d::GroundDecor>&)>,
   eastl::vector<EntityWithCoord<dash3d::GroundDecor>,
   eastl::allocator>&) */

    void HighlightedGroup::ForEachStaticEntity<dash3d::GroundDecor>(
        undefined8 param_1, function<void(EntityWithCoord<dash3d::GroundDecor>&)>* param_2,
        vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>* param_3) {
        long lVar1;
        EntityWithCoord* pEVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar5;

        lVar1 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                lVar1 = eastl::vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>::operator[](
                    (vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>*)param_3, uVar5);
                cVar4 = ((lVar1 + 8))->expired();
                if (cVar4 == '\0') {
                    pEVar2 = (EntityWithCoord*)
                        eastl::vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>::operator[](
                            (vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>*)param_3, uVar5);
                    std::function<void(EntityWithCoord<dash3d::GroundDecor>&)>::operator()(param_2, pEVar2);
                } else {
                    lVar1 = param_3->HeapBeginPtr();
                    param_3->erase((EntityWithCoord*)(lVar1 + uVar5 * 24));
                    uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
            } while (uVar5 < uVar3);
        }
    }

    // 0x10002c730, 160 bytes, inline, placed by class name
    // void HighlightedGroup::ForEachStaticEntity<dash3d::Sprite>(std::function<void (EntityWithCoord<dash3d::Sprite>&)>, eastl::vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>&)
    /* void 
   HighlightedGroup::ForEachStaticEntity<dash3d::Sprite>(std::function<void
   (EntityWithCoord<dash3d::Sprite>&)>,
   eastl::vector<EntityWithCoord<dash3d::Sprite>,
   eastl::allocator>&) */

    void HighlightedGroup::ForEachStaticEntity<dash3d::Sprite>(
        undefined8 param_1, function<void(EntityWithCoord<dash3d::Sprite>&)>* param_2,
        vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>* param_3) {
        long lVar1;
        EntityWithCoord* pEVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar5;

        lVar1 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                lVar1 = eastl::vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>::operator[](
                    (vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>*)param_3, uVar5);
                cVar4 = ((lVar1 + 8))->expired();
                if (cVar4 == '\0') {
                    pEVar2 =
                        (EntityWithCoord*)eastl::vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>::operator[](
                            (vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>*)param_3, uVar5);
                    std::function<void(EntityWithCoord<dash3d::Sprite>&)>::operator()(param_2, pEVar2);
                } else {
                    lVar1 = param_3->HeapBeginPtr();
                    param_3->erase((EntityWithCoord*)(lVar1 + uVar5 * 24));
                    uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
            } while (uVar5 < uVar3);
        }
    }

    // 0x10002cb00, 160 bytes, inline, placed by class name
    // void HighlightedGroup::ForEachStaticEntity<ClientObj>(std::function<void (EntityWithCoord<ClientObj>&)>, eastl::vector<EntityWithCoord<ClientObj>, eastl::allocator>&)
    /* void 
   HighlightedGroup::ForEachStaticEntity<ClientObj>(std::function<void
   (EntityWithCoord<ClientObj>&)>,
   eastl::vector<EntityWithCoord<ClientObj>,
   eastl::allocator>&) */

    void HighlightedGroup::ForEachStaticEntity<ClientObj>(
        undefined8 param_1, function<void(EntityWithCoord<ClientObj>&)>* param_2,
        vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>* param_3) {
        long lVar1;
        EntityWithCoord* pEVar2;
        ulong uVar3;
        char cVar4;
        ulong uVar5;

        lVar1 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                lVar1 = eastl::vector<EntityWithCoord<ClientObj>, eastl::allocator>::operator[](
                    (vector<EntityWithCoord<ClientObj>, eastl::allocator>*)param_3, uVar5);
                cVar4 = ((lVar1 + 8))->expired();
                if (cVar4 == '\0') {
                    pEVar2 = (EntityWithCoord*)eastl::vector<EntityWithCoord<ClientObj>, eastl::allocator>::operator[](
                        (vector<EntityWithCoord<ClientObj>, eastl::allocator>*)param_3, uVar5);
                    std::function<void(EntityWithCoord<ClientObj>&)>::operator()(param_2, pEVar2);
                } else {
                    lVar1 = param_3->HeapBeginPtr();
                    param_3->erase((EntityWithCoord*)(lVar1 + uVar5 * 24));
                    uVar5 = uVar5 - 1;
                }
                uVar5 = uVar5 + 1;
                uVar3 = eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>::size(param_3);
            } while (uVar5 < uVar3);
        }
    }

    // 0x10002cea0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // NpcUID::NpcUID(int)
    void NpcUID::NpcUID(int param_1) {
        field_0 = (uint)param_1 >> 16 | param_1 << 16;
    }

    // 0x100031540, 16 bytes, complete-object destructor, inline, placed by class name
    // HighlightedGroup::~HighlightedGroup(): jumps straight to the base-object destructor

    // 0x100031550, 80 bytes, base-object destructor, inline, placed by class name
    // HighlightedGroup::~HighlightedGroup()
    void HighlightedGroup::~HighlightedGroup() {
        (&field_168)->~vector();
        (&field_136)->~vector();
        (&field_104)->~vector();
        (&field_72)->~vector();
        (&field_40)->~vector();
        (&field_8)->~vector();
    }

    // 0x100034410, 16 bytes, complete-object constructor, inline, placed by class name
    // HighlightedGroup::HighlightedGroup(): jumps straight to the base-object constructor

    // 0x100034420, 192 bytes, base-object constructor, inline, placed by class name
    // HighlightedGroup::HighlightedGroup()
    void HighlightedGroup::HighlightedGroup() {
        new (&field_8) eastl::vector<NpcUID, eastl::allocator>();
        new (&field_40) eastl::vector<EntityWithCoord<dash3d::Wall>, eastl::allocator>();
        new (&field_72) eastl::vector<EntityWithCoord<dash3d::Decor>, eastl::allocator>();
        new (&field_104) eastl::vector<EntityWithCoord<dash3d::GroundDecor>, eastl::allocator>();
        new (&field_136) eastl::vector<EntityWithCoord<dash3d::Sprite>, eastl::allocator>();
        new (&field_168) eastl::vector<EntityWithCoord<ClientObj>, eastl::allocator>();
    }

} // namespace jag::oldscape::highlight
