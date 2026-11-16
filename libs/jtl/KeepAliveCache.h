// libs/jtl/KeepAliveCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 3 instantiations, e.g. <unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<jag:, <unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<rende, <unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<r
    class KeepAliveCache {
    public:
        void clear();
        bool Update(float);
        Find(unsigned long long const&);
        ulonglong* Insert(unsigned long long const&, shared_ptr<render::Texture> const&);
        ulonglong* Insert(unsigned long long const&, shared_ptr<render::TextureCube> const&);
        ulonglong* Insert(unsigned long long const&, shared_ptr<graphics::TextureData> const&);
        void size() const;
        GetDyingItemTimestamp(render::Texture const*, float);
        void RemoveDyingItemTimestamp(render::Texture const*);
        GetDyingItemTimestamp(render::TextureCube const*, float);
        void RemoveDyingItemTimestamp(render::TextureCube const*);
        GetDyingItemTimestamp(graphics::TextureData const*, float);
        void RemoveDyingItemTimestamp(graphics::TextureData const*);
        KeepAliveCache(eastl::string const&, unsigned long, float);
        ~KeepAliveCache();
    };

    // 0x1008601b0, 48 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::clear()
    void jag::KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        clear(KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                        eastl::less<unsigned long long>, eastl::allocator>>* this) {
        clear();
        ((this + 112))->clear();
    }

    // 0x1008601e0, 48 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::clear()
    void jag::KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        clear(KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>* this) {
        clear();
        ((this + 112))->clear();
    }

    // 0x100860360, 208 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)
    bool jag::KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        Update(KeepAliveCache<unsigned long long, render::Texture,
                              eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                         eastl::less<unsigned long long>, eastl::allocator>>* this,
               float param_1) {
        long lVar1;
        long lVar2;
        float local_8c;
        function local_88[48];
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_8c = param_1;
        lVar1 = size();
        std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>::function<
            KeepAliveCache<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>::Update(float)::_lambda(unsigned long long const&,
                                                                                 shared_ptr<render::Texture> const&)
                _1_,
            void>(local_58, this, &local_8c);
        std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>::function<
            KeepAliveCache<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                      eastl::allocator>>::Update(float)::_lambda(unsigned long long const&,
                                                                                 shared_ptr<render::Texture> const&)
                _2_,
            void>(local_88, this, &local_8c);
        GarbageCollect(local_58, local_88);
        std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>::~function(
            (function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>*)local_88);
        std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>::~function(
            (function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>*)local_58);
        lVar2 = size();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar2 != lVar1;
    }

    // 0x100860430, 208 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)
    bool jag::KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        Update(KeepAliveCache<unsigned long long, render::TextureCube,
                              eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                         eastl::less<unsigned long long>, eastl::allocator>>* this,
               float param_1) {
        long lVar1;
        long lVar2;
        float local_8c;
        function local_88[48];
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_8c = param_1;
        lVar1 = size(this);
        std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::function<
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) _1_,
            void>(local_58, this, &local_8c);
        std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::function<
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) _2_,
            void>(local_88, this, &local_8c);
        GarbageCollect(local_58, local_88);
        std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::~function(
            (function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>*)local_88);
        std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::~function(
            (function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>*)local_58);
        lVar2 = size(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar2 != lVar1;
    }

    // 0x100860500, 208 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)
    bool jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                             eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        Update(KeepAliveCache<unsigned long long, graphics::TextureData,
                              eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                         eastl::less<unsigned long long>, eastl::allocator>>* this,
               float param_1) {
        long lVar1;
        long lVar2;
        float local_8c;
        function local_88[48];
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_8c = param_1;
        lVar1 = size();
        std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::function<
            KeepAliveCache<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) _1_,
            void>(local_58, this, &local_8c);
        std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::function<
            KeepAliveCache<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                      eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) _2_,
            void>(local_88, this, &local_8c);
        GarbageCollect(local_58, local_88);
        std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::~function(
            (function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>*)local_88);
        std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::~function(
            (function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>*)local_58);
        lVar2 = size();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return lVar2 != lVar1;
    }

    // 0x100861820, 96 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::Find(unsigned long long const&)
    KeepAliveCache<
        unsigned long long, render::Texture,
        eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>>*
    jag::KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                   eastl::allocator>>::
        Find(KeepAliveCache<unsigned long long, render::Texture,
                            eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                       eastl::allocator>>* this,
             ulonglong* param_1) {
        shared_ptr* this_00;
        ulonglong* in_RDX;

        this_00 = (shared_ptr*)param_1->FindResource(in_RDX);
        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
            this_00->end();
            RemoveDyingItemTimestamp((Texture*)param_1);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(this_00);
        return this;
    }

    // 0x100861e10, 96 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::Find(unsigned long long const&)
    KeepAliveCache<unsigned long long, render::TextureCube,
                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                              eastl::allocator>>*
    jag::KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                   eastl::allocator>>::
        Find(KeepAliveCache<unsigned long long, render::TextureCube,
                            eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                       eastl::less<unsigned long long>, eastl::allocator>>* this,
             ulonglong* param_1) {
        shared_ptr* this_00;
        ulonglong* in_RDX;

        this_00 = (shared_ptr*)param_1->FindResource(in_RDX);
        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
            this_00->end();
            RemoveDyingItemTimestamp((TextureCube*)param_1);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(this_00);
        return this;
    }

    // 0x100861ee0, 96 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::Find(unsigned long long const&)
    KeepAliveCache<unsigned long long, graphics::TextureData,
                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                              eastl::allocator>>*
    jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                   eastl::less<unsigned long long>, eastl::allocator>>::
        Find(KeepAliveCache<unsigned long long, graphics::TextureData,
                            eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                       eastl::less<unsigned long long>, eastl::allocator>>* this,
             ulonglong* param_1) {
        shared_ptr* this_00;
        ulonglong* in_RDX;

        this_00 = (shared_ptr*)param_1->FindResource(in_RDX);
        if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
            this_00->end();
            RemoveDyingItemTimestamp((TextureData*)param_1);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(this_00);
        return this;
    }

    // 0x100877690, 16 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::size() const
    /* KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::size() const */

    void jag::KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        size(KeepAliveCache<unsigned long long, render::TextureCube,
                            eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                       eastl::less<unsigned long long>, eastl::allocator>>* this) {
        size();
    }

    // 0x100878300, 96 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::Texture> const&)#1}::operator()(unsigned long long const&, shared_ptr<render::Texture> const&) const
    /* KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long,
   shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>
   >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::Texture>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long long const&,
   shared_ptr<render::Texture> const&) const */

    undefined8 jag::KeepAliveCache<unsigned long long, render::Texture,
                                   eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                              eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::Texture> const&) #1
    }
    ::operator()(ulonglong * param_1, shared_ptr * param_2) {
        KeepAliveCache<unsigned long long, render::Texture,
                       eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                  eastl::allocator>>* this_00;
        int iVar1;
        Texture* pTVar2;
        undefined8 uVar3;
        float fVar4;

        this_00 = *(KeepAliveCache<unsigned long long, render::Texture,
                                   eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                              eastl::less<unsigned long long>, eastl::allocator>>**)this;
        iVar1 = param_2->use_count();
        if (iVar1 == 1) {
            pTVar2 = (Texture*)param_2->end();
            fVar4 = (float)GetDyingItemTimestamp(this_00, pTVar2, **(float**)(this + 8));
            uVar3 = CONCAT71((int7)((ulong) * (float**)(this + 8) >> 8),
                             fVar4 + *(float*)(this_00 + 224) < **(float**)(this + 8));
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100878360, 208 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::GetDyingItemTimestamp(render::Texture const*, float)
    undefined4 jag::KeepAliveCache<unsigned long long, render::Texture,
                                   eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                              eastl::less<unsigned long long>, eastl::allocator>>::
        GetDyingItemTimestamp(KeepAliveCache<unsigned long long, render::Texture,
                                             eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                                        eastl::less<unsigned long long>, eastl::allocator>>* this,
                              Texture* param_1, float param_2) {
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        pair local_50[16];
        undefined8 local_40[2];
        TextureCube* local_30;
        scoped_lock<std::mutex> local_28[8];
        float local_20;
        undefined4 local_1c;
        eastl local_18[8];

        local_30 = (TextureCube*)param_1;
        local_20 = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)(this + 160));
        eastl::rbtree<render::Texture_const*, eastl::pair<render::Texture_const* const, float const>,
                      eastl::less<render::Texture_const*>, eastl::allocator,
                      eastl::use_first<eastl::pair<render::Texture_const* const, float const>>, true,
                      true>::find((Texture**)local_18);
        local_40[0] =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        if (eastl::operator==(local_18, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
                (pair<render::TextureCube_const*, float const>*)local_40, &local_30, &local_20);
            eastl::rbtree<render::Texture_const*, eastl::pair<render::Texture_const* const, float const>,
                          eastl::less<render::Texture_const*>, eastl::allocator,
                          eastl::use_first<eastl::pair<render::Texture_const* const, float const>>, true,
                          true>::insert<eastl::pair<render::Texture_const*, float const>&, void>(local_50);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator=(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_18,
                (rbtree_iterator*)local_50);
        }
        lVar1 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_18);
        local_1c = *(undefined4*)(lVar1 + 8);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        return local_1c;
    }

    // 0x1008792a0, 128 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::Texture> const&)#2}::operator()(unsigned long long const&, shared_ptr<render::Texture> const&) const
    /* KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long,
   shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator>
   >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::Texture>
   const&)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned long long const&,
   shared_ptr<render::Texture> const&) const */

    void jag::KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::Texture> const&) #2
    }
    ::operator()(ulonglong * param_1, shared_ptr * param_2) {
        Texture* this_00;
        Texture* pTVar1;
        float fVar2;

        this_00 = *(Texture**)this;
        pTVar1 = (Texture*)param_2->end();
        fVar2 = (float)GetDyingItemTimestamp(
            (KeepAliveCache<unsigned long long, render::Texture,
                            eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                       eastl::allocator>>*)this_00,
            pTVar1, **(float**)(this + 8));
        if (**(float**)(this + 8) <= fVar2 + *(float*)&this_00->field_224) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentTime > timestamp + m_keepAliveTime",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      112, (char*)0);
        }
        param_2->end();
        RemoveDyingItemTimestamp(this_00);
    }

    // 0x100879320, 160 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::RemoveDyingItemTimestamp(render::Texture const*)
    void
    jag::KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>,
                                   eastl::allocator>>::RemoveDyingItemTimestamp(Texture* param_1) {
        hashtable_iterator_base* extraout_RDX;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[8];
        eastl local_20[8];
        undefined8 local_18;

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&param_1->field_160);
        eastl::rbtree<render::Texture_const*, eastl::pair<render::Texture_const* const, float const>,
                      eastl::less<render::Texture_const*>, eastl::allocator,
                      eastl::use_first<eastl::pair<render::Texture_const* const, float const>>, true,
                      true>::find((Texture**)local_20);
        local_18 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        if (eastl::operator!=(local_20, (hashtable_iterator_base*)&local_18, extraout_RDX)) {
            new (&local_30) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_20);
            eastl::rbtree<render::TextureCube_const*, eastl::pair<render::TextureCube_const* const, float const>,
                          eastl::less<render::TextureCube_const*>, eastl::allocator,
                          eastl::use_first<eastl::pair<render::TextureCube_const* const, float const>>, true,
                          true>::erase(&local_18, &param_1->field_112, local_30);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x10087a090, 96 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&)#1}::operator()(unsigned long long const&, shared_ptr<render::TextureCube> const&) const
    /* KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::TextureCube>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long long const&,
   shared_ptr<render::TextureCube> const&) const */

    undefined8 jag::KeepAliveCache<unsigned long long, render::TextureCube,
                                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                              eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) #1
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<render::TextureCube> const___1_* this,
                 ulonglong * param_1, shared_ptr * param_2)

    {
        KeepAliveCache<unsigned long long, render::TextureCube,
                       eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                  eastl::allocator>>* this_00;
        int iVar1;
        TextureCube* pTVar2;
        undefined8 uVar3;
        float fVar4;

        this_00 = *(KeepAliveCache<unsigned long long, render::TextureCube,
                                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                              eastl::less<unsigned long long>, eastl::allocator>>**)this;
        iVar1 = param_2->use_count();
        if (iVar1 == 1) {
            pTVar2 = (TextureCube*)param_2->end();
            fVar4 = (float)GetDyingItemTimestamp(this_00, pTVar2, **(float**)(this + 8));
            uVar3 = CONCAT71((int7)((ulong) * (float**)(this + 8) >> 8),
                             fVar4 + *(float*)(this_00 + 224) < **(float**)(this + 8));
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10087a0f0, 208 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::GetDyingItemTimestamp(render::TextureCube const*, float)
    undefined4 jag::KeepAliveCache<unsigned long long, render::TextureCube,
                                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                              eastl::less<unsigned long long>, eastl::allocator>>::
        GetDyingItemTimestamp(KeepAliveCache<unsigned long long, render::TextureCube,
                                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                                        eastl::less<unsigned long long>, eastl::allocator>>* this,
                              TextureCube* param_1, float param_2) {
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        pair local_50[16];
        undefined8 local_40[2];
        TextureCube* local_30;
        scoped_lock<std::mutex> local_28[8];
        float local_20;
        undefined4 local_1c;
        eastl local_18[8];

        local_30 = param_1;
        local_20 = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)(this + 160));
        eastl::rbtree<render::TextureCube_const*, eastl::pair<render::TextureCube_const* const, float const>,
                      eastl::less<render::TextureCube_const*>, eastl::allocator,
                      eastl::use_first<eastl::pair<render::TextureCube_const* const, float const>>, true,
                      true>::find((TextureCube**)local_18);
        local_40[0] =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        if (eastl::operator==(local_18, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
                (pair<render::TextureCube_const*, float const>*)local_40, &local_30, &local_20);
            eastl::rbtree<render::TextureCube_const*, eastl::pair<render::TextureCube_const* const, float const>,
                          eastl::less<render::TextureCube_const*>, eastl::allocator,
                          eastl::use_first<eastl::pair<render::TextureCube_const* const, float const>>, true,
                          true>::insert<eastl::pair<render::TextureCube_const*, float const>&, void>(local_50);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator=(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_18,
                (rbtree_iterator*)local_50);
        }
        lVar1 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_18);
        local_1c = *(undefined4*)(lVar1 + 8);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        return local_1c;
    }

    // 0x10087afb0, 128 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&)#2}::operator()(unsigned long long const&, shared_ptr<render::TextureCube> const&) const
    /* KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::Update(float)::{lambda(unsigned long long const&, shared_ptr<render::TextureCube>
   const&)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned long long const&,
   shared_ptr<render::TextureCube> const&) const */

    void jag::KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) #2
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<render::TextureCube> const___2_* this,
                 ulonglong * param_1, shared_ptr * param_2)

    {
        TextureCube* this_00;
        TextureCube* pTVar1;
        float fVar2;

        this_00 = *(TextureCube**)this;
        pTVar1 = (TextureCube*)param_2->end();
        fVar2 = (float)GetDyingItemTimestamp(
            (KeepAliveCache<unsigned long long, render::TextureCube,
                            eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                       eastl::less<unsigned long long>, eastl::allocator>>*)this_00,
            pTVar1, **(float**)(this + 8));
        if (**(float**)(this + 8) <= fVar2 + *(float*)&this_00->field_224) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentTime > timestamp + m_keepAliveTime",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      112, (char*)0);
        }
        param_2->end();
        RemoveDyingItemTimestamp(this_00);
    }

    // 0x10087b030, 160 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::RemoveDyingItemTimestamp(render::TextureCube const*)
    void
    jag::KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>,
                                   eastl::allocator>>::RemoveDyingItemTimestamp(TextureCube* param_1) {
        hashtable_iterator_base* extraout_RDX;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[8];
        eastl local_20[8];
        undefined8 local_18;

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&param_1->field_160);
        eastl::rbtree<render::TextureCube_const*, eastl::pair<render::TextureCube_const* const, float const>,
                      eastl::less<render::TextureCube_const*>, eastl::allocator,
                      eastl::use_first<eastl::pair<render::TextureCube_const* const, float const>>, true,
                      true>::find((TextureCube**)local_20);
        local_18 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        if (eastl::operator!=(local_20, (hashtable_iterator_base*)&local_18, extraout_RDX)) {
            new (&local_30) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_20);
            eastl::rbtree<render::TextureCube_const*, eastl::pair<render::TextureCube_const* const, float const>,
                          eastl::less<render::TextureCube_const*>, eastl::allocator,
                          eastl::use_first<eastl::pair<render::TextureCube_const* const, float const>>, true,
                          true>::erase(&local_18, &param_1->field_112, local_30);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x10087bd40, 96 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)::{lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&)#1}::operator()(unsigned long long const&, shared_ptr<graphics::TextureData> const&) const
    /* KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long
   long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
   eastl::allocator> >::Update(float)::{lambda(unsigned long long const&,
   shared_ptr<graphics::TextureData> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(unsigned long
   long const&, shared_ptr<graphics::TextureData> const&) const */

    undefined8 jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                              eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) #1
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<graphics::TextureData> const___1_* this,
                 ulonglong * param_1, shared_ptr * param_2)

    {
        KeepAliveCache<unsigned long long, graphics::TextureData,
                       eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                  eastl::less<unsigned long long>, eastl::allocator>>* this_00;
        int iVar1;
        TextureData* pTVar2;
        undefined8 uVar3;
        float fVar4;

        this_00 = *(KeepAliveCache<unsigned long long, graphics::TextureData,
                                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                              eastl::less<unsigned long long>, eastl::allocator>>**)this;
        iVar1 = param_2->use_count();
        if (iVar1 == 1) {
            pTVar2 = (TextureData*)param_2->end();
            fVar4 = (float)GetDyingItemTimestamp(this_00, pTVar2, **(float**)(this + 8));
            uVar3 = CONCAT71((int7)((ulong) * (float**)(this + 8) >> 8),
                             fVar4 + *(float*)(this_00 + 224) < **(float**)(this + 8));
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x10087bda0, 208 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::GetDyingItemTimestamp(graphics::TextureData const*, float)
    undefined4 jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                              eastl::less<unsigned long long>, eastl::allocator>>::
        GetDyingItemTimestamp(KeepAliveCache<unsigned long long, graphics::TextureData,
                                             eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                                        eastl::less<unsigned long long>, eastl::allocator>>* this,
                              TextureData* param_1, float param_2) {
        long lVar1;
        hashtable_iterator_base* extraout_RDX;
        pair local_50[16];
        undefined8 local_40[2];
        TextureCube* local_30;
        scoped_lock<std::mutex> local_28[8];
        float local_20;
        undefined4 local_1c;
        eastl local_18[8];

        local_30 = (TextureCube*)param_1;
        local_20 = param_2;
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)(this + 160));
        eastl::rbtree<graphics::TextureData_const*, eastl::pair<graphics::TextureData_const* const, float const>,
                      eastl::less<graphics::TextureData_const*>, eastl::allocator,
                      eastl::use_first<eastl::pair<graphics::TextureData_const* const, float const>>, true,
                      true>::find((TextureData**)local_18);
        local_40[0] =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        if (eastl::operator==(local_18, (hashtable_iterator_base*)local_40, extraout_RDX)) {
            eastl::pair<render::TextureCube_const*, float const>::pair<render::TextureCube_const*&, float&, void>(
                (pair<render::TextureCube_const*, float const>*)local_40, &local_30, &local_20);
            eastl::rbtree<graphics::TextureData_const*, eastl::pair<graphics::TextureData_const* const, float const>,
                          eastl::less<graphics::TextureData_const*>, eastl::allocator,
                          eastl::use_first<eastl::pair<graphics::TextureData_const* const, float const>>, true,
                          true>::insert<eastl::pair<graphics::TextureData_const*, float const>&, void>(local_50);
            eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator=(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_18,
                (rbtree_iterator*)local_50);
        }
        lVar1 = eastl::rbtree_iterator<
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
            eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
        operator*((rbtree_iterator<
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                   eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                      local_18);
        local_1c = *(undefined4*)(lVar1 + 8);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
        return local_1c;
    }

    // 0x10087cc60, 128 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::Update(float)::{lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&)#2}::operator()(unsigned long long const&, shared_ptr<graphics::TextureData> const&) const
    /* KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long
   long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
   eastl::allocator> >::Update(float)::{lambda(unsigned long long const&,
   shared_ptr<graphics::TextureData> const&)#2}::TEMPNAMEPLACEHOLDERVALUE(unsigned long
   long const&, shared_ptr<graphics::TextureData> const&) const */

    void jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                             eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) #2
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<graphics::TextureData> const___2_* this,
                 ulonglong * param_1, shared_ptr * param_2)

    {
        TextureData* this_00;
        TextureData* pTVar1;
        float fVar2;

        this_00 = *(TextureData**)this;
        pTVar1 = (TextureData*)param_2->end();
        fVar2 = (float)GetDyingItemTimestamp(
            (KeepAliveCache<unsigned long long, graphics::TextureData,
                            eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                       eastl::less<unsigned long long>, eastl::allocator>>*)this_00,
            pTVar1, **(float**)(this + 8));
        if (**(float**)(this + 8) <= fVar2 + *(float*)&this_00[9].field_8) {
            /* WARNING: Subroutine does not return */
            LogAssert("currentTime > timestamp + m_keepAliveTime",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      112, (char*)0);
        }
        param_2->end();
        RemoveDyingItemTimestamp(this_00);
    }

    // 0x10087cce0, 160 bytes, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::RemoveDyingItemTimestamp(graphics::TextureData const*)
    void jag::KeepAliveCache<
        unsigned long long, graphics::TextureData,
        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>,
                   eastl::allocator>>::RemoveDyingItemTimestamp(TextureData* param_1) {
        hashtable_iterator_base* extraout_RDX;
        undefined8 local_30;
        scoped_lock<std::mutex> local_28[8];
        eastl local_20[8];
        undefined8 local_18;

        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&param_1[6].field_16);
        eastl::rbtree<graphics::TextureData_const*, eastl::pair<graphics::TextureData_const* const, float const>,
                      eastl::less<graphics::TextureData_const*>, eastl::allocator,
                      eastl::use_first<eastl::pair<graphics::TextureData_const* const, float const>>, true,
                      true>::find((TextureData**)local_20);
        local_18 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        if (eastl::operator!=(local_20, (hashtable_iterator_base*)&local_18, extraout_RDX)) {
            new (&local_30) eastl::ListIterator<shared_ptr<oldscape::rs2lib::worldmap::MapElement>,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const*,
                                                shared_ptr<oldscape::rs2lib::worldmap::MapElement> const&>(local_20);
            eastl::rbtree<render::TextureCube_const*, eastl::pair<render::TextureCube_const* const, float const>,
                          eastl::less<render::TextureCube_const*>, eastl::allocator,
                          eastl::use_first<eastl::pair<render::TextureCube_const* const, float const>>, true,
                          true>::erase(&local_18, &param_1[4].field_16, local_30);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x10098e420, 16 bytes, complete-object constructor, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::KeepAliveCache(eastl::string const&, unsigned long, float): jumps straight to the base-object constructor

    // 0x10098e430, 16 bytes, complete-object constructor, inline, placed by class name
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::KeepAliveCache(eastl::string const&, unsigned long, float): jumps straight to the base-object constructor

    // 0x10098e440, 16 bytes, complete-object constructor, inline, placed by class name
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::KeepAliveCache(eastl::string const&, unsigned long, float): jumps straight to the base-object constructor

    // 0x10098e470, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::~KeepAliveCache(): jumps straight to the base-object destructor

    // 0x10098e480, 160 bytes, base-object constructor, inline, placed by class name and debug map
    // KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>, eastl::less<unsigned long long>, eastl::allocator> >::KeepAliveCache(eastl::string const&, unsigned long, float)
    void jag::KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        KeepAliveCache(KeepAliveCache<unsigned long long, render::Texture,
                                      eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                                 eastl::less<unsigned long long>, eastl::allocator>>* this,
                       basic_string* param_1, ulong param_2, float param_3) {
        allocator local_38[12];

        new (this) ResourceList<unsigned long long, render::Texture,
                                eastl::map<unsigned long long, shared_ptr<render::Texture>,
                                           eastl::less<unsigned long long>, eastl::allocator>>((uint)param_2);
        eastl::allocator::allocator(local_38, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 112));
        new ((this + 160)) std::mutex();
        *(float*)(this + 224) = param_3;
        new ((this + 232)) eastl::string();
    }

    // 0x10098e5d0, 160 bytes, base-object constructor, inline, placed by class name and debug map
    // KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator> >::KeepAliveCache(eastl::string const&, unsigned long, float)
    void jag::KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        KeepAliveCache(KeepAliveCache<unsigned long long, render::TextureCube,
                                      eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                                 eastl::less<unsigned long long>, eastl::allocator>>* this,
                       basic_string* param_1, ulong param_2, float param_3) {
        allocator local_38[12];

        new (this) ResourceList<unsigned long long, render::TextureCube,
                                eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                           eastl::less<unsigned long long>, eastl::allocator>>((uint)param_2);
        eastl::allocator::allocator(local_38, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 112));
        new ((this + 160)) std::mutex();
        *(float*)(this + 224) = param_3;
        new ((this + 232)) eastl::string();
    }

    // 0x10098e6e0, 160 bytes, base-object constructor, inline, placed by class name and debug map
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::KeepAliveCache(eastl::string const&, unsigned long, float)
    void jag::KeepAliveCache<unsigned long long, graphics::TextureData,
                             eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        KeepAliveCache(KeepAliveCache<unsigned long long, graphics::TextureData,
                                      eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                                 eastl::less<unsigned long long>, eastl::allocator>>* this,
                       basic_string* param_1, ulong param_2, float param_3) {
        allocator local_38[12];

        new (this) ResourceList<unsigned long long, graphics::TextureData,
                                eastl::map<unsigned long long, shared_ptr<graphics::TextureData>,
                                           eastl::less<unsigned long long>, eastl::allocator>>((uint)param_2);
        eastl::allocator::allocator(local_38, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)(this + 112));
        new ((this + 160)) std::mutex();
        *(float*)(this + 224) = param_3;
        new ((this + 232)) eastl::string();
    }

    // 0x10098e9e0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // KeepAliveCache<unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<graphics::TextureData>, eastl::less<unsigned long long>, eastl::allocator> >::~KeepAliveCache()
    /* KeepAliveCache<unsigned long long, render::TextureCube, eastl::map<unsigned long long,
   shared_ptr<render::TextureCube>, eastl::less<unsigned long long>, eastl::allocator>
   >::~KeepAliveCache() */

    void jag::KeepAliveCache<unsigned long long, render::TextureCube,
                             eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                        eastl::less<unsigned long long>, eastl::allocator>>::
        ~KeepAliveCache(KeepAliveCache<unsigned long long, render::TextureCube,
                                       eastl::map<unsigned long long, shared_ptr<render::TextureCube>,
                                                  eastl::less<unsigned long long>, eastl::allocator>>* this) {
        ((this + 232))->~basic_string();
        ((this + 160))->~mutex();
        ((this + 112))->~map();
        ~ResourceList();
    }

} // namespace jag

namespace jag::graphics {
    class GuardedTextureAtlas {
    public:
        GuardedTextureAtlas();
        ~GuardedTextureAtlas();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x10098e8f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GuardedTextureAtlas::GuardedTextureAtlas(): jumps straight to the base-object constructor

    // 0x10098e900, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GuardedTextureAtlas::~GuardedTextureAtlas(): jumps straight to the base-object destructor

    // 0x10098e910, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GuardedTextureAtlas::GuardedTextureAtlas()
    void GuardedTextureAtlas::GuardedTextureAtlas() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16) std::recursive_mutex();
    }

    // 0x10098e940, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GuardedTextureAtlas::~GuardedTextureAtlas()
    void GuardedTextureAtlas::~GuardedTextureAtlas() {
        (&field_16)->~recursive_mutex();
        ~shared_ptr();
    }

} // namespace jag::graphics
