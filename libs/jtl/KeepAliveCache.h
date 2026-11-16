// libs/jtl/KeepAliveCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 3 instantiations, e.g. <unsigned long long, graphics::TextureData, eastl::map<unsigned long long, shared_ptr<jag:, <unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<rende, <unsigned long long, render::TextureCube, eastl::map<unsigned long long, shared_ptr<r
    class KeepAliveCache {
    public:
        void clear();
        bool Update(float arg1);
        auto Find(const unsigned long long& arg1);
        void Insert(const unsigned long long& arg1, const shared_ptr<render::Texture>& texture);
        void Insert(const unsigned long long& arg1, const shared_ptr<render::TextureCube>& textureCube);
        void Insert(const unsigned long long& arg1, const shared_ptr<graphics::TextureData>& textureData);
        void size() const;
        uint32_t GetDyingItemTimestamp(const render::Texture* texture, float arg2);
        void RemoveDyingItemTimestamp(const render::Texture* texture);
        uint32_t GetDyingItemTimestamp(const render::TextureCube* textureCube, float arg2);
        void RemoveDyingItemTimestamp(const render::TextureCube* textureCube);
        uint32_t GetDyingItemTimestamp(const graphics::TextureData* textureData, float arg2);
        void RemoveDyingItemTimestamp(const graphics::TextureData* textureData);
        KeepAliveCache(const eastl::string& str, unsigned long arg2, float arg3);
        ~KeepAliveCache();
    };

    // 0x1008601b0
    void KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>>>::clear() {
        clear();
        ((this + 112))->clear();
    }

    // 0x1008601e0
    void KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::clear() {
        clear();
        ((this + 112))->clear();
    }

    // 0x100860360
    bool KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>>>::Update(float arg1) {
        function<void(unsigned long long const&, shared_ptr<render::Texture> const&)> local_88[48];
        function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)> local_58[48];
        long local_28;

        long lVar1 = size();
        std::function<bool(unsigned long long const&, shared_ptr<render::Texture> const&)>::function<
            KeepAliveCache<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<render::Texture> const&) _1_,
            void>(local_58, (_lambda_unsigned_long_long_const___jag__shared_ptr<render::Texture> _const___1_*)this);
        std::function<void(unsigned long long const&, shared_ptr<render::Texture> const&)>::function<
            KeepAliveCache<unsigned long long, render::Texture,
                           eastl::map<unsigned long long, shared_ptr<render::Texture>>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<render::Texture> const&) _2_,
            void>(local_88, (_lambda_unsigned_long_long_const___jag__shared_ptr<render::Texture> _const___2_*)this);
        GarbageCollect(*local_58, *local_88);
        long lVar2 = size();
        return lVar2 != lVar1;
    }

    // 0x100860430
    bool KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::Update(float arg1) {
        function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)> local_88[48];
        function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)> local_58[48];
        long local_28;

        long lVar1 = size(this);
        std::function<bool(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::function<
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) _1_,
            void>(local_58, (_lambda_unsigned_long_long_const___jag__shared_ptr<render::TextureCube> _const___1_*)this);
        std::function<void(unsigned long long const&, shared_ptr<render::TextureCube> const&)>::function<
            KeepAliveCache<unsigned long long, render::TextureCube,
                           eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) _2_,
            void>(local_88, (_lambda_unsigned_long_long_const___jag__shared_ptr<render::TextureCube> _const___2_*)this);
        GarbageCollect(*local_58, *local_88);
        long lVar2 = size(this);
        return lVar2 != lVar1;
    }

    // 0x100860500
    bool KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::Update(float arg1) {
        function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> local_88[48];
        function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)> local_58[48];
        long local_28;

        long lVar1 = size();
        std::function<bool(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::function<
            KeepAliveCache<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) _1_,
            void>(local_58,
                  (_lambda_unsigned_long_long_const___jag__shared_ptr<graphics::TextureData> _const___1_*)this);
        std::function<void(unsigned long long const&, shared_ptr<graphics::TextureData> const&)>::function<
            KeepAliveCache<unsigned long long, graphics::TextureData,
                           eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::Update(float)::
                _lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) _2_,
            void>(local_88,
                  (_lambda_unsigned_long_long_const___jag__shared_ptr<graphics::TextureData> _const___2_*)this);
        GarbageCollect(*local_58, *local_88);
        long lVar2 = size();
        return lVar2 != lVar1;
    }

    // 0x100861820
    auto
    KeepAliveCache<unsigned long long, render::Texture,
                   eastl::map<unsigned long long, shared_ptr<render::Texture>>>::Find(const unsigned long long& arg1) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Texture* texture;

        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)FindResource(arg1);
        if (*midiPlayerMainThread != nullptr) {
            texture = (Texture*)midiPlayerMainThread->end();
            RemoveDyingItemTimestamp(this, texture);
        }
        return auto(midiPlayerMainThread);
    }

    // 0x100861e10
    auto KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::Find(const unsigned long long&
                                                                                                   arg1) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        TextureCube* textureCube;

        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)FindResource(arg1);
        if (*midiPlayerMainThread != nullptr) {
            textureCube = (TextureCube*)midiPlayerMainThread->end();
            RemoveDyingItemTimestamp(this, textureCube);
        }
        return auto(midiPlayerMainThread);
    }

    // 0x100861ee0
    auto
    KeepAliveCache<unsigned long long, graphics::TextureData,
                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::Find(const unsigned long long&
                                                                                                arg1) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        TextureData* textureData;

        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)FindResource(arg1);
        if (*midiPlayerMainThread != nullptr) {
            textureData = (TextureData*)midiPlayerMainThread->end();
            RemoveDyingItemTimestamp(this, textureData);
        }
        return auto(midiPlayerMainThread);
    }

    // 0x100877690
    void KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>>>::size() const {
        size();
    }

    // 0x100878300
    uint64_t KeepAliveCache<unsigned long long, render::Texture,
                            eastl::map<unsigned long long, shared_ptr<render::Texture>>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::Texture> const&) #1
    }
    ::operator()(const unsigned long long& arg1, const shared_ptr<render::Texture>& texture) const {
        Texture* texture_00;
        uint64_t uVar2;
        float fVar3;

        KeepAliveCache<unsigned long long, render::Texture,
                       eastl::map<unsigned long long, shared_ptr<render::Texture>>>* this_00 =
            *(KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>>>**)this;
        if (texture.use_count() == 1) {
            texture_00 = (Texture*)texture.end();
            fVar3 = (float)GetDyingItemTimestamp(this_00, texture_00, **(float**)(this + 8));
            uVar2 = (((uint64_t)((int64_t)((unsigned long)*(float**)(this + 8) >> 8)) << 8) |
                     (uint8_t)(fVar3 + *(float*)(this_00 + 224) < **(float**)(this + 8)));
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x100878360
    uint32_t
    KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        GetDyingItemTimestamp(const render::Texture* texture, float arg2) {
        uint64_t local_40[2];

        scoped_lock<std::mutex> local_28(*((this + 160)));
        rbtree<render::Texture const*, eastl::pair<render::Texture const* const, float const>,
               eastl::less<render::Texture const*>, eastl::allocator,
               eastl::use_first<eastl::pair<render::Texture const* const, float const>>, true, true>* this_00 =
            (rbtree<render::Texture const*, eastl::pair<render::Texture const* const, float const>,
                    eastl::less<render::Texture const*>, eastl::allocator,
                    eastl::use_first<eastl::pair<render::Texture const* const, float const>>, true, true>*)(this + 112);
        auto local_18 = this_00->find(texture);
        local_40[0] = this_00->end();
        if (local_18 == *local_40 != '\0') {
            local_40->pair<render::TextureCube const*&, float&, void>(texture, arg2);
            local_18 = this_00->insert<eastl::pair<render::Texture const*, float const>&, void>(*local_40);
        }
        long lVar2 = *local_18;
        return local_1c = *(uint32_t*)(lVar2 + 8);
        return local_1c;
    }

    // 0x1008792a0
    void KeepAliveCache<unsigned long long, render::Texture,
                        eastl::map<unsigned long long, shared_ptr<render::Texture>>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::Texture> const&) #2
    }
    ::operator()(const unsigned long long& arg1, const shared_ptr<render::Texture>& texture) const {
        KeepAliveCache<unsigned long long, render::Texture,
                       eastl::map<unsigned long long, shared_ptr<render::Texture>>>* this_00 =
            *(KeepAliveCache<unsigned long long, render::Texture,
                             eastl::map<unsigned long long, shared_ptr<render::Texture>>>**)this;
        auto pTVar1 = texture.end();
        float fVar2 = (float)GetDyingItemTimestamp(this_00, pTVar1, **(float**)(this + 8));
        if (**(float**)(this + 8) <= fVar2 + *(float*)(this_00 + 224)) {
            LogAssert("currentTime > timestamp + m_keepAliveTime",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      112, nullptr);
        }
        pTVar1 = (Texture*)texture.end();
        RemoveDyingItemTimestamp(this_00, pTVar1);
    }

    // 0x100879320
    void
    KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        RemoveDyingItemTimestamp(const render::Texture* texture) {
        rbtree_iterator<eastl::pair<render::Texture const * _const, float const>,
                        eastl::pair<render::Texture const * _const, float const> const*,
                        eastl::pair<render::Texture const * _const, float const> const&>* local_30;

        scoped_lock<std::mutex> local_28(*((this + 160)));
        rbtree<render::Texture const*, eastl::pair<render::Texture const* const, float const>,
               eastl::less<render::Texture const*>, eastl::allocator,
               eastl::use_first<eastl::pair<render::Texture const* const, float const>>, true, true>* this_00 =
            (rbtree<render::Texture const*, eastl::pair<render::Texture const* const, float const>,
                    eastl::less<render::Texture const*>, eastl::allocator,
                    eastl::use_first<eastl::pair<render::Texture const* const, float const>>, true, true>*)(this + 112);
        auto local_20 = this_00->find(texture);
        ReturnValue local_18 = (ReturnValue)this_00->end();
        if (local_20 != local_18 != '\0') {
            new (&local_30) eastl::ListIterator(&local_20);
            local_18 = this_00->erase(local_30);
        }
    }

    // 0x10087a090
    uint64_t KeepAliveCache<unsigned long long, render::TextureCube,
                            eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) #1
    }
    ::operator()(const unsigned long long& float, const shared_ptr<render::TextureCube>& arg2) const {
        lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) #1
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<render::TextureCube> const___1_* this,
                 unsigned long long* arg1, shared_ptr<render::TextureCube>* textureCube) {
        KeepAliveCache<unsigned long long, render::TextureCube,
                       eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>* this_00;
        int iVar1;
        TextureCube* textureCube_00;
        uint64_t uVar2;
        float fVar3;

        this_00 = *(KeepAliveCache<unsigned long long, render::TextureCube,
                                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>**)this;
        iVar1 = textureCube->use_count();
        if (iVar1 == 1) {
            textureCube_00 = (TextureCube*)textureCube->end();
            fVar3 = (float)GetDyingItemTimestamp(this_00, textureCube_00, **(float**)(this + 8));
            uVar2 = (((uint64_t)((int64_t)((unsigned long)*(float**)(this + 8) >> 8)) << 8) |
                     (uint8_t)(fVar3 + *(float*)(this_00 + 224) < **(float**)(this + 8)));
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10087a0f0
    uint32_t KeepAliveCache<unsigned long long, render::TextureCube,
                            eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::
        GetDyingItemTimestamp(const render::TextureCube* textureCube, float arg2) {
        uint64_t local_40[2];

        scoped_lock<std::mutex> local_28(*((this + 160)));
        rbtree<render::TextureCube const*, eastl::pair<render::TextureCube const* const, float const>,
               eastl::less<render::TextureCube const*>, eastl::allocator,
               eastl::use_first<eastl::pair<render::TextureCube const* const, float const>>, true, true>* this_00 =
            (rbtree<render::TextureCube const*, eastl::pair<render::TextureCube const* const, float const>,
                    eastl::less<render::TextureCube const*>, eastl::allocator,
                    eastl::use_first<eastl::pair<render::TextureCube const* const, float const>>, true, true>*)(this +
                                                                                                                112);
        auto local_18 = this_00->find(textureCube);
        local_40[0] = this_00->end();
        if (local_18 == *local_40 != '\0') {
            local_40->pair<render::TextureCube const*&, float&, void>(textureCube, arg2);
            local_18 = this_00->insert<eastl::pair<render::TextureCube const*, float const>&, void>(*local_40);
        }
        long lVar2 = *local_18;
        return local_1c = *(uint32_t*)(lVar2 + 8);
        return local_1c;
    }

    // 0x10087afb0
    void KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) #2
    }
    ::operator()(const unsigned long long& float, const shared_ptr<render::TextureCube>& arg2) const {
        lambda(unsigned long long const&, shared_ptr<render::TextureCube> const&) #2
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<render::TextureCube> const___2_* this,
                 unsigned long long* arg1, shared_ptr<render::TextureCube>* textureCube) {
        KeepAliveCache<unsigned long long, render::TextureCube,
                       eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>* this_00;
        TextureCube* pTVar1;
        float fVar2;

        this_00 = *(KeepAliveCache<unsigned long long, render::TextureCube,
                                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>**)this;
        pTVar1 = (TextureCube*)textureCube->end();
        fVar2 = (float)GetDyingItemTimestamp(this_00, pTVar1, **(float**)(this + 8));
        if (**(float**)(this + 8) <= fVar2 + *(float*)(this_00 + 224)) {
            LogAssert("currentTime > timestamp + m_keepAliveTime",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      112, nullptr);
        }
        pTVar1 = (TextureCube*)textureCube->end();
        RemoveDyingItemTimestamp(this_00, pTVar1);
        return;
    }

    // 0x10087b030
    void KeepAliveCache<unsigned long long, render::TextureCube,
                        eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::
        RemoveDyingItemTimestamp(const render::TextureCube* textureCube) {
        rbtree_iterator<eastl::pair<render::Texture const * _const, float const>,
                        eastl::pair<render::Texture const * _const, float const> const*,
                        eastl::pair<render::Texture const * _const, float const> const&>* local_30;

        scoped_lock<std::mutex> local_28(*((this + 160)));
        rbtree<render::TextureCube const*, eastl::pair<render::TextureCube const* const, float const>,
               eastl::less<render::TextureCube const*>, eastl::allocator,
               eastl::use_first<eastl::pair<render::TextureCube const* const, float const>>, true, true>* this_00 =
            (rbtree<render::TextureCube const*, eastl::pair<render::TextureCube const* const, float const>,
                    eastl::less<render::TextureCube const*>, eastl::allocator,
                    eastl::use_first<eastl::pair<render::TextureCube const* const, float const>>, true, true>*)(this +
                                                                                                                112);
        auto local_20 = this_00->find(textureCube);
        ReturnValue local_18 = (ReturnValue)this_00->end();
        if (local_20 != local_18 != '\0') {
            new (&local_30) eastl::ListIterator(&local_20);
            local_18 = this_00->erase(local_30);
        }
    }

    // 0x10087bd40
    uint64_t KeepAliveCache<unsigned long long, graphics::TextureData,
                            eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) #1
    }
    ::operator()(const unsigned long long& float, const shared_ptr<graphics::TextureData>& arg2) const {
        lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) #1
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<graphics::TextureData> const___1_* this,
                 unsigned long long* arg1, shared_ptr<graphics::TextureData>* textureData) {
        KeepAliveCache<unsigned long long, graphics::TextureData,
                       eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>* this_00;
        int iVar1;
        TextureData* textureData_00;
        uint64_t uVar2;
        float fVar3;

        this_00 = *(KeepAliveCache<unsigned long long, graphics::TextureData,
                                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>**)this;
        iVar1 = textureData->use_count();
        if (iVar1 == 1) {
            textureData_00 = (TextureData*)textureData->end();
            fVar3 = (float)GetDyingItemTimestamp(this_00, textureData_00, **(float**)(this + 8));
            uVar2 = (((uint64_t)((int64_t)((unsigned long)*(float**)(this + 8) >> 8)) << 8) |
                     (uint8_t)(fVar3 + *(float*)(this_00 + 224) < **(float**)(this + 8)));
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10087bda0
    uint32_t KeepAliveCache<unsigned long long, graphics::TextureData,
                            eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::
        GetDyingItemTimestamp(const graphics::TextureData* textureData, float arg2) {
        uint64_t local_40[2];

        scoped_lock<std::mutex> local_28(*((this + 160)));
        rbtree<graphics::TextureData const*, eastl::pair<graphics::TextureData const* const, float const>,
               eastl::less<graphics::TextureData const*>, eastl::allocator,
               eastl::use_first<eastl::pair<graphics::TextureData const* const, float const>>, true, true>* this_00 =
            (rbtree<graphics::TextureData const*, eastl::pair<graphics::TextureData const* const, float const>,
                    eastl::less<graphics::TextureData const*>, eastl::allocator,
                    eastl::use_first<eastl::pair<graphics::TextureData const* const, float const>>, true, true>*)(this +
                                                                                                                  112);
        auto local_18 = this_00->find(textureData);
        local_40[0] = this_00->end();
        if (local_18 == *local_40 != '\0') {
            local_40->pair<render::TextureCube const*&, float&, void>(textureData, arg2);
            local_18 = this_00->insert<eastl::pair<graphics::TextureData const*, float const>&, void>(*local_40);
        }
        long lVar2 = *local_18;
        return local_1c = *(uint32_t*)(lVar2 + 8);
        return local_1c;
    }

    // 0x10087cc60
    void KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::Update(float)::{
        lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) #2
    }
    ::operator()(const unsigned long long& float, const shared_ptr<graphics::TextureData>& arg2) const {
        lambda(unsigned long long const&, shared_ptr<graphics::TextureData> const&) #2
    }
    ::operator()(_lambda_unsigned_long_long_const__jag__shared_ptr<graphics::TextureData> const___2_* this,
                 unsigned long long* arg1, shared_ptr<graphics::TextureData>* textureData) {
        KeepAliveCache<unsigned long long, graphics::TextureData,
                       eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>* this_00;
        TextureData* pTVar1;
        float fVar2;

        this_00 = *(KeepAliveCache<unsigned long long, graphics::TextureData,
                                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>**)this;
        pTVar1 = (TextureData*)textureData->end();
        fVar2 = (float)GetDyingItemTimestamp(this_00, pTVar1, **(float**)(this + 8));
        if (**(float**)(this + 8) <= fVar2 + *(float*)(this_00 + 224)) {
            LogAssert("currentTime > timestamp + m_keepAliveTime",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/KeepAliveCache.inl",
                      112, nullptr);
        }
        pTVar1 = (TextureData*)textureData->end();
        RemoveDyingItemTimestamp(this_00, pTVar1);
        return;
    }

    // 0x10087cce0
    void KeepAliveCache<unsigned long long, graphics::TextureData,
                        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::
        RemoveDyingItemTimestamp(const graphics::TextureData* textureData) {
        rbtree_iterator<eastl::pair<render::Texture const * _const, float const>,
                        eastl::pair<render::Texture const * _const, float const> const*,
                        eastl::pair<render::Texture const * _const, float const> const&>* local_30;

        scoped_lock<std::mutex> local_28(*((this + 160)));
        rbtree<graphics::TextureData const*, eastl::pair<graphics::TextureData const* const, float const>,
               eastl::less<graphics::TextureData const*>, eastl::allocator,
               eastl::use_first<eastl::pair<graphics::TextureData const* const, float const>>, true, true>* this_00 =
            (rbtree<graphics::TextureData const*, eastl::pair<graphics::TextureData const* const, float const>,
                    eastl::less<graphics::TextureData const*>, eastl::allocator,
                    eastl::use_first<eastl::pair<graphics::TextureData const* const, float const>>, true, true>*)(this +
                                                                                                                  112);
        auto local_20 = this_00->find(textureData);
        ReturnValue local_18 = (ReturnValue)this_00->end();
        if (local_20 != local_18 != '\0') {
            new (&local_30) eastl::ListIterator(&local_20);
            local_18 = this_00->erase(local_30);
        }
    }

    // 0x10098e480
    KeepAliveCache<unsigned long long, render::Texture, eastl::map<unsigned long long, shared_ptr<render::Texture>>>::
        KeepAliveCache(const eastl::string& str, unsigned long arg2, float arg3)
        : ResourceList<unsigned long long, render::Texture,
                       eastl::map<unsigned long long, shared_ptr<render::Texture>>>((unsigned int)arg2) {

        new ((this + 112)) eastl::map(local_38);
        new ((this + 160)) std::mutex();
        *(float*)(this + 224) = arg3;
        new ((this + 232)) eastl::string();
    }

    // 0x10098e5d0
    KeepAliveCache<unsigned long long, render::TextureCube,
                   eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>::KeepAliveCache(const eastl::string&
                                                                                                        str,
                                                                                                    unsigned long arg2,
                                                                                                    float arg3)
        : ResourceList<unsigned long long, render::TextureCube,
                       eastl::map<unsigned long long, shared_ptr<render::TextureCube>>>((unsigned int)arg2) {

        new ((this + 112)) eastl::map(local_38);
        new ((this + 160)) std::mutex();
        *(float*)(this + 224) = arg3;
        new ((this + 232)) eastl::string();
    }

    // 0x10098e6e0
    KeepAliveCache<
        unsigned long long, graphics::TextureData,
        eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::KeepAliveCache(const eastl::string& str,
                                                                                           unsigned long arg2,
                                                                                           float arg3)
        : ResourceList<unsigned long long, graphics::TextureData,
                       eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>((unsigned int)arg2) {

        new ((this + 112)) eastl::map(local_38);
        new ((this + 160)) std::mutex();
        *(float*)(this + 224) = arg3;
        new ((this + 232)) eastl::string();
    }

    // 0x10098e9e0
    KeepAliveCache<unsigned long long, graphics::TextureData,
                   eastl::map<unsigned long long, shared_ptr<graphics::TextureData>>>::~KeepAliveCache() {
        ((this + 232))->~basic_string();
        ((this + 160))->~mutex();
        ((this + 112))->~map();
    }

} // namespace jag

namespace jag::graphics {
    class GuardedTextureAtlas {
    public:
        GuardedTextureAtlas();
        ~GuardedTextureAtlas();

        uint8_t _unknown_0[24];
    };

    // 0x10098e910
    GuardedTextureAtlas::GuardedTextureAtlas() : shared_ptr() {}

    // 0x10098e940
    GuardedTextureAtlas::~GuardedTextureAtlas() {
        (&field_16)->~recursive_mutex();
    }

} // namespace jag::graphics
